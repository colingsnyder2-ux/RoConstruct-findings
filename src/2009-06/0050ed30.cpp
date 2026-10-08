// roc 2009-06 0050ed30  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050ed30
//
// 0050ed30  56                   push esi
// 0050ed31  57                   push edi
// 0050ed32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050ed36  57                   push edi
// 0050ed37  6a10                 push 0x10
// 0050ed39  8bf1                 mov esi, ecx
// 0050ed3b  6a00                 push 0
// 0050ed3d  56                   push esi
// 0050ed3e  c6865802000001       mov byte ptr [esi + 0x258], 1
// 0050ed45  e8163f0000           call 0x512c60
// 0050ed4a  57                   push edi
// 0050ed4b  6a10                 push 0x10
// 0050ed4d  8d8620010000         lea eax, [esi + 0x120]
// 0050ed53  6a01                 push 1
// 0050ed55  50                   push eax
// 0050ed56  e8053f0000           call 0x512c60
// 0050ed5b  6a00                 push 0
// 0050ed5d  6a01                 push 1
// 0050ed5f  81c640020000         add esi, 0x240
// 0050ed65  56                   push esi
// 0050ed66  e815400000           call 0x512d80
// 0050ed6b  83c42c               add esp, 0x2c
// 0050ed6e  5f                   pop edi
// 0050ed6f  5e                   pop esi
// 0050ed70  c20400               ret 4
// library rbxgs-raknet/DataBlockEncryptor.cpp (function ?SetKey@DataBlockEncryptor@@QAEXQBE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DataBlockEncryptor.cpp
