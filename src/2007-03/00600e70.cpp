// roc 2007-03 00600e70  unit: seg_00600000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00600e70
//
// 00600e70  56                   push esi
// 00600e71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00600e75  81fe01010000         cmp esi, 0x101
// 00600e7b  7d3d                 jge 0x600eba
// 00600e7d  56                   push esi
// 00600e7e  ff1528e87700         call dword ptr [0x77e828]
// 00600e84  83c404               add esp, 4
// 00600e87  85c0                 test eax, eax
// 00600e89  56                   push esi
// 00600e8a  7417                 je 0x600ea3
// 00600e8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00600e90  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00600e93  68080a7c00           push 0x7c0a08
// 00600e98  51                   push ecx
// 00600e99  e8a279ffff           call 0x5f8840
// 00600e9e  83c40c               add esp, 0xc
// 00600ea1  5e                   pop esi
// 00600ea2  c3                   ret 
// 00600ea3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00600ea7  8b4234               mov eax, dword ptr [edx + 0x34]
// 00600eaa  68040a7c00           push 0x7c0a04
// 00600eaf  50                   push eax
// 00600eb0  e88b79ffff           call 0x5f8840
// 00600eb5  83c40c               add esp, 0xc
// 00600eb8  5e                   pop esi
// 00600eb9  c3                   ret 
// 00600eba  8b04b564057c00       mov eax, dword ptr [esi*4 + 0x7c0564]
// 00600ec1  5e                   pop esi
// 00600ec2  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll llex.c