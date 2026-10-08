// from server: 100% by auto
// roc 2008-06 0047fb80  unit: G3D::GWindow  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047fb80
//
// 0047fb80  6aff                 push -1
// 0047fb82  689c6a7c00           push 0x7c6a9c
// 0047fb87  64a100000000         mov eax, dword ptr fs:[0]
// 0047fb8d  50                   push eax
// 0047fb8e  64892500000000       mov dword ptr fs:[0], esp
// 0047fb95  51                   push ecx
// 0047fb96  56                   push esi
// 0047fb97  8bf1                 mov esi, ecx
// 0047fb99  57                   push edi
// 0047fb9a  89742408             mov dword ptr [esp + 8], esi
// 0047fb9e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047fba1  33ff                 xor edi, edi
// 0047fba3  50                   push eax
// 0047fba4  897c2418             mov dword ptr [esp + 0x18], edi
// 0047fba8  e873810800           call 0x507d20
// 0047fbad  83c404               add esp, 4
// 0047fbb0  8d4e04               lea ecx, [esi + 4]
// 0047fbb3  897e2c               mov dword ptr [esi + 0x2c], edi
// 0047fbb6  897e30               mov dword ptr [esi + 0x30], edi
// 0047fbb9  897e34               mov dword ptr [esi + 0x34], edi
// 0047fbbc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047fbc4  ff1568248000         call dword ptr [0x802468]
// 0047fbca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047fbce  5f                   pop edi
// 0047fbcf  5e                   pop esi
// 0047fbd0  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fbd7  83c410               add esp, 0x10
// 0047fbda  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
