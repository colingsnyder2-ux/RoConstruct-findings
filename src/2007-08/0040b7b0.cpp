// from server: 76% by colin
// roc 2007-08 0040b7b0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b7b0
//
// 0040b7b0  33c0                 xor eax, eax
// 0040b7b2  56                   push esi
// 0040b7b3  8bf1                 mov esi, ecx
// 0040b7b5  894618               mov dword ptr [esi + 0x18], eax
// 0040b7b8  894610               mov dword ptr [esi + 0x10], eax
// 0040b7bb  89460c               mov dword ptr [esi + 0xc], eax
// 0040b7be  c746085c597800       mov dword ptr [esi + 8], 0x78595c
// 0040b7c5  6689461c             mov word ptr [esi + 0x1c], ax
// 0040b7c9  c706845c7800         mov dword ptr [esi], 0x785c84
// 0040b7cf  c746046c5c7800       mov dword ptr [esi + 4], 0x785c6c
// 0040b7d6  c74608485c7800       mov dword ptr [esi + 8], 0x785c48
// 0040b7dd  c74614205c7800       mov dword ptr [esi + 0x14], 0x785c20
// 0040b7e4  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0040b7ea  8b01                 mov eax, dword ptr [ecx]
// 0040b7ec  8b5004               mov edx, dword ptr [eax + 4]
// 0040b7ef  ffd2                 call edx
// 0040b7f1  8bc6                 mov eax, esi
// 0040b7f3  5e                   pop esi
// 0040b7f4  c20400               ret 4

struct VCBrowserViewExternal_CComObjectNoLock
{
    void* construct(int);
};

void* VCBrowserViewExternal_CComObjectNoLock::construct(int arg)
{
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 8) = 0x78595c;
    *(short*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this) = 0x785c84;
    *(int*)((char*)this + 4) = 0x785c6c;
    *(int*)((char*)this + 8) = 0x785c48;
    *(int*)((char*)this + 0x14) = 0x785c20;
    int* p = *(int**)0x8bae44;
    int* vt = *(int**)p;
    void (__stdcall *fn)() = (void (__stdcall*)())*(int*)((char*)vt + 4);
    fn();
    return this;
}
