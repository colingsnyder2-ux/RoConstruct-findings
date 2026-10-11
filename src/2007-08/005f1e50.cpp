// from server: 72% by colin
// roc 2007-08 005f1e50  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1e50
//
// 005f1e50  8b442408             mov eax, dword ptr [esp + 8]
// 005f1e54  83f802               cmp eax, 2
// 005f1e57  7519                 jne 0x5f1e72
// 005f1e59  56                   push esi
// 005f1e5a  8b742408             mov esi, dword ptr [esp + 8]
// 005f1e5e  56                   push esi
// 005f1e5f  b960178b00           mov ecx, 0x8b1760
// 005f1e64  ff1508e77700         call dword ptr [0x77e708]
// 005f1e6a  f6d8                 neg al
// 005f1e6c  1bc0                 sbb eax, eax
// 005f1e6e  23c6                 and eax, esi
// 005f1e70  5e                   pop esi
// 005f1e71  c3                   ret 
// 005f1e72  8b542404             mov edx, dword ptr [esp + 4]
// 005f1e76  c644240800           mov byte ptr [esp + 8], 0
// 005f1e7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f1e7f  51                   push ecx
// 005f1e80  50                   push eax
// 005f1e81  52                   push edx
// 005f1e82  e869020000           call 0x5f20f0
// 005f1e87  83c40c               add esp, 0xc
// 005f1e8a  c3                   ret 

extern "C" int __cdecl sub_5F20F0(int, int, char);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_8B1760;

int __cdecl sub_5F1E50(int a, int b, int c) {
    if (c == 2) {
        int r = b;
        bool eq = type_info_8B1760 == *(type_info*)&b;
        return eq ? r : 0;
    }
    char tmp = 0;
    return sub_5F20F0(a, c, tmp);
}
