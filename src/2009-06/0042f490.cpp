// roc 2009-06 0042f490  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f490
//
// 0042f490  0fb7442404           movzx eax, word ptr [esp + 4]
// 0042f495  83ec14               sub esp, 0x14
// 0042f498  56                   push esi
// 0042f499  50                   push eax
// 0042f49a  6828358b00           push 0x8b3528
// 0042f49f  8d4c240c             lea ecx, [esp + 0xc]
// 0042f4a3  6a09                 push 9
// 0042f4a5  51                   push ecx
// 0042f4a6  ff153ce98900         call dword ptr [0x89e93c]
// 0042f4ac  6a10                 push 0x10
// 0042f4ae  8d542418             lea edx, [esp + 0x18]
// 0042f4b2  52                   push edx
// 0042f4b3  8bf0                 mov esi, eax
// 0042f4b5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0042f4b9  6a12                 push 0x12
// 0042f4bb  50                   push eax
// 0042f4bc  ff1590e98900         call dword ptr [0x89e990]
// 0042f4c2  50                   push eax
// 0042f4c3  e85838fdff           call 0x402d20
// 0042f4c8  83c424               add esp, 0x24
// 0042f4cb  8bc6                 mov eax, esi
// 0042f4cd  5e                   pop esi
// 0042f4ce  83c414               add esp, 0x14
// 0042f4d1  c3                   ret 
// copied from an identical function in another client (function ?_AtlCopyNCR@ATL@@YAH_WPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_escapexml_dll_efe68300ee96d383.cpp