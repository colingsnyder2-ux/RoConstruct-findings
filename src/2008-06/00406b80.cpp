// roc 2008-06 00406b80  unit: VCApp::?$CComObject  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406b80
//
// 00406b80  56                   push esi
// 00406b81  57                   push edi
// 00406b82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00406b86  57                   push edi
// 00406b87  8bf1                 mov esi, ecx
// 00406b89  ff1588288000         call dword ptr [0x802888]
// 00406b8f  c7069cb48000         mov dword ptr [esi], 0x80b49c
// 00406b95  8b470c               mov eax, dword ptr [edi + 0xc]
// 00406b98  89460c               mov dword ptr [esi + 0xc], eax
// 00406b9b  5f                   pop edi
// 00406b9c  8bc6                 mov eax, esi
// 00406b9e  5e                   pop esi
// 00406b9f  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0thread_exception@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
