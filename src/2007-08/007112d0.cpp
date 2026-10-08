// from server: 60% by colin
// roc 2007-08 007112d0  unit: CXTColorSelectorCtrl  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007112d0
//
// 007112d0  8b442404             mov eax, dword ptr [esp + 4]
// 007112d4  56                   push esi
// 007112d5  8bf1                 mov esi, ecx
// 007112d7  50                   push eax
// 007112d8  8d8e44010000         lea ecx, [esi + 0x144]
// 007112de  e81dfdffff           call 0x711000
// 007112e3  85c0                 test eax, eax
// 007112e5  740b                 je 0x7112f2
// 007112e7  8b4808               mov ecx, dword ptr [eax + 8]
// 007112ea  51                   push ecx
// 007112eb  8bce                 mov ecx, esi
// 007112ed  e8eefeffff           call 0x7111e0
// 007112f2  5e                   pop esi
// 007112f3  c20400               ret 4

struct CXTColorSelectorCtrl
{
    char pad[0x144];
    int field_144;
    int sub_711000(int);
    int sub_7111e0(int);
    int sub_7112d0(int);
};

int CXTColorSelectorCtrl::sub_7112d0(int a)
{
    int r = sub_711000(a);
    if (r != 0)
    {
        sub_7111e0(*(int*)(r + 8));
    }
    return r;
}
