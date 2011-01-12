require 'rubygems'
require 'mkmf'

dir_config(ENV['PWD'])

have_header('opie.h')
have_library('opie')

create_makefile('ropie')
