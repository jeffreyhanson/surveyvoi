
<!--- README.md is generated from README.Rmd. Please edit that file -->
Survey Value of Information
===========================

[![lifecycle](https://img.shields.io/badge/Lifecycle-experimental-orange.svg)](https://www.tidyverse.org/lifecycle/#experimental)

TODO OVERVIEW TODO.

Installation
------------

The *surveyvoi R* package has several dependencies that must first be installed before you can install this package. Specifically, you will first need to install the [Gurobi optimization suite](http://www.gurobi.com/), [*gurobi R* package](https://www.gurobi.com/documentation/8.1/refman/r_api_overview.html), and Intel Math Kernel Library [(Intel MKL)](https://software.intel.com/en-us/mkl). For instructions on installing *Gurobi* software, please refer to [this installation guide](https://CRAN.R-project.org/package=prioritizr/vignettes/gurobi_installation.html). Please note that package is configured to assume that you have installed *Gurobi* version 9.0.1. If you have a different version of *Gurobi*, please edit the `gurobi90` compilation flag specified in the `PKG_LIBS` variable within the `src/Makevars` file. For instructions on installing the Intel Math Kernel Library, please refer to the following bash commands (based on a [blog post by Dirk Eddelbuettel](http://dirk.eddelbuettel.com/blog/2018/04/15/)):

``` bash
cd /tmp
wget https://apt.repos.intel.com/intel-gpg-keys/GPG-PUB-KEY-INTEL-SW-PRODUCTS-2019.PUB
sudo apt-key add GPG-PUB-KEY-INTEL-SW-PRODUCTS-2019.PUB
sudo sh -c 'echo deb https://apt.repos.intel.com/mkl all main > /etc/apt/sources.list.d/intel-mkl.list'
sudo apt-get update
sudo apt-get install install intel-mkl-64bit-2020.0-088
```

You will then need to add the following commands to your `~./bashrc` file:

    export MKLROOT="/opt/intel/mkl"
    export LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:${MKLROOT}/lib/intel64_lin"

Finally, after installing the dependencies, you can install the package with the following *R* commands.

``` r
if (!require(remotes))
  install.packages("remotes")
remotes::install_github("jeffreyhanson/surveyvoi")
```

Usage
-----

Just don't - it's still early in development and isn't ready yet.

Citation
--------

    Warning in citation("surveyvoi"): no date field in DESCRIPTION file of
    package 'surveyvoi'

    Warning in citation("surveyvoi"): could not determine year for 'surveyvoi'
    from package DESCRIPTION file


    To cite package 'surveyvoi' in publications use:

      Jeffrey O Hanson and Joseph Bennett (NA). surveyvoi: Survey
      Value of Information. R package version 0.0.1.
      https://github.com/jeffreyhanson/surveyvoi

    A BibTeX entry for LaTeX users is

      @Manual{,
        title = {surveyvoi: Survey Value of Information},
        author = {Jeffrey O Hanson and Joseph Bennett},
        note = {R package version 0.0.1},
        url = {https://github.com/jeffreyhanson/surveyvoi},
      }