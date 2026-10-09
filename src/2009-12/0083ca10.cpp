// roc 2009-12 0083ca10  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ca10
//
// 0083ca10  56                   push esi
// 0083ca11  57                   push edi
// 0083ca12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083ca16  57                   push edi
// 0083ca17  8bf1                 mov esi, ecx
// 0083ca19  e8629effff           call 0x836880
// 0083ca1e  837f2c15             cmp dword ptr [edi + 0x2c], 0x15
// 0083ca22  7617                 jbe 0x83ca3b
// 0083ca24  6aff                 push -1
// 0083ca26  81c674010000         add esi, 0x174
// 0083ca2c  56                   push esi
// 0083ca2d  68b8409a00           push 0x9a40b8
// 0083ca32  57                   push edi
// 0083ca33  e8c83f0100           call 0x850a00
// 0083ca38  83c410               add esp, 0x10
// 0083ca3b  5f                   pop edi
// 0083ca3c  5e                   pop esi
// 0083ca3d  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?DoPropExchange@CXTPControlButtonColor@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
