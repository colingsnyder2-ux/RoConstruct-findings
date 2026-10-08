// from server: 100% by colin
// roc 2007-08 0067d150  unit: CXTPControls  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d150
//
// 0067d150  56                   push esi
// 0067d151  8bf1                 mov esi, ecx
// 0067d153  e838d4ffff           call 0x67a590
// 0067d158  6a01                 push 1
// 0067d15a  8bce                 mov ecx, esi
// 0067d15c  e85fffffff           call 0x67d0c0
// 0067d161  89463c               mov dword ptr [esi + 0x3c], eax
// 0067d164  5e                   pop esi
// 0067d165  c3                   ret 

struct CXTPControls
{
    char pad[0x3c];
    int field_3c;
    void sub_67a590();
    int sub_67d0c0(int);
    void func_67d150();
};

void CXTPControls::func_67d150()
{
    sub_67a590();
    field_3c = sub_67d0c0(1);
}
