// roc 2010-06 00430ac0  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430ac0
//
// 00430ac0  0fb7442404           movzx eax, word ptr [esp + 4]
// 00430ac5  83ec14               sub esp, 0x14
// 00430ac8  56                   push esi
// 00430ac9  50                   push eax
// 00430aca  681870a000           push 0xa07018
// 00430acf  8d4c240c             lea ecx, [esp + 0xc]
// 00430ad3  6a09                 push 9
// 00430ad5  51                   push ecx
// 00430ad6  ff1568a89e00         call dword ptr [0x9ea868]
// 00430adc  6a10                 push 0x10
// 00430ade  8d542418             lea edx, [esp + 0x18]
// 00430ae2  52                   push edx
// 00430ae3  8bf0                 mov esi, eax
// 00430ae5  8b442438             mov eax, dword ptr [esp + 0x38]
// 00430ae9  6a12                 push 0x12
// 00430aeb  50                   push eax
// 00430aec  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00430af2  50                   push eax
// 00430af3  e8481ffdff           call 0x402a40
// 00430af8  83c424               add esp, 0x24
// 00430afb  8bc6                 mov eax, esi
// 00430afd  5e                   pop esi
// 00430afe  83c414               add esp, 0x14
// 00430b01  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCR@ATL@@YAH_WPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp