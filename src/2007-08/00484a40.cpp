// roc 2007-08 00484a40  unit: G3D::Shader  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00484a40
//
// 00484a40  6aff                 push -1
// 00484a42  6873637400           push 0x746373
// 00484a47  64a100000000         mov eax, dword ptr fs:[0]
// 00484a4d  50                   push eax
// 00484a4e  51                   push ecx
// 00484a4f  53                   push ebx
// 00484a50  56                   push esi
// 00484a51  a188518b00           mov eax, dword ptr [0x8b5188]
// 00484a56  33c4                 xor eax, esp
// 00484a58  50                   push eax
// 00484a59  8d442410             lea eax, [esp + 0x10]
// 00484a5d  64a300000000         mov dword ptr fs:[0], eax
// 00484a63  8bf1                 mov esi, ecx
// 00484a65  8974240c             mov dword ptr [esp + 0xc], esi
// 00484a69  8d4e34               lea ecx, [esi + 0x34]
// 00484a6c  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00484a74  ff15ace67700         call dword ptr [0x77e6ac]
// 00484a7a  8b4614               mov eax, dword ptr [esi + 0x14]
// 00484a7d  33db                 xor ebx, ebx
// 00484a7f  50                   push eax
// 00484a80  885c241c             mov byte ptr [esp + 0x1c], bl
// 00484a84  e887ad0700           call 0x4ff810
// 00484a89  83c404               add esp, 4
// 00484a8c  8bce                 mov ecx, esi
// 00484a8e  895e14               mov dword ptr [esi + 0x14], ebx
// 00484a91  895e18               mov dword ptr [esi + 0x18], ebx
// 00484a94  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00484a97  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00484a9f  e87c55fcff           call 0x44a020
// 00484aa4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00484aa8  64890d00000000       mov dword ptr fs:[0], ecx
// 00484aaf  59                   pop ecx
// 00484ab0  5e                   pop esi
// 00484ab1  5b                   pop ebx
// 00484ab2  83c410               add esp, 0x10
// 00484ab5  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
