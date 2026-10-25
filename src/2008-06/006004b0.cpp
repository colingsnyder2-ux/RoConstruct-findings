// from server: 100% by king_originala
// roc 2008-06 006004b0  unit: RBX::VTool::?$BoundPropGetSet  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006004b0
//
// 006004b0  8b81c8010000         mov eax, dword ptr [ecx + 0x1c8]
// 006004b6  8bd0                 mov edx, eax
// 006004b8  81e201000080         and edx, 0x80000001
// 006004be  7905                 jns 0x6004c5
// 006004c0  4a                   dec edx
// 006004c1  83cafe               or edx, 0xfffffffe
// 006004c4  42                   inc edx
// 006004c5  8d440201             lea eax, [edx + eax + 1]
// 006004c9  50                   push eax
// 006004ca  e851ffffff           call 0x600420
// 006004cf  c3                   ret 

struct S {
    char padding[0x1c8];
    int value;

    void f();
    void g(int);
};

void S::f()
{
    g(value + value % 2 + 1);
}
