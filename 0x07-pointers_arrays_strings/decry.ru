#!/usr/bin/ruby
require 'digest/md5'
?a.upto('zzz') + ?1.upto('999') { | string|
md5=Digest::MD5.hexdigest(string)
puts "Trying: #{string}"
if md5 == "e99a18c428cb38d5f260853678922e03"
   puts "nThe string is #{string}n"
   exit
end
}
