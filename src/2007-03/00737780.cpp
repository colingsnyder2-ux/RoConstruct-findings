// roc 2007-03 00737780  unit: seg_00730000  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00737780
//
// 00737780  6aff                 push -1
// 00737782  6889d67600           push 0x76d689
// 00737787  64a100000000         mov eax, dword ptr fs:[0]
// 0073778d  50                   push eax
// 0073778e  81ecb8000000         sub esp, 0xb8
// 00737794  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00737799  33c4                 xor eax, esp
// 0073779b  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 007377a2  53                   push ebx
// 007377a3  55                   push ebp
// 007377a4  56                   push esi
// 007377a5  57                   push edi
// 007377a6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007377ab  33c4                 xor eax, esp
// 007377ad  50                   push eax
// 007377ae  8d8424cc000000       lea eax, [esp + 0xcc]
// 007377b5  64a300000000         mov dword ptr fs:[0], eax
// 007377bb  8b8424e4000000       mov eax, dword ptr [esp + 0xe4]
// 007377c2  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 007377c9  8b9c24e0000000       mov ebx, dword ptr [esp + 0xe0]
// 007377d0  8bb424e8000000       mov esi, dword ptr [esp + 0xe8]
// 007377d7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007377df  8b0d8ce77700         mov ecx, dword ptr [0x77e78c]
// 007377e5  8b1584e77700         mov edx, dword ptr [0x77e784]
// 007377eb  51                   push ecx
// 007377ec  52                   push edx
// 007377ed  6a06                 push 6
// 007377ef  89442424             mov dword ptr [esp + 0x24], eax
// 007377f3  6a1c                 push 0x1c
// 007377f5  8d442430             lea eax, [esp + 0x30]
// 007377f9  50                   push eax
// 007377fa  896c2430             mov dword ptr [esp + 0x30], ebp
// 007377fe  e86978eeff           call 0x61f06c
// 00737803  56                   push esi
// 00737804  8d4c2424             lea ecx, [esp + 0x24]
// 00737808  c78424d800000001000000 mov dword ptr [esp + 0xd8], 1
// 00737813  ff154ce77700         call dword ptr [0x77e74c]
// 00737819  8d74243c             lea esi, [esp + 0x3c]
// 0073781d  bf05000000           mov edi, 5
// 00737822  68ac497800           push 0x7849ac
// 00737827  8bce                 mov ecx, esi
// 00737829  ff15f0e67700         call dword ptr [0x77e6f0]
// 0073782f  83c61c               add esi, 0x1c
// 00737832  83ef01               sub edi, 1
// 00737835  75eb                 jne 0x737822
// 00737837  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 0073783e  dd8424f0000000       fld qword ptr [esp + 0xf0]
// 00737845  8b9424ec000000       mov edx, dword ptr [esp + 0xec]
// 0073784c  51                   push ecx
// 0073784d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00737851  83ec08               sub esp, 8
// 00737854  dd1c24               fstp qword ptr [esp]
// 00737857  52                   push edx
// 00737858  8d442430             lea eax, [esp + 0x30]
// 0073785c  50                   push eax
// 0073785d  51                   push ecx
// 0073785e  53                   push ebx
// 0073785f  55                   push ebp
// 00737860  e84bf7ffff           call 0x736fb0
// 00737865  83c420               add esp, 0x20
// 00737868  8b158ce77700         mov edx, dword ptr [0x77e78c]
// 0073786e  52                   push edx
// 0073786f  6a06                 push 6
// 00737871  6a1c                 push 0x1c
// 00737873  8d44242c             lea eax, [esp + 0x2c]
// 00737877  50                   push eax
// 00737878  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00737880  c68424e400000000     mov byte ptr [esp + 0xe4], 0
// 00737888  e8f876eeff           call 0x61ef85
// 0073788d  8bc5                 mov eax, ebp
// 0073788f  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00737896  64890d00000000       mov dword ptr fs:[0], ecx
// 0073789d  59                   pop ecx
// 0073789e  5f                   pop edi
// 0073789f  5e                   pop esi
// 007378a0  5d                   pop ebp
// 007378a1  5b                   pop ebx
// 007378a2  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007378a9  33cc                 xor ecx, esp
// 007378ab  e8f675eeff           call 0x61eea6
// 007378b0  81c4c4000000         add esp, 0xc4
// 007378b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?fromFile@Sky@G3D@@SA?AV?$ReferenceCountedPointer@VSky@G3D@@@2@PAVRenderDevice@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NNH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
