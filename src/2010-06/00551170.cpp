// from server: 100% by auto
// roc 2010-06 00551170  unit: G3D::Log  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00551170
//
// 00551170  6aff                 push -1
// 00551172  68095b9800           push 0x985b09
// 00551177  64a100000000         mov eax, dword ptr fs:[0]
// 0055117d  50                   push eax
// 0055117e  64892500000000       mov dword ptr fs:[0], esp
// 00551185  83ec1c               sub esp, 0x1c
// 00551188  53                   push ebx
// 00551189  55                   push ebp
// 0055118a  56                   push esi
// 0055118b  57                   push edi
// 0055118c  8bf9                 mov edi, ecx
// 0055118e  8b470c               mov eax, dword ptr [edi + 0xc]
// 00551191  8b4f08               mov ecx, dword ptr [edi + 8]
// 00551194  50                   push eax
// 00551195  51                   push ecx
// 00551196  8d542418             lea edx, [esp + 0x18]
// 0055119a  688000a200           push 0xa20080
// 0055119f  52                   push edx
// 005511a0  e80b630000           call 0x5574b0
// 005511a5  83c410               add esp, 0x10
// 005511a8  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 005511ad  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005511b1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005511b5  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005511bd  7304                 jae 0x5511c3
// 005511bf  8d6c2414             lea ebp, [esp + 0x14]
// 005511c3  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005511c7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005511ca  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005511cd  03c3                 add eax, ebx
// 005511cf  3bc8                 cmp ecx, eax
// 005511d1  7c02                 jl 0x5511d5
// 005511d3  8bc1                 mov eax, ecx
// 005511d5  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005511d8  894634               mov dword ptr [esi + 0x34], eax
// 005511db  7e09                 jle 0x5511e6
// 005511dd  51                   push ecx
// 005511de  53                   push ebx
// 005511df  8bce                 mov ecx, esi
// 005511e1  e83af70000           call 0x560920
// 005511e6  8b4630               mov eax, dword ptr [esi + 0x30]
// 005511e9  03463c               add eax, dword ptr [esi + 0x3c]
// 005511ec  53                   push ebx
// 005511ed  55                   push ebp
// 005511ee  50                   push eax
// 005511ef  e85cd3ffff           call 0x54e550
// 005511f4  015e3c               add dword ptr [esi + 0x3c], ebx
// 005511f7  8b4708               mov eax, dword ptr [edi + 8]
// 005511fa  0faf470c             imul eax, dword ptr [edi + 0xc]
// 005511fe  8b5f04               mov ebx, dword ptr [edi + 4]
// 00551201  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00551204  8d3c40               lea edi, [eax + eax*2]
// 00551207  8b4634               mov eax, dword ptr [esi + 0x34]
// 0055120a  03cf                 add ecx, edi
// 0055120c  83c40c               add esp, 0xc
// 0055120f  3bc1                 cmp eax, ecx
// 00551211  7c02                 jl 0x551215
// 00551213  8bc8                 mov ecx, eax
// 00551215  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 00551218  894e34               mov dword ptr [esi + 0x34], ecx
// 0055121b  7e09                 jle 0x551226
// 0055121d  50                   push eax
// 0055121e  57                   push edi
// 0055121f  8bce                 mov ecx, esi
// 00551221  e8faf60000           call 0x560920
// 00551226  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00551229  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0055122c  57                   push edi
// 0055122d  53                   push ebx
// 0055122e  51                   push ecx
// 0055122f  e81cd3ffff           call 0x54e550
// 00551234  017e3c               add dword ptr [esi + 0x3c], edi
// 00551237  83c40c               add esp, 0xc
// 0055123a  8d4c2410             lea ecx, [esp + 0x10]
// 0055123e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00551246  ff1500a49e00         call dword ptr [0x9ea400]
// 0055124c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00551250  5f                   pop edi
// 00551251  5e                   pop esi
// 00551252  5d                   pop ebp
// 00551253  5b                   pop ebx
// 00551254  64890d00000000       mov dword ptr fs:[0], ecx
// 0055125b  83c428               add esp, 0x28
// 0055125e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPM@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
