// from server: 78% by colin
// roc 2007-08 00670c40  unit: CXTPToolBar::CControlButtonExpand  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670c40
//
// 00670c40  56                   push esi
// 00670c41  57                   push edi
// 00670c42  8bf9                 mov edi, ecx
// 00670c44  e887ffffff           call 0x670bd0
// 00670c49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00670c4d  8bf0                 mov esi, eax
// 00670c4f  8b06                 mov eax, dword ptr [esi]
// 00670c51  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00670c57  51                   push ecx
// 00670c58  57                   push edi
// 00670c59  8bce                 mov ecx, esi
// 00670c5b  ffd2                 call edx
// 00670c5d  5f                   pop edi
// 00670c5e  8bc6                 mov eax, esi
// 00670c60  5e                   pop esi
// 00670c61  c20400               ret 4

struct CXTPToolBar_CControlButtonExpand {
    void* sub_670BD0();
    void* method_670C40(int);
};

void* CXTPToolBar_CControlButtonExpand::method_670C40(int arg) {
    void* p = sub_670BD0();
    void** vtbl = *(void***)p;
    void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x38];
    fn(p, arg);
    return p;
}
