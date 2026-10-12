// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
namespace RBX { class Sub { public: void reset(int a, int b); };
class Clump { char pad[8]; Sub s; char p2[0x14-9]; bool dirty; public: Sub* get(); void compute(Sub* s); };
Sub* Clump::get() { if (dirty) { s.reset(0, 0); compute(&s); } dirty = false; return &s; } }
