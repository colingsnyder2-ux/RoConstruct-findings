// roc 2009-06 0042f4e0  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f4e0
//
// 0042f4e0  8b442404             mov eax, dword ptr [esp + 4]
// 0042f4e4  83ec18               sub esp, 0x18
// 0042f4e7  56                   push esi
// 0042f4e8  50                   push eax
// 0042f4e9  683c358b00           push 0x8b353c
// 0042f4ee  8d4c240c             lea ecx, [esp + 0xc]
// 0042f4f2  6a0b                 push 0xb
// 0042f4f4  51                   push ecx
// 0042f4f5  ff153ce98900         call dword ptr [0x89e93c]
// 0042f4fb  6a14                 push 0x14
// 0042f4fd  8d542418             lea edx, [esp + 0x18]
// 0042f501  52                   push edx
// 0042f502  8bf0                 mov esi, eax
// 0042f504  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0042f508  6a16                 push 0x16
// 0042f50a  50                   push eax
// 0042f50b  ff1590e98900         call dword ptr [0x89e990]
// 0042f511  50                   push eax
// 0042f512  e80938fdff           call 0x402d20
// 0042f517  83c424               add esp, 0x24
// 0042f51a  8bc6                 mov eax, esi
// 0042f51c  5e                   pop esi
// 0042f51d  83c418               add esp, 0x18
// 0042f520  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCRPair@ATL@@YAHKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp