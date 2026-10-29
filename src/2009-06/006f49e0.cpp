// roc 2009-06 006f49e0  unit: RBX::HUMAN::GettingUp  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f49e0
//
// 006f49e0  d9442404             fld dword ptr [esp + 4]
// 006f49e4  d86104               fsub dword ptr [ecx + 4]
// 006f49e7  d809                 fmul dword ptr [ecx]
// 006f49e9  d84104               fadd dword ptr [ecx + 4]
// 006f49ec  d95104               fst dword ptr [ecx + 4]
// 006f49ef  c20400               ret 4
// copied from an identical function in another client (function ?update@Filter@RBX@@QAEMM@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
namespace RBX {
class Filter
{
    float alpha;
    float value;
public:
    float update(float input);
};

float Filter::update(float input)
{
    return value = (input - value) * alpha + value;
}
}