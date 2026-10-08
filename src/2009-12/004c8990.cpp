// roc 2009-12 004c8990  unit: G3D::Texture  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c8990
//
// 004c8990  6aff                 push -1
// 004c8992  68912b9300           push 0x932b91
// 004c8997  64a100000000         mov eax, dword ptr fs:[0]
// 004c899d  50                   push eax
// 004c899e  64892500000000       mov dword ptr fs:[0], esp
// 004c89a5  83ec28               sub esp, 0x28
// 004c89a8  53                   push ebx
// 004c89a9  55                   push ebp
// 004c89aa  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 004c89ae  33db                 xor ebx, ebx
// 004c89b0  56                   push esi
// 004c89b1  895c240c             mov dword ptr [esp + 0xc], ebx
// 004c89b5  57                   push edi
// 004c89b6  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004c89ba  8b4738               mov eax, dword ptr [edi + 0x38]
// 004c89bd  0fafc5               imul eax, ebp
// 004c89c0  0faf442450           imul eax, dword ptr [esp + 0x50]
// 004c89c5  99                   cdq 
// 004c89c6  83e207               and edx, 7
// 004c89c9  03c2                 add eax, edx
// 004c89cb  c1f803               sar eax, 3
// 004c89ce  3bc3                 cmp eax, ebx
// 004c89d0  895c2440             mov dword ptr [esp + 0x40], ebx
// 004c89d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004c89d8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004c89dc  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c89e0  7e12                 jle 0x4c89f4
// 004c89e2  6a01                 push 1
// 004c89e4  50                   push eax
// 004c89e5  8d4c241c             lea ecx, [esp + 0x1c]
// 004c89e9  e802f4ffff           call 0x4c7df0
// 004c89ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c89f2  eb06                 jmp 0x4c89fa
// 004c89f4  33f6                 xor esi, esi
// 004c89f6  89742414             mov dword ptr [esp + 0x14], esi
// 004c89fa  d9e8                 fld1 
// 004c89fc  8b442468             mov eax, dword ptr [esp + 0x68]
// 004c8a00  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004c8a04  8b542460             mov edx, dword ptr [esp + 0x60]
// 004c8a08  83ec08               sub esp, 8
// 004c8a0b  d95c2404             fstp dword ptr [esp + 4]
// 004c8a0f  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004c8a17  d9442474             fld dword ptr [esp + 0x74]
// 004c8a1b  89742428             mov dword ptr [esp + 0x28], esi
// 004c8a1f  d91c24               fstp dword ptr [esp]
// 004c8a22  50                   push eax
// 004c8a23  8b442468             mov eax, dword ptr [esp + 0x68]
// 004c8a27  51                   push ecx
// 004c8a28  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004c8a2c  52                   push edx
// 004c8a2d  50                   push eax
// 004c8a2e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004c8a32  57                   push edi
// 004c8a33  6a01                 push 1
// 004c8a35  51                   push ecx
// 004c8a36  55                   push ebp
// 004c8a37  57                   push edi
// 004c8a38  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 004c8a3c  8d54244c             lea edx, [esp + 0x4c]
// 004c8a40  52                   push edx
// 004c8a41  50                   push eax
// 004c8a42  57                   push edi
// 004c8a43  8974245c             mov dword ptr [esp + 0x5c], esi
// 004c8a47  89742460             mov dword ptr [esp + 0x60], esi
// 004c8a4b  89742464             mov dword ptr [esp + 0x64], esi
// 004c8a4f  89742468             mov dword ptr [esp + 0x68], esi
// 004c8a53  8974246c             mov dword ptr [esp + 0x6c], esi
// 004c8a57  e874fcffff           call 0x4c86d0
// 004c8a5c  56                   push esi
// 004c8a5d  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 004c8a65  885c247c             mov byte ptr [esp + 0x7c], bl
// 004c8a69  e872191200           call 0x5ea3e0
// 004c8a6e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004c8a72  83c43c               add esp, 0x3c
// 004c8a75  8bc7                 mov eax, edi
// 004c8a77  5f                   pop edi
// 004c8a78  5e                   pop esi
// 004c8a79  5d                   pop ebp
// 004c8a7a  5b                   pop ebx
// 004c8a7b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8a82  83c434               add esp, 0x34
// 004c8a85  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
