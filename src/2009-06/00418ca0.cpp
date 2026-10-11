// from server: 65% by atomic.potato
// roc 2009-06 00418ca0  unit: CRBXHTMLControlSite::XDocHostUIHandler  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00418ca0
//
// 00418ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00418ca4  8b8834ffffff         mov ecx, dword ptr [eax - 0xcc]
// 00418caa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418cae  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00418cb1  8b11                 mov edx, dword ptr [ecx]
// 00418cb3  8b9298010000         mov edx, dword ptr [edx + 0x198]
// 00418cb9  50                   push eax
// 00418cba  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418cbe  50                   push eax
// 00418cbf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418cc3  50                   push eax
// 00418cc4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00418cc8  50                   push eax
// 00418cc9  ffd2                 call edx
// 00418ccb  c21400               ret 0x14
// library mfc-9.0/atlmfc\src\mfc\dlgdhtml.cpp (function ?ShowContextMenu@CBrowserControlSite@@MAGKXZ)





struct CRBXHTMLControlSite_XDocHostUIHandler_Inner {
    virtual int ShowContextMenu(unsigned int, int, int, void*, void*);
};

struct CRBXHTMLControlSite_XDocHostUIHandler {
    int ShowContextMenu(unsigned int a, int b, int c, void* d, void* e);
};

int CRBXHTMLControlSite_XDocHostUIHandler::ShowContextMenu(unsigned int a, int b, int c, void* d, void* e)
{
    char* p = (char*)d;
    CRBXHTMLControlSite_XDocHostUIHandler_Inner* inner =
        *(CRBXHTMLControlSite_XDocHostUIHandler_Inner**)(p - 0xcc + 0x20);
    return inner->ShowContextMenu(a, b, c, d, e);
}
