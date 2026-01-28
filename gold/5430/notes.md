https://www.acmicpc.net/problem/5430

Assumed that I need to be efficient since it looks simple but is a gold question.
Kept track of start and end indexes like iterators to keep track of the part we need to print out, instead of actually flipping and deleting which would've made it slow.

Wasted a bunch of time because you're supposed to print it after each case not at once at the end.

Also didn't convert the string to ints to speed things up since there's no point.

if (i != end)
current_result += ",";
current_result.append(nums[i]);

Nice way to put commas instead of removing at the end
