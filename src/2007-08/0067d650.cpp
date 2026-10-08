// from server: 100% by auto
// roc 2007-08 0067d650  unit: CXTPControls  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d650
//
// 0067d650  8b442404             mov eax, dword ptr [esp + 4]
// 0067d654  85c0                 test eax, eax
// 0067d656  7c14                 jl 0x67d66c
// 0067d658  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0067d65b  7d0f                 jge 0x67d66c
// 0067d65d  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0067d660  8b0482               mov eax, dword ptr [edx + eax*4]
// 0067d663  89442404             mov dword ptr [esp + 4], eax
// 0067d667  e964ffffff           jmp 0x67d5d0
// 0067d66c  33c0                 xor eax, eax
// 0067d66e  89442404             mov dword ptr [esp + 4], eax
// 0067d672  e959ffffff           jmp 0x67d5d0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?SetControlType@CXTPControls@@QAEPAVCXTPControl@@HW4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
