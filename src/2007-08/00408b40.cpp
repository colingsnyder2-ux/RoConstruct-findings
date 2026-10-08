// roc 2007-08 00408b40  unit: VCApp::?$CComObject  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408b40
//
// 00408b40  56                   push esi
// 00408b41  57                   push edi
// 00408b42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00408b46  57                   push edi
// 00408b47  8bf1                 mov esi, ecx
// 00408b49  ff1500e77700         call dword ptr [0x77e700]
// 00408b4f  c70670527800         mov dword ptr [esi], 0x785270
// 00408b55  8b470c               mov eax, dword ptr [edi + 0xc]
// 00408b58  89460c               mov dword ptr [esi + 0xc], eax
// 00408b5b  5f                   pop edi
// 00408b5c  8bc6                 mov eax, esi
// 00408b5e  5e                   pop esi
// 00408b5f  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0thread_exception@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
