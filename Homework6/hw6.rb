puts "Enter a word to mutate: "
word = gets
original = word
word = word.gsub(/^[f]/, 'gh')
word = word.gsub(/^[F]/, 'gh')
word = word.gsub(/sh$/, 'ti')
word = word.gsub(/SH$/, 'ti')
word = word.gsub(/Sh$/, 'ti')
word = word.gsub(/sH$/, 'ti')
word = word.gsub(/(?!^)i(?!$)/, 'o')
word = word.gsub(/(?!^)I(?!$)/, 'o')
puts "Original Word: " + original
puts "Mutated Word:  " + word
