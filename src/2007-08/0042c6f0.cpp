// from server: 75% by colin
// roc 2007-08 0042c6f0  unit: CLuaHtmlView  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c6f0
//
// 0042c6f0  8b442408             mov eax, dword ptr [esp + 8]
// 0042c6f4  83f802               cmp eax, 2
// 0042c6f7  7519                 jne 0x42c712
// 0042c6f9  56                   push esi
// 0042c6fa  8b742408             mov esi, dword ptr [esp + 8]
// 0042c6fe  56                   push esi
// 0042c6ff  b990698800           mov ecx, 0x886990
// 0042c704  ff1508e77700         call dword ptr [0x77e708]
// 0042c70a  f6d8                 neg al
// 0042c70c  1bc0                 sbb eax, eax
// 0042c70e  23c6                 and eax, esi
// 0042c710  5e                   pop esi
// 0042c711  c3                   ret 
// 0042c712  85c0                 test eax, eax
// 0042c714  7505                 jne 0x42c71b
// 0042c716  8b442404             mov eax, dword ptr [esp + 4]
// 0042c71a  c3                   ret 
// 0042c71b  33c0                 xor eax, eax
// 0042c71d  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" type_info type_info_886990;

int __cdecl sub_0042c6f0(int a1, int a2, int a3)
{
    if (a3 == 2) {
        if (type_info_886990 == *(type_info*)a2)
            return a2;
        return 0;
    }
    if (a3 == 0)
        return a1;
    return 0;
}
