// from server: 100% by colin
// roc 2007-08 006dbc10  unit: CXTPDockingPaneAutoHidePanel  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dbc10
//
// 006dbc10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dbc14  56                   push esi
// 006dbc15  8bf1                 mov esi, ecx
// 006dbc17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dbc1b  50                   push eax
// 006dbc1c  51                   push ecx
// 006dbc1d  8bce                 mov ecx, esi
// 006dbc1f  e8ecf1ffff           call 0x6dae10
// 006dbc24  85c0                 test eax, eax
// 006dbc26  742f                 je 0x6dbc57
// 006dbc28  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006dbc2e  85c9                 test ecx, ecx
// 006dbc30  741b                 je 0x6dbc4d
// 006dbc32  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 006dbc38  3982a0010000         cmp dword ptr [edx + 0x1a0], eax
// 006dbc3e  750d                 jne 0x6dbc4d
// 006dbc40  8b10                 mov edx, dword ptr [eax]
// 006dbc42  8bc8                 mov ecx, eax
// 006dbc44  8b4258               mov eax, dword ptr [edx + 0x58]
// 006dbc47  ffd0                 call eax
// 006dbc49  5e                   pop esi
// 006dbc4a  c20c00               ret 0xc
// 006dbc4d  6a01                 push 1
// 006dbc4f  50                   push eax
// 006dbc50  8bce                 mov ecx, esi
// 006dbc52  e8c9feffff           call 0x6dbb20
// 006dbc57  5e                   pop esi
// 006dbc58  c20c00               ret 0xc

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
            if (*(void**)((char*)q + 0x1a0) == result) {
                void** vt = *(void***)result;
                void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x58 / 4];
                fn(result);
                return;
            }
        }
        method_6dbb20(result, 1);
    }
}
