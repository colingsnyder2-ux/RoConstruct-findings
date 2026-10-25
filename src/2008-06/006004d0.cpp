// from server: 100% by king_originala
// roc 2008-06 006004d0  unit: RBX::VTool::?$BoundPropGetSet  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006004d0
//
// 006004d0  8b81c8010000         mov eax, dword ptr [ecx + 0x1c8]
// 006004d6  8d5001               lea edx, [eax + 1]
// 006004d9  81e201000080         and edx, 0x80000001
// 006004df  7905                 jns 0x6004e6
// 006004e1  4a                   dec edx
// 006004e2  83cafe               or edx, 0xfffffffe
// 006004e5  42                   inc edx
// 006004e6  8d440201             lea eax, [edx + eax + 1]
// 006004ea  50                   push eax
// 006004eb  e830ffffff           call 0x600420
// 006004f0  c3                   ret 

struct S {
    char padding[0x1c8];
    int value;

    int set(int);
    int next();
};

int S::next()
{
    return set(value + (value + 1) % 2 + 1);
}
