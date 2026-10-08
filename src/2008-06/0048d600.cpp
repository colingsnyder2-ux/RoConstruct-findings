// roc 2008-06 0048d600  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d600
//
// 0048d600  51                   push ecx
// 0048d601  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048d605  56                   push esi
// 0048d606  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048d60a  50                   push eax
// 0048d60b  56                   push esi
// 0048d60c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0048d614  e877f9ffff           call 0x48cf90
// 0048d619  83c408               add esp, 8
// 0048d61c  8bc6                 mov eax, esi
// 0048d61e  5e                   pop esi
// 0048d61f  59                   pop ecx
// 0048d620  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
