// from server: 66% by colin
// roc 2007-08 0049a560  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049a560
//
// 0049a560  8b442408             mov eax, dword ptr [esp + 8]
// 0049a564  83f802               cmp eax, 2
// 0049a567  7519                 jne 0x49a582
// 0049a569  56                   push esi
// 0049a56a  8b742408             mov esi, dword ptr [esp + 8]
// 0049a56e  56                   push esi
// 0049a56f  b930fc8800           mov ecx, 0x88fc30
// 0049a574  ff1508e77700         call dword ptr [0x77e708]
// 0049a57a  f6d8                 neg al
// 0049a57c  1bc0                 sbb eax, eax
// 0049a57e  23c6                 and eax, esi
// 0049a580  5e                   pop esi
// 0049a581  c3                   ret 
// 0049a582  8b542404             mov edx, dword ptr [esp + 4]
// 0049a586  c644240800           mov byte ptr [esp + 8], 0
// 0049a58b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a58f  51                   push ecx
// 0049a590  50                   push eax
// 0049a591  52                   push edx
// 0049a592  e8597b1500           call 0x5f20f0
// 0049a597  83c40c               add esp, 0xc
// 0049a59a  c3                   ret 

extern "C" {
    int __stdcall sub_5F20F0(int, int, char);
}

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_88FC30;
extern bool (__stdcall *func_77E708)(const type_info*, const type_info*);

int __cdecl sub_49A560(int a1, int a2, int a3) {
    if (a3 == 2) {
        int result = func_77E708(&type_info_88FC30, (const type_info*)a2) ? 0 : a2;
        return result;
    }
    char local = 0;
    return sub_5F20F0(a1, a2, local);
}
