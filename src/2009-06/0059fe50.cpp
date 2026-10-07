// roc 2009-06 0059fe50  unit: seg_00590000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059fe50
//
// 0059fe50  81ec88010000         sub esp, 0x188
// 0059fe56  53                   push ebx
// 0059fe57  55                   push ebp
// 0059fe58  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 0059fe5f  56                   push esi
// 0059fe60  57                   push edi
// 0059fe61  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 0059fe68  8bf0                 mov esi, eax
// 0059fe6a  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 0059fe71  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 0059fe77  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0059fe7a  c1fd02               sar ebp, 2
// 0059fe7d  c1ff02               sar edi, 2
// 0059fe80  c1fe03               sar esi, 3
// 0059fe83  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 0059fe8a  8d8c2498000000       lea ecx, [esp + 0x98]
// 0059fe91  51                   push ecx
// 0059fe92  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 0059fe99  8bde                 mov ebx, esi
// 0059fe9b  c1e505               shl ebp, 5
// 0059fe9e  c1e705               shl edi, 5
// 0059fea1  c1e305               shl ebx, 5
// 0059fea4  83c504               add ebp, 4
// 0059fea7  83c704               add edi, 4
// 0059feaa  83c302               add ebx, 2
// 0059fead  55                   push ebp
// 0059feae  57                   push edi
// 0059feaf  8bcb                 mov ecx, ebx
// 0059feb1  89542420             mov dword ptr [esp + 0x20], edx
// 0059feb5  e846fcffff           call 0x59fb00
// 0059feba  8d542424             lea edx, [esp + 0x24]
// 0059febe  52                   push edx
// 0059febf  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 0059fec6  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0059fecd  51                   push ecx
// 0059fece  50                   push eax
// 0059fecf  55                   push ebp
// 0059fed0  53                   push ebx
// 0059fed1  57                   push edi
// 0059fed2  52                   push edx
// 0059fed3  e8f8fdffff           call 0x59fcd0
// 0059fed8  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 0059fedf  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 0059fee6  03f6                 add esi, esi
// 0059fee8  03f6                 add esi, esi
// 0059feea  03f6                 add esi, esi
// 0059feec  03c0                 add eax, eax
// 0059feee  03c0                 add eax, eax
// 0059fef0  c1e605               shl esi, 5
// 0059fef3  03d2                 add edx, edx
// 0059fef5  03f0                 add esi, eax
// 0059fef7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059fefb  03d2                 add edx, edx
// 0059fefd  83c428               add esp, 0x28
// 0059ff00  03f6                 add esi, esi
// 0059ff02  8d4c2418             lea ecx, [esp + 0x18]
// 0059ff06  89742410             mov dword ptr [esp + 0x10], esi
// 0059ff0a  8d3c90               lea edi, [eax + edx*4]
// 0059ff0d  bd04000000           mov ebp, 4
// 0059ff12  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059ff16  bb08000000           mov ebx, 8
// 0059ff1b  eb03                 jmp 0x59ff20
// 0059ff1d  8d4900               lea ecx, [ecx]
// 0059ff20  8b07                 mov eax, dword ptr [edi]
// 0059ff22  0fb631               movzx esi, byte ptr [ecx]
// 0059ff25  6646                 inc si
// 0059ff27  03c2                 add eax, edx
// 0059ff29  668930               mov word ptr [eax], si
// 0059ff2c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0059ff30  6646                 inc si
// 0059ff32  66897002             mov word ptr [eax + 2], si
// 0059ff36  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0059ff3a  6646                 inc si
// 0059ff3c  66897004             mov word ptr [eax + 4], si
// 0059ff40  0fb67103             movzx esi, byte ptr [ecx + 3]
// 0059ff44  6646                 inc si
// 0059ff46  83c104               add ecx, 4
// 0059ff49  83c240               add edx, 0x40
// 0059ff4c  83eb01               sub ebx, 1
// 0059ff4f  66897006             mov word ptr [eax + 6], si
// 0059ff53  75cb                 jne 0x59ff20
// 0059ff55  83c704               add edi, 4
// 0059ff58  83ed01               sub ebp, 1
// 0059ff5b  75b5                 jne 0x59ff12
// 0059ff5d  5f                   pop edi
// 0059ff5e  5e                   pop esi
// 0059ff5f  5d                   pop ebp
// 0059ff60  5b                   pop ebx
// 0059ff61  81c488010000         add esp, 0x188
// 0059ff67  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
