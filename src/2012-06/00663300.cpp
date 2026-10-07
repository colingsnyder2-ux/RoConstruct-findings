// roc 2012-06 00663300  unit: seg_00660000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663300
//
// 00663300  53                   push ebx
// 00663301  56                   push esi
// 00663302  57                   push edi
// 00663303  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00663307  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 0066330d  837e1800             cmp dword ptr [esi + 0x18], 0
// 00663311  8d5e18               lea ebx, [esi + 0x18]
// 00663314  751d                 jne 0x663333
// 00663316  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00663319  8b5614               mov edx, dword ptr [esi + 0x14]
// 0066331c  8b4704               mov eax, dword ptr [edi + 4]
// 0066331f  6a01                 push 1
// 00663321  51                   push ecx
// 00663322  8b4e08               mov ecx, dword ptr [esi + 8]
// 00663325  52                   push edx
// 00663326  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00663329  51                   push ecx
// 0066332a  57                   push edi
// 0066332b  ffd2                 call edx
// 0066332d  83c414               add esp, 0x14
// 00663330  89460c               mov dword ptr [esi + 0xc], eax
// 00663333  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00663336  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663339  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0066333f  55                   push ebp
// 00663340  8b2b                 mov ebp, dword ptr [ebx]
// 00663342  51                   push ecx
// 00663343  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00663347  53                   push ebx
// 00663348  52                   push edx
// 00663349  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066334d  51                   push ecx
// 0066334e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00663352  52                   push edx
// 00663353  8b5004               mov edx, dword ptr [eax + 4]
// 00663356  51                   push ecx
// 00663357  57                   push edi
// 00663358  ffd2                 call edx
// 0066335a  8b03                 mov eax, dword ptr [ebx]
// 0066335c  83c41c               add esp, 0x1c
// 0066335f  3bc5                 cmp eax, ebp
// 00663361  7629                 jbe 0x66338c
// 00663363  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663366  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0066336c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066336f  2bc5                 sub eax, ebp
// 00663371  50                   push eax
// 00663372  89442418             mov dword ptr [esp + 0x18], eax
// 00663376  6a00                 push 0
// 00663378  8d04aa               lea eax, [edx + ebp*4]
// 0066337b  50                   push eax
// 0066337c  57                   push edi
// 0066337d  ffd1                 call ecx
// 0066337f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00663383  8b542424             mov edx, dword ptr [esp + 0x24]
// 00663387  83c410               add esp, 0x10
// 0066338a  0110                 add dword ptr [eax], edx
// 0066338c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066338f  5d                   pop ebp
// 00663390  3903                 cmp dword ptr [ebx], eax
// 00663392  7209                 jb 0x66339d
// 00663394  014614               add dword ptr [esi + 0x14], eax
// 00663397  c70300000000         mov dword ptr [ebx], 0
// 0066339d  5f                   pop edi
// 0066339e  5e                   pop esi
// 0066339f  5b                   pop ebx
// 006633a0  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
