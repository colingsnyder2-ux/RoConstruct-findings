// from server: 100% by auto
// roc 2008-06 00538440  unit: seg_00530000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538440
//
// 00538440  83ec10               sub esp, 0x10
// 00538443  56                   push esi
// 00538444  8b742418             mov esi, dword ptr [esp + 0x18]
// 00538448  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0053844e  89442404             mov dword ptr [esp + 4], eax
// 00538452  33c0                 xor eax, eax
// 00538454  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 0053845a  8944240c             mov dword ptr [esp + 0xc], eax
// 0053845e  89442410             mov dword ptr [esp + 0x10], eax
// 00538462  89442408             mov dword ptr [esp + 8], eax
// 00538466  0f8eaf000000         jle 0x53851b
// 0053846c  53                   push ebx
// 0053846d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00538473  55                   push ebp
// 00538474  894c2420             mov dword ptr [esp + 0x20], ecx
// 00538478  57                   push edi
// 00538479  8da42400000000       lea esp, [esp]
// 00538480  8b542424             mov edx, dword ptr [esp + 0x24]
// 00538484  8b02                 mov eax, dword ptr [edx]
// 00538486  8b7814               mov edi, dword ptr [eax + 0x14]
// 00538489  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 0053848e  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00538491  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 00538495  752e                 jne 0x5384c5
// 00538497  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 0053849c  750d                 jne 0x5384ab
// 0053849e  56                   push esi
// 0053849f  e85c32feff           call 0x51b700
// 005384a4  83c404               add esp, 4
// 005384a7  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 005384ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 005384af  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 005384b3  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 005384b7  51                   push ecx
// 005384b8  52                   push edx
// 005384b9  56                   push esi
// 005384ba  e841fdffff           call 0x538200
// 005384bf  83c40c               add esp, 0xc
// 005384c2  c60301               mov byte ptr [ebx], 1
// 005384c5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 005384ca  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 005384ce  752e                 jne 0x5384fe
// 005384d0  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 005384d5  750d                 jne 0x5384e4
// 005384d7  56                   push esi
// 005384d8  e82332feff           call 0x51b700
// 005384dd  83c404               add esp, 4
// 005384e0  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 005384e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005384e8  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 005384ec  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 005384f0  51                   push ecx
// 005384f1  52                   push edx
// 005384f2  56                   push esi
// 005384f3  e808fdffff           call 0x538200
// 005384f8  83c40c               add esp, 0xc
// 005384fb  c60701               mov byte ptr [edi], 1
// 005384fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00538502  8344242404           add dword ptr [esp + 0x24], 4
// 00538507  40                   inc eax
// 00538508  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0053850e  89442414             mov dword ptr [esp + 0x14], eax
// 00538512  0f8c68ffffff         jl 0x538480
// 00538518  5f                   pop edi
// 00538519  5d                   pop ebp
// 0053851a  5b                   pop ebx
// 0053851b  5e                   pop esi
// 0053851c  83c410               add esp, 0x10
// 0053851f  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
