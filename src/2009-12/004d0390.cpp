// roc 2009-12 004d0390  unit: G3D::PBVTextureFormat::?$Table  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d0390
//
// 004d0390  64a100000000         mov eax, dword ptr fs:[0]
// 004d0396  6aff                 push -1
// 004d0398  6844329300           push 0x933244
// 004d039d  50                   push eax
// 004d039e  64892500000000       mov dword ptr fs:[0], esp
// 004d03a5  83ec38               sub esp, 0x38
// 004d03a8  53                   push ebx
// 004d03a9  56                   push esi
// 004d03aa  57                   push edi
// 004d03ab  8bf1                 mov esi, ecx
// 004d03ad  83cfff               or edi, 0xffffffff
// 004d03b0  837e0800             cmp dword ptr [esi + 8], 0
// 004d03b4  7432                 je 0x4d03e8
// 004d03b6  68705c9b00           push 0x9b5c70
// 004d03bb  8d4c2410             lea ecx, [esp + 0x10]
// 004d03bf  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d03c5  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d03c8  8d44240c             lea eax, [esp + 0xc]
// 004d03cc  50                   push eax
// 004d03cd  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004d03d5  e816bc1100           call 0x5ebff0
// 004d03da  8d4c240c             lea ecx, [esp + 0xc]
// 004d03de  897c244c             mov dword ptr [esp + 0x4c], edi
// 004d03e2  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d03e8  837e0800             cmp dword ptr [esi + 8], 0
// 004d03ec  bb01000000           mov ebx, 1
// 004d03f1  742e                 je 0x4d0421
// 004d03f3  685c5c9b00           push 0x9b5c5c
// 004d03f8  8d4c2410             lea ecx, [esp + 0x10]
// 004d03fc  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0402  8d4c240c             lea ecx, [esp + 0xc]
// 004d0406  51                   push ecx
// 004d0407  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d040a  895c2450             mov dword ptr [esp + 0x50], ebx
// 004d040e  e8ddbb1100           call 0x5ebff0
// 004d0413  8d4c240c             lea ecx, [esp + 0xc]
// 004d0417  897c244c             mov dword ptr [esp + 0x4c], edi
// 004d041b  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d0421  d9e8                 fld1 
// 004d0423  83ec10               sub esp, 0x10
// 004d0426  dd542408             fst qword ptr [esp + 8]
// 004d042a  8bce                 mov ecx, esi
// 004d042c  dd1c24               fstp qword ptr [esp]
// 004d042f  e83cfbffff           call 0x4cff70
// 004d0434  837e0800             cmp dword ptr [esi + 8], 0
// 004d0438  7432                 je 0x4d046c
// 004d043a  68445c9b00           push 0x9b5c44
// 004d043f  8d4c2410             lea ecx, [esp + 0x10]
// 004d0443  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0449  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d044c  8d54240c             lea edx, [esp + 0xc]
// 004d0450  52                   push edx
// 004d0451  c744245002000000     mov dword ptr [esp + 0x50], 2
// 004d0459  e892bb1100           call 0x5ebff0
// 004d045e  8d4c240c             lea ecx, [esp + 0xc]
// 004d0462  897c244c             mov dword ptr [esp + 0x4c], edi
// 004d0466  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d046c  807e0400             cmp byte ptr [esi + 4], 0
// 004d0470  744e                 je 0x4d04c0
// 004d0472  837e0800             cmp dword ptr [esi + 8], 0
// 004d0476  7432                 je 0x4d04aa
// 004d0478  68305c9b00           push 0x9b5c30
// 004d047d  8d4c242c             lea ecx, [esp + 0x2c]
// 004d0481  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d0487  8b4e08               mov ecx, dword ptr [esi + 8]
// 004d048a  8d442428             lea eax, [esp + 0x28]
// 004d048e  50                   push eax
// 004d048f  c744245003000000     mov dword ptr [esp + 0x50], 3
// 004d0497  e854bb1100           call 0x5ebff0
// 004d049c  8d4c2428             lea ecx, [esp + 0x28]
// 004d04a0  897c244c             mov dword ptr [esp + 0x4c], edi
// 004d04a4  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d04aa  e8319effff           call 0x4ca2e0
// 004d04af  8b0e                 mov ecx, dword ptr [esi]
// 004d04b1  85c9                 test ecx, ecx
// 004d04b3  740b                 je 0x4d04c0
// 004d04b5  8b11                 mov edx, dword ptr [ecx]
// 004d04b7  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 004d04bd  53                   push ebx
// 004d04be  ffd0                 call eax
// 004d04c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d04c4  889e99080000         mov byte ptr [esi + 0x899], bl
// 004d04ca  5f                   pop edi
// 004d04cb  5e                   pop esi
// 004d04cc  5b                   pop ebx
// 004d04cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004d04d4  83c444               add esp, 0x44
// 004d04d7  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?cleanup@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
