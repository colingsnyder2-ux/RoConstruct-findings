// roc 2008-06 00470700  unit: RBX::LDraw2Lua::LuaWriter  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00470700
//
// 00470700  6aff                 push -1
// 00470702  6877407c00           push 0x7c4077
// 00470707  64a100000000         mov eax, dword ptr fs:[0]
// 0047070d  50                   push eax
// 0047070e  64892500000000       mov dword ptr fs:[0], esp
// 00470715  51                   push ecx
// 00470716  53                   push ebx
// 00470717  56                   push esi
// 00470718  8bf1                 mov esi, ecx
// 0047071a  89742408             mov dword ptr [esp + 8], esi
// 0047071e  8d4e54               lea ecx, [esi + 0x54]
// 00470721  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00470729  ff1568248000         call dword ptr [0x802468]
// 0047072f  8b4628               mov eax, dword ptr [esi + 0x28]
// 00470732  33db                 xor ebx, ebx
// 00470734  50                   push eax
// 00470735  885c2418             mov byte ptr [esp + 0x18], bl
// 00470739  e8e2750900           call 0x507d20
// 0047073e  83c404               add esp, 4
// 00470741  8d4e0c               lea ecx, [esi + 0xc]
// 00470744  895e28               mov dword ptr [esi + 0x28], ebx
// 00470747  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0047074a  895e30               mov dword ptr [esi + 0x30], ebx
// 0047074d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00470755  ff1568248000         call dword ptr [0x802468]
// 0047075b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047075f  5e                   pop esi
// 00470760  5b                   pop ebx
// 00470761  64890d00000000       mov dword ptr fs:[0], ecx
// 00470768  83c410               add esp, 0x10
// 0047076b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
