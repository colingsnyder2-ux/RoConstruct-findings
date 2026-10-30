// roc 2009-12 008e9310  unit: CXTPRibbonGroupControlPopup  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9310
//
// 008e9310  56                   push esi
// 008e9311  8bf1                 mov esi, ecx
// 008e9313  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008e9319  e872b2f1ff           call 0x804590
// 008e931e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e9322  8b10                 mov edx, dword ptr [eax]
// 008e9324  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008e932a  6a00                 push 0
// 008e932c  56                   push esi
// 008e932d  8b742410             mov esi, dword ptr [esp + 0x10]
// 008e9331  51                   push ecx
// 008e9332  56                   push esi
// 008e9333  8bc8                 mov ecx, eax
// 008e9335  ffd2                 call edx
// 008e9337  8bc6                 mov eax, esi
// 008e9339  5e                   pop esi
// 008e933a  c20800               ret 8
// copied from an identical function in another client (function ?GetSize@CXTPRibbonGroupControlPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp