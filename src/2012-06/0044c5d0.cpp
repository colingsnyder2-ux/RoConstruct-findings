// roc 2012-06 0044c5d0  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044c5d0
//
// 0044c5d0  0fb7442404           movzx eax, word ptr [esp + 4]
// 0044c5d5  83ec14               sub esp, 0x14
// 0044c5d8  56                   push esi
// 0044c5d9  50                   push eax
// 0044c5da  686830b500           push 0xb53068
// 0044c5df  8d4c240c             lea ecx, [esp + 0xc]
// 0044c5e3  6a09                 push 9
// 0044c5e5  51                   push ecx
// 0044c5e6  ff153c2ab200         call dword ptr [0xb22a3c]
// 0044c5ec  6a10                 push 0x10
// 0044c5ee  8d542418             lea edx, [esp + 0x18]
// 0044c5f2  52                   push edx
// 0044c5f3  8bf0                 mov esi, eax
// 0044c5f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0044c5f9  6a12                 push 0x12
// 0044c5fb  50                   push eax
// 0044c5fc  ff15fc29b200         call dword ptr [0xb229fc]
// 0044c602  50                   push eax
// 0044c603  e8187afbff           call 0x404020
// 0044c608  83c424               add esp, 0x24
// 0044c60b  8bc6                 mov eax, esi
// 0044c60d  5e                   pop esi
// 0044c60e  83c414               add esp, 0x14
// 0044c611  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCR@ATL@@YAH_WPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp