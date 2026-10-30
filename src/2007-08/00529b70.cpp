// from server: 100% by auto
// roc 2007-08 00529b70  unit: seg_00520000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529b70
//
// 00529b70  83ec14               sub esp, 0x14
// 00529b73  8b442418             mov eax, dword ptr [esp + 0x18]
// 00529b77  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00529b7d  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00529b80  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00529b83  56                   push esi
// 00529b84  8b742428             mov esi, dword ptr [esp + 0x28]
// 00529b88  85f6                 test esi, esi
// 00529b8a  8954240c             mov dword ptr [esp + 0xc], edx
// 00529b8e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00529b92  0f8e9b000000         jle 0x529c33
// 00529b98  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529b9c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00529ba0  53                   push ebx
// 00529ba1  2bd0                 sub edx, eax
// 00529ba3  55                   push ebp
// 00529ba4  8944240c             mov dword ptr [esp + 0xc], eax
// 00529ba8  8954241c             mov dword ptr [esp + 0x1c], edx
// 00529bac  89742410             mov dword ptr [esp + 0x10], esi
// 00529bb0  57                   push edi
// 00529bb1  85c9                 test ecx, ecx
// 00529bb3  8b3402               mov esi, dword ptr [edx + eax]
// 00529bb6  8b18                 mov ebx, dword ptr [eax]
// 00529bb8  894c2434             mov dword ptr [esp + 0x34], ecx
// 00529bbc  7664                 jbe 0x529c22
// 00529bbe  8bff                 mov edi, edi
// 00529bc0  0fb606               movzx eax, byte ptr [esi]
// 00529bc3  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00529bc7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00529bcb  83c601               add esi, 1
// 00529bce  0fb65601             movzx edx, byte ptr [esi + 1]
// 00529bd2  83c601               add esi, 1
// 00529bd5  c1e902               shr ecx, 2
// 00529bd8  8bf9                 mov edi, ecx
// 00529bda  c1e705               shl edi, 5
// 00529bdd  c1e803               shr eax, 3
// 00529be0  8b6c8500             mov ebp, dword ptr [ebp + eax*4]
// 00529be4  c1ea03               shr edx, 3
// 00529be7  03fa                 add edi, edx
// 00529be9  8d7c7d00             lea edi, [ebp + edi*2]
// 00529bed  83c601               add esi, 1
// 00529bf0  66833f00             cmp word ptr [edi], 0
// 00529bf4  750f                 jne 0x529c05
// 00529bf6  52                   push edx
// 00529bf7  50                   push eax
// 00529bf8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00529bfc  50                   push eax
// 00529bfd  e82efeffff           call 0x529a30
// 00529c02  83c40c               add esp, 0xc
// 00529c05  8a0f                 mov cl, byte ptr [edi]
// 00529c07  80e901               sub cl, 1
// 00529c0a  880b                 mov byte ptr [ebx], cl
// 00529c0c  83c301               add ebx, 1
// 00529c0f  836c243401           sub dword ptr [esp + 0x34], 1
// 00529c14  75aa                 jne 0x529bc0
// 00529c16  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00529c1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529c1e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00529c22  83c004               add eax, 4
// 00529c25  836c241401           sub dword ptr [esp + 0x14], 1
// 00529c2a  89442410             mov dword ptr [esp + 0x10], eax
// 00529c2e  7581                 jne 0x529bb1
// 00529c30  5f                   pop edi
// 00529c31  5d                   pop ebp
// 00529c32  5b                   pop ebx
// 00529c33  5e                   pop esi
// 00529c34  83c414               add esp, 0x14
// 00529c37  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jquant2.c
