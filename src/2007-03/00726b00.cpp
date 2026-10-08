// roc 2007-03 00726b00  unit: seg_00720000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726b00
//
// 00726b00  56                   push esi
// 00726b01  57                   push edi
// 00726b02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00726b06  57                   push edi
// 00726b07  8bf1                 mov esi, ecx
// 00726b09  ff156ce97700         call dword ptr [0x77e96c]
// 00726b0f  c70698427800         mov dword ptr [esi], 0x784298
// 00726b15  8b470c               mov eax, dword ptr [edi + 0xc]
// 00726b18  89460c               mov dword ptr [esi + 0xc], eax
// 00726b1b  5f                   pop edi
// 00726b1c  c7068c6d7e00         mov dword ptr [esi], 0x7e6d8c
// 00726b22  8bc6                 mov eax, esi
// 00726b24  5e                   pop esi
// 00726b25  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
