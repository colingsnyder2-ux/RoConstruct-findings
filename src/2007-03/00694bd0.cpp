// from server: 100% by tester
// roc 2008-06 0071aa20  unit: CXTPDockBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071aa20
//
// 0071aa20  56                   push esi
// 0071aa21  8bf1                 mov esi, ecx
// 0071aa23  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071aa26  8d44240c             lea eax, [esp + 0xc]
// 0071aa2a  50                   push eax
// 0071aa2b  51                   push ecx
// 0071aa2c  ff15802d8000         call dword ptr [0x802d80]
// 0071aa32  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071aa36  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0071aa39  8b11                 mov edx, dword ptr [ecx]
// 0071aa3b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0071aa3e  50                   push eax
// 0071aa3f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071aa43  50                   push eax
// 0071aa44  6a00                 push 0
// 0071aa46  ffd2                 call edx
// 0071aa48  5e                   pop esi
// 0071aa49  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockBar.cpp (function ?OnRButtonDown@CXTPDockBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp
