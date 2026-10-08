// from server: 100% by auto
// roc 2009-06 004a9c20  unit: G3D::GWindow  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9c20
//
// 004a9c20  6aff                 push -1
// 004a9c22  683c188700           push 0x87183c
// 004a9c27  64a100000000         mov eax, dword ptr fs:[0]
// 004a9c2d  50                   push eax
// 004a9c2e  64892500000000       mov dword ptr fs:[0], esp
// 004a9c35  51                   push ecx
// 004a9c36  56                   push esi
// 004a9c37  8bf1                 mov esi, ecx
// 004a9c39  57                   push edi
// 004a9c3a  89742408             mov dword ptr [esp + 8], esi
// 004a9c3e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004a9c41  33ff                 xor edi, edi
// 004a9c43  50                   push eax
// 004a9c44  897c2418             mov dword ptr [esp + 0x18], edi
// 004a9c48  e843160c00           call 0x56b290
// 004a9c4d  83c404               add esp, 4
// 004a9c50  8d4e04               lea ecx, [esi + 4]
// 004a9c53  897e2c               mov dword ptr [esi + 0x2c], edi
// 004a9c56  897e30               mov dword ptr [esi + 0x30], edi
// 004a9c59  897e34               mov dword ptr [esi + 0x34], edi
// 004a9c5c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a9c64  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a9c6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a9c6e  5f                   pop edi
// 004a9c6f  5e                   pop esi
// 004a9c70  64890d00000000       mov dword ptr fs:[0], ecx
// 004a9c77  83c410               add esp, 0x10
// 004a9c7a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
