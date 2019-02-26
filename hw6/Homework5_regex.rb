##
#James Fox
#Homework 6
#CS3560
#02/25/2019
##

print "write stuff:"
tmp = gets

# Change 'f' to 'gh'
tmp = tmp.gsub(/^[f]/, 'gh')
tmp = tmp.gsub(/^[F]/, 'gh')

# Change 'sh' to 'ti'
tmp = tmp.gsub(/sh$/,'ti')
tmp = tmp.gsub(/SH$/, 'ti')

# Changes 'i' in middle of word to 'o'
tmp = tmp.gsub(/(?!^)i(?!$)/, 'o')
puts tmp

