// roc 2009-06 00662a70  unit: DxUserInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662a70
//
// 00662a70  56                   push esi
// 00662a71  57                   push edi
// 00662a72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00662a76  6a01                 push 1
// 00662a78  57                   push edi
// 00662a79  8bf1                 mov esi, ecx
// 00662a7b  e8b0fa0100           call 0x682530
// 00662a80  6a04                 push 4
// 00662a82  57                   push edi
// 00662a83  8d4e08               lea ecx, [esi + 8]
// 00662a86  e8a5fa0100           call 0x682530
// 00662a8b  6a03                 push 3
// 00662a8d  57                   push edi
// 00662a8e  8d4e10               lea ecx, [esi + 0x10]
// 00662a91  e89afa0100           call 0x682530
// 00662a96  6a00                 push 0
// 00662a98  57                   push edi
// 00662a99  8d4e18               lea ecx, [esi + 0x18]
// 00662a9c  e88ffa0100           call 0x682530
// 00662aa1  6a05                 push 5
// 00662aa3  57                   push edi
// 00662aa4  8d4e20               lea ecx, [esi + 0x20]
// 00662aa7  e884fa0100           call 0x682530
// 00662aac  6a02                 push 2
// 00662aae  57                   push edi
// 00662aaf  8d4e28               lea ecx, [esi + 0x28]
// 00662ab2  e879fa0100           call 0x682530
// 00662ab7  5f                   pop edi
// 00662ab8  8bc6                 mov eax, esi
// 00662aba  5e                   pop esi
// 00662abb  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??0Surfaces@RBX@@QAE@PAVPartInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
