require 'digiusb'

spark = DigiUSB.sparks.first

loop do
  recv = spark.gets.strip
  puts "analog value: #{recv}"
end
