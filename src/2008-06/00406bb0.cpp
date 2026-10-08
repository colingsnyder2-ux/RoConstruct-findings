// roc 2008-06 00406bb0  unit: VCApp::?$CComObject  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406bb0
//
// 00406bb0  56                   push esi
// 00406bb1  57                   push edi
// 00406bb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00406bb6  57                   push edi
// 00406bb7  8bf1                 mov esi, ecx
// 00406bb9  ff1588288000         call dword ptr [0x802888]
// 00406bbf  c7069cb48000         mov dword ptr [esi], 0x80b49c
// 00406bc5  8b470c               mov eax, dword ptr [edi + 0xc]
// 00406bc8  89460c               mov dword ptr [esi + 0xc], eax
// 00406bcb  5f                   pop edi
// 00406bcc  c706a8b48000         mov dword ptr [esi], 0x80b4a8
// 00406bd2  8bc6                 mov eax, esi
// 00406bd4  5e                   pop esi
// 00406bd5  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??0lock_error@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
