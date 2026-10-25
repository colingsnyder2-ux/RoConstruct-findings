// from server: 100% by atomic.potato
// roc 2011-06 00547e90  unit: G3D::TextInput::TokenException  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00547e90
//
// 00547e90  56                   push esi
// 00547e91  57                   push edi
// 00547e92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00547e96  57                   push edi
// 00547e97  8bf1                 mov esi, ecx
// 00547e99  e802f8ffff           call 0x5476a0
// 00547e9e  c706e0fea700         mov dword ptr [esi], 0xa7fee0
// 00547ea4  8b4778               mov eax, dword ptr [edi + 0x78]
// 00547ea7  894678               mov dword ptr [esi + 0x78], eax
// 00547eaa  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 00547ead  5f                   pop edi
// 00547eae  894e7c               mov dword ptr [esi + 0x7c], ecx
// 00547eb1  8bc6                 mov eax, esi
// 00547eb3  5e                   pop esi
// 00547eb4  c20400               ret 4

struct Base {
    void init(void* p);
};

struct S : Base {
    char pad[0x78];
    int m78;
    int m7c;
    S* ctor(void* p);
};

S* S::ctor(void* p) {
    init(p);
    *(void**)this = (void*)0xa7fee0;
    m78 = *(int*)((char*)p + 0x78);
    m7c = *(int*)((char*)p + 0x7c);
    return this;
}
