// roc 2011-06 00440a40  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00440a40
//
// 00440a40  8b442404             mov eax, dword ptr [esp + 4]
// 00440a44  83ec18               sub esp, 0x18
// 00440a47  56                   push esi
// 00440a48  50                   push eax
// 00440a49  68248aa600           push 0xa68a24
// 00440a4e  8d4c240c             lea ecx, [esp + 0xc]
// 00440a52  6a0b                 push 0xb
// 00440a54  51                   push ecx
// 00440a55  ff15c409a400         call dword ptr [0xa409c4]
// 00440a5b  6a14                 push 0x14
// 00440a5d  8d542418             lea edx, [esp + 0x18]
// 00440a61  52                   push edx
// 00440a62  8bf0                 mov esi, eax
// 00440a64  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00440a68  6a16                 push 0x16
// 00440a6a  50                   push eax
// 00440a6b  ff153c0aa400         call dword ptr [0xa40a3c]
// 00440a71  50                   push eax
// 00440a72  e89929fcff           call 0x403410
// 00440a77  83c424               add esp, 0x24
// 00440a7a  8bc6                 mov eax, esi
// 00440a7c  5e                   pop esi
// 00440a7d  83c418               add esp, 0x18
// 00440a80  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCRPair@ATL@@YAHKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp