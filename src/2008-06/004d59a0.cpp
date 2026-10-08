// roc 2008-06 004d59a0  unit: CSHA1  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d59a0
//
// 004d59a0  56                   push esi
// 004d59a1  57                   push edi
// 004d59a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d59a6  57                   push edi
// 004d59a7  6a10                 push 0x10
// 004d59a9  8bf1                 mov esi, ecx
// 004d59ab  6a00                 push 0
// 004d59ad  56                   push esi
// 004d59ae  c6865802000001       mov byte ptr [esi + 0x258], 1
// 004d59b5  e8360d0000           call 0x4d66f0
// 004d59ba  57                   push edi
// 004d59bb  6a10                 push 0x10
// 004d59bd  8d8620010000         lea eax, [esi + 0x120]
// 004d59c3  6a01                 push 1
// 004d59c5  50                   push eax
// 004d59c6  e8250d0000           call 0x4d66f0
// 004d59cb  6a00                 push 0
// 004d59cd  6a01                 push 1
// 004d59cf  81c640020000         add esi, 0x240
// 004d59d5  56                   push esi
// 004d59d6  e8350e0000           call 0x4d6810
// 004d59db  83c42c               add esp, 0x2c
// 004d59de  5f                   pop edi
// 004d59df  5e                   pop esi
// 004d59e0  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
