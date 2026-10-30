// roc 2009-12 008f1990  unit: CXTPRibbonControlSystemButton  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1990
//
// 008f1990  56                   push esi
// 008f1991  8bf1                 mov esi, ecx
// 008f1993  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f1999  57                   push edi
// 008f199a  e8d132faff           call 0x894c70
// 008f199f  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008f19a5  8b38                 mov edi, dword ptr [eax]
// 008f19a7  83ec10               sub esp, 0x10
// 008f19aa  8bd4                 mov edx, esp
// 008f19ac  890a                 mov dword ptr [edx], ecx
// 008f19ae  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 008f19b4  894a04               mov dword ptr [edx + 4], ecx
// 008f19b7  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008f19bd  894a08               mov dword ptr [edx + 8], ecx
// 008f19c0  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008f19c6  894a0c               mov dword ptr [edx + 0xc], ecx
// 008f19c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f19cd  56                   push esi
// 008f19ce  8bc8                 mov ecx, eax
// 008f19d0  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 008f19d6  52                   push edx
// 008f19d7  ffd0                 call eax
// 008f19d9  5f                   pop edi
// 008f19da  5e                   pop esi
// 008f19db  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemButton@@UAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp