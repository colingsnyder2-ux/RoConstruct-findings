// roc 2007-08 00735110  unit: G3D::Sky  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00735110
//
// 00735110  6aff                 push -1
// 00735112  6829c47600           push 0x76c429
// 00735117  64a100000000         mov eax, dword ptr fs:[0]
// 0073511d  50                   push eax
// 0073511e  81ecb8000000         sub esp, 0xb8
// 00735124  a188518b00           mov eax, dword ptr [0x8b5188]
// 00735129  33c4                 xor eax, esp
// 0073512b  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 00735132  53                   push ebx
// 00735133  55                   push ebp
// 00735134  56                   push esi
// 00735135  57                   push edi
// 00735136  a188518b00           mov eax, dword ptr [0x8b5188]
// 0073513b  33c4                 xor eax, esp
// 0073513d  50                   push eax
// 0073513e  8d8424cc000000       lea eax, [esp + 0xcc]
// 00735145  64a300000000         mov dword ptr fs:[0], eax
// 0073514b  8b8424e4000000       mov eax, dword ptr [esp + 0xe4]
// 00735152  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00735159  8b9c24e0000000       mov ebx, dword ptr [esp + 0xe0]
// 00735160  8bb424e8000000       mov esi, dword ptr [esp + 0xe8]
// 00735167  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0073516f  8b0dace67700         mov ecx, dword ptr [0x77e6ac]
// 00735175  8b15a4e67700         mov edx, dword ptr [0x77e6a4]
// 0073517b  51                   push ecx
// 0073517c  52                   push edx
// 0073517d  6a06                 push 6
// 0073517f  89442424             mov dword ptr [esp + 0x24], eax
// 00735183  6a1c                 push 0x1c
// 00735185  8d442430             lea eax, [esp + 0x30]
// 00735189  50                   push eax
// 0073518a  896c2430             mov dword ptr [esp + 0x30], ebp
// 0073518e  e849baefff           call 0x630bdc
// 00735193  56                   push esi
// 00735194  8d4c2424             lea ecx, [esp + 0x24]
// 00735198  c78424d800000001000000 mov dword ptr [esp + 0xd8], 1
// 007351a3  ff1590e67700         call dword ptr [0x77e690]
// 007351a9  8d74243c             lea esi, [esp + 0x3c]
// 007351ad  bf05000000           mov edi, 5
// 007351b2  6854597800           push 0x785954
// 007351b7  8bce                 mov ecx, esi
// 007351b9  ff152ce67700         call dword ptr [0x77e62c]
// 007351bf  83c61c               add esi, 0x1c
// 007351c2  83ef01               sub edi, 1
// 007351c5  75eb                 jne 0x7351b2
// 007351c7  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 007351ce  dd8424f0000000       fld qword ptr [esp + 0xf0]
// 007351d5  8b9424ec000000       mov edx, dword ptr [esp + 0xec]
// 007351dc  51                   push ecx
// 007351dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007351e1  83ec08               sub esp, 8
// 007351e4  dd1c24               fstp qword ptr [esp]
// 007351e7  52                   push edx
// 007351e8  8d442430             lea eax, [esp + 0x30]
// 007351ec  50                   push eax
// 007351ed  51                   push ecx
// 007351ee  53                   push ebx
// 007351ef  55                   push ebp
// 007351f0  e83bf7ffff           call 0x734930
// 007351f5  83c420               add esp, 0x20
// 007351f8  8b15ace67700         mov edx, dword ptr [0x77e6ac]
// 007351fe  52                   push edx
// 007351ff  6a06                 push 6
// 00735201  6a1c                 push 0x1c
// 00735203  8d44242c             lea eax, [esp + 0x2c]
// 00735207  50                   push eax
// 00735208  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00735210  c68424e400000000     mov byte ptr [esp + 0xe4], 0
// 00735218  e8dab8efff           call 0x630af7
// 0073521d  8bc5                 mov eax, ebp
// 0073521f  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00735226  64890d00000000       mov dword ptr fs:[0], ecx
// 0073522d  59                   pop ecx
// 0073522e  5f                   pop edi
// 0073522f  5e                   pop esi
// 00735230  5d                   pop ebp
// 00735231  5b                   pop ebx
// 00735232  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00735239  33cc                 xor ecx, esp
// 0073523b  e8deb7efff           call 0x630a1e
// 00735240  81c4c4000000         add esp, 0xc4
// 00735246  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
