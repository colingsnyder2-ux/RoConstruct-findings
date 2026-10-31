// roc 2009-12 004304d0  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004304d0
//
// 004304d0  0fb7442404           movzx eax, word ptr [esp + 4]
// 004304d5  83ec14               sub esp, 0x14
// 004304d8  56                   push esi
// 004304d9  50                   push eax
// 004304da  6898629a00           push 0x9a6298
// 004304df  8d4c240c             lea ecx, [esp + 0xc]
// 004304e3  6a09                 push 9
// 004304e5  51                   push ecx
// 004304e6  ff15d8b79800         call dword ptr [0x98b7d8]
// 004304ec  6a10                 push 0x10
// 004304ee  8d542418             lea edx, [esp + 0x18]
// 004304f2  52                   push edx
// 004304f3  8bf0                 mov esi, eax
// 004304f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 004304f9  6a12                 push 0x12
// 004304fb  50                   push eax
// 004304fc  ff157cb79800         call dword ptr [0x98b77c]
// 00430502  50                   push eax
// 00430503  e8e824fdff           call 0x4029f0
// 00430508  83c424               add esp, 0x24
// 0043050b  8bc6                 mov eax, esi
// 0043050d  5e                   pop esi
// 0043050e  83c414               add esp, 0x14
// 00430511  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCR@ATL@@YAH_WPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp