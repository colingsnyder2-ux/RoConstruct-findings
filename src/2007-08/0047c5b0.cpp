// roc 2007-08 0047c5b0  unit: G3D::GWindow  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c5b0
//
// 0047c5b0  6aff                 push -1
// 0047c5b2  680cff7400           push 0x74ff0c
// 0047c5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0047c5bd  50                   push eax
// 0047c5be  51                   push ecx
// 0047c5bf  56                   push esi
// 0047c5c0  57                   push edi
// 0047c5c1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047c5c6  33c4                 xor eax, esp
// 0047c5c8  50                   push eax
// 0047c5c9  8d442410             lea eax, [esp + 0x10]
// 0047c5cd  64a300000000         mov dword ptr fs:[0], eax
// 0047c5d3  8bf1                 mov esi, ecx
// 0047c5d5  8974240c             mov dword ptr [esp + 0xc], esi
// 0047c5d9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047c5dc  33ff                 xor edi, edi
// 0047c5de  50                   push eax
// 0047c5df  897c241c             mov dword ptr [esp + 0x1c], edi
// 0047c5e3  e828320800           call 0x4ff810
// 0047c5e8  83c404               add esp, 4
// 0047c5eb  8d4e04               lea ecx, [esi + 4]
// 0047c5ee  897e2c               mov dword ptr [esi + 0x2c], edi
// 0047c5f1  897e30               mov dword ptr [esi + 0x30], edi
// 0047c5f4  897e34               mov dword ptr [esi + 0x34], edi
// 0047c5f7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0047c5ff  ff15ace67700         call dword ptr [0x77e6ac]
// 0047c605  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047c609  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c610  59                   pop ecx
// 0047c611  5f                   pop edi
// 0047c612  5e                   pop esi
// 0047c613  83c410               add esp, 0x10
// 0047c616  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
