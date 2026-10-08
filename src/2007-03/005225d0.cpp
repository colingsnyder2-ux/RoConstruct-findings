// roc 2007-03 005225d0  unit: seg_00520000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005225d0
//
// 005225d0  53                   push ebx
// 005225d1  56                   push esi
// 005225d2  57                   push edi
// 005225d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005225d7  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 005225dd  837e1800             cmp dword ptr [esi + 0x18], 0
// 005225e1  8d5e18               lea ebx, [esi + 0x18]
// 005225e4  751d                 jne 0x522603
// 005225e6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005225e9  8b5614               mov edx, dword ptr [esi + 0x14]
// 005225ec  8b4704               mov eax, dword ptr [edi + 4]
// 005225ef  6a01                 push 1
// 005225f1  51                   push ecx
// 005225f2  8b4e08               mov ecx, dword ptr [esi + 8]
// 005225f5  52                   push edx
// 005225f6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005225f9  51                   push ecx
// 005225fa  57                   push edi
// 005225fb  ffd2                 call edx
// 005225fd  83c414               add esp, 0x14
// 00522600  89460c               mov dword ptr [esi + 0xc], eax
// 00522603  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00522606  8b560c               mov edx, dword ptr [esi + 0xc]
// 00522609  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0052260f  55                   push ebp
// 00522610  8b2b                 mov ebp, dword ptr [ebx]
// 00522612  51                   push ecx
// 00522613  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00522617  53                   push ebx
// 00522618  52                   push edx
// 00522619  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052261d  51                   push ecx
// 0052261e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00522622  52                   push edx
// 00522623  8b5004               mov edx, dword ptr [eax + 4]
// 00522626  51                   push ecx
// 00522627  57                   push edi
// 00522628  ffd2                 call edx
// 0052262a  8b03                 mov eax, dword ptr [ebx]
// 0052262c  83c41c               add esp, 0x1c
// 0052262f  3bc5                 cmp eax, ebp
// 00522631  7629                 jbe 0x52265c
// 00522633  8b560c               mov edx, dword ptr [esi + 0xc]
// 00522636  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0052263c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0052263f  2bc5                 sub eax, ebp
// 00522641  50                   push eax
// 00522642  89442418             mov dword ptr [esp + 0x18], eax
// 00522646  6a00                 push 0
// 00522648  8d04aa               lea eax, [edx + ebp*4]
// 0052264b  50                   push eax
// 0052264c  57                   push edi
// 0052264d  ffd1                 call ecx
// 0052264f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00522653  8b542424             mov edx, dword ptr [esp + 0x24]
// 00522657  83c410               add esp, 0x10
// 0052265a  0110                 add dword ptr [eax], edx
// 0052265c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052265f  3903                 cmp dword ptr [ebx], eax
// 00522661  5d                   pop ebp
// 00522662  7209                 jb 0x52266d
// 00522664  014614               add dword ptr [esi + 0x14], eax
// 00522667  c70300000000         mov dword ptr [ebx], 0
// 0052266d  5f                   pop edi
// 0052266e  5e                   pop esi
// 0052266f  5b                   pop ebx
// 00522670  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
