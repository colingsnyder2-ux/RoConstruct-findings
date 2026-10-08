// from server: 100% by auto
// roc 2008-06 00533ad0  unit: seg_00530000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533ad0
//
// 00533ad0  53                   push ebx
// 00533ad1  56                   push esi
// 00533ad2  57                   push edi
// 00533ad3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00533ad7  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 00533add  837e1800             cmp dword ptr [esi + 0x18], 0
// 00533ae1  8d5e18               lea ebx, [esi + 0x18]
// 00533ae4  751d                 jne 0x533b03
// 00533ae6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00533ae9  8b5614               mov edx, dword ptr [esi + 0x14]
// 00533aec  8b4704               mov eax, dword ptr [edi + 4]
// 00533aef  6a01                 push 1
// 00533af1  51                   push ecx
// 00533af2  8b4e08               mov ecx, dword ptr [esi + 8]
// 00533af5  52                   push edx
// 00533af6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00533af9  51                   push ecx
// 00533afa  57                   push edi
// 00533afb  ffd2                 call edx
// 00533afd  83c414               add esp, 0x14
// 00533b00  89460c               mov dword ptr [esi + 0xc], eax
// 00533b03  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00533b06  8b560c               mov edx, dword ptr [esi + 0xc]
// 00533b09  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 00533b0f  55                   push ebp
// 00533b10  8b2b                 mov ebp, dword ptr [ebx]
// 00533b12  51                   push ecx
// 00533b13  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00533b17  53                   push ebx
// 00533b18  52                   push edx
// 00533b19  8b542428             mov edx, dword ptr [esp + 0x28]
// 00533b1d  51                   push ecx
// 00533b1e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00533b22  52                   push edx
// 00533b23  8b5004               mov edx, dword ptr [eax + 4]
// 00533b26  51                   push ecx
// 00533b27  57                   push edi
// 00533b28  ffd2                 call edx
// 00533b2a  8b03                 mov eax, dword ptr [ebx]
// 00533b2c  83c41c               add esp, 0x1c
// 00533b2f  3bc5                 cmp eax, ebp
// 00533b31  7629                 jbe 0x533b5c
// 00533b33  8b560c               mov edx, dword ptr [esi + 0xc]
// 00533b36  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 00533b3c  8b4904               mov ecx, dword ptr [ecx + 4]
// 00533b3f  2bc5                 sub eax, ebp
// 00533b41  50                   push eax
// 00533b42  89442418             mov dword ptr [esp + 0x18], eax
// 00533b46  6a00                 push 0
// 00533b48  8d04aa               lea eax, [edx + ebp*4]
// 00533b4b  50                   push eax
// 00533b4c  57                   push edi
// 00533b4d  ffd1                 call ecx
// 00533b4f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00533b53  8b542424             mov edx, dword ptr [esp + 0x24]
// 00533b57  83c410               add esp, 0x10
// 00533b5a  0110                 add dword ptr [eax], edx
// 00533b5c  8b4610               mov eax, dword ptr [esi + 0x10]
// 00533b5f  5d                   pop ebp
// 00533b60  3903                 cmp dword ptr [ebx], eax
// 00533b62  7209                 jb 0x533b6d
// 00533b64  014614               add dword ptr [esi + 0x14], eax
// 00533b67  c70300000000         mov dword ptr [ebx], 0
// 00533b6d  5f                   pop edi
// 00533b6e  5e                   pop esi
// 00533b6f  5b                   pop ebx
// 00533b70  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
