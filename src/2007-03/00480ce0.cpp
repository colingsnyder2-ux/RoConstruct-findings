// roc 2007-03 00480ce0  unit: seg_00480000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480ce0
//
// 00480ce0  55                   push ebp
// 00480ce1  56                   push esi
// 00480ce2  8bf1                 mov esi, ecx
// 00480ce4  57                   push edi
// 00480ce5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00480ce9  d907                 fld dword ptr [edi]
// 00480ceb  d91e                 fstp dword ptr [esi]
// 00480ced  d94704               fld dword ptr [edi + 4]
// 00480cf0  d95e04               fstp dword ptr [esi + 4]
// 00480cf3  d94708               fld dword ptr [edi + 8]
// 00480cf6  d95e08               fstp dword ptr [esi + 8]
// 00480cf9  d9470c               fld dword ptr [edi + 0xc]
// 00480cfc  d95e0c               fstp dword ptr [esi + 0xc]
// 00480cff  d94710               fld dword ptr [edi + 0x10]
// 00480d02  d95e10               fstp dword ptr [esi + 0x10]
// 00480d05  d94714               fld dword ptr [edi + 0x14]
// 00480d08  d95e14               fstp dword ptr [esi + 0x14]
// 00480d0b  d94718               fld dword ptr [edi + 0x18]
// 00480d0e  d95e18               fstp dword ptr [esi + 0x18]
// 00480d11  d9471c               fld dword ptr [edi + 0x1c]
// 00480d14  d95e1c               fstp dword ptr [esi + 0x1c]
// 00480d17  d94720               fld dword ptr [edi + 0x20]
// 00480d1a  d95e20               fstp dword ptr [esi + 0x20]
// 00480d1d  d94724               fld dword ptr [edi + 0x24]
// 00480d20  d95e24               fstp dword ptr [esi + 0x24]
// 00480d23  d94728               fld dword ptr [edi + 0x28]
// 00480d26  d95e28               fstp dword ptr [esi + 0x28]
// 00480d29  d9472c               fld dword ptr [edi + 0x2c]
// 00480d2c  d95e2c               fstp dword ptr [esi + 0x2c]
// 00480d2f  d94730               fld dword ptr [edi + 0x30]
// 00480d32  d95e30               fstp dword ptr [esi + 0x30]
// 00480d35  d94734               fld dword ptr [edi + 0x34]
// 00480d38  d95e34               fstp dword ptr [esi + 0x34]
// 00480d3b  d94738               fld dword ptr [edi + 0x38]
// 00480d3e  d95e38               fstp dword ptr [esi + 0x38]
// 00480d41  d9473c               fld dword ptr [edi + 0x3c]
// 00480d44  d95e3c               fstp dword ptr [esi + 0x3c]
// 00480d47  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 00480d4a  8b4640               mov eax, dword ptr [esi + 0x40]
// 00480d4d  3be8                 cmp ebp, eax
// 00480d4f  7462                 je 0x480db3
// 00480d51  85c0                 test eax, eax
// 00480d53  744d                 je 0x480da2
// 00480d55  83c004               add eax, 4
// 00480d58  50                   push eax
// 00480d59  ff15a8d27700         call dword ptr [0x77d2a8]
// 00480d5f  85c0                 test eax, eax
// 00480d61  7538                 jne 0x480d9b
// 00480d63  8b4640               mov eax, dword ptr [esi + 0x40]
// 00480d66  53                   push ebx
// 00480d67  8b5808               mov ebx, dword ptr [eax + 8]
// 00480d6a  85db                 test ebx, ebx
// 00480d6c  741d                 je 0x480d8b
// 00480d6e  8bff                 mov edi, edi
// 00480d70  8b0b                 mov ecx, dword ptr [ebx]
// 00480d72  8b11                 mov edx, dword ptr [ecx]
// 00480d74  8b4204               mov eax, dword ptr [edx + 4]
// 00480d77  ffd0                 call eax
// 00480d79  8bc3                 mov eax, ebx
// 00480d7b  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00480d7e  50                   push eax
// 00480d7f  e86cd31900           call 0x61e0f0
// 00480d84  83c404               add esp, 4
// 00480d87  85db                 test ebx, ebx
// 00480d89  75e5                 jne 0x480d70
// 00480d8b  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00480d8e  85c9                 test ecx, ecx
// 00480d90  5b                   pop ebx
// 00480d91  7408                 je 0x480d9b
// 00480d93  8b11                 mov edx, dword ptr [ecx]
// 00480d95  8b02                 mov eax, dword ptr [edx]
// 00480d97  6a01                 push 1
// 00480d99  ffd0                 call eax
// 00480d9b  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00480da2  85ed                 test ebp, ebp
// 00480da4  740d                 je 0x480db3
// 00480da6  896e40               mov dword ptr [esi + 0x40], ebp
// 00480da9  83c504               add ebp, 4
// 00480dac  55                   push ebp
// 00480dad  ff15acd27700         call dword ptr [0x77d2ac]
// 00480db3  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00480db6  5f                   pop edi
// 00480db7  894e44               mov dword ptr [esi + 0x44], ecx
// 00480dba  8bc6                 mov eax, esi
// 00480dbc  5e                   pop esi
// 00480dbd  5d                   pop ebp
// 00480dbe  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
