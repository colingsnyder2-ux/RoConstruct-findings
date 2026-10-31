// roc 2011-06 004409f0  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004409f0
//
// 004409f0  0fb7442404           movzx eax, word ptr [esp + 4]
// 004409f5  83ec14               sub esp, 0x14
// 004409f8  56                   push esi
// 004409f9  50                   push eax
// 004409fa  68108aa600           push 0xa68a10
// 004409ff  8d4c240c             lea ecx, [esp + 0xc]
// 00440a03  6a09                 push 9
// 00440a05  51                   push ecx
// 00440a06  ff15c409a400         call dword ptr [0xa409c4]
// 00440a0c  6a10                 push 0x10
// 00440a0e  8d542418             lea edx, [esp + 0x18]
// 00440a12  52                   push edx
// 00440a13  8bf0                 mov esi, eax
// 00440a15  8b442438             mov eax, dword ptr [esp + 0x38]
// 00440a19  6a12                 push 0x12
// 00440a1b  50                   push eax
// 00440a1c  ff153c0aa400         call dword ptr [0xa40a3c]
// 00440a22  50                   push eax
// 00440a23  e8e829fcff           call 0x403410
// 00440a28  83c424               add esp, 0x24
// 00440a2b  8bc6                 mov eax, esi
// 00440a2d  5e                   pop esi
// 00440a2e  83c414               add esp, 0x14
// 00440a31  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCR@ATL@@YAH_WPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp