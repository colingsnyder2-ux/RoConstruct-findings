// roc 2012-06 00421000  unit: RBX::DSVideoCaptureEngine  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00421000
//
// 00421000  56                   push esi
// 00421001  8bf1                 mov esi, ecx
// 00421003  8b4620               mov eax, dword ptr [esi + 0x20]
// 00421006  57                   push edi
// 00421007  33ff                 xor edi, edi
// 00421009  3bc7                 cmp eax, edi
// 0042100b  740b                 je 0x421018
// 0042100d  8b08                 mov ecx, dword ptr [eax]
// 0042100f  8b5108               mov edx, dword ptr [ecx + 8]
// 00421012  50                   push eax
// 00421013  ffd2                 call edx
// 00421015  897e20               mov dword ptr [esi + 0x20], edi
// 00421018  8b4628               mov eax, dword ptr [esi + 0x28]
// 0042101b  3bc7                 cmp eax, edi
// 0042101d  740b                 je 0x42102a
// 0042101f  8b08                 mov ecx, dword ptr [eax]
// 00421021  8b5108               mov edx, dword ptr [ecx + 8]
// 00421024  50                   push eax
// 00421025  ffd2                 call edx
// 00421027  897e28               mov dword ptr [esi + 0x28], edi
// 0042102a  897e20               mov dword ptr [esi + 0x20], edi
// 0042102d  897e28               mov dword ptr [esi + 0x28], edi
// 00421030  897e2c               mov dword ptr [esi + 0x2c], edi
// 00421033  5f                   pop edi
// 00421034  8bce                 mov ecx, esi
// 00421036  5e                   pop esi
// 00421037  e914ffffff           jmp 0x420f50
// copied from an identical function in another client (function ?cleanup@DSVideoCaptureEngine@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct DSVideoCaptureEngine {
    char pad[0x20];
    void* field20;
    char pad2[4];
    void* field28;
    void* field2c;
    void cleanup();
    void destroy();
};

void DSVideoCaptureEngine::cleanup() {
    if (field20) {
        void** vtbl = *(void***)field20;
        void (__stdcall *fn)(void*) = (void (__stdcall*)(void*))vtbl[2];
        fn(field20);
        field20 = 0;
    }
    if (field28) {
        void** vtbl = *(void***)field28;
        void (__stdcall *fn)(void*) = (void (__stdcall*)(void*))vtbl[2];
        fn(field28);
        field28 = 0;
    }
    field20 = 0;
    field28 = 0;
    field2c = 0;
    destroy();
}