// roc 2011-06 0071ed70  unit: RBX::AdvLuaDragger  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ed70
//
// 0071ed70  56                   push esi
// 0071ed71  57                   push edi
// 0071ed72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071ed76  6a01                 push 1
// 0071ed78  57                   push edi
// 0071ed79  8bf1                 mov esi, ecx
// 0071ed7b  e8009e0d00           call 0x7f8b80
// 0071ed80  6a04                 push 4
// 0071ed82  57                   push edi
// 0071ed83  8d4e08               lea ecx, [esi + 8]
// 0071ed86  e8f59d0d00           call 0x7f8b80
// 0071ed8b  6a03                 push 3
// 0071ed8d  57                   push edi
// 0071ed8e  8d4e10               lea ecx, [esi + 0x10]
// 0071ed91  e8ea9d0d00           call 0x7f8b80
// 0071ed96  6a00                 push 0
// 0071ed98  57                   push edi
// 0071ed99  8d4e18               lea ecx, [esi + 0x18]
// 0071ed9c  e8df9d0d00           call 0x7f8b80
// 0071eda1  6a05                 push 5
// 0071eda3  57                   push edi
// 0071eda4  8d4e20               lea ecx, [esi + 0x20]
// 0071eda7  e8d49d0d00           call 0x7f8b80
// 0071edac  6a02                 push 2
// 0071edae  57                   push edi
// 0071edaf  8d4e28               lea ecx, [esi + 0x28]
// 0071edb2  e8c99d0d00           call 0x7f8b80
// 0071edb7  5f                   pop edi
// 0071edb8  8bc6                 mov eax, esi
// 0071edba  5e                   pop esi
// 0071edbb  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
