// roc 2007-03 00408bd0  unit: seg_00400000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408bd0
//
// 00408bd0  56                   push esi
// 00408bd1  57                   push edi
// 00408bd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00408bd6  57                   push edi
// 00408bd7  8bf1                 mov esi, ecx
// 00408bd9  ff156ce97700         call dword ptr [0x77e96c]
// 00408bdf  c70698427800         mov dword ptr [esi], 0x784298
// 00408be5  8b470c               mov eax, dword ptr [edi + 0xc]
// 00408be8  89460c               mov dword ptr [esi + 0xc], eax
// 00408beb  5f                   pop edi
// 00408bec  8bc6                 mov eax, esi
// 00408bee  5e                   pop esi
// 00408bef  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0thread_exception@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
