// roc 2009-12 00914910  unit: Ogre::RbxMeshLoader  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00914910
//
// 00914910  6aff                 push -1
// 00914912  68d0729600           push 0x9672d0
// 00914917  64a100000000         mov eax, dword ptr fs:[0]
// 0091491d  50                   push eax
// 0091491e  64892500000000       mov dword ptr fs:[0], esp
// 00914925  51                   push ecx
// 00914926  53                   push ebx
// 00914927  56                   push esi
// 00914928  8bf1                 mov esi, ecx
// 0091492a  57                   push edi
// 0091492b  8974240c             mov dword ptr [esp + 0xc], esi
// 0091492f  c706ac48a200         mov dword ptr [esi], 0xa248ac
// 00914935  8b4644               mov eax, dword ptr [esi + 0x44]
// 00914938  50                   push eax
// 00914939  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00914941  e89a5acdff           call 0x5ea3e0
// 00914946  33db                 xor ebx, ebx
// 00914948  895e44               mov dword ptr [esi + 0x44], ebx
// 0091494b  895e48               mov dword ptr [esi + 0x48], ebx
// 0091494e  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00914951  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00914954  51                   push ecx
// 00914955  c644242006           mov byte ptr [esp + 0x20], 6
// 0091495a  e8815acdff           call 0x5ea3e0
// 0091495f  8b3d08b29800         mov edi, dword ptr [0x98b208]
// 00914965  895e38               mov dword ptr [esi + 0x38], ebx
// 00914968  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0091496b  895e40               mov dword ptr [esi + 0x40], ebx
// 0091496e  8b4634               mov eax, dword ptr [esi + 0x34]
// 00914971  83c408               add esp, 8
// 00914974  c644241805           mov byte ptr [esp + 0x18], 5
// 00914979  3bc3                 cmp eax, ebx
// 0091497b  7424                 je 0x9149a1
// 0091497d  83c004               add eax, 4
// 00914980  50                   push eax
// 00914981  ffd7                 call edi
// 00914983  85c0                 test eax, eax
// 00914985  7517                 jne 0x91499e
// 00914987  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0091498a  e89166b3ff           call 0x44b020
// 0091498f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00914992  3bcb                 cmp ecx, ebx
// 00914994  7408                 je 0x91499e
// 00914996  8b11                 mov edx, dword ptr [ecx]
// 00914998  8b02                 mov eax, dword ptr [edx]
// 0091499a  6a01                 push 1
// 0091499c  ffd0                 call eax
// 0091499e  895e34               mov dword ptr [esi + 0x34], ebx
// 009149a1  8b4630               mov eax, dword ptr [esi + 0x30]
// 009149a4  c644241804           mov byte ptr [esp + 0x18], 4
// 009149a9  3bc3                 cmp eax, ebx
// 009149ab  7424                 je 0x9149d1
// 009149ad  83c004               add eax, 4
// 009149b0  50                   push eax
// 009149b1  ffd7                 call edi
// 009149b3  85c0                 test eax, eax
// 009149b5  7517                 jne 0x9149ce
// 009149b7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009149ba  e86166b3ff           call 0x44b020
// 009149bf  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 009149c2  3bcb                 cmp ecx, ebx
// 009149c4  7408                 je 0x9149ce
// 009149c6  8b11                 mov edx, dword ptr [ecx]
// 009149c8  8b02                 mov eax, dword ptr [edx]
// 009149ca  6a01                 push 1
// 009149cc  ffd0                 call eax
// 009149ce  895e30               mov dword ptr [esi + 0x30], ebx
// 009149d1  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009149d4  c644241803           mov byte ptr [esp + 0x18], 3
// 009149d9  3bc3                 cmp eax, ebx
// 009149db  7424                 je 0x914a01
// 009149dd  83c004               add eax, 4
// 009149e0  50                   push eax
// 009149e1  ffd7                 call edi
// 009149e3  85c0                 test eax, eax
// 009149e5  7517                 jne 0x9149fe
// 009149e7  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 009149ea  e83166b3ff           call 0x44b020
// 009149ef  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 009149f2  3bcb                 cmp ecx, ebx
// 009149f4  7408                 je 0x9149fe
// 009149f6  8b11                 mov edx, dword ptr [ecx]
// 009149f8  8b02                 mov eax, dword ptr [edx]
// 009149fa  6a01                 push 1
// 009149fc  ffd0                 call eax
// 009149fe  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00914a01  8b4628               mov eax, dword ptr [esi + 0x28]
// 00914a04  c644241802           mov byte ptr [esp + 0x18], 2
// 00914a09  3bc3                 cmp eax, ebx
// 00914a0b  7424                 je 0x914a31
// 00914a0d  83c004               add eax, 4
// 00914a10  50                   push eax
// 00914a11  ffd7                 call edi
// 00914a13  85c0                 test eax, eax
// 00914a15  7517                 jne 0x914a2e
// 00914a17  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00914a1a  e80166b3ff           call 0x44b020
// 00914a1f  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00914a22  3bcb                 cmp ecx, ebx
// 00914a24  7408                 je 0x914a2e
// 00914a26  8b11                 mov edx, dword ptr [ecx]
// 00914a28  8b02                 mov eax, dword ptr [edx]
// 00914a2a  6a01                 push 1
// 00914a2c  ffd0                 call eax
// 00914a2e  895e28               mov dword ptr [esi + 0x28], ebx
// 00914a31  8b4624               mov eax, dword ptr [esi + 0x24]
// 00914a34  c644241801           mov byte ptr [esp + 0x18], 1
// 00914a39  3bc3                 cmp eax, ebx
// 00914a3b  7424                 je 0x914a61
// 00914a3d  83c004               add eax, 4
// 00914a40  50                   push eax
// 00914a41  ffd7                 call edi
// 00914a43  85c0                 test eax, eax
// 00914a45  7517                 jne 0x914a5e
// 00914a47  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00914a4a  e8d165b3ff           call 0x44b020
// 00914a4f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00914a52  3bcb                 cmp ecx, ebx
// 00914a54  7408                 je 0x914a5e
// 00914a56  8b11                 mov edx, dword ptr [ecx]
// 00914a58  8b02                 mov eax, dword ptr [edx]
// 00914a5a  6a01                 push 1
// 00914a5c  ffd0                 call eax
// 00914a5e  895e24               mov dword ptr [esi + 0x24], ebx
// 00914a61  6820cc5c00           push 0x5ccc20
// 00914a66  6a06                 push 6
// 00914a68  6a04                 push 4
// 00914a6a  8d4e0c               lea ecx, [esi + 0xc]
// 00914a6d  51                   push ecx
// 00914a6e  885c2428             mov byte ptr [esp + 0x28], bl
// 00914a72  e82dffedff           call 0x7f49a4
// 00914a77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00914a7b  5f                   pop edi
// 00914a7c  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 00914a82  5e                   pop esi
// 00914a83  5b                   pop ebx
// 00914a84  64890d00000000       mov dword ptr fs:[0], ecx
// 00914a8b  83c410               add esp, 0x10
// 00914a8e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
