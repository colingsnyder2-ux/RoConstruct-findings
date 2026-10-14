// roc 2009-06 006a7b10  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7b10
//
// 006a7b10  8b442404             mov eax, dword ptr [esp + 4]
// 006a7b14  53                   push ebx
// 006a7b15  55                   push ebp
// 006a7b16  56                   push esi
// 006a7b17  8bf1                 mov esi, ecx
// 006a7b19  8b6e04               mov ebp, dword ptr [esi + 4]
// 006a7b1c  b901000000           mov ecx, 1
// 006a7b21  894604               mov dword ptr [esi + 4], eax
// 006a7b24  57                   push edi
// 006a7b25  840d1cfca400         test byte ptr [0xa4fc1c], cl
// 006a7b2b  7513                 jne 0x6a7b40
// 006a7b2d  090d1cfca400         or dword ptr [0xa4fc1c], ecx
// 006a7b33  bb0a000000           mov ebx, 0xa
// 006a7b38  891d18fca400         mov dword ptr [0xa4fc18], ebx
// 006a7b3e  eb06                 jmp 0x6a7b46
// 006a7b40  8b1d18fca400         mov ebx, dword ptr [0xa4fc18]
// 006a7b46  8b4e08               mov ecx, dword ptr [esi + 8]
// 006a7b49  8b7e04               mov edi, dword ptr [esi + 4]
// 006a7b4c  3bf9                 cmp edi, ecx
// 006a7b4e  0f8e8a000000         jle 0x6a7bde
// 006a7b54  85c9                 test ecx, ecx
// 006a7b56  7512                 jne 0x6a7b6a
// 006a7b58  55                   push ebp
// 006a7b59  8bce                 mov ecx, esi
// 006a7b5b  894608               mov dword ptr [esi + 8], eax
// 006a7b5e  e83de2fcff           call 0x675da0
// 006a7b63  5f                   pop edi
// 006a7b64  5e                   pop esi
// 006a7b65  5d                   pop ebp
// 006a7b66  5b                   pop ebx
// 006a7b67  c20800               ret 8
// 006a7b6a  3bfb                 cmp edi, ebx
// 006a7b6c  7d12                 jge 0x6a7b80
// 006a7b6e  55                   push ebp
// 006a7b6f  8bce                 mov ecx, esi
// 006a7b71  895e08               mov dword ptr [esi + 8], ebx
// 006a7b74  e827e2fcff           call 0x675da0
// 006a7b79  5f                   pop edi
// 006a7b7a  5e                   pop esi
// 006a7b7b  5d                   pop ebp
// 006a7b7c  5b                   pop ebx
// 006a7b7d  c20800               ret 8
// 006a7b80  d90548e88b00         fld dword ptr [0x8be848]
// 006a7b86  8bc1                 mov eax, ecx
// 006a7b88  03c0                 add eax, eax
// 006a7b8a  03c0                 add eax, eax
// 006a7b8c  3d801a0600           cmp eax, 0x61a80
// 006a7b91  760a                 jbe 0x6a7b9d
// 006a7b93  ddd8                 fstp st(0)
// 006a7b95  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006a7b9b  eb0f                 jmp 0x6a7bac
// 006a7b9d  3d00fa0000           cmp eax, 0xfa00
// 006a7ba2  7608                 jbe 0x6a7bac
// 006a7ba4  ddd8                 fstp st(0)
// 006a7ba6  d90544d08b00         fld dword ptr [0x8bd044]
// 006a7bac  8bd9                 mov ebx, ecx
// 006a7bae  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a7bb2  da4c2418             fimul dword ptr [esp + 0x18]
// 006a7bb6  e805230700           call 0x719ec0
// 006a7bbb  2bc3                 sub eax, ebx
// 006a7bbd  03c7                 add eax, edi
// 006a7bbf  894608               mov dword ptr [esi + 8], eax
// 006a7bc2  8b0d18fca400         mov ecx, dword ptr [0xa4fc18]
// 006a7bc8  3bc1                 cmp eax, ecx
// 006a7bca  7d03                 jge 0x6a7bcf
// 006a7bcc  894e08               mov dword ptr [esi + 8], ecx
// 006a7bcf  55                   push ebp
// 006a7bd0  8bce                 mov ecx, esi
// 006a7bd2  e8c9e1fcff           call 0x675da0
// 006a7bd7  5f                   pop edi
// 006a7bd8  5e                   pop esi
// 006a7bd9  5d                   pop ebp
// 006a7bda  5b                   pop ebx
// 006a7bdb  c20800               ret 8
// 006a7bde  b856555555           mov eax, 0x55555556
// 006a7be3  f7e9                 imul ecx
// 006a7be5  8bc2                 mov eax, edx
// 006a7be7  c1e81f               shr eax, 0x1f
// 006a7bea  03c2                 add eax, edx
// 006a7bec  3bf8                 cmp edi, eax
// 006a7bee  7f19                 jg 0x6a7c09
// 006a7bf0  807c241800           cmp byte ptr [esp + 0x18], 0
// 006a7bf5  7412                 je 0x6a7c09
// 006a7bf7  3bfb                 cmp edi, ebx
// 006a7bf9  7e0e                 jle 0x6a7c09
// 006a7bfb  3bfd                 cmp edi, ebp
// 006a7bfd  7c02                 jl 0x6a7c01
// 006a7bff  8bfd                 mov edi, ebp
// 006a7c01  57                   push edi
// 006a7c02  8bce                 mov ecx, esi
// 006a7c04  e897e1fcff           call 0x675da0
// 006a7c09  5f                   pop edi
// 006a7c0a  5e                   pop esi
// 006a7c0b  5d                   pop ebp
// 006a7c0c  5b                   pop ebx
// 006a7c0d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
