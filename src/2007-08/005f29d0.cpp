// from server: 70% by colin
// roc 2007-08 005f29d0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f29d0
//
// 005f29d0  8b442408             mov eax, dword ptr [esp + 8]
// 005f29d4  83f802               cmp eax, 2
// 005f29d7  7519                 jne 0x5f29f2
// 005f29d9  56                   push esi
// 005f29da  8b742408             mov esi, dword ptr [esp + 8]
// 005f29de  56                   push esi
// 005f29df  b9981b8b00           mov ecx, 0x8b1b98
// 005f29e4  ff1508e77700         call dword ptr [0x77e708]
// 005f29ea  f6d8                 neg al
// 005f29ec  1bc0                 sbb eax, eax
// 005f29ee  23c6                 and eax, esi
// 005f29f0  5e                   pop esi
// 005f29f1  c3                   ret 
// 005f29f2  8b542404             mov edx, dword ptr [esp + 4]
// 005f29f6  c644240800           mov byte ptr [esp + 8], 0
// 005f29fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f29ff  51                   push ecx
// 005f2a00  50                   push eax
// 005f2a01  52                   push edx
// 005f2a02  e8e9f6ffff           call 0x5f20f0
// 005f2a07  83c40c               add esp, 0xc
// 005f2a0a  c3                   ret 

extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void*);

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_8B1B98;
extern bool (__stdcall* dword_77E708)(const type_info*, const type_info*);

extern void __cdecl sub_5F20F0(int, int, char);

struct SignalDescImpl {
    int sub_5F29D0(int, int);
};

int SignalDescImpl::sub_5F29D0(int a, int b) {
    if (b == 2) {
        int v = a;
        bool r = dword_77E708(&type_info_8B1B98, (const type_info*)v);
        return r ? v : 0;
    }
    char c = 0;
    sub_5F20F0(a, b, c);
    return 0;
}
