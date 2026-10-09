// roc 2009-12 0056e970  unit: RakPeer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056e970
//
// 0056e970  56                   push esi
// 0056e971  57                   push edi
// 0056e972  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056e976  57                   push edi
// 0056e977  6a10                 push 0x10
// 0056e979  8bf1                 mov esi, ecx
// 0056e97b  6a00                 push 0
// 0056e97d  56                   push esi
// 0056e97e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 0056e985  e826300000           call 0x5719b0
// 0056e98a  57                   push edi
// 0056e98b  6a10                 push 0x10
// 0056e98d  8d8620010000         lea eax, [esi + 0x120]
// 0056e993  6a01                 push 1
// 0056e995  50                   push eax
// 0056e996  e815300000           call 0x5719b0
// 0056e99b  6a00                 push 0
// 0056e99d  6a01                 push 1
// 0056e99f  81c640020000         add esi, 0x240
// 0056e9a5  56                   push esi
// 0056e9a6  e825310000           call 0x571ad0
// 0056e9ab  83c42c               add esp, 0x2c
// 0056e9ae  5f                   pop edi
// 0056e9af  5e                   pop esi
// 0056e9b0  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
