// roc 2012-06 005c7760  unit: RakNet::RakPeer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c7760
//
// 005c7760  56                   push esi
// 005c7761  57                   push edi
// 005c7762  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c7766  57                   push edi
// 005c7767  6a10                 push 0x10
// 005c7769  8bf1                 mov esi, ecx
// 005c776b  6a00                 push 0
// 005c776d  56                   push esi
// 005c776e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 005c7775  e856230000           call 0x5c9ad0
// 005c777a  57                   push edi
// 005c777b  6a10                 push 0x10
// 005c777d  8d8620010000         lea eax, [esi + 0x120]
// 005c7783  6a01                 push 1
// 005c7785  50                   push eax
// 005c7786  e845230000           call 0x5c9ad0
// 005c778b  6a00                 push 0
// 005c778d  6a01                 push 1
// 005c778f  81c640020000         add esi, 0x240
// 005c7795  56                   push esi
// 005c7796  e855240000           call 0x5c9bf0
// 005c779b  83c42c               add esp, 0x2c
// 005c779e  5f                   pop edi
// 005c779f  5e                   pop esi
// 005c77a0  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
