// from server: 84% by colin
// roc 2007-08 00639dd0  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639dd0
//
// 00639dd0  56                   push esi
// 00639dd1  8bf1                 mov esi, ecx
// 00639dd3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00639dd9  6a00                 push 0
// 00639ddb  6aff                 push -1
// 00639ddd  e88ebc0000           call 0x645a70
// 00639de2  85c0                 test eax, eax
// 00639de4  742a                 je 0x639e10
// 00639de6  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00639dec  83b8dc00000002       cmp dword ptr [eax + 0xdc], 2
// 00639df3  751b                 jne 0x639e10
// 00639df5  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 00639dfc  7412                 je 0x639e10
// 00639dfe  6a00                 push 0
// 00639e00  8bc8                 mov ecx, eax
// 00639e02  8b01                 mov eax, dword ptr [ecx]
// 00639e04  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 00639e0a  6a01                 push 1
// 00639e0c  6a00                 push 0
// 00639e0e  ffd2                 call edx
// 00639e10  5e                   pop esi
// 00639e11  c3                   ret 

struct CRobloxControlColorSelector {
    char pad[0xfc];
    void* field_fc;
    void sub_639dd0();
};

extern "C" int __stdcall sub_645a70(void*, int, int);

void CRobloxControlColorSelector::sub_639dd0() {
    int result = sub_645a70(this->field_fc, -1, 0);
    if (result != 0) {
        void* p = this->field_fc;
        if (*(int*)((char*)p + 0xdc) == 2 && *(int*)((char*)p + 0xfc) != 5) {
            void** vtbl = *(void***)p;
            void (*fn)(void*, int, int) = (void (*)(void*, int, int))vtbl[0x140 / 4];
            fn(p, 0, 1);
        }
    }
}
