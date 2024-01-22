# Hardest-string-manipulation-question
so the question is: "Given an integer k and a string s, find the length of the longest substring that contains at most k distinct characters."
For example, given s = “abcba” and k = 2, the longest substring with k distinct characters is “bcb”.
I solved this with this steps:
I created two loops that outer loop starts from beginning and goes to end of the string and inner loop starts from the outer loop's current character to the end
inner loop checks everytime if the new char is different then previous chars or not
if it's different then a variable called "currdiffs" is being incremented and  we check if currdiffs greater than the character limit that we got from the user
if it's not different than previous ones then  we check if the inner loop is at the end of the string if it is then  we check if the currlength is greater than maxlength(if currlength>maxlength then new maxlength=currlength)
if the inner loop isn't at the end then we increment currlength
