// roc 2009-06 006a7a10  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7a10
//
// 006a7a10  8b442404             mov eax, dword ptr [esp + 4]
// 006a7a14  53                   push ebx
// 006a7a15  55                   push ebp
// 006a7a16  56                   push esi
// 006a7a17  8bf1                 mov esi, ecx
// 006a7a19  8b6e04               mov ebp, dword ptr [esi + 4]
// 006a7a1c  b901000000           mov ecx, 1
// 006a7a21  894604               mov dword ptr [esi + 4], eax
// 006a7a24  57                   push edi
// 006a7a25  840d14fca400         test byte ptr [0xa4fc14], cl
// 006a7a2b  7513                 jne 0x6a7a40
// 006a7a2d  090d14fca400         or dword ptr [0xa4fc14], ecx
// 006a7a33  bb0a000000           mov ebx, 0xa
// 006a7a38  891d10fca400         mov dword ptr [0xa4fc10], ebx
// 006a7a3e  eb06                 jmp 0x6a7a46
// 006a7a40  8b1d10fca400         mov ebx, dword ptr [0xa4fc10]
// 006a7a46  8b4e08               mov ecx, dword ptr [esi + 8]
// 006a7a49  8b7e04               mov edi, dword ptr [esi + 4]
// 006a7a4c  3bf9                 cmp edi, ecx
// 006a7a4e  0f8e8a000000         jle 0x6a7ade
// 006a7a54  85c9                 test ecx, ecx
// 006a7a56  7512                 jne 0x6a7a6a
// 006a7a58  55                   push ebp
// 006a7a59  8bce                 mov ecx, esi
// 006a7a5b  894608               mov dword ptr [esi + 8], eax
// 006a7a5e  e83de3fcff           call 0x675da0
// 006a7a63  5f                   pop edi
// 006a7a64  5e                   pop esi
// 006a7a65  5d                   pop ebp
// 006a7a66  5b                   pop ebx
// 006a7a67  c20800               ret 8
// 006a7a6a  3bfb                 cmp edi, ebx
// 006a7a6c  7d12                 jge 0x6a7a80
// 006a7a6e  55                   push ebp
// 006a7a6f  8bce                 mov ecx, esi
// 006a7a71  895e08               mov dword ptr [esi + 8], ebx
// 006a7a74  e827e3fcff           call 0x675da0
// 006a7a79  5f                   pop edi
// 006a7a7a  5e                   pop esi
// 006a7a7b  5d                   pop ebp
// 006a7a7c  5b                   pop ebx
// 006a7a7d  c20800               ret 8
// 006a7a80  d90548e88b00         fld dword ptr [0x8be848]
// 006a7a86  8bc1                 mov eax, ecx
// 006a7a88  03c0                 add eax, eax
// 006a7a8a  03c0                 add eax, eax
// 006a7a8c  3d801a0600           cmp eax, 0x61a80
// 006a7a91  760a                 jbe 0x6a7a9d
// 006a7a93  ddd8                 fstp st(0)
// 006a7a95  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006a7a9b  eb0f                 jmp 0x6a7aac
// 006a7a9d  3d00fa0000           cmp eax, 0xfa00
// 006a7aa2  7608                 jbe 0x6a7aac
// 006a7aa4  ddd8                 fstp st(0)
// 006a7aa6  d90544d08b00         fld dword ptr [0x8bd044]
// 006a7aac  8bd9                 mov ebx, ecx
// 006a7aae  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a7ab2  da4c2418             fimul dword ptr [esp + 0x18]
// 006a7ab6  e805240700           call 0x719ec0
// 006a7abb  2bc3                 sub eax, ebx
// 006a7abd  03c7                 add eax, edi
// 006a7abf  894608               mov dword ptr [esi + 8], eax
// 006a7ac2  8b0d10fca400         mov ecx, dword ptr [0xa4fc10]
// 006a7ac8  3bc1                 cmp eax, ecx
// 006a7aca  7d03                 jge 0x6a7acf
// 006a7acc  894e08               mov dword ptr [esi + 8], ecx
// 006a7acf  55                   push ebp
// 006a7ad0  8bce                 mov ecx, esi
// 006a7ad2  e8c9e2fcff           call 0x675da0
// 006a7ad7  5f                   pop edi
// 006a7ad8  5e                   pop esi
// 006a7ad9  5d                   pop ebp
// 006a7ada  5b                   pop ebx
// 006a7adb  c20800               ret 8
// 006a7ade  b856555555           mov eax, 0x55555556
// 006a7ae3  f7e9                 imul ecx
// 006a7ae5  8bc2                 mov eax, edx
// 006a7ae7  c1e81f               shr eax, 0x1f
// 006a7aea  03c2                 add eax, edx
// 006a7aec  3bf8                 cmp edi, eax
// 006a7aee  7f19                 jg 0x6a7b09
// 006a7af0  807c241800           cmp byte ptr [esp + 0x18], 0
// 006a7af5  7412                 je 0x6a7b09
// 006a7af7  3bfb                 cmp edi, ebx
// 006a7af9  7e0e                 jle 0x6a7b09
// 006a7afb  3bfd                 cmp edi, ebp
// 006a7afd  7c02                 jl 0x6a7b01
// 006a7aff  8bfd                 mov edi, ebp
// 006a7b01  57                   push edi
// 006a7b02  8bce                 mov ecx, esi
// 006a7b04  e897e2fcff           call 0x675da0
// 006a7b09  5f                   pop edi
// 006a7b0a  5e                   pop esi
// 006a7b0b  5d                   pop ebp
// 006a7b0c  5b                   pop ebx
// 006a7b0d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
