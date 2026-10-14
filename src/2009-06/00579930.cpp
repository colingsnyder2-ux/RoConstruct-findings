// roc 2009-06 00579930  unit: G3D::LineSegment  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579930
//
// 00579930  8b442404             mov eax, dword ptr [esp + 4]
// 00579934  53                   push ebx
// 00579935  55                   push ebp
// 00579936  56                   push esi
// 00579937  8bf1                 mov esi, ecx
// 00579939  8b6e04               mov ebp, dword ptr [esi + 4]
// 0057993c  b901000000           mov ecx, 1
// 00579941  894604               mov dword ptr [esi + 4], eax
// 00579944  57                   push edi
// 00579945  840dbc2ca400         test byte ptr [0xa42cbc], cl
// 0057994b  7513                 jne 0x579960
// 0057994d  090dbc2ca400         or dword ptr [0xa42cbc], ecx
// 00579953  bb20000000           mov ebx, 0x20
// 00579958  891db82ca400         mov dword ptr [0xa42cb8], ebx
// 0057995e  eb06                 jmp 0x579966
// 00579960  8b1db82ca400         mov ebx, dword ptr [0xa42cb8]
// 00579966  8b4e08               mov ecx, dword ptr [esi + 8]
// 00579969  8b7e04               mov edi, dword ptr [esi + 4]
// 0057996c  3bf9                 cmp edi, ecx
// 0057996e  0f8e86000000         jle 0x5799fa
// 00579974  85c9                 test ecx, ecx
// 00579976  7512                 jne 0x57998a
// 00579978  55                   push ebp
// 00579979  8bce                 mov ecx, esi
// 0057997b  894608               mov dword ptr [esi + 8], eax
// 0057997e  e85dffffff           call 0x5798e0
// 00579983  5f                   pop edi
// 00579984  5e                   pop esi
// 00579985  5d                   pop ebp
// 00579986  5b                   pop ebx
// 00579987  c20800               ret 8
// 0057998a  3bfb                 cmp edi, ebx
// 0057998c  7d12                 jge 0x5799a0
// 0057998e  55                   push ebp
// 0057998f  8bce                 mov ecx, esi
// 00579991  895e08               mov dword ptr [esi + 8], ebx
// 00579994  e847ffffff           call 0x5798e0
// 00579999  5f                   pop edi
// 0057999a  5e                   pop esi
// 0057999b  5d                   pop ebp
// 0057999c  5b                   pop ebx
// 0057999d  c20800               ret 8
// 005799a0  d90548e88b00         fld dword ptr [0x8be848]
// 005799a6  8bc1                 mov eax, ecx
// 005799a8  3d801a0600           cmp eax, 0x61a80
// 005799ad  760a                 jbe 0x5799b9
// 005799af  ddd8                 fstp st(0)
// 005799b1  d905a0ef8b00         fld dword ptr [0x8befa0]
// 005799b7  eb0f                 jmp 0x5799c8
// 005799b9  3d00fa0000           cmp eax, 0xfa00
// 005799be  7608                 jbe 0x5799c8
// 005799c0  ddd8                 fstp st(0)
// 005799c2  d90544d08b00         fld dword ptr [0x8bd044]
// 005799c8  8bd8                 mov ebx, eax
// 005799ca  895c2418             mov dword ptr [esp + 0x18], ebx
// 005799ce  da4c2418             fimul dword ptr [esp + 0x18]
// 005799d2  e8e9041a00           call 0x719ec0
// 005799d7  2bc3                 sub eax, ebx
// 005799d9  03c7                 add eax, edi
// 005799db  894608               mov dword ptr [esi + 8], eax
// 005799de  8b0db82ca400         mov ecx, dword ptr [0xa42cb8]
// 005799e4  3bc1                 cmp eax, ecx
// 005799e6  7d03                 jge 0x5799eb
// 005799e8  894e08               mov dword ptr [esi + 8], ecx
// 005799eb  55                   push ebp
// 005799ec  8bce                 mov ecx, esi
// 005799ee  e8edfeffff           call 0x5798e0
// 005799f3  5f                   pop edi
// 005799f4  5e                   pop esi
// 005799f5  5d                   pop ebp
// 005799f6  5b                   pop ebx
// 005799f7  c20800               ret 8
// 005799fa  b856555555           mov eax, 0x55555556
// 005799ff  f7e9                 imul ecx
// 00579a01  8bc2                 mov eax, edx
// 00579a03  c1e81f               shr eax, 0x1f
// 00579a06  03c2                 add eax, edx
// 00579a08  3bf8                 cmp edi, eax
// 00579a0a  7f19                 jg 0x579a25
// 00579a0c  807c241800           cmp byte ptr [esp + 0x18], 0
// 00579a11  7412                 je 0x579a25
// 00579a13  3bfb                 cmp edi, ebx
// 00579a15  7e0e                 jle 0x579a25
// 00579a17  3bfd                 cmp edi, ebp
// 00579a19  7c02                 jl 0x579a1d
// 00579a1b  8bfd                 mov edi, ebp
// 00579a1d  57                   push edi
// 00579a1e  8bce                 mov ecx, esi
// 00579a20  e8bbfeffff           call 0x5798e0
// 00579a25  5f                   pop edi
// 00579a26  5e                   pop esi
// 00579a27  5d                   pop ebp
// 00579a28  5b                   pop ebx
// 00579a29  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
