// from server: 78% by colin
// roc 2007-08 005f2730  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2730
//
// 005f2730  8b442408             mov eax, dword ptr [esp + 8]
// 005f2734  83f802               cmp eax, 2
// 005f2737  7519                 jne 0x5f2752
// 005f2739  56                   push esi
// 005f273a  8b742408             mov esi, dword ptr [esp + 8]
// 005f273e  56                   push esi
// 005f273f  b9801a8b00           mov ecx, 0x8b1a80
// 005f2744  ff1508e77700         call dword ptr [0x77e708]
// 005f274a  f6d8                 neg al
// 005f274c  1bc0                 sbb eax, eax
// 005f274e  23c6                 and eax, esi
// 005f2750  5e                   pop esi
// 005f2751  c3                   ret 
// 005f2752  8b542404             mov edx, dword ptr [esp + 4]
// 005f2756  c644240800           mov byte ptr [esp + 8], 0
// 005f275b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f275f  51                   push ecx
// 005f2760  50                   push eax
// 005f2761  52                   push edx
// 005f2762  e889f9ffff           call 0x5f20f0
// 005f2767  83c40c               add esp, 0xc
// 005f276a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct SignalDescImpl {
    static type_info type;
};

struct GenericSlotAdapter {
    static void* create(int, int);
};

void* __stdcall sub_5f20f0(int, int, int);

void* __cdecl sub_5f2730(int a, int b, int c) {
    if (b == 2) {
        int v = a;
        bool r = (SignalDescImpl::type == *(type_info*)0x8b1a80);
        return r ? (void*)v : 0;
    }
    char tmp = 0;
    return sub_5f20f0(a, b, *(int*)&tmp);
}
