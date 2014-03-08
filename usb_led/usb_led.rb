require 'digiusb'

spark = DigiUSB.sparks.first

led_stat = false

loop do
  puts led_stat
  spark.write( led_stat ? 'o' : 'x' )
  led_stat = !led_stat
  sleep 1
end
