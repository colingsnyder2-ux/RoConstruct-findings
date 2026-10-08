// roc 2010-06 0051d2c0  unit: RakPeer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051d2c0
//
// 0051d2c0  56                   push esi
// 0051d2c1  57                   push edi
// 0051d2c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051d2c6  57                   push edi
// 0051d2c7  6a10                 push 0x10
// 0051d2c9  8bf1                 mov esi, ecx
// 0051d2cb  6a00                 push 0
// 0051d2cd  56                   push esi
// 0051d2ce  c6865802000001       mov byte ptr [esi + 0x258], 1
// 0051d2d5  e8c62f0000           call 0x5202a0
// 0051d2da  57                   push edi
// 0051d2db  6a10                 push 0x10
// 0051d2dd  8d8620010000         lea eax, [esi + 0x120]
// 0051d2e3  6a01                 push 1
// 0051d2e5  50                   push eax
// 0051d2e6  e8b52f0000           call 0x5202a0
// 0051d2eb  6a00                 push 0
// 0051d2ed  6a01                 push 1
// 0051d2ef  81c640020000         add esi, 0x240
// 0051d2f5  56                   push esi
// 0051d2f6  e8c5300000           call 0x5203c0
// 0051d2fb  83c42c               add esp, 0x2c
// 0051d2fe  5f                   pop edi
// 0051d2ff  5e                   pop esi
// 0051d300  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
