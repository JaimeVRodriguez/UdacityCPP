/*
One way to stream a string is
to use an input string stream
object istringstream from the
<sstream> header.
Once an istringstream object has
been created, parts of the string
can be streamed and stored using
the "extraction operator": >>. The
extraction operator will read until
whitespace is reached or until the
stream fails. Execute the following
code to see how this works:

2.
The istringstream object can also
be used as a boolean to determine
if the last extraction operation
failed - this happens if there wasn't
any more of the string to stream,
for example. If the stream still has
more characters, you are able to
stream again. See the following code
for an example of using the istringstream this way:
*/



#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

int main ()
{
    string a("1 2 3");

    istringstream my_stream(a);

    int n;
    my_stream >> n;
    cout << n << "\n";



    string b("1 2 3");
    istringstream my_stream2(b);
    int n2;

    while (my_stream2) {
       my_stream2 >> n2;
       if (my_stream2) {
           cout << "That stream was successful: " << n2 << "\n";
       }
       else {
           cout << "That stream was NOT successful!" << "\n";
       }
    }



    string c("1,2,3");
    istringstream my_stream3(c);
    char ch;
    int n3;

    while (my_stream3 >> n3 >> ch) {
      cout << "That stream was successful:" << n3 << " " << ch << "\n";
    }
    cout << "The stream has failed." << "\n";
}
