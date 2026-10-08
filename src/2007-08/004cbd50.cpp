// roc 2007-08 004cbd50  unit: CSHA1  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cbd50
//
// 004cbd50  56                   push esi
// 004cbd51  57                   push edi
// 004cbd52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cbd56  57                   push edi
// 004cbd57  6a10                 push 0x10
// 004cbd59  8bf1                 mov esi, ecx
// 004cbd5b  6a00                 push 0
// 004cbd5d  56                   push esi
// 004cbd5e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 004cbd65  e8560d0000           call 0x4ccac0
// 004cbd6a  57                   push edi
// 004cbd6b  6a10                 push 0x10
// 004cbd6d  8d8620010000         lea eax, [esi + 0x120]
// 004cbd73  6a01                 push 1
// 004cbd75  50                   push eax
// 004cbd76  e8450d0000           call 0x4ccac0
// 004cbd7b  6a00                 push 0
// 004cbd7d  6a01                 push 1
// 004cbd7f  81c640020000         add esi, 0x240
// 004cbd85  56                   push esi
// 004cbd86  e8950e0000           call 0x4ccc20
// 004cbd8b  83c42c               add esp, 0x2c
// 004cbd8e  5f                   pop edi
// 004cbd8f  5e                   pop esi
// 004cbd90  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
