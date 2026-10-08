// roc 2007-03 006a3810  unit: seg_006a0000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a3810
//
// 006a3810  8b442404             mov eax, dword ptr [esp + 4]
// 006a3814  56                   push esi
// 006a3815  50                   push eax
// 006a3816  8bf1                 mov esi, ecx
// 006a3818  e823dcf8ff           call 0x631440
// 006a381d  8bce                 mov ecx, esi
// 006a381f  e81ce5ffff           call 0x6a1d40
// 006a3824  5e                   pop esi
// 006a3825  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?putInKernel@Contact@RBX@@EAEXPAVKernel@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
