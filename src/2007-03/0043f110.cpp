// roc 2007-03 0043f110  unit: seg_00430000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043f110
//
// 0043f110  56                   push esi
// 0043f111  57                   push edi
// 0043f112  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043f116  57                   push edi
// 0043f117  8bf1                 mov esi, ecx
// 0043f119  ff157ce77700         call dword ptr [0x77e77c]
// 0043f11f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0043f122  89461c               mov dword ptr [esi + 0x1c], eax
// 0043f125  5f                   pop edi
// 0043f126  8bc6                 mov eax, esi
// 0043f128  5e                   pop esi
// 0043f129  c20400               ret 4
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
