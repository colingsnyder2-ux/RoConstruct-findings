// roc 2007-08 0067a640  unit: CXTPControls  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067a640
//
// 0067a640  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 0067a644  8b442404             mov eax, dword ptr [esp + 4]
// 0067a648  894120               mov dword ptr [ecx + 0x20], eax
// 0067a64b  7e07                 jle 0x67a654
// 0067a64d  8b11                 mov edx, dword ptr [ecx]
// 0067a64f  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0067a652  ffd0                 call eax
// 0067a654  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?SetParent@CXTPControls@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
