// from server: 42% by colin
// roc 2007-08 00403c90  unit: ATL::CComClassFactory  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403c90
//
// 00403c90  6aff                 push -1
// 00403c92  68d9a57300           push 0x73a5d9
// 00403c97  64a100000000         mov eax, dword ptr fs:[0]
// 00403c9d  50                   push eax
// 00403c9e  51                   push ecx
// 00403c9f  56                   push esi
// 00403ca0  57                   push edi
// 00403ca1  a188518b00           mov eax, dword ptr [0x8b5188]
// 00403ca6  33c4                 xor eax, esp
// 00403ca8  50                   push eax
// 00403ca9  8d442410             lea eax, [esp + 0x10]
// 00403cad  64a300000000         mov dword ptr fs:[0], eax
// 00403cb3  8bf1                 mov esi, ecx
// 00403cb5  8974240c             mov dword ptr [esp + 0xc], esi
// 00403cb9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00403cbd  57                   push edi
// 00403cbe  ff1500e77700         call dword ptr [0x77e700]
// 00403cc4  83c70c               add edi, 0xc
// 00403cc7  57                   push edi
// 00403cc8  8d4e0c               lea ecx, [esi + 0xc]
// 00403ccb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00403cd3  c706604e7800         mov dword ptr [esi], 0x784e60
// 00403cd9  ff159ce67700         call dword ptr [0x77e69c]
// 00403cdf  8bc6                 mov eax, esi
// 00403ce1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00403ce5  64890d00000000       mov dword ptr fs:[0], ecx
// 00403cec  59                   pop ecx
// 00403ced  5f                   pop edi
// 00403cee  5e                   pop esi
// 00403cef  83c410               add esp, 0x10
// 00403cf2  c20400               ret 4

struct ATL_CComClassFactory {
    void* vtable;
    char pad[8];
    void* m_pfnCreateInstance;
    void* m_pfnCreateInstance2;
    void* Construct(void* p);
};

extern "C" void __stdcall sub_77E700(void*);
extern "C" void __stdcall sub_77E69C(void*);

void* ATL_CComClassFactory::Construct(void* p)
{
    sub_77E700(p);
    sub_77E69C((char*)p + 0xc);
    this->vtable = (void*)0x784e60;
    return this;
}
