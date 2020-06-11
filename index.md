<!-- ![Anima](images/LogoAnima.png "Anima: library and python scripts for medical image processing") -->

<p align="justify"> 
Anima provides a set of software tools contributed by and coming from the research works from the <a href="https://team.inria.fr/empenn">Empenn research team</a>. It is a set of <a href="http://www.itk.org">ITK</a> / <a href="http://www.vtk.org">VTK</a> based libraries and multi-platform command line tools for medical image analysis. Among other tools, it contains software for image registration (linear and non linear block matching registration, EPI distortion correction), statistical analysis (group comparison, patient to group comparison), diffusion imaging (model estimation, tractography, etc.), quantitative MRI processing (quantitative relaxation times estimation, MR simulation), image denoising and filtering, and segmentation tools (Graph cut segmentation and multiple sclerosis lesion segmentation).
</p>

<p align="justify">
Anima core software tools are also the base for Anima scripts, a set of <a href="https://www.python.org/">python</a> scripts and additional data from the <a href="https://team.inria.fr/empenn">Empenn research team</a>, to perform complex preprocessing and core processing tasks on medical images such as diffusion imaging, atlasing, brain extraction, relaxometry.
</p>

# Download 

<p align="justify">Anima and Anims scripts are open-source and thus available on github. More information on how to get them and compile / configure them is available from the documentation.</p>

<ul>
{% for repository in site.github.public_repositories %}
{% if repository.name == "Anima-Public" %}
<li>Anima <a href="{{ repository.html_url }}">Github repository</a></li>
{% endif %}
{% if repository.name == "Anima-Scripts-Public" %}
<li>Anima scripts <a href="{{ repository.html_url }}">Github repository</a></li>
{% endif %}
{% if repository.name == "Anima-Scripts-Data-Public" %}
<li>Anima scripts data <a href="{{ repository.html_url }}">Github repository</a></li>
{% endif %}
</ul>

<p align="justify">
Anima and Anima scripts also come in several binary packages released from time to time.
</p>

{% assign release = site.github.latest_release %}
<p align="justify">
<strong>Latest Anima binary release</strong>: {{ release.name }} - <a href="{{ release.html_url }}">Release notes</a>
</p>
<ul>
{% for asset in release.assets %}
<li>
<a href="{{ asset.browser_download_url }}">{{ asset.name }}</a> - Download count: {{ asset.download_count }}
</li>
{% endfor %}
</ul>

<p align="justify">
<strong>Latest Anima scripts release</strong>: Anima scripts v2.2 - <a href="https://github.com/Inria-Visages/Anima-Scripts-Public/releases/tag/v2.2">Release notes</a>
</p>
<ul>
<li>
<a href="https://github.com/Inria-Visages/Anima-Scripts-Public/archive/v2.2.zip">Zip file</a>
</li>
</ul>

<p align="justify">
<strong>Latest Anima scripts data release</strong>: Anima scripts data v2.1 - <a href="https://github.com/Inria-Visages/Anima-Scripts-Data-Public/releases/tag/v2.1">Release notes</a>
</p>
<ul>
<li>
<a href="https://github.com/Inria-Visages/Anima-Scripts-Data-Public/archive/v2.1.zip">Zip file</a>
</li>
</ul>