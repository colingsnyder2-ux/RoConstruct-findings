// roc 2010-06 00430b10  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430b10
//
// 00430b10  8b442404             mov eax, dword ptr [esp + 4]
// 00430b14  83ec18               sub esp, 0x18
// 00430b17  56                   push esi
// 00430b18  50                   push eax
// 00430b19  682c70a000           push 0xa0702c
// 00430b1e  8d4c240c             lea ecx, [esp + 0xc]
// 00430b22  6a0b                 push 0xb
// 00430b24  51                   push ecx
// 00430b25  ff1568a89e00         call dword ptr [0x9ea868]
// 00430b2b  6a14                 push 0x14
// 00430b2d  8d542418             lea edx, [esp + 0x18]
// 00430b31  52                   push edx
// 00430b32  8bf0                 mov esi, eax
// 00430b34  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00430b38  6a16                 push 0x16
// 00430b3a  50                   push eax
// 00430b3b  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00430b41  50                   push eax
// 00430b42  e8f91efdff           call 0x402a40
// 00430b47  83c424               add esp, 0x24
// 00430b4a  8bc6                 mov eax, esi
// 00430b4c  5e                   pop esi
// 00430b4d  83c418               add esp, 0x18
// 00430b50  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCRPair@ATL@@YAHKPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp