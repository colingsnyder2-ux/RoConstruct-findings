// from server: 100% by tester
// roc 2008-06 006aafe0  unit: CRobloxControlColorSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aafe0
//
// 006aafe0  56                   push esi
// 006aafe1  8bf1                 mov esi, ecx
// 006aafe3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006aafe9  6a00                 push 0
// 006aafeb  6aff                 push -1
// 006aafed  e8debe0000           call 0x6b6ed0
// 006aaff2  85c0                 test eax, eax
// 006aaff4  742a                 je 0x6ab020
// 006aaff6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006aaffc  83b8e000000002       cmp dword ptr [eax + 0xe0], 2
// 006ab003  751b                 jne 0x6ab020
// 006ab005  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 006ab00c  7412                 je 0x6ab020
// 006ab00e  6a00                 push 0
// 006ab010  8bc8                 mov ecx, eax
// 006ab012  8b01                 mov eax, dword ptr [ecx]
// 006ab014  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 006ab01a  6a01                 push 1
// 006ab01c  6a00                 push 0
// 006ab01e  ffd2                 call edx
// 006ab020  5e                   pop esi
// 006ab021  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?OnMouseHover@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
