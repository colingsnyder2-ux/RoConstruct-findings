// roc 2008-06 0079a690  unit: CXTPRibbonControlSystemButton  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a690
//
// 0079a690  56                   push esi
// 0079a691  8bf1                 mov esi, ecx
// 0079a693  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0079a699  57                   push edi
// 0079a69a  e8217af8ff           call 0x7220c0
// 0079a69f  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0079a6a5  8b38                 mov edi, dword ptr [eax]
// 0079a6a7  83ec10               sub esp, 0x10
// 0079a6aa  8bd4                 mov edx, esp
// 0079a6ac  890a                 mov dword ptr [edx], ecx
// 0079a6ae  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0079a6b4  894a04               mov dword ptr [edx + 4], ecx
// 0079a6b7  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0079a6bd  894a08               mov dword ptr [edx + 8], ecx
// 0079a6c0  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0079a6c6  894a0c               mov dword ptr [edx + 0xc], ecx
// 0079a6c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079a6cd  56                   push esi
// 0079a6ce  8bc8                 mov ecx, eax
// 0079a6d0  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0079a6d6  52                   push edx
// 0079a6d7  ffd0                 call eax
// 0079a6d9  5f                   pop edi
// 0079a6da  5e                   pop esi
// 0079a6db  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?Draw@CXTPRibbonControlSystemButton@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp
