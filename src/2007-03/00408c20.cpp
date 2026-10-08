// roc 2007-03 00408c20  unit: seg_00400000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408c20
//
// 00408c20  56                   push esi
// 00408c21  57                   push edi
// 00408c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00408c26  57                   push edi
// 00408c27  8bf1                 mov esi, ecx
// 00408c29  ff156ce97700         call dword ptr [0x77e96c]
// 00408c2f  c70698427800         mov dword ptr [esi], 0x784298
// 00408c35  8b470c               mov eax, dword ptr [edi + 0xc]
// 00408c38  89460c               mov dword ptr [esi + 0xc], eax
// 00408c3b  5f                   pop edi
// 00408c3c  c706a4427800         mov dword ptr [esi], 0x7842a4
// 00408c42  8bc6                 mov eax, esi
// 00408c44  5e                   pop esi
// 00408c45  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
