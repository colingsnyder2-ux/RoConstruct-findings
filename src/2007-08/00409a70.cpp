// from server: 72% by colin
// roc 2007-08 00409a70  unit: VCApp::?$CComObject  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409a70
//
// 00409a70  33c0                 xor eax, eax
// 00409a72  56                   push esi
// 00409a73  8bf1                 mov esi, ecx
// 00409a75  894628               mov dword ptr [esi + 0x28], eax
// 00409a78  894610               mov dword ptr [esi + 0x10], eax
// 00409a7b  89460c               mov dword ptr [esi + 0xc], eax
// 00409a7e  c7460888527800       mov dword ptr [esi + 8], 0x785288
// 00409a85  c74614d0517800       mov dword ptr [esi + 0x14], 0x7851d0
// 00409a8c  894618               mov dword ptr [esi + 0x18], eax
// 00409a8f  894620               mov dword ptr [esi + 0x20], eax
// 00409a92  c706b8537800         mov dword ptr [esi], 0x7853b8
// 00409a98  c74604a0537800       mov dword ptr [esi + 4], 0x7853a0
// 00409a9f  c746087c537800       mov dword ptr [esi + 8], 0x78537c
// 00409aa6  c7461464537800       mov dword ptr [esi + 0x14], 0x785364
// 00409aad  c7461c48537800       mov dword ptr [esi + 0x1c], 0x785348
// 00409ab4  c74624fc527800       mov dword ptr [esi + 0x24], 0x7852fc
// 00409abb  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 00409ac1  8b01                 mov eax, dword ptr [ecx]
// 00409ac3  8b5004               mov edx, dword ptr [eax + 4]
// 00409ac6  ffd2                 call edx
// 00409ac8  8bc6                 mov eax, esi
// 00409aca  5e                   pop esi
// 00409acb  c20400               ret 4

struct VCAppCComObject {
    void* vfptr0;
    void* vfptr4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    VCAppCComObject* Initialize(int);
};

VCAppCComObject* VCAppCComObject::Initialize(int)
{
    void* zero = 0;
    this->field28 = zero;
    this->field10 = zero;
    this->fieldC = zero;
    this->field8 = (void*)0x785288;
    this->field14 = (void*)0x7851d0;
    this->field18 = zero;
    this->field20 = zero;
    this->vfptr0 = (void*)0x7853b8;
    this->vfptr4 = (void*)0x7853a0;
    this->field8 = (void*)0x78537c;
    this->field14 = (void*)0x785364;
    this->field1C = (void*)0x785348;
    this->field24 = (void*)0x7852fc;
    void** global = (void**)0x8bae44;
    void* obj = *global;
    void** vtbl = (void**)obj;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
    fn(obj);
    return this;
}
