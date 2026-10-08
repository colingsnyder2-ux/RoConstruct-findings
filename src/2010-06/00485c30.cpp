// from server: 100% by auto
// roc 2010-06 00485c30  unit: G3D::Texture  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485c30
//
// 00485c30  6aff                 push -1
// 00485c32  68e15c9800           push 0x985ce1
// 00485c37  64a100000000         mov eax, dword ptr fs:[0]
// 00485c3d  50                   push eax
// 00485c3e  64892500000000       mov dword ptr fs:[0], esp
// 00485c45  83ec28               sub esp, 0x28
// 00485c48  53                   push ebx
// 00485c49  55                   push ebp
// 00485c4a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00485c4e  33db                 xor ebx, ebx
// 00485c50  56                   push esi
// 00485c51  895c240c             mov dword ptr [esp + 0xc], ebx
// 00485c55  57                   push edi
// 00485c56  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00485c5a  8b4738               mov eax, dword ptr [edi + 0x38]
// 00485c5d  0fafc5               imul eax, ebp
// 00485c60  0faf442450           imul eax, dword ptr [esp + 0x50]
// 00485c65  99                   cdq 
// 00485c66  83e207               and edx, 7
// 00485c69  03c2                 add eax, edx
// 00485c6b  c1f803               sar eax, 3
// 00485c6e  3bc3                 cmp eax, ebx
// 00485c70  895c2440             mov dword ptr [esp + 0x40], ebx
// 00485c74  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485c78  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00485c7c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00485c80  7e12                 jle 0x485c94
// 00485c82  6a01                 push 1
// 00485c84  50                   push eax
// 00485c85  8d4c241c             lea ecx, [esp + 0x1c]
// 00485c89  e8e2f2ffff           call 0x484f70
// 00485c8e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00485c92  eb06                 jmp 0x485c9a
// 00485c94  33f6                 xor esi, esi
// 00485c96  89742414             mov dword ptr [esp + 0x14], esi
// 00485c9a  d9e8                 fld1 
// 00485c9c  8b442468             mov eax, dword ptr [esp + 0x68]
// 00485ca0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00485ca4  8b542460             mov edx, dword ptr [esp + 0x60]
// 00485ca8  83ec08               sub esp, 8
// 00485cab  d95c2404             fstp dword ptr [esp + 4]
// 00485caf  c744244801000000     mov dword ptr [esp + 0x48], 1
// 00485cb7  d9442474             fld dword ptr [esp + 0x74]
// 00485cbb  89742428             mov dword ptr [esp + 0x28], esi
// 00485cbf  d91c24               fstp dword ptr [esp]
// 00485cc2  50                   push eax
// 00485cc3  8b442468             mov eax, dword ptr [esp + 0x68]
// 00485cc7  51                   push ecx
// 00485cc8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00485ccc  52                   push edx
// 00485ccd  50                   push eax
// 00485cce  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00485cd2  57                   push edi
// 00485cd3  6a01                 push 1
// 00485cd5  51                   push ecx
// 00485cd6  55                   push ebp
// 00485cd7  57                   push edi
// 00485cd8  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00485cdc  8d54244c             lea edx, [esp + 0x4c]
// 00485ce0  52                   push edx
// 00485ce1  50                   push eax
// 00485ce2  57                   push edi
// 00485ce3  8974245c             mov dword ptr [esp + 0x5c], esi
// 00485ce7  89742460             mov dword ptr [esp + 0x60], esi
// 00485ceb  89742464             mov dword ptr [esp + 0x64], esi
// 00485cef  89742468             mov dword ptr [esp + 0x68], esi
// 00485cf3  8974246c             mov dword ptr [esp + 0x6c], esi
// 00485cf7  e874fcffff           call 0x485970
// 00485cfc  56                   push esi
// 00485cfd  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 00485d05  885c247c             mov byte ptr [esp + 0x7c], bl
// 00485d09  e8b27c0c00           call 0x54d9c0
// 00485d0e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00485d12  83c43c               add esp, 0x3c
// 00485d15  8bc7                 mov eax, edi
// 00485d17  5f                   pop edi
// 00485d18  5e                   pop esi
// 00485d19  5d                   pop ebp
// 00485d1a  5b                   pop ebx
// 00485d1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00485d22  83c434               add esp, 0x34
// 00485d25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
