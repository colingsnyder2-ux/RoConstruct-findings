// roc 2007-08 00408b90  unit: boost::thread_exception  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408b90
//
// 00408b90  56                   push esi
// 00408b91  57                   push edi
// 00408b92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00408b96  57                   push edi
// 00408b97  8bf1                 mov esi, ecx
// 00408b99  ff1500e77700         call dword ptr [0x77e700]
// 00408b9f  c70670527800         mov dword ptr [esi], 0x785270
// 00408ba5  8b470c               mov eax, dword ptr [edi + 0xc]
// 00408ba8  89460c               mov dword ptr [esi + 0xc], eax
// 00408bab  5f                   pop edi
// 00408bac  c7067c527800         mov dword ptr [esi], 0x78527c
// 00408bb2  8bc6                 mov eax, esi
// 00408bb4  5e                   pop esi
// 00408bb5  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
