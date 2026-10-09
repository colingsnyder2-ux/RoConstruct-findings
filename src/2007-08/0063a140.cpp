// from server: 94% by colin
// roc 2007-08 0063a140  unit: CRobloxControlColorSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a140
//
// 0063a140  56                   push esi
// 0063a141  8bf1                 mov esi, ecx
// 0063a143  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0063a14a  7426                 je 0x63a172
// 0063a14c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063a152  8b01                 mov eax, dword ptr [ecx]
// 0063a154  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 0063a15a  ffd2                 call edx
// 0063a15c  85c0                 test eax, eax
// 0063a15e  7412                 je 0x63a172
// 0063a160  8bce                 mov ecx, esi
// 0063a162  e8c9ffffff           call 0x63a130
// 0063a167  a810                 test al, 0x10
// 0063a169  7507                 jne 0x63a172
// 0063a16b  b801000000           mov eax, 1
// 0063a170  5e                   pop esi
// 0063a171  c3                   ret 
// 0063a172  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063a178  e803980000           call 0x643980
// 0063a17d  85c0                 test eax, eax
// 0063a17f  7406                 je 0x63a187
// 0063a181  83782800             cmp dword ptr [eax + 0x28], 0
// 0063a185  75e4                 jne 0x63a16b
// 0063a187  33c0                 xor eax, eax
// 0063a189  5e                   pop esi
// 0063a18a  c3                   ret 

struct CRobloxControlColorSelector {
    char pad[0xfc];
    void* field_fc;
    int sub_63a130();

    int sub_63a140();
};

extern "C" int __stdcall sub_643980(void*);

int CRobloxControlColorSelector::sub_63a140()
{
    if (field_fc != 0) {
        void** vtbl = *(void***)field_fc;
        int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[0x178 / 4];
        if (fn(field_fc) != 0) {
            if (!(sub_63a130() & 0x10)) {
                return 1;
            }
        }
    }
    int result = sub_643980(field_fc);
    if (result != 0 && *(int*)(result + 0x28) != 0) {
        return 1;
    }
    return 0;
}
