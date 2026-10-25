// from server: 100% by king_originala
// roc 2008-06 005639f0  unit: RBX::ContentProvider  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005639f0
//
// 005639f0  83ec08               sub esp, 8
// 005639f3  dd0588798200         fld qword ptr [0x827988]
// 005639f9  dd1424               fst qword ptr [esp]
// 005639fc  dc5c240c             fcomp qword ptr [esp + 0xc]
// 00563a00  dfe0                 fnstsw ax
// 00563a02  f6c441               test ah, 0x41
// 00563a05  8d0424               lea eax, [esp]
// 00563a08  7404                 je 0x563a0e
// 00563a0a  8d44240c             lea eax, [esp + 0xc]
// 00563a0e  dd00                 fld qword ptr [eax]
// 00563a10  dd1d40f69400         fstp qword ptr [0x94f640]
// 00563a16  83c408               add esp, 8
// 00563a19  c20800               ret 8

extern const double limit;
extern double result;

void __stdcall setValue(double value)
{
    const double bound = limit;
    const double* selected = bound > value ? &bound : &value;
    result = *selected;
}
