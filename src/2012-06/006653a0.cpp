// from server: 100% by auto
// roc 2012-06 006653a0  unit: seg_00660000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006653a0
//
// 006653a0  81ec88010000         sub esp, 0x188
// 006653a6  53                   push ebx
// 006653a7  55                   push ebp
// 006653a8  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 006653af  56                   push esi
// 006653b0  57                   push edi
// 006653b1  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 006653b8  8bf0                 mov esi, eax
// 006653ba  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 006653c1  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 006653c7  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006653ca  c1fd02               sar ebp, 2
// 006653cd  c1ff02               sar edi, 2
// 006653d0  c1fe03               sar esi, 3
// 006653d3  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 006653da  8d8c2498000000       lea ecx, [esp + 0x98]
// 006653e1  51                   push ecx
// 006653e2  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 006653e9  8bde                 mov ebx, esi
// 006653eb  c1e505               shl ebp, 5
// 006653ee  c1e705               shl edi, 5
// 006653f1  c1e305               shl ebx, 5
// 006653f4  83c504               add ebp, 4
// 006653f7  83c704               add edi, 4
// 006653fa  83c302               add ebx, 2
// 006653fd  55                   push ebp
// 006653fe  57                   push edi
// 006653ff  8bcb                 mov ecx, ebx
// 00665401  89542420             mov dword ptr [esp + 0x20], edx
// 00665405  e846fcffff           call 0x665050
// 0066540a  8d542424             lea edx, [esp + 0x24]
// 0066540e  52                   push edx
// 0066540f  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 00665416  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0066541d  51                   push ecx
// 0066541e  50                   push eax
// 0066541f  55                   push ebp
// 00665420  53                   push ebx
// 00665421  57                   push edi
// 00665422  52                   push edx
// 00665423  e8f8fdffff           call 0x665220
// 00665428  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 0066542f  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 00665436  03f6                 add esi, esi
// 00665438  03f6                 add esi, esi
// 0066543a  03f6                 add esi, esi
// 0066543c  03c0                 add eax, eax
// 0066543e  03c0                 add eax, eax
// 00665440  c1e605               shl esi, 5
// 00665443  03d2                 add edx, edx
// 00665445  03f0                 add esi, eax
// 00665447  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0066544b  03d2                 add edx, edx
// 0066544d  83c428               add esp, 0x28
// 00665450  03f6                 add esi, esi
// 00665452  8d4c2418             lea ecx, [esp + 0x18]
// 00665456  89742410             mov dword ptr [esp + 0x10], esi
// 0066545a  8d3c90               lea edi, [eax + edx*4]
// 0066545d  bd04000000           mov ebp, 4
// 00665462  8b542410             mov edx, dword ptr [esp + 0x10]
// 00665466  bb08000000           mov ebx, 8
// 0066546b  eb03                 jmp 0x665470
// 0066546d  8d4900               lea ecx, [ecx]
// 00665470  8b07                 mov eax, dword ptr [edi]
// 00665472  0fb631               movzx esi, byte ptr [ecx]
// 00665475  6646                 inc si
// 00665477  03c2                 add eax, edx
// 00665479  668930               mov word ptr [eax], si
// 0066547c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00665480  6646                 inc si
// 00665482  66897002             mov word ptr [eax + 2], si
// 00665486  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0066548a  6646                 inc si
// 0066548c  66897004             mov word ptr [eax + 4], si
// 00665490  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00665494  6646                 inc si
// 00665496  83c104               add ecx, 4
// 00665499  83c240               add edx, 0x40
// 0066549c  83eb01               sub ebx, 1
// 0066549f  66897006             mov word ptr [eax + 6], si
// 006654a3  75cb                 jne 0x665470
// 006654a5  83c704               add edi, 4
// 006654a8  83ed01               sub ebp, 1
// 006654ab  75b5                 jne 0x665462
// 006654ad  5f                   pop edi
// 006654ae  5e                   pop esi
// 006654af  5d                   pop ebp
// 006654b0  5b                   pop ebx
// 006654b1  81c488010000         add esp, 0x188
// 006654b7  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
