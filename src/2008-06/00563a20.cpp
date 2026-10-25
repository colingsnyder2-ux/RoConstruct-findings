// from server: 100% by colin
// roc 2008-06 00563a20  unit: RBX::ContentProvider  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563a20
//
// 00563a20  83ec08               sub esp, 8
// 00563a23  dd0588798200         fld qword ptr [0x827988]
// 00563a29  dd1424               fst qword ptr [esp]
// 00563a2c  dc5c240c             fcomp qword ptr [esp + 0xc]
// 00563a30  dfe0                 fnstsw ax
// 00563a32  f6c441               test ah, 0x41
// 00563a35  8d0424               lea eax, [esp]
// 00563a38  7404                 je 0x563a3e
// 00563a3a  8d44240c             lea eax, [esp + 0xc]
// 00563a3e  dd00                 fld qword ptr [eax]
// 00563a40  dd1d38f69400         fstp qword ptr [0x94f638]
// 00563a46  83c408               add esp, 8
// 00563a49  c20800               ret 8

extern const double limit;
extern double result;

void __stdcall setValue(double value)
{
    const double bound = limit;
    const double* selected = bound > value ? &bound : &value;
    result = *selected;
}
