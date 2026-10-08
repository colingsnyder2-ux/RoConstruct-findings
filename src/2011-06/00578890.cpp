// from server: 100% by auto
// roc 2011-06 00578890  unit: seg_00570000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578890
//
// 00578890  83ec28               sub esp, 0x28
// 00578893  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00578898  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057889c  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0057889f  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 005788a5  891424               mov dword ptr [esp], edx
// 005788a8  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005788ae  8b4808               mov ecx, dword ptr [eax + 8]
// 005788b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005788b5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005788b8  894c2420             mov dword ptr [esp + 0x20], ecx
// 005788bc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005788bf  8b4014               mov eax, dword ptr [eax + 0x14]
// 005788c2  8954241c             mov dword ptr [esp + 0x1c], edx
// 005788c6  894c2418             mov dword ptr [esp + 0x18], ecx
// 005788ca  89442414             mov dword ptr [esp + 0x14], eax
// 005788ce  0f8808010000         js 0x5789dc
// 005788d4  53                   push ebx
// 005788d5  55                   push ebp
// 005788d6  56                   push esi
// 005788d7  8b742440             mov esi, dword ptr [esp + 0x40]
// 005788db  03f6                 add esi, esi
// 005788dd  57                   push edi
// 005788de  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005788e2  03f6                 add esi, esi
// 005788e4  8b0f                 mov ecx, dword ptr [edi]
// 005788e6  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 005788e9  8b4f08               mov ecx, dword ptr [edi + 8]
// 005788ec  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 005788ef  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005788f3  8b4704               mov eax, dword ptr [edi + 4]
// 005788f6  8b0406               mov eax, dword ptr [esi + eax]
// 005788f9  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005788fd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00578900  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00578903  894c2414             mov dword ptr [esp + 0x14], ecx
// 00578907  8b4d00               mov ecx, dword ptr [ebp]
// 0057890a  83c504               add ebp, 4
// 0057890d  896c2448             mov dword ptr [esp + 0x48], ebp
// 00578911  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00578915  83c604               add esi, 4
// 00578918  89742434             mov dword ptr [esp + 0x34], esi
// 0057891c  85ed                 test ebp, ebp
// 0057891e  0f86a9000000         jbe 0x5789cd
// 00578924  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00578928  8bf3                 mov esi, ebx
// 0057892a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0057892e  2bf0                 sub esi, eax
// 00578930  2bd8                 sub ebx, eax
// 00578932  2bf8                 sub edi, eax
// 00578934  89742418             mov dword ptr [esp + 0x18], esi
// 00578938  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057893c  897c2414             mov dword ptr [esp + 0x14], edi
// 00578940  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00578944  eb12                 jmp 0x578958
// 00578946  eb08                 jmp 0x578950
// 00578948  8da42400000000       lea esp, [esp]
// 0057894f  90                   nop 
// 00578950  8b742418             mov esi, dword ptr [esp + 0x18]
// 00578954  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00578958  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0057895c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00578960  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00578964  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00578967  0fb638               movzx edi, byte ptr [eax]
// 0057896a  2bd6                 sub edx, esi
// 0057896c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 00578972  8811                 mov byte ptr [ecx], dl
// 00578974  8b542424             mov edx, dword ptr [esp + 0x24]
// 00578978  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 0057897b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057897f  031caa               add ebx, dword ptr [edx + ebp*4]
// 00578982  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00578986  c1fb10               sar ebx, 0x10
// 00578989  8bea                 mov ebp, edx
// 0057898b  2beb                 sub ebp, ebx
// 0057898d  2bee                 sub ebp, esi
// 0057898f  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 00578996  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0057899a  885901               mov byte ptr [ecx + 1], bl
// 0057899d  8bda                 mov ebx, edx
// 0057899f  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 005789a3  83c104               add ecx, 4
// 005789a6  2bde                 sub ebx, esi
// 005789a8  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 005789af  8b742414             mov esi, dword ptr [esp + 0x14]
// 005789b3  8859fe               mov byte ptr [ecx - 2], bl
// 005789b6  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 005789ba  8859ff               mov byte ptr [ecx - 1], bl
// 005789bd  40                   inc eax
// 005789be  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005789c3  758b                 jne 0x578950
// 005789c5  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005789c9  8b742434             mov esi, dword ptr [esp + 0x34]
// 005789cd  836c244c01           sub dword ptr [esp + 0x4c], 1
// 005789d2  0f890cffffff         jns 0x5788e4
// 005789d8  5f                   pop edi
// 005789d9  5e                   pop esi
// 005789da  5d                   pop ebp
// 005789db  5b                   pop ebx
// 005789dc  83c428               add esp, 0x28
// 005789df  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
