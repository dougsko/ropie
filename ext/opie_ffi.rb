#!/usr/bin/env ruby
#
#
# FFI version of opie wrapper.
# Needed to convert libopie.a to libopie.so to get this to load.
#
require 'rubygems'
require 'ffi'

module Ropie
    extend FFI::Library
    ffi_lib './libopie.so'
    
    attach_function 'opieetob', [:pointer, :string], :int
    attach_function 'opiebtoe', [:string, :pointer], :string
end

ptr1 = FFI::MemoryPointer.new(:pointer, 1)
ptr2 = FFI::MemoryPointer.new(:pointer, 1)
Ropie.opieetob(ptr1, "NASH AIR GAWK LO FISK OBOE")
#puts ptr
puts Ropie.opiebtoe('134543596', ptr1)
