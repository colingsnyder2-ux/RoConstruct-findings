// from server: 91% by colin
// roc 2007-08 0071ec60  unit: CXTPDialogBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ec60
//
// 0071ec60  56                   push esi
// 0071ec61  57                   push edi
// 0071ec62  8bf9                 mov edi, ecx
// 0071ec64  e887ffffff           call 0x71ebf0
// 0071ec69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071ec6d  8bf0                 mov esi, eax
// 0071ec6f  8b06                 mov eax, dword ptr [esi]
// 0071ec71  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 0071ec77  51                   push ecx
// 0071ec78  57                   push edi
// 0071ec79  8bce                 mov ecx, esi
// 0071ec7b  ffd2                 call edx
// 0071ec7d  5f                   pop edi
// 0071ec7e  8bc6                 mov eax, esi
// 0071ec80  5e                   pop esi
// 0071ec81  c20400               ret 4

struct CXTPDialogBar
{
    void* sub_71EBF0();
    void* method_71EC60(void* arg);
};

void* CXTPDialogBar::method_71EC60(void* arg)
{
    void* p = sub_71EBF0();
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0x1c8 / 4];
    fn(p, this, arg);
    return p;
}
