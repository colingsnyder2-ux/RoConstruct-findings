// from server: 100% by auto
// roc 2009-06 0059ddb0  unit: seg_00590000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ddb0
//
// 0059ddb0  53                   push ebx
// 0059ddb1  56                   push esi
// 0059ddb2  57                   push edi
// 0059ddb3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059ddb7  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 0059ddbd  837e1800             cmp dword ptr [esi + 0x18], 0
// 0059ddc1  8d5e18               lea ebx, [esi + 0x18]
// 0059ddc4  751d                 jne 0x59dde3
// 0059ddc6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059ddc9  8b5614               mov edx, dword ptr [esi + 0x14]
// 0059ddcc  8b4704               mov eax, dword ptr [edi + 4]
// 0059ddcf  6a01                 push 1
// 0059ddd1  51                   push ecx
// 0059ddd2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059ddd5  52                   push edx
// 0059ddd6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0059ddd9  51                   push ecx
// 0059ddda  57                   push edi
// 0059dddb  ffd2                 call edx
// 0059dddd  83c414               add esp, 0x14
// 0059dde0  89460c               mov dword ptr [esi + 0xc], eax
// 0059dde3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059dde6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059dde9  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0059ddef  55                   push ebp
// 0059ddf0  8b2b                 mov ebp, dword ptr [ebx]
// 0059ddf2  51                   push ecx
// 0059ddf3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059ddf7  53                   push ebx
// 0059ddf8  52                   push edx
// 0059ddf9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059ddfd  51                   push ecx
// 0059ddfe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059de02  52                   push edx
// 0059de03  8b5004               mov edx, dword ptr [eax + 4]
// 0059de06  51                   push ecx
// 0059de07  57                   push edi
// 0059de08  ffd2                 call edx
// 0059de0a  8b03                 mov eax, dword ptr [ebx]
// 0059de0c  83c41c               add esp, 0x1c
// 0059de0f  3bc5                 cmp eax, ebp
// 0059de11  7629                 jbe 0x59de3c
// 0059de13  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059de16  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0059de1c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059de1f  2bc5                 sub eax, ebp
// 0059de21  50                   push eax
// 0059de22  89442418             mov dword ptr [esp + 0x18], eax
// 0059de26  6a00                 push 0
// 0059de28  8d04aa               lea eax, [edx + ebp*4]
// 0059de2b  50                   push eax
// 0059de2c  57                   push edi
// 0059de2d  ffd1                 call ecx
// 0059de2f  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059de33  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059de37  83c410               add esp, 0x10
// 0059de3a  0110                 add dword ptr [eax], edx
// 0059de3c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059de3f  5d                   pop ebp
// 0059de40  3903                 cmp dword ptr [ebx], eax
// 0059de42  7209                 jb 0x59de4d
// 0059de44  014614               add dword ptr [esi + 0x14], eax
// 0059de47  c70300000000         mov dword ptr [ebx], 0
// 0059de4d  5f                   pop edi
// 0059de4e  5e                   pop esi
// 0059de4f  5b                   pop ebx
// 0059de50  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
