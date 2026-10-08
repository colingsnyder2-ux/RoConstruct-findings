// roc 2008-06 0055a470  unit: RBX::VInstance::?$NonFactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a470
//
// 0055a470  51                   push ecx
// 0055a471  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055a475  56                   push esi
// 0055a476  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055a47a  50                   push eax
// 0055a47b  56                   push esi
// 0055a47c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055a484  e8075decff           call 0x420190
// 0055a489  83c408               add esp, 8
// 0055a48c  8bc6                 mov eax, esi
// 0055a48e  5e                   pop esi
// 0055a48f  59                   pop ecx
// 0055a490  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
