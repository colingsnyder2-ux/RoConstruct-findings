// roc 2007-08 00428d20  unit: COleException  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00428d20
//
// 00428d20  56                   push esi
// 00428d21  57                   push edi
// 00428d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00428d26  57                   push edi
// 00428d27  8bf1                 mov esi, ecx
// 00428d29  ff1500e77700         call dword ptr [0x77e700]
// 00428d2f  c70670527800         mov dword ptr [esi], 0x785270
// 00428d35  8b470c               mov eax, dword ptr [edi + 0xc]
// 00428d38  89460c               mov dword ptr [esi + 0xc], eax
// 00428d3b  5f                   pop edi
// 00428d3c  c7064ca17800         mov dword ptr [esi], 0x78a14c
// 00428d42  8bc6                 mov eax, esi
// 00428d44  5e                   pop esi
// 00428d45  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
