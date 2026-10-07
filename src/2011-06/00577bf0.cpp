// roc 2011-06 00577bf0  unit: seg_00570000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577bf0
//
// 00577bf0  53                   push ebx
// 00577bf1  56                   push esi
// 00577bf2  57                   push edi
// 00577bf3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00577bf7  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 00577bfd  837e1800             cmp dword ptr [esi + 0x18], 0
// 00577c01  8d5e18               lea ebx, [esi + 0x18]
// 00577c04  751d                 jne 0x577c23
// 00577c06  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00577c09  8b5614               mov edx, dword ptr [esi + 0x14]
// 00577c0c  8b4704               mov eax, dword ptr [edi + 4]
// 00577c0f  6a01                 push 1
// 00577c11  51                   push ecx
// 00577c12  8b4e08               mov ecx, dword ptr [esi + 8]
// 00577c15  52                   push edx
// 00577c16  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00577c19  51                   push ecx
// 00577c1a  57                   push edi
// 00577c1b  ffd2                 call edx
// 00577c1d  83c414               add esp, 0x14
// 00577c20  89460c               mov dword ptr [esi + 0xc], eax
// 00577c23  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00577c26  8b560c               mov edx, dword ptr [esi + 0xc]
// 00577c29  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 00577c2f  55                   push ebp
// 00577c30  8b2b                 mov ebp, dword ptr [ebx]
// 00577c32  51                   push ecx
// 00577c33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00577c37  53                   push ebx
// 00577c38  52                   push edx
// 00577c39  8b542428             mov edx, dword ptr [esp + 0x28]
// 00577c3d  51                   push ecx
// 00577c3e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00577c42  52                   push edx
// 00577c43  8b5004               mov edx, dword ptr [eax + 4]
// 00577c46  51                   push ecx
// 00577c47  57                   push edi
// 00577c48  ffd2                 call edx
// 00577c4a  8b03                 mov eax, dword ptr [ebx]
// 00577c4c  83c41c               add esp, 0x1c
// 00577c4f  3bc5                 cmp eax, ebp
// 00577c51  7629                 jbe 0x577c7c
// 00577c53  8b560c               mov edx, dword ptr [esi + 0xc]
// 00577c56  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 00577c5c  8b4904               mov ecx, dword ptr [ecx + 4]
// 00577c5f  2bc5                 sub eax, ebp
// 00577c61  50                   push eax
// 00577c62  89442418             mov dword ptr [esp + 0x18], eax
// 00577c66  6a00                 push 0
// 00577c68  8d04aa               lea eax, [edx + ebp*4]
// 00577c6b  50                   push eax
// 00577c6c  57                   push edi
// 00577c6d  ffd1                 call ecx
// 00577c6f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00577c73  8b542424             mov edx, dword ptr [esp + 0x24]
// 00577c77  83c410               add esp, 0x10
// 00577c7a  0110                 add dword ptr [eax], edx
// 00577c7c  8b4610               mov eax, dword ptr [esi + 0x10]
// 00577c7f  5d                   pop ebp
// 00577c80  3903                 cmp dword ptr [ebx], eax
// 00577c82  7209                 jb 0x577c8d
// 00577c84  014614               add dword ptr [esi + 0x14], eax
// 00577c87  c70300000000         mov dword ptr [ebx], 0
// 00577c8d  5f                   pop edi
// 00577c8e  5e                   pop esi
// 00577c8f  5b                   pop ebx
// 00577c90  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
