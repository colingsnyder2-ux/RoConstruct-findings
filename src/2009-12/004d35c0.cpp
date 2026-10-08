// roc 2009-12 004d35c0  unit: G3D::TextureManager::TextureArgs  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d35c0
//
// 004d35c0  6aff                 push -1
// 004d35c2  6847369300           push 0x933647
// 004d35c7  64a100000000         mov eax, dword ptr fs:[0]
// 004d35cd  50                   push eax
// 004d35ce  64892500000000       mov dword ptr fs:[0], esp
// 004d35d5  51                   push ecx
// 004d35d6  53                   push ebx
// 004d35d7  56                   push esi
// 004d35d8  8bf1                 mov esi, ecx
// 004d35da  89742408             mov dword ptr [esp + 8], esi
// 004d35de  8d4e54               lea ecx, [esi + 0x54]
// 004d35e1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004d35e9  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d35ef  8b4628               mov eax, dword ptr [esi + 0x28]
// 004d35f2  33db                 xor ebx, ebx
// 004d35f4  50                   push eax
// 004d35f5  885c2418             mov byte ptr [esp + 0x18], bl
// 004d35f9  e8e26d1100           call 0x5ea3e0
// 004d35fe  83c404               add esp, 4
// 004d3601  8d4e0c               lea ecx, [esi + 0xc]
// 004d3604  895e28               mov dword ptr [esi + 0x28], ebx
// 004d3607  895e2c               mov dword ptr [esi + 0x2c], ebx
// 004d360a  895e30               mov dword ptr [esi + 0x30], ebx
// 004d360d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d3615  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d361b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d361f  5e                   pop esi
// 004d3620  5b                   pop ebx
// 004d3621  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3628  83c410               add esp, 0x10
// 004d362b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
