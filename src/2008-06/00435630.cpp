#include <list>
#include <algorithm>

struct Text;
struct Parameter;

struct Visitor {
    void (__cdecl *function)(int*, Text*, Parameter*&);
    i