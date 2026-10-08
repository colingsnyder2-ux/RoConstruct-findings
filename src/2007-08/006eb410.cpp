// from server: 100% by colin
// roc 2007-08 006eb410  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006eb410
//
// 006eb410  56                   push esi
// 006eb411  8bf1                 mov esi, ecx
// 006eb413  e858feffff           call 0x6eb270
// 006eb418  33c0                 xor eax, eax
// 006eb41a  89863c020000         mov dword ptr [esi + 0x23c], eax
// 006eb420  898640020000         mov dword ptr [esi + 0x240], eax
// 006eb426  c7060ca87d00         mov dword ptr [esi], 0x7da80c
// 006eb42c  c7467c03000000       mov dword ptr [esi + 0x7c], 3
// 006eb433  8bc6                 mov eax, esi
// 006eb435  5e                   pop esi
// 006eb436  c3                   ret 

struct CXTPDockingPaneOffice2003Theme {
    CXTPDockingPaneOffice2003Theme* construct();
};

extern void func_006eb270();

CXTPDockingPaneOffice2003Theme* CXTPDockingPaneOffice2003Theme::construct()
{
    func_006eb270();
    *(int*)((char*)this + 0x23c) = 0;
    *(int*)((char*)this + 0x240) = 0;
    *(int*)this = 0x7da80c;
    *(int*)((char*)this + 0x7c) = 3;
    return this;
}
