#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

void fastscan(int &number)
{
  bool negative = false;
  register int c;

  number = 0;

  c = getchar();
  if (c == '-')
  {
    negative = true;

    c = getchar();
  }

  for (; (c > 47 && c < 58); c = getchar())
    number = number * 10 + c - 48;

  if (negative)
    number *= -1;
}

int T, *n;  

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  bool competitive_mode = true;

  printf(competitive_mode ? "true" : "false");

  cin >> competitive_mode;

  system("pause");

  return 0;
}