// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX { class Players { public: bool check(int a, int b); };
class Plugin { char pad[4]; Players* players; public: int check(int a, int b); };
int Plugin::check(int a, int b) { return players->check(a, b) ? 1 : 0; } }
