// from server: 100% by tester
// roc 2007-03 006c4d80  unit: seg_006c0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c4d80
//
// 006c4d80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c4d84  56                   push esi
// 006c4d85  8bf1                 mov esi, ecx
// 006c4d87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c4d8b  50                   push eax
// 006c4d8c  51                   push ecx
// 006c4d8d  8bce                 mov ecx, esi
// 006c4d8f  e8bcf1ffff           call 0x6c3f50
// 006c4d94  85c0                 test eax, eax
// 006c4d96  742f                 je 0x6c4dc7
// 006c4d98  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006c4d9e  85c9                 test ecx, ecx
// 006c4da0  741b                 je 0x6c4dbd
// 006c4da2  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 006c4da8  398298010000         cmp dword ptr [edx + 0x198], eax
// 006c4dae  750d                 jne 0x6c4dbd
// 006c4db0  8b10                 mov edx, dword ptr [eax]
// 006c4db2  8bc8                 mov ecx, eax
// 006c4db4  8b4258               mov eax, dword ptr [edx + 0x58]
// 006c4db7  ffd0                 call eax
// 006c4db9  5e                   pop esi
// 006c4dba  c20c00               ret 0xc
// 006c4dbd  6a01                 push 1
// 006c4dbf  50                   push eax
// 006c4dc0  8bce                 mov ecx, esi
// 006c4dc2  e8c9feffff           call 0x6c4c90
// 006c4dc7  5e                   pop esi
// 006c4dc8  c20c00               ret 0xc

struct CXTPDockingPaneAutoHidePanel {
    char pad[0xa8];
    void* field_a8;
    void* method_6dae10(int, int);
    void method_6dbb20(void*, int);
    void method_6dbc10(int, int, int);
};

void CXTPDockingPaneAutoHidePanel::method_6dbc10(int a, int b, int c) {
    void* result = method_6dae10(b, c);
    if (result != 0) {
        void* p = field_a8;
        if (p != 0) {
            void* q = *(void**)((char*)p + 0xe4);
            if (*(void**)((char*)q + 0x198) == result) {
                void** vt = *(void***)result;
                void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x58 / 4];
                fn(result);
                return;
            }
        }
        method_6dbb20(result, 1);
    }
}
