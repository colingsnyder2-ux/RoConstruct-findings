// roc 2009-12 0061fde0  unit: seg_00610000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061fde0
//
// 0061fde0  53                   push ebx
// 0061fde1  56                   push esi
// 0061fde2  57                   push edi
// 0061fde3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0061fde7  8bb78c010000         mov esi, dword ptr [edi + 0x18c]
// 0061fded  837e1800             cmp dword ptr [esi + 0x18], 0
// 0061fdf1  8d5e18               lea ebx, [esi + 0x18]
// 0061fdf4  751d                 jne 0x61fe13
// 0061fdf6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0061fdf9  8b5614               mov edx, dword ptr [esi + 0x14]
// 0061fdfc  8b4704               mov eax, dword ptr [edi + 4]
// 0061fdff  6a01                 push 1
// 0061fe01  51                   push ecx
// 0061fe02  8b4e08               mov ecx, dword ptr [esi + 8]
// 0061fe05  52                   push edx
// 0061fe06  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0061fe09  51                   push ecx
// 0061fe0a  57                   push edi
// 0061fe0b  ffd2                 call edx
// 0061fe0d  83c414               add esp, 0x14
// 0061fe10  89460c               mov dword ptr [esi + 0xc], eax
// 0061fe13  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0061fe16  8b560c               mov edx, dword ptr [esi + 0xc]
// 0061fe19  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0061fe1f  55                   push ebp
// 0061fe20  8b2b                 mov ebp, dword ptr [ebx]
// 0061fe22  51                   push ecx
// 0061fe23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061fe27  53                   push ebx
// 0061fe28  52                   push edx
// 0061fe29  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061fe2d  51                   push ecx
// 0061fe2e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061fe32  52                   push edx
// 0061fe33  8b5004               mov edx, dword ptr [eax + 4]
// 0061fe36  51                   push ecx
// 0061fe37  57                   push edi
// 0061fe38  ffd2                 call edx
// 0061fe3a  8b03                 mov eax, dword ptr [ebx]
// 0061fe3c  83c41c               add esp, 0x1c
// 0061fe3f  3bc5                 cmp eax, ebp
// 0061fe41  7629                 jbe 0x61fe6c
// 0061fe43  8b560c               mov edx, dword ptr [esi + 0xc]
// 0061fe46  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0061fe4c  8b4904               mov ecx, dword ptr [ecx + 4]
// 0061fe4f  2bc5                 sub eax, ebp
// 0061fe51  50                   push eax
// 0061fe52  89442418             mov dword ptr [esp + 0x18], eax
// 0061fe56  6a00                 push 0
// 0061fe58  8d04aa               lea eax, [edx + ebp*4]
// 0061fe5b  50                   push eax
// 0061fe5c  57                   push edi
// 0061fe5d  ffd1                 call ecx
// 0061fe5f  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061fe63  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061fe67  83c410               add esp, 0x10
// 0061fe6a  0110                 add dword ptr [eax], edx
// 0061fe6c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0061fe6f  5d                   pop ebp
// 0061fe70  3903                 cmp dword ptr [ebx], eax
// 0061fe72  7209                 jb 0x61fe7d
// 0061fe74  014614               add dword ptr [esi + 0x14], eax
// 0061fe77  c70300000000         mov dword ptr [ebx], 0
// 0061fe7d  5f                   pop edi
// 0061fe7e  5e                   pop esi
// 0061fe7f  5b                   pop ebx
// 0061fe80  c3                   ret 
// library jpeg-6b/jdpostct.c (function _post_process_prepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
