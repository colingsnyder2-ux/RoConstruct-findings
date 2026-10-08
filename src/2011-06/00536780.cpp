// roc 2011-06 00536780  unit: CSHA1  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536780
//
// 00536780  56                   push esi
// 00536781  57                   push edi
// 00536782  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536786  57                   push edi
// 00536787  6a10                 push 0x10
// 00536789  8bf1                 mov esi, ecx
// 0053678b  6a00                 push 0
// 0053678d  56                   push esi
// 0053678e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 00536795  e8d6420000           call 0x53aa70
// 0053679a  57                   push edi
// 0053679b  6a10                 push 0x10
// 0053679d  8d8620010000         lea eax, [esi + 0x120]
// 005367a3  6a01                 push 1
// 005367a5  50                   push eax
// 005367a6  e8c5420000           call 0x53aa70
// 005367ab  6a00                 push 0
// 005367ad  6a01                 push 1
// 005367af  81c640020000         add esi, 0x240
// 005367b5  56                   push esi
// 005367b6  e8d5430000           call 0x53ab90
// 005367bb  83c42c               add esp, 0x2c
// 005367be  5f                   pop edi
// 005367bf  5e                   pop esi
// 005367c0  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
