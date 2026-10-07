// roc 2010-06 0048ca80  unit: G3D::Win32Window  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048ca80
//
// 0048ca80  6aff                 push -1
// 0048ca82  6847639800           push 0x986347
// 0048ca87  64a100000000         mov eax, dword ptr fs:[0]
// 0048ca8d  50                   push eax
// 0048ca8e  64892500000000       mov dword ptr fs:[0], esp
// 0048ca95  51                   push ecx
// 0048ca96  53                   push ebx
// 0048ca97  56                   push esi
// 0048ca98  8bf1                 mov esi, ecx
// 0048ca9a  89742408             mov dword ptr [esp + 8], esi
// 0048ca9e  8d4e54               lea ecx, [esi + 0x54]
// 0048caa1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0048caa9  ff1500a49e00         call dword ptr [0x9ea400]
// 0048caaf  8b4628               mov eax, dword ptr [esi + 0x28]
// 0048cab2  33db                 xor ebx, ebx
// 0048cab4  50                   push eax
// 0048cab5  885c2418             mov byte ptr [esp + 0x18], bl
// 0048cab9  e8020f0c00           call 0x54d9c0
// 0048cabe  83c404               add esp, 4
// 0048cac1  8d4e0c               lea ecx, [esi + 0xc]
// 0048cac4  895e28               mov dword ptr [esi + 0x28], ebx
// 0048cac7  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0048caca  895e30               mov dword ptr [esi + 0x30], ebx
// 0048cacd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048cad5  ff1500a49e00         call dword ptr [0x9ea400]
// 0048cadb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048cadf  5e                   pop esi
// 0048cae0  5b                   pop ebx
// 0048cae1  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cae8  83c410               add esp, 0x10
// 0048caeb  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
