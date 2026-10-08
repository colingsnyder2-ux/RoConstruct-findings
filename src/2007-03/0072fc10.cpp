// roc 2007-03 0072fc10  unit: seg_00720000  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072fc10
//
// 0072fc10  55                   push ebp
// 0072fc11  8bec                 mov ebp, esp
// 0072fc13  83e4f8               and esp, 0xfffffff8
// 0072fc16  6aff                 push -1
// 0072fc18  6890cc7600           push 0x76cc90
// 0072fc1d  64a100000000         mov eax, dword ptr fs:[0]
// 0072fc23  50                   push eax
// 0072fc24  83ec50               sub esp, 0x50
// 0072fc27  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072fc2c  33c4                 xor eax, esp
// 0072fc2e  89442448             mov dword ptr [esp + 0x48], eax
// 0072fc32  53                   push ebx
// 0072fc33  56                   push esi
// 0072fc34  57                   push edi
// 0072fc35  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072fc3a  33c4                 xor eax, esp
// 0072fc3c  50                   push eax
// 0072fc3d  8d442460             lea eax, [esp + 0x60]
// 0072fc41  64a300000000         mov dword ptr fs:[0], eax
// 0072fc47  8bf1                 mov esi, ecx
// 0072fc49  8d4c241c             lea ecx, [esp + 0x1c]
// 0072fc4d  89742414             mov dword ptr [esp + 0x14], esi
// 0072fc51  e80afcffff           call 0x72f860
// 0072fc56  8b4604               mov eax, dword ptr [esi + 4]
// 0072fc59  83c0ff               add eax, -1
// 0072fc5c  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0072fc64  89442410             mov dword ptr [esp + 0x10], eax
// 0072fc68  0f88fc000000         js 0x72fd6a
// 0072fc6e  8d1cc500000000       lea ebx, [eax*8]
// 0072fc75  2bd8                 sub ebx, eax
// 0072fc77  03db                 add ebx, ebx
// 0072fc79  03db                 add ebx, ebx
// 0072fc7b  03db                 add ebx, ebx
// 0072fc7d  eb09                 jmp 0x72fc88
// 0072fc7f  90                   nop 
// 0072fc80  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072fc84  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072fc88  50                   push eax
// 0072fc89  6a00                 push 0
// 0072fc8b  e8e040ddff           call 0x503d70
// 0072fc90  8b36                 mov esi, dword ptr [esi]
// 0072fc92  8bf8                 mov edi, eax
// 0072fc94  03f3                 add esi, ebx
// 0072fc96  83c408               add esp, 8
// 0072fc99  8d4604               lea eax, [esi + 4]
// 0072fc9c  50                   push eax
// 0072fc9d  8d4c2424             lea ecx, [esp + 0x24]
// 0072fca1  897c241c             mov dword ptr [esp + 0x1c], edi
// 0072fca5  ff154ce77700         call dword ptr [0x77e74c]
// 0072fcab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0072fcae  03ff                 add edi, edi
// 0072fcb0  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072fcb4  8b5624               mov edx, dword ptr [esi + 0x24]
// 0072fcb7  03ff                 add edi, edi
// 0072fcb9  89542440             mov dword ptr [esp + 0x40], edx
// 0072fcbd  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072fcc0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072fcc4  03ff                 add edi, edi
// 0072fcc6  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0072fcca  89442444             mov dword ptr [esp + 0x44], eax
// 0072fcce  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072fcd1  03ff                 add edi, edi
// 0072fcd3  894c2448             mov dword ptr [esp + 0x48], ecx
// 0072fcd7  dd4630               fld qword ptr [esi + 0x30]
// 0072fcda  8b32                 mov esi, dword ptr [edx]
// 0072fcdc  dd5c244c             fstp qword ptr [esp + 0x4c]
// 0072fce0  03ff                 add edi, edi
// 0072fce2  03ff                 add edi, edi
// 0072fce4  8d443704             lea eax, [edi + esi + 4]
// 0072fce8  50                   push eax
// 0072fce9  8d4c3304             lea ecx, [ebx + esi + 4]
// 0072fced  ff154ce77700         call dword ptr [0x77e74c]
// 0072fcf3  8b4c3720             mov ecx, dword ptr [edi + esi + 0x20]
// 0072fcf7  894c3320             mov dword ptr [ebx + esi + 0x20], ecx
// 0072fcfb  8b543724             mov edx, dword ptr [edi + esi + 0x24]
// 0072fcff  89543324             mov dword ptr [ebx + esi + 0x24], edx
// 0072fd03  8b443728             mov eax, dword ptr [edi + esi + 0x28]
// 0072fd07  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072fd0b  89443328             mov dword ptr [ebx + esi + 0x28], eax
// 0072fd0f  8b4c372c             mov ecx, dword ptr [edi + esi + 0x2c]
// 0072fd13  894c332c             mov dword ptr [ebx + esi + 0x2c], ecx
// 0072fd17  dd443730             fld qword ptr [edi + esi + 0x30]
// 0072fd1b  dd5c3330             fstp qword ptr [ebx + esi + 0x30]
// 0072fd1f  8b32                 mov esi, dword ptr [edx]
// 0072fd21  8d442420             lea eax, [esp + 0x20]
// 0072fd25  03f7                 add esi, edi
// 0072fd27  50                   push eax
// 0072fd28  8d4e04               lea ecx, [esi + 4]
// 0072fd2b  ff154ce77700         call dword ptr [0x77e74c]
// 0072fd31  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0072fd35  894e20               mov dword ptr [esi + 0x20], ecx
// 0072fd38  8b542440             mov edx, dword ptr [esp + 0x40]
// 0072fd3c  895624               mov dword ptr [esi + 0x24], edx
// 0072fd3f  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072fd43  894628               mov dword ptr [esi + 0x28], eax
// 0072fd46  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072fd4a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072fd4e  83e801               sub eax, 1
// 0072fd51  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072fd54  dd44244c             fld qword ptr [esp + 0x4c]
// 0072fd58  83eb38               sub ebx, 0x38
// 0072fd5b  dd5e30               fstp qword ptr [esi + 0x30]
// 0072fd5e  85c0                 test eax, eax
// 0072fd60  89442410             mov dword ptr [esp + 0x10], eax
// 0072fd64  0f8d16ffffff         jge 0x72fc80
// 0072fd6a  c744241c98e57900     mov dword ptr [esp + 0x1c], 0x79e598
// 0072fd72  8d4c2420             lea ecx, [esp + 0x20]
// 0072fd76  c744246801000000     mov dword ptr [esp + 0x68], 1
// 0072fd7e  ff158ce77700         call dword ptr [0x77e78c]
// 0072fd84  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0072fd88  64890d00000000       mov dword ptr fs:[0], ecx
// 0072fd8f  59                   pop ecx
// 0072fd90  5f                   pop edi
// 0072fd91  5e                   pop esi
// 0072fd92  5b                   pop ebx
// 0072fd93  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072fd97  33cc                 xor ecx, esp
// 0072fd99  e808f1eeff           call 0x61eea6
// 0072fd9e  8be5                 mov esp, ebp
// 0072fda0  5d                   pop ebp
// 0072fda1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?randomize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
