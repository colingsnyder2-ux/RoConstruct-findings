// from server: 100% by auto
// roc 2010-06 00488790  unit: G3D::GWindow  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488790
//
// 00488790  6aff                 push -1
// 00488792  68bc5f9800           push 0x985fbc
// 00488797  64a100000000         mov eax, dword ptr fs:[0]
// 0048879d  50                   push eax
// 0048879e  64892500000000       mov dword ptr fs:[0], esp
// 004887a5  51                   push ecx
// 004887a6  56                   push esi
// 004887a7  8bf1                 mov esi, ecx
// 004887a9  57                   push edi
// 004887aa  89742408             mov dword ptr [esp + 8], esi
// 004887ae  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004887b1  33ff                 xor edi, edi
// 004887b3  50                   push eax
// 004887b4  897c2418             mov dword ptr [esp + 0x18], edi
// 004887b8  e803520c00           call 0x54d9c0
// 004887bd  83c404               add esp, 4
// 004887c0  8d4e04               lea ecx, [esi + 4]
// 004887c3  897e2c               mov dword ptr [esi + 0x2c], edi
// 004887c6  897e30               mov dword ptr [esi + 0x30], edi
// 004887c9  897e34               mov dword ptr [esi + 0x34], edi
// 004887cc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004887d4  ff1500a49e00         call dword ptr [0x9ea400]
// 004887da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004887de  5f                   pop edi
// 004887df  5e                   pop esi
// 004887e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004887e7  83c410               add esp, 0x10
// 004887ea  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
