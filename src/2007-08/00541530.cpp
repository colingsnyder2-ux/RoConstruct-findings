// roc 2007-08 00541530  unit: RBX::VInstance::?$NonFactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541530
//
// 00541530  51                   push ecx
// 00541531  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00541535  56                   push esi
// 00541536  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054153a  50                   push eax
// 0054153b  56                   push esi
// 0054153c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00541544  e817bbedff           call 0x41d060
// 00541549  83c408               add esp, 8
// 0054154c  8bc6                 mov eax, esi
// 0054154e  5e                   pop esi
// 0054154f  59                   pop ecx
// 00541550  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
