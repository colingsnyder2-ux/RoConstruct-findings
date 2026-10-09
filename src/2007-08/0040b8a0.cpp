// from server: 72% by colin
// roc 2007-08 0040b8a0  unit: VCBrowserViewExternal::?$CComObject  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b8a0
//
// 0040b8a0  56                   push esi
// 0040b8a1  8bf1                 mov esi, ecx
// 0040b8a3  57                   push edi
// 0040b8a4  c706845c7800         mov dword ptr [esi], 0x785c84
// 0040b8aa  c746046c5c7800       mov dword ptr [esi + 4], 0x785c6c
// 0040b8b1  8d7e08               lea edi, [esi + 8]
// 0040b8b4  c707485c7800         mov dword ptr [edi], 0x785c48
// 0040b8ba  c74614205c7800       mov dword ptr [esi + 0x14], 0x785c20
// 0040b8c1  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040b8c8  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0040b8ce  8b01                 mov eax, dword ptr [ecx]
// 0040b8d0  8b5008               mov edx, dword ptr [eax + 8]
// 0040b8d3  ffd2                 call edx
// 0040b8d5  8bcf                 mov ecx, edi
// 0040b8d7  e844b20500           call 0x466b20
// 0040b8dc  f644240c01           test byte ptr [esp + 0xc], 1
// 0040b8e1  7409                 je 0x40b8ec
// 0040b8e3  56                   push esi
// 0040b8e4  e879432200           call 0x62fc62
// 0040b8e9  83c404               add esp, 4
// 0040b8ec  5f                   pop edi
// 0040b8ed  8bc6                 mov eax, esi
// 0040b8ef  5e                   pop esi
// 0040b8f0  c20400               ret 4

struct VCBrowserViewExternal_CComObject
{
    void* vtable0;
    void* vtable4;
    char pad8[0x0C];
    void* field14;
    int field18;
    void* construct(unsigned int flags);
};

extern void* g_8bae44;

extern void sub_00466b20();
extern void sub_0062fc62(void*);

void* VCBrowserViewExternal_CComObject::construct(unsigned int flags)
{
    vtable0 = (void*)0x785c84;
    vtable4 = (void*)0x785c6c;
    *(void**)((char*)this + 8) = (void*)0x785c48;
    field14 = (void*)0x785c20;
    field18 = (int)0xc0000001;

    void** obj = *(void***)g_8bae44;
    void (*fn)(void*) = (void (*)(void*))obj[2];
    fn(g_8bae44);

    sub_00466b20();

    if (flags & 1)
    {
        sub_0062fc62(this);
    }
    return this;
}
