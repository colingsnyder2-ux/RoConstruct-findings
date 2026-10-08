// roc 2007-08 00489c30  unit: RBX::Network::VPlayer::?$Notifier  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489c30
//
// 00489c30  51                   push ecx
// 00489c31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00489c35  56                   push esi
// 00489c36  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00489c3a  50                   push eax
// 00489c3b  56                   push esi
// 00489c3c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00489c44  e807feffff           call 0x489a50
// 00489c49  83c408               add esp, 8
// 00489c4c  8bc6                 mov eax, esi
// 00489c4e  5e                   pop esi
// 00489c4f  59                   pop ecx
// 00489c50  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
