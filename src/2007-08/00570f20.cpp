// from server: 75% by colin
// roc 2007-08 00570f20  unit: RBX::Reflection::ClassDescriptor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570f20
//
// 00570f20  8b442408             mov eax, dword ptr [esp + 8]
// 00570f24  83f802               cmp eax, 2
// 00570f27  7519                 jne 0x570f42
// 00570f29  56                   push esi
// 00570f2a  8b742408             mov esi, dword ptr [esp + 8]
// 00570f2e  56                   push esi
// 00570f2f  b908fb8900           mov ecx, 0x89fb08
// 00570f34  ff1508e77700         call dword ptr [0x77e708]
// 00570f3a  f6d8                 neg al
// 00570f3c  1bc0                 sbb eax, eax
// 00570f3e  23c6                 and eax, esi
// 00570f40  5e                   pop esi
// 00570f41  c3                   ret 
// 00570f42  85c0                 test eax, eax
// 00570f44  7505                 jne 0x570f4b
// 00570f46  8b442404             mov eax, dword ptr [esp + 4]
// 00570f4a  c3                   ret 
// 00570f4b  33c0                 xor eax, eax
// 00570f4d  c3                   ret 

extern "C" int __cdecl _type_info_compare_helper();

struct type_info
{
    bool operator==(const type_info& rhs) const;
};

extern type_info type_info_0089fb08;

int __cdecl sub_00570f20(int a1, int a2, int a3)
{
    if (a3 == 2)
    {
        int v = a2;
        bool eq = (type_info_0089fb08 == *(type_info*)a2);
        return eq ? v : 0;
    }
    if (a3 == 0)
        return a1;
    return 0;
}
