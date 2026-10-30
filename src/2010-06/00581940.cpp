// from server: 100% by auto
// roc 2010-06 00581940  unit: seg_00580000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581940
//
// 00581940  53                   push ebx
// 00581941  56                   push esi
// 00581942  57                   push edi
// 00581943  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00581947  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 0058194d  837e1800             cmp dword ptr [esi + 0x18], 0
// 00581951  8d5e18               lea ebx, [esi + 0x18]
// 00581954  751d                 jne 0x581973
// 00581956  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00581959  8b5614               mov edx, dword ptr [esi + 0x14]
// 0058195c  8b4704               mov eax, dword ptr [edi + 4]
// 0058195f  6a01                 push 1
// 00581961  51                   push ecx
// 00581962  8b4e08               mov ecx, dword ptr [esi + 8]
// 00581965  52                   push edx
// 00581966  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00581969  51                   push ecx
// 0058196a  57                   push edi
// 0058196b  ffd2                 call edx
// 0058196d  83c414               add esp, 0x14
// 00581970  89460c               mov dword ptr [esi + 0xc], eax
// 00581973  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00581976  8b560c               mov edx, dword ptr [esi + 0xc]
// 00581979  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0058197f  55                   push ebp
// 00581980  8b2b                 mov ebp, dword ptr [ebx]
// 00581982  51                   push ecx
// 00581983  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00581987  53                   push ebx
// 00581988  52                   push edx
// 00581989  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058198d  51                   push ecx
// 0058198e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00581992  52                   push edx
// 00581993  8b5004               mov edx, dword ptr [eax + 4]
// 00581996  51                   push ecx
// 00581997  57                   push edi
// 00581998  ffd2                 call edx
// 0058199a  8b03                 mov eax, dword ptr [ebx]
// 0058199c  83c41c               add esp, 0x1c
// 0058199f  3bc5                 cmp eax, ebp
// 005819a1  7629                 jbe 0x5819cc
// 005819a3  8b560c               mov edx, dword ptr [esi + 0xc]
// 005819a6  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 005819ac  8b4904               mov ecx, dword ptr [ecx + 4]
// 005819af  2bc5                 sub eax, ebp
// 005819b1  50                   push eax
// 005819b2  89442418             mov dword ptr [esp + 0x18], eax
// 005819b6  6a00                 push 0
// 005819b8  8d04aa               lea eax, [edx + ebp*4]
// 005819bb  50                   push eax
// 005819bc  57                   push edi
// 005819bd  ffd1                 call ecx
// 005819bf  8b442438             mov eax, dword ptr [esp + 0x38]
// 005819c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005819c7  83c410               add esp, 0x10
// 005819ca  0110                 add dword ptr [eax], edx
// 005819cc  8b4610               mov eax, dword ptr [esi + 0x10]
// 005819cf  5d                   pop ebp
// 005819d0  3903                 cmp dword ptr [ebx], eax
// 005819d2  7209                 jb 0x5819dd
// 005819d4  014614               add dword ptr [esi + 0x14], eax
// 005819d7  c70300000000         mov dword ptr [ebx], 0
// 005819dd  5f                   pop edi
// 005819de  5e                   pop esi
// 005819df  5b                   pop ebx
// 005819e0  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
