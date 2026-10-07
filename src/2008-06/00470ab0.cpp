// roc 2008-06 00470ab0  unit: RBX::LDraw2Lua::LuaWriter  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470ab0
//
// 00470ab0  64a100000000         mov eax, dword ptr fs:[0]
// 00470ab6  6aff                 push -1
// 00470ab8  6809e77c00           push 0x7ce709
// 00470abd  50                   push eax
// 00470abe  64892500000000       mov dword ptr fs:[0], esp
// 00470ac5  83ec1c               sub esp, 0x1c
// 00470ac8  68031f0000           push 0x1f03
// 00470acd  ff1594298000         call dword ptr [0x802994]
// 00470ad3  68dcce8100           push 0x81cedc
// 00470ad8  50                   push eax
// 00470ad9  ff1504288000         call dword ptr [0x802804]
// 00470adf  83c408               add esp, 8
// 00470ae2  85c0                 test eax, eax
// 00470ae4  741b                 je 0x470b01
// 00470ae6  833decf8960000       cmp dword ptr [0x96f8ec], 0
// 00470aed  7412                 je 0x470b01
// 00470aef  833df4f8960000       cmp dword ptr [0x96f8f4], 0
// 00470af6  7409                 je 0x470b01
// 00470af8  833de8f8960000       cmp dword ptr [0x96f8e8], 0
// 00470aff  7516                 jne 0x470b17
// 00470b01  c60577ee960000       mov byte ptr [0x96ee77], 0
// 00470b08  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00470b0c  64890d00000000       mov dword ptr fs:[0], ecx
// 00470b13  83c428               add esp, 0x28
// 00470b16  c3                   ret 
// 00470b17  56                   push esi
// 00470b18  e883feffff           call 0x4709a0
// 00470b1d  68089d8100           push 0x819d08
// 00470b22  8d4c2408             lea ecx, [esp + 8]
// 00470b26  8bf0                 mov esi, eax
// 00470b28  ff1558248000         call dword ptr [0x802458]
// 00470b2e  8d442404             lea eax, [esp + 4]
// 00470b32  50                   push eax
// 00470b33  56                   push esi
// 00470b34  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00470b3c  e86f150a00           call 0x5120b0
// 00470b41  83c408               add esp, 8
// 00470b44  8d4c2404             lea ecx, [esp + 4]
// 00470b48  a277ee9600           mov byte ptr [0x96ee77], al
// 00470b4d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00470b55  ff1568248000         call dword ptr [0x802468]
// 00470b5b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00470b5f  5e                   pop esi
// 00470b60  64890d00000000       mov dword ptr fs:[0], ecx
// 00470b67  83c428               add esp, 0x28
// 00470b6a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
