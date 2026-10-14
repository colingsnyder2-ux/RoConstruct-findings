// roc 2009-06 0049b4f0  unit: G3D::GImage::Error  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049b4f0
//
// 0049b4f0  8b442404             mov eax, dword ptr [esp + 4]
// 0049b4f4  53                   push ebx
// 0049b4f5  55                   push ebp
// 0049b4f6  56                   push esi
// 0049b4f7  8bf1                 mov esi, ecx
// 0049b4f9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0049b4fc  b901000000           mov ecx, 1
// 0049b501  894604               mov dword ptr [esi + 4], eax
// 0049b504  57                   push edi
// 0049b505  840d58c8a300         test byte ptr [0xa3c858], cl
// 0049b50b  7513                 jne 0x49b520
// 0049b50d  090d58c8a300         or dword ptr [0xa3c858], ecx
// 0049b513  bb20000000           mov ebx, 0x20
// 0049b518  891d54c8a300         mov dword ptr [0xa3c854], ebx
// 0049b51e  eb06                 jmp 0x49b526
// 0049b520  8b1d54c8a300         mov ebx, dword ptr [0xa3c854]
// 0049b526  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049b529  8b7e04               mov edi, dword ptr [esi + 4]
// 0049b52c  3bf9                 cmp edi, ecx
// 0049b52e  0f8e86000000         jle 0x49b5ba
// 0049b534  85c9                 test ecx, ecx
// 0049b536  7512                 jne 0x49b54a
// 0049b538  55                   push ebp
// 0049b539  8bce                 mov ecx, esi
// 0049b53b  894608               mov dword ptr [esi + 8], eax
// 0049b53e  e89de30d00           call 0x5798e0
// 0049b543  5f                   pop edi
// 0049b544  5e                   pop esi
// 0049b545  5d                   pop ebp
// 0049b546  5b                   pop ebx
// 0049b547  c20800               ret 8
// 0049b54a  3bfb                 cmp edi, ebx
// 0049b54c  7d12                 jge 0x49b560
// 0049b54e  55                   push ebp
// 0049b54f  8bce                 mov ecx, esi
// 0049b551  895e08               mov dword ptr [esi + 8], ebx
// 0049b554  e887e30d00           call 0x5798e0
// 0049b559  5f                   pop edi
// 0049b55a  5e                   pop esi
// 0049b55b  5d                   pop ebp
// 0049b55c  5b                   pop ebx
// 0049b55d  c20800               ret 8
// 0049b560  d90548e88b00         fld dword ptr [0x8be848]
// 0049b566  8bc1                 mov eax, ecx
// 0049b568  3d801a0600           cmp eax, 0x61a80
// 0049b56d  760a                 jbe 0x49b579
// 0049b56f  ddd8                 fstp st(0)
// 0049b571  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0049b577  eb0f                 jmp 0x49b588
// 0049b579  3d00fa0000           cmp eax, 0xfa00
// 0049b57e  7608                 jbe 0x49b588
// 0049b580  ddd8                 fstp st(0)
// 0049b582  d90544d08b00         fld dword ptr [0x8bd044]
// 0049b588  8bd8                 mov ebx, eax
// 0049b58a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049b58e  da4c2418             fimul dword ptr [esp + 0x18]
// 0049b592  e829e92700           call 0x719ec0
// 0049b597  2bc3                 sub eax, ebx
// 0049b599  03c7                 add eax, edi
// 0049b59b  894608               mov dword ptr [esi + 8], eax
// 0049b59e  8b0d54c8a300         mov ecx, dword ptr [0xa3c854]
// 0049b5a4  3bc1                 cmp eax, ecx
// 0049b5a6  7d03                 jge 0x49b5ab
// 0049b5a8  894e08               mov dword ptr [esi + 8], ecx
// 0049b5ab  55                   push ebp
// 0049b5ac  8bce                 mov ecx, esi
// 0049b5ae  e82de30d00           call 0x5798e0
// 0049b5b3  5f                   pop edi
// 0049b5b4  5e                   pop esi
// 0049b5b5  5d                   pop ebp
// 0049b5b6  5b                   pop ebx
// 0049b5b7  c20800               ret 8
// 0049b5ba  b856555555           mov eax, 0x55555556
// 0049b5bf  f7e9                 imul ecx
// 0049b5c1  8bc2                 mov eax, edx
// 0049b5c3  c1e81f               shr eax, 0x1f
// 0049b5c6  03c2                 add eax, edx
// 0049b5c8  3bf8                 cmp edi, eax
// 0049b5ca  7f19                 jg 0x49b5e5
// 0049b5cc  807c241800           cmp byte ptr [esp + 0x18], 0
// 0049b5d1  7412                 je 0x49b5e5
// 0049b5d3  3bfb                 cmp edi, ebx
// 0049b5d5  7e0e                 jle 0x49b5e5
// 0049b5d7  3bfd                 cmp edi, ebp
// 0049b5d9  7c02                 jl 0x49b5dd
// 0049b5db  8bfd                 mov edi, ebp
// 0049b5dd  57                   push edi
// 0049b5de  8bce                 mov ecx, esi
// 0049b5e0  e8fbe20d00           call 0x5798e0
// 0049b5e5  5f                   pop edi
// 0049b5e6  5e                   pop esi
// 0049b5e7  5d                   pop ebp
// 0049b5e8  5b                   pop ebx
// 0049b5e9  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
