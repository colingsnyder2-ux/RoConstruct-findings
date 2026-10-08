// from server: 76% by colin
// roc 2007-08 006921c0  unit: CXTPStatusBarPane  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006921c0
//
// 006921c0  51                   push ecx
// 006921c1  56                   push esi
// 006921c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006921c6  83c130               add ecx, 0x30
// 006921c9  51                   push ecx
// 006921ca  8bce                 mov ecx, esi
// 006921cc  c744240800000000     mov dword ptr [esp + 8], 0
// 006921d4  ff1574dd7700         call dword ptr [0x77dd74]
// 006921da  8bc6                 mov eax, esi
// 006921dc  5e                   pop esi
// 006921dd  59                   pop ecx
// 006921de  c20400               ret 4

struct CXTPStatusBarPane {
    char pad[0x30];
    int m_field30;
    CXTPStatusBarPane* sub_006921c0(CXTPStatusBarPane* other);
};

extern "C" int __stdcall sub_77dd74(int, int);

CXTPStatusBarPane* CXTPStatusBarPane::sub_006921c0(CXTPStatusBarPane* other)
{
    int local = 0;
    sub_77dd74((int)(this->pad + 0x30), (int)&local);
    return other;
}
