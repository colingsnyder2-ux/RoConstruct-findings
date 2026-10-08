// roc 2010-06 004ab030  unit: RBX::Network::Player  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ab030
//
// 004ab030  51                   push ecx
// 004ab031  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ab035  56                   push esi
// 004ab036  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ab03a  50                   push eax
// 004ab03b  56                   push esi
// 004ab03c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ab044  e897f4ffff           call 0x4aa4e0
// 004ab049  83c408               add esp, 8
// 004ab04c  8bc6                 mov eax, esi
// 004ab04e  5e                   pop esi
// 004ab04f  59                   pop ecx
// 004ab050  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
