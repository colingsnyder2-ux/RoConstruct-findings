// roc 2007-03 004c0750  unit: seg_004c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c0750
//
// 004c0750  56                   push esi
// 004c0751  57                   push edi
// 004c0752  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c0756  57                   push edi
// 004c0757  6a10                 push 0x10
// 004c0759  8bf1                 mov esi, ecx
// 004c075b  6a00                 push 0
// 004c075d  56                   push esi
// 004c075e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 004c0765  e8d60e0000           call 0x4c1640
// 004c076a  57                   push edi
// 004c076b  6a10                 push 0x10
// 004c076d  8d8620010000         lea eax, [esi + 0x120]
// 004c0773  6a01                 push 1
// 004c0775  50                   push eax
// 004c0776  e8c50e0000           call 0x4c1640
// 004c077b  6a00                 push 0
// 004c077d  6a01                 push 1
// 004c077f  81c640020000         add esi, 0x240
// 004c0785  56                   push esi
// 004c0786  e8d50f0000           call 0x4c1760
// 004c078b  83c42c               add esp, 0x2c
// 004c078e  5f                   pop edi
// 004c078f  5e                   pop esi
// 004c0790  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
