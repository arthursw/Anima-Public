#pragma once

#include <itkImageToImageFilter.h>

namespace anima
{

template< class TImage>
class SimuBlochIRSE:public itk::ImageToImageFilter< TImage, TImage >
{
public:
    /** Standard class typedefs. */
    typedef SimuBlochIRSE Self;
    typedef itk::ImageToImageFilter <TImage, TImage> Superclass;
    typedef itk::SmartPointer <Self> Pointer;

    typedef typename Superclass::OutputImageRegionType OutputImageRegionType;

    /** Method for creation through the object factory. */
    itkNewMacro(Self)

    /** Run-time type information (and related methods). */
    itkTypeMacro(SimuBlochIRSE, ImageToImageFilter)

    itkSetMacro(TR, double)
    itkGetMacro(TR, double)

    itkSetMacro(TE, double)
    itkGetMacro(TE, double)

    itkSetMacro(TI, double)
    itkGetMacro(TI, double)

    /** T1 map */
    void SetInputT1(const TImage* T1);

    /** T2 map */
    void SetInputT2(const TImage* T2);

    /** M0 image / Rho map */
    void SetInputM0(const TImage* M0);

protected:
    SimuBlochIRSE();
    virtual ~SimuBlochIRSE(){}

    /** Does the real work. */
    virtual void DynamicThreadedGenerateData(const OutputImageRegionType &outputRegionForThread) ITK_OVERRIDE;

private:
    ITK_DISALLOW_COPY_AND_ASSIGN(SimuBlochIRSE);

    double m_TR;
    double m_TE;
    double m_TI;
};

} // end of namespace anima

#include "animaSimuBlochIR-SE.hxx"
