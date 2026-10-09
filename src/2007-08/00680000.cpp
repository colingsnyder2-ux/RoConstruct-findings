// from server: 75% by colin
// roc 2007-08 00680000  unit: CXTPPrintingDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680000
//
// 00680000  56                   push esi
// 00680001  8b742408             mov esi, dword ptr [esp + 8]
// 00680005  85f6                 test esi, esi
// 00680007  57                   push edi
// 00680008  8bf9                 mov edi, ecx
// 0068000a  7504                 jne 0x680010
// 0068000c  33c0                 xor eax, eax
// 0068000e  eb03                 jmp 0x680013
// 00680010  8b4620               mov eax, dword ptr [esi + 0x20]
// 00680013  50                   push eax
// 00680014  ff15bced7700         call dword ptr [0x77edbc]
// 0068001a  85c0                 test eax, eax
// 0068001c  7425                 je 0x680043
// 0068001e  85f6                 test esi, esi
// 00680020  750f                 jne 0x680031
// 00680022  57                   push edi
// 00680023  56                   push esi
// 00680024  ff15f4ed7700         call dword ptr [0x77edf4]
// 0068002a  8bc7                 mov eax, edi
// 0068002c  5f                   pop edi
// 0068002d  5e                   pop esi
// 0068002e  c20400               ret 4
// 00680031  8b7620               mov esi, dword ptr [esi + 0x20]
// 00680034  57                   push edi
// 00680035  56                   push esi
// 00680036  ff15f4ed7700         call dword ptr [0x77edf4]
// 0068003c  8bc7                 mov eax, edi
// 0068003e  5f                   pop edi
// 0068003f  5e                   pop esi
// 00680040  c20400               ret 4
// 00680043  57                   push edi
// 00680044  ff1514ee7700         call dword ptr [0x77ee14]
// 0068004a  8bc7                 mov eax, edi
// 0068004c  5f                   pop edi
// 0068004d  5e                   pop esi
// 0068004e  c20400               ret 4

struct CXTPPrintingDialog
{
    CXTPPrintingDialog* SetRectEmptyIfWindow(void* p);
};

extern "C" int __stdcall IsWindow(void*);
extern "C" int __stdcall GetClientRect(void*, void*);
extern "C" int __stdcall SetRectEmpty(void*);

CXTPPrintingDialog* CXTPPrintingDialog::SetRectEmptyIfWindow(void* p)
{
    void* w;
    if (p == 0)
        w = 0;
    else
        w = *(void**)((char*)p + 0x20);

    if (IsWindow(w))
    {
        if (p == 0)
        {
            SetRectEmpty(this);
            return this;
        }
        SetRectEmpty(*(void**)((char*)p + 0x20));
        return this;
    }

    GetClientRect(this, this);
    return this;
}
