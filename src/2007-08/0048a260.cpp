// from server: 71% by colin
// roc 2007-08 0048a260  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a260
//
// 0048a260  8b442408             mov eax, dword ptr [esp + 8]
// 0048a264  83f802               cmp eax, 2
// 0048a267  7519                 jne 0x48a282
// 0048a269  56                   push esi
// 0048a26a  8b742408             mov esi, dword ptr [esp + 8]
// 0048a26e  56                   push esi
// 0048a26f  b938cd8800           mov ecx, 0x88cd38
// 0048a274  ff1508e77700         call dword ptr [0x77e708]
// 0048a27a  f6d8                 neg al
// 0048a27c  1bc0                 sbb eax, eax
// 0048a27e  23c6                 and eax, esi
// 0048a280  5e                   pop esi
// 0048a281  c3                   ret 
// 0048a282  8b542404             mov edx, dword ptr [esp + 4]
// 0048a286  c644240800           mov byte ptr [esp + 8], 0
// 0048a28b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048a28f  51                   push ecx
// 0048a290  50                   push eax
// 0048a291  52                   push edx
// 0048a292  e8597e1600           call 0x5f20f0
// 0048a297  83c40c               add esp, 0xc
// 0048a29a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info& other) const;
};

extern "C" type_info type_info_88cd38;

int __cdecl sub_5F20F0(int, int, int);

int __cdecl sub_48A260(int a1, int a2, int a3) {
    if (a3 == 2) {
        int v = a2;
        bool eq = type_info_88cd38 == *(type_info*)a2;
        return eq ? v : 0;
    }
    char local = 0;
    return sub_5F20F0(a1, a3, *(int*)&local);
}
