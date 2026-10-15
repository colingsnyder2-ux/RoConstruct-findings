// roc 2008-06 0059a200  unit: RBX::PartInstance  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a200
//
// 0059a200  8b442404             mov eax, dword ptr [esp + 4]
// 0059a204  53                   push ebx
// 0059a205  55                   push ebp
// 0059a206  56                   push esi
// 0059a207  8bf1                 mov esi, ecx
// 0059a209  8b5e04               mov ebx, dword ptr [esi + 4]
// 0059a20c  3bc3                 cmp eax, ebx
// 0059a20e  57                   push edi
// 0059a20f  894604               mov dword ptr [esi + 4], eax
// 0059a212  8be8                 mov ebp, eax
// 0059a214  7d41                 jge 0x59a257
// 0059a216  8b06                 mov eax, dword ptr [esi]
// 0059a218  8b7ce804             mov edi, dword ptr [eax + ebp*8 + 4]
// 0059a21c  8d44e804             lea eax, [eax + ebp*8 + 4]
// 0059a220  85ff                 test edi, edi
// 0059a222  742a                 je 0x59a24e
// 0059a224  8d4f04               lea ecx, [edi + 4]
// 0059a227  83caff               or edx, 0xffffffff
// 0059a22a  f00fc111             lock xadd dword ptr [ecx], edx
// 0059a22e  751e                 jne 0x59a24e
// 0059a230  8b07                 mov eax, dword ptr [edi]
// 0059a232  8b5004               mov edx, dword ptr [eax + 4]
// 0059a235  8bcf                 mov ecx, edi
// 0059a237  ffd2                 call edx
// 0059a239  8d4708               lea eax, [edi + 8]
// 0059a23c  83c9ff               or ecx, 0xffffffff
// 0059a23f  f00fc108             lock xadd dword ptr [eax], ecx
// 0059a243  7509                 jne 0x59a24e
// 0059a245  8b17                 mov edx, dword ptr [edi]
// 0059a247  8b4208               mov eax, dword ptr [edx + 8]
// 0059a24a  8bcf                 mov ecx, edi
// 0059a24c  ffd0                 call eax
// 0059a24e  45                   inc ebp
// 0059a24f  3beb                 cmp ebp, ebx
// 0059a251  7cc3                 jl 0x59a216
// 0059a253  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059a257  f6059863970001       test byte ptr [0x976398], 1
// 0059a25e  7514                 jne 0x59a274
// 0059a260  830d9863970001       or dword ptr [0x976398], 1
// 0059a267  bd0a000000           mov ebp, 0xa
// 0059a26c  892d94639700         mov dword ptr [0x976394], ebp
// 0059a272  eb06                 jmp 0x59a27a
// 0059a274  8b2d94639700         mov ebp, dword ptr [0x976394]
// 0059a27a  8b7e04               mov edi, dword ptr [esi + 4]
// 0059a27d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059a280  3bf9                 cmp edi, ecx
// 0059a282  7e6b                 jle 0x59a2ef
// 0059a284  85c9                 test ecx, ecx
// 0059a286  7509                 jne 0x59a291
// 0059a288  894608               mov dword ptr [esi + 8], eax
// 0059a28b  53                   push ebx
// 0059a28c  e982000000           jmp 0x59a313
// 0059a291  3bfd                 cmp edi, ebp
// 0059a293  7d06                 jge 0x59a29b
// 0059a295  896e08               mov dword ptr [esi + 8], ebp
// 0059a298  53                   push ebx
// 0059a299  eb78                 jmp 0x59a313
// 0059a29b  d90580e38100         fld dword ptr [0x81e380]
// 0059a2a1  8bc1                 mov eax, ecx
// 0059a2a3  03c0                 add eax, eax
// 0059a2a5  03c0                 add eax, eax
// 0059a2a7  03c0                 add eax, eax
// 0059a2a9  3d801a0600           cmp eax, 0x61a80
// 0059a2ae  760a                 jbe 0x59a2ba
// 0059a2b0  ddd8                 fstp st(0)
// 0059a2b2  d9057ce38100         fld dword ptr [0x81e37c]
// 0059a2b8  eb0f                 jmp 0x59a2c9
// 0059a2ba  3d00fa0000           cmp eax, 0xfa00
// 0059a2bf  7608                 jbe 0x59a2c9
// 0059a2c1  ddd8                 fstp st(0)
// 0059a2c3  d90534c48100         fld dword ptr [0x81c434]
// 0059a2c9  8be9                 mov ebp, ecx
// 0059a2cb  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059a2cf  da4c2418             fimul dword ptr [esp + 0x18]
// 0059a2d3  e818751000           call 0x6a17f0
// 0059a2d8  2bc5                 sub eax, ebp
// 0059a2da  03c7                 add eax, edi
// 0059a2dc  894608               mov dword ptr [esi + 8], eax
// 0059a2df  8b0d94639700         mov ecx, dword ptr [0x976394]
// 0059a2e5  3bc1                 cmp eax, ecx
// 0059a2e7  7d03                 jge 0x59a2ec
// 0059a2e9  894e08               mov dword ptr [esi + 8], ecx
// 0059a2ec  53                   push ebx
// 0059a2ed  eb24                 jmp 0x59a313
// 0059a2ef  b856555555           mov eax, 0x55555556
// 0059a2f4  f7e9                 imul ecx
// 0059a2f6  8bca                 mov ecx, edx
// 0059a2f8  c1e91f               shr ecx, 0x1f
// 0059a2fb  03ca                 add ecx, edx
// 0059a2fd  3bf9                 cmp edi, ecx
// 0059a2ff  7f19                 jg 0x59a31a
// 0059a301  807c241800           cmp byte ptr [esp + 0x18], 0
// 0059a306  7412                 je 0x59a31a
// 0059a308  3bfd                 cmp edi, ebp
// 0059a30a  7e0e                 jle 0x59a31a
// 0059a30c  3bfb                 cmp edi, ebx
// 0059a30e  7c02                 jl 0x59a312
// 0059a310  8bfb                 mov edi, ebx
// 0059a312  57                   push edi
// 0059a313  8bce                 mov ecx, esi
// 0059a315  e8a6f8ffff           call 0x599bc0
// 0059a31a  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0059a31d  8bcb                 mov ecx, ebx
// 0059a31f  7d1c                 jge 0x59a33d
// 0059a321  8b16                 mov edx, dword ptr [esi]
// 0059a323  8d04ca               lea eax, [edx + ecx*8]
// 0059a326  85c0                 test eax, eax
// 0059a328  740d                 je 0x59a337
// 0059a32a  c70000000000         mov dword ptr [eax], 0
// 0059a330  c7400400000000       mov dword ptr [eax + 4], 0
// 0059a337  41                   inc ecx
// 0059a338  3b4e04               cmp ecx, dword ptr [esi + 4]
// 0059a33b  7ce4                 jl 0x59a321
// 0059a33d  5f                   pop edi
// 0059a33e  5e                   pop esi
// 0059a33f  5d                   pop ebp
// 0059a340  5b                   pop ebx
// 0059a341  c20800               ret 8
// library rbxgs/roc_owner_array_members_805ee075da00f9ea.cpp (function ?resize@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_owner_array_members_805ee075da00f9ea.cpp
