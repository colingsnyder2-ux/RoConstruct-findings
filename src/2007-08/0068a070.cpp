// from server: 62% by colin
// roc 2007-08 0068a070  unit: CXTPTabClientWnd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a070
//
// 0068a070  8bc1                 mov eax, ecx
// 0068a072  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0068a075  85c9                 test ecx, ecx
// 0068a077  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0068a07e  740a                 je 0x68a08a
// 0068a080  8b01                 mov eax, dword ptr [ecx]
// 0068a082  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0068a088  ffe2                 jmp edx
// 0068a08a  83782c00             cmp dword ptr [eax + 0x2c], 0
// 0068a08e  7511                 jne 0x68a0a1
// 0068a090  8b4030               mov eax, dword ptr [eax + 0x30]
// 0068a093  8b10                 mov edx, dword ptr [eax]
// 0068a095  8bc8                 mov ecx, eax
// 0068a097  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0068a09d  6a01                 push 1
// 0068a09f  ffd0                 call eax
// 0068a0a1  c3                   ret 

struct CXTPTabClientWnd {
    char pad[0xc];
    int field_0c;
    char pad2[0x18];
    void* field_28;
    void* field_2c;
    void* field_30;
    void Method();
};

void CXTPTabClientWnd::Method()
{
    field_0c = 0;
    if (field_28 != 0) {
        void** vtbl = *(void***)field_28;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x84 / 4];
        fn(field_28);
        return;
    }
    if (field_2c == 0) {
        void** vtbl = *(void***)field_30;
        void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vtbl[0x150 / 4];
        fn(field_30, 1);
    }
}
