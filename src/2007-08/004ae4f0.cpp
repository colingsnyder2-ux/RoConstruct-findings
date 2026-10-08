// from server: 64% by colin
// roc 2007-08 004ae4f0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ae4f0
//
// 004ae4f0  8b442408             mov eax, dword ptr [esp + 8]
// 004ae4f4  83f802               cmp eax, 2
// 004ae4f7  7519                 jne 0x4ae512
// 004ae4f9  56                   push esi
// 004ae4fa  8b742408             mov esi, dword ptr [esp + 8]
// 004ae4fe  56                   push esi
// 004ae4ff  b9881b8900           mov ecx, 0x891b88
// 004ae504  ff1508e77700         call dword ptr [0x77e708]
// 004ae50a  f6d8                 neg al
// 004ae50c  1bc0                 sbb eax, eax
// 004ae50e  23c6                 and eax, esi
// 004ae510  5e                   pop esi
// 004ae511  c3                   ret 
// 004ae512  8b542404             mov edx, dword ptr [esp + 4]
// 004ae516  c644240800           mov byte ptr [esp + 8], 0
// 004ae51b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ae51f  51                   push ecx
// 004ae520  50                   push eax
// 004ae521  52                   push edx
// 004ae522  e8c93b1400           call 0x5f20f0
// 004ae527  83c40c               add esp, 0xc
// 004ae52a  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_5F20F0(void*, int, int);

void* __stdcall sub_4AE4F0(void* a, int b, int c) {
    if (c == 2) {
        type_info* t = (type_info*)0x891b88;
        bool eq = (*t == *(type_info*)b);
        return eq ? (void*)b : 0;
    }
    return sub_5F20F0(a, b, c);
}
