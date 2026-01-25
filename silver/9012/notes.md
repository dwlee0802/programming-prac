https://www.acmicpc.net/problem/9012

planning:
keep track of number of open ones and closed ones
at the end, the two number must be equal
number of closing ones can't be above open ones at all times
this will take O(n)
instead add 1 when opening and subtract 1 when closing.
True only if we stay above 0 all times and reach the end of the string.

Notes

- Stream manipulator std::cout << std::boolalpha changes the settings for cout
- one way to initialize vector: std::vector<int> v(count, value);
- << operator has higher precedence than ? :

Looking at other people's answers, I'm wondering if I should optimize to these programming tasks too or not.

Took like 25 minutes.
