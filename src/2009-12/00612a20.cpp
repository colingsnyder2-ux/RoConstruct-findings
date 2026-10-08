// roc 2009-12 00612a20  unit: seg_00610000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00612a20
//
// 00612a20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00612a24  57                   push edi
// 00612a25  33ff                 xor edi, edi
// 00612a27  3bc7                 cmp eax, edi
// 00612a29  0f84b3000000         je 0x612ae2
// 00612a2f  803831               cmp byte ptr [eax], 0x31
// 00612a32  0f85aa000000         jne 0x612ae2
// 00612a38  837c241438           cmp dword ptr [esp + 0x14], 0x38
// 00612a3d  0f859f000000         jne 0x612ae2
// 00612a43  56                   push esi
// 00612a44  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00612a48  3bf7                 cmp esi, edi
// 00612a4a  0f848a000000         je 0x612ada
// 00612a50  897e18               mov dword ptr [esi + 0x18], edi
// 00612a53  397e20               cmp dword ptr [esi + 0x20], edi
// 00612a56  750a                 jne 0x612a62
// 00612a58  c7462020c16100       mov dword ptr [esi + 0x20], 0x61c120
// 00612a5f  897e28               mov dword ptr [esi + 0x28], edi
// 00612a62  397e24               cmp dword ptr [esi + 0x24], edi
// 00612a65  7507                 jne 0x612a6e
// 00612a67  c7462480ca6100       mov dword ptr [esi + 0x24], 0x61ca80
// 00612a6e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00612a71  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00612a74  6830250000           push 0x2530
// 00612a79  6a01                 push 1
// 00612a7b  50                   push eax
// 00612a7c  ffd1                 call ecx
// 00612a7e  83c40c               add esp, 0xc
// 00612a81  3bc7                 cmp eax, edi
// 00612a83  7508                 jne 0x612a8d
// 00612a85  5e                   pop esi
// 00612a86  b8fcffffff           mov eax, 0xfffffffc
// 00612a8b  5f                   pop edi
// 00612a8c  c3                   ret 
// 00612a8d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00612a91  3bcf                 cmp ecx, edi
// 00612a93  89461c               mov dword ptr [esi + 0x1c], eax
// 00612a96  7d07                 jge 0x612a9f
// 00612a98  897808               mov dword ptr [eax + 8], edi
// 00612a9b  f7d9                 neg ecx
// 00612a9d  eb11                 jmp 0x612ab0
// 00612a9f  8bd1                 mov edx, ecx
// 00612aa1  c1fa04               sar edx, 4
// 00612aa4  42                   inc edx
// 00612aa5  83f930               cmp ecx, 0x30
// 00612aa8  895008               mov dword ptr [eax + 8], edx
// 00612aab  7d03                 jge 0x612ab0
// 00612aad  83e10f               and ecx, 0xf
// 00612ab0  8d51f8               lea edx, [ecx - 8]
// 00612ab3  83fa07               cmp edx, 7
// 00612ab6  7712                 ja 0x612aca
// 00612ab8  56                   push esi
// 00612ab9  894824               mov dword ptr [eax + 0x24], ecx
// 00612abc  897834               mov dword ptr [eax + 0x34], edi
// 00612abf  e8fcfeffff           call 0x6129c0
// 00612ac4  83c404               add esp, 4
// 00612ac7  5e                   pop esi
// 00612ac8  5f                   pop edi
// 00612ac9  c3                   ret 
// 00612aca  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00612acd  50                   push eax
// 00612ace  8b4628               mov eax, dword ptr [esi + 0x28]
// 00612ad1  50                   push eax
// 00612ad2  ffd1                 call ecx
// 00612ad4  83c408               add esp, 8
// 00612ad7  897e1c               mov dword ptr [esi + 0x1c], edi
// 00612ada  5e                   pop esi
// 00612adb  b8feffffff           mov eax, 0xfffffffe
// 00612ae0  5f                   pop edi
// 00612ae1  c3                   ret 
// 00612ae2  b8faffffff           mov eax, 0xfffffffa
// 00612ae7  5f                   pop edi
// 00612ae8  c3                   ret 
// library zlib-1.2.3/inflate.c (function _inflateInit2_)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
