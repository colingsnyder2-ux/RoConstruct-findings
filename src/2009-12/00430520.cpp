// roc 2009-12 00430520  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00430520
//
// 00430520  8b442404             mov eax, dword ptr [esp + 4]
// 00430524  83ec18               sub esp, 0x18
// 00430527  56                   push esi
// 00430528  50                   push eax
// 00430529  68ac629a00           push 0x9a62ac
// 0043052e  8d4c240c             lea ecx, [esp + 0xc]
// 00430532  6a0b                 push 0xb
// 00430534  51                   push ecx
// 00430535  ff15d8b79800         call dword ptr [0x98b7d8]
// 0043053b  6a14                 push 0x14
// 0043053d  8d542418             lea edx, [esp + 0x18]
// 00430541  52                   push edx
// 00430542  8bf0                 mov esi, eax
// 00430544  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00430548  6a16                 push 0x16
// 0043054a  50                   push eax
// 0043054b  ff157cb79800         call dword ptr [0x98b77c]
// 00430551  50                   push eax
// 00430552  e89924fdff           call 0x4029f0
// 00430557  83c424               add esp, 0x24
// 0043055a  8bc6                 mov eax, esi
// 0043055c  5e                   pop esi
// 0043055d  83c418               add esp, 0x18
// 00430560  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCRPair@ATL@@YAHKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp