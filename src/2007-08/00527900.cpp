// roc 2007-08 00527900  unit: G3D::Line  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527900
//
// 00527900  53                   push ebx
// 00527901  56                   push esi
// 00527902  57                   push edi
// 00527903  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00527907  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 0052790d  837e1800             cmp dword ptr [esi + 0x18], 0
// 00527911  8d5e18               lea ebx, [esi + 0x18]
// 00527914  751d                 jne 0x527933
// 00527916  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00527919  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052791c  8b4704               mov eax, dword ptr [edi + 4]
// 0052791f  6a01                 push 1
// 00527921  51                   push ecx
// 00527922  8b4e08               mov ecx, dword ptr [esi + 8]
// 00527925  52                   push edx
// 00527926  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00527929  51                   push ecx
// 0052792a  57                   push edi
// 0052792b  ffd2                 call edx
// 0052792d  83c414               add esp, 0x14
// 00527930  89460c               mov dword ptr [esi + 0xc], eax
// 00527933  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00527936  8b560c               mov edx, dword ptr [esi + 0xc]
// 00527939  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0052793f  55                   push ebp
// 00527940  8b2b                 mov ebp, dword ptr [ebx]
// 00527942  51                   push ecx
// 00527943  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00527947  53                   push ebx
// 00527948  52                   push edx
// 00527949  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052794d  51                   push ecx
// 0052794e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00527952  52                   push edx
// 00527953  8b5004               mov edx, dword ptr [eax + 4]
// 00527956  51                   push ecx
// 00527957  57                   push edi
// 00527958  ffd2                 call edx
// 0052795a  8b03                 mov eax, dword ptr [ebx]
// 0052795c  83c41c               add esp, 0x1c
// 0052795f  3bc5                 cmp eax, ebp
// 00527961  7629                 jbe 0x52798c
// 00527963  8b560c               mov edx, dword ptr [esi + 0xc]
// 00527966  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0052796c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0052796f  2bc5                 sub eax, ebp
// 00527971  50                   push eax
// 00527972  89442418             mov dword ptr [esp + 0x18], eax
// 00527976  6a00                 push 0
// 00527978  8d04aa               lea eax, [edx + ebp*4]
// 0052797b  50                   push eax
// 0052797c  57                   push edi
// 0052797d  ffd1                 call ecx
// 0052797f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00527983  8b542424             mov edx, dword ptr [esp + 0x24]
// 00527987  83c410               add esp, 0x10
// 0052798a  0110                 add dword ptr [eax], edx
// 0052798c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052798f  3903                 cmp dword ptr [ebx], eax
// 00527991  5d                   pop ebp
// 00527992  7209                 jb 0x52799d
// 00527994  014614               add dword ptr [esi + 0x14], eax
// 00527997  c70300000000         mov dword ptr [ebx], 0
// 0052799d  5f                   pop edi
// 0052799e  5e                   pop esi
// 0052799f  5b                   pop ebx
// 005279a0  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
