// roc 2007-08 0047d5b0  unit: G3D::Win32Window  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d5b0
//
// 0047d5b0  6aff                 push -1
// 0047d5b2  68fc587400           push 0x7458fc
// 0047d5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0047d5bd  50                   push eax
// 0047d5be  51                   push ecx
// 0047d5bf  53                   push ebx
// 0047d5c0  55                   push ebp
// 0047d5c1  56                   push esi
// 0047d5c2  57                   push edi
// 0047d5c3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047d5c8  33c4                 xor eax, esp
// 0047d5ca  50                   push eax
// 0047d5cb  8d442418             lea eax, [esp + 0x18]
// 0047d5cf  64a300000000         mov dword ptr fs:[0], eax
// 0047d5d5  8bf9                 mov edi, ecx
// 0047d5d7  33db                 xor ebx, ebx
// 0047d5d9  395f04               cmp dword ptr [edi + 4], ebx
// 0047d5dc  7e45                 jle 0x47d623
// 0047d5de  33ed                 xor ebp, ebp
// 0047d5e0  8b37                 mov esi, dword ptr [edi]
// 0047d5e2  03f5                 add esi, ebp
// 0047d5e4  89742414             mov dword ptr [esp + 0x14], esi
// 0047d5e8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047d5eb  50                   push eax
// 0047d5ec  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0047d5f4  e817220800           call 0x4ff810
// 0047d5f9  33c0                 xor eax, eax
// 0047d5fb  83c404               add esp, 4
// 0047d5fe  8d4e04               lea ecx, [esi + 4]
// 0047d601  89462c               mov dword ptr [esi + 0x2c], eax
// 0047d604  894630               mov dword ptr [esi + 0x30], eax
// 0047d607  894634               mov dword ptr [esi + 0x34], eax
// 0047d60a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0047d612  ff15ace67700         call dword ptr [0x77e6ac]
// 0047d618  83c301               add ebx, 1
// 0047d61b  83c538               add ebp, 0x38
// 0047d61e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0047d621  7cbd                 jl 0x47d5e0
// 0047d623  8b0f                 mov ecx, dword ptr [edi]
// 0047d625  51                   push ecx
// 0047d626  e8e5210800           call 0x4ff810
// 0047d62b  83c404               add esp, 4
// 0047d62e  33c0                 xor eax, eax
// 0047d630  8907                 mov dword ptr [edi], eax
// 0047d632  894704               mov dword ptr [edi + 4], eax
// 0047d635  894708               mov dword ptr [edi + 8], eax
// 0047d638  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047d63c  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d643  59                   pop ecx
// 0047d644  5f                   pop edi
// 0047d645  5e                   pop esi
// 0047d646  5d                   pop ebp
// 0047d647  5b                   pop ebx
// 0047d648  83c410               add esp, 0x10
// 0047d64b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
