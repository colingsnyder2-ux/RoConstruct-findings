// from server: 100% by colin
// roc 2008-06 005757f0  unit: RBX::DataModel  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005757f0
//
// 005757f0  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 005757f6  dd80d8010000         fld qword ptr [eax + 0x1d8]
// 005757fc  dc80d0010000         fadd qword ptr [eax + 0x1d0]
// 00575802  dc80c8010000         fadd qword ptr [eax + 0x1c8]
// 00575808  d9e8                 fld1 
// 0057580a  d8b0c0010000         fdiv dword ptr [eax + 0x1c0]
// 00575810  dec9                 fmulp st(1)
// 00575812  c3                   ret 

// from server: 93% by atomic.potato
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
struct State {
    char padding[0x1c0];
    float divisor;
    char gap[4];
    double first;
    double second;
    double third;
};

struct S {
    char padding[0x20c];
    State* state;
    double f();
};

double S::f() {
    return (state->third + state->second + state->first) *
           (1.0 / state->divisor);
}
