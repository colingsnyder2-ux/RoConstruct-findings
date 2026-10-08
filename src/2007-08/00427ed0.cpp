// from server: 83% by colin
// roc 2007-08 00427ed0  unit: COleException  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427ed0
//
// 00427ed0  8b442408             mov eax, dword ptr [esp + 8]
// 00427ed4  83f802               cmp eax, 2
// 00427ed7  7519                 jne 0x427ef2
// 00427ed9  56                   push esi
// 00427eda  8b742408             mov esi, dword ptr [esp + 8]
// 00427ede  56                   push esi
// 00427edf  b92c648800           mov ecx, 0x88642c
// 00427ee4  ff1508e77700         call dword ptr [0x77e708]
// 00427eea  f6d8                 neg al
// 00427eec  1bc0                 sbb eax, eax
// 00427eee  23c6                 and eax, esi
// 00427ef0  5e                   pop esi
// 00427ef1  c3                   ret 
// 00427ef2  85c0                 test eax, eax
// 00427ef4  7505                 jne 0x427efb
// 00427ef6  8b442404             mov eax, dword ptr [esp + 4]
// 00427efa  c3                   ret 
// 00427efb  33c0                 xor eax, eax
// 00427efd  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info type_info_0088642c;
extern "C" bool (__stdcall *ptr_0077e708)(const type_info*, const type_info*);

int func_00427ed0(int arg1, int arg2)
{
    if (arg2 == 2) {
        if (ptr_0077e708(&type_info_0088642c, (const type_info*)arg1))
            return arg1;
        return 0;
    }
    if (arg2 == 0)
        return arg1;
    return 0;
}
