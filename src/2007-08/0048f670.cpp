// from server: 65% by colin
// roc 2007-08 0048f670  unit: RBX::Network::Player  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048f670
//
// 0048f670  8b442408             mov eax, dword ptr [esp + 8]
// 0048f674  83f802               cmp eax, 2
// 0048f677  7519                 jne 0x48f692
// 0048f679  56                   push esi
// 0048f67a  8b742408             mov esi, dword ptr [esp + 8]
// 0048f67e  56                   push esi
// 0048f67f  b990e28800           mov ecx, 0x88e290
// 0048f684  ff1508e77700         call dword ptr [0x77e708]
// 0048f68a  f6d8                 neg al
// 0048f68c  1bc0                 sbb eax, eax
// 0048f68e  23c6                 and eax, esi
// 0048f690  5e                   pop esi
// 0048f691  c3                   ret 
// 0048f692  8b542404             mov edx, dword ptr [esp + 4]
// 0048f696  c644240800           mov byte ptr [esp + 8], 0
// 0048f69b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048f69f  51                   push ecx
// 0048f6a0  50                   push eax
// 0048f6a1  52                   push edx
// 0048f6a2  e8a9f9ffff           call 0x48f050
// 0048f6a7  83c40c               add esp, 0xc
// 0048f6aa  c3                   ret 

struct type_info
{
    bool operator==(const type_info&) const;
};

extern type_info type_info_0088e290;
extern type_info* (__stdcall *ptr_0077e708)(const type_info&, const type_info&);

int __cdecl func_0048f050(int, int, char);

int __cdecl func_0048f670(int a, int b, int c)
{
    if (c == 2)
    {
        int v = a;
        if (ptr_0077e708(type_info_0088e290, *(type_info*)&b))
            return v;
        return 0;
    }
    char local = 0;
    return func_0048f050(a, c, local);
}
