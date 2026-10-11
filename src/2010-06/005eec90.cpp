// roc 2010-06 005eec90  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005eec90
//
// 005eec90  64a100000000         mov eax, dword ptr fs:[0]
// 005eec96  6aff                 push -1
// 005eec98  685bd09800           push 0x98d05b
// 005eec9d  50                   push eax
// 005eec9e  64892500000000       mov dword ptr fs:[0], esp
// 005eeca5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eeca9  56                   push esi
// 005eecaa  8bf1                 mov esi, ecx
// 005eecac  6a1c                 push 0x1c
// 005eecae  8906                 mov dword ptr [esi], eax
// 005eecb0  c7460402000000       mov dword ptr [esi + 4], 2
// 005eecb7  e8e48c1b00           call 0x7a79a0
// 005eecbc  83c404               add esp, 4
// 005eecbf  89442414             mov dword ptr [esp + 0x14], eax
// 005eecc3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005eeccb  85c0                 test eax, eax
// 005eeccd  740f                 je 0x5eecde
// 005eeccf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005eecd3  51                   push ecx
// 005eecd4  8bc8                 mov ecx, eax
// 005eecd6  ff1510a49e00         call dword ptr [0x9ea410]
// 005eecdc  eb02                 jmp 0x5eece0
// 005eecde  33c0                 xor eax, eax
// 005eece0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005eece4  894608               mov dword ptr [esi + 8], eax
// 005eece7  8bc6                 mov eax, esi
// 005eece9  64890d00000000       mov dword ptr fs:[0], ecx
// 005eecf0  5e                   pop esi
// 005eecf1  83c40c               add esp, 0xc
// 005eecf4  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
