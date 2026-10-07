// roc 2008-06 00535b70  unit: seg_00530000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535b70
//
// 00535b70  81ec88010000         sub esp, 0x188
// 00535b76  53                   push ebx
// 00535b77  55                   push ebp
// 00535b78  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 00535b7f  56                   push esi
// 00535b80  57                   push edi
// 00535b81  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 00535b88  8bf0                 mov esi, eax
// 00535b8a  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 00535b91  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00535b97  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00535b9a  c1fd02               sar ebp, 2
// 00535b9d  c1ff02               sar edi, 2
// 00535ba0  c1fe03               sar esi, 3
// 00535ba3  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 00535baa  8d8c2498000000       lea ecx, [esp + 0x98]
// 00535bb1  51                   push ecx
// 00535bb2  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 00535bb9  8bde                 mov ebx, esi
// 00535bbb  c1e505               shl ebp, 5
// 00535bbe  c1e705               shl edi, 5
// 00535bc1  c1e305               shl ebx, 5
// 00535bc4  83c504               add ebp, 4
// 00535bc7  83c704               add edi, 4
// 00535bca  83c302               add ebx, 2
// 00535bcd  55                   push ebp
// 00535bce  57                   push edi
// 00535bcf  8bcb                 mov ecx, ebx
// 00535bd1  89542420             mov dword ptr [esp + 0x20], edx
// 00535bd5  e846fcffff           call 0x535820
// 00535bda  8d542424             lea edx, [esp + 0x24]
// 00535bde  52                   push edx
// 00535bdf  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 00535be6  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00535bed  51                   push ecx
// 00535bee  50                   push eax
// 00535bef  55                   push ebp
// 00535bf0  53                   push ebx
// 00535bf1  57                   push edi
// 00535bf2  52                   push edx
// 00535bf3  e8f8fdffff           call 0x5359f0
// 00535bf8  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 00535bff  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 00535c06  03f6                 add esi, esi
// 00535c08  03f6                 add esi, esi
// 00535c0a  03f6                 add esi, esi
// 00535c0c  03c0                 add eax, eax
// 00535c0e  03c0                 add eax, eax
// 00535c10  c1e605               shl esi, 5
// 00535c13  03d2                 add edx, edx
// 00535c15  03f0                 add esi, eax
// 00535c17  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00535c1b  03d2                 add edx, edx
// 00535c1d  83c428               add esp, 0x28
// 00535c20  03f6                 add esi, esi
// 00535c22  8d4c2418             lea ecx, [esp + 0x18]
// 00535c26  89742410             mov dword ptr [esp + 0x10], esi
// 00535c2a  8d3c90               lea edi, [eax + edx*4]
// 00535c2d  bd04000000           mov ebp, 4
// 00535c32  8b542410             mov edx, dword ptr [esp + 0x10]
// 00535c36  bb08000000           mov ebx, 8
// 00535c3b  eb03                 jmp 0x535c40
// 00535c3d  8d4900               lea ecx, [ecx]
// 00535c40  8b07                 mov eax, dword ptr [edi]
// 00535c42  0fb631               movzx esi, byte ptr [ecx]
// 00535c45  6646                 inc si
// 00535c47  03c2                 add eax, edx
// 00535c49  668930               mov word ptr [eax], si
// 00535c4c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00535c50  6646                 inc si
// 00535c52  66897002             mov word ptr [eax + 2], si
// 00535c56  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00535c5a  6646                 inc si
// 00535c5c  66897004             mov word ptr [eax + 4], si
// 00535c60  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00535c64  6646                 inc si
// 00535c66  83c104               add ecx, 4
// 00535c69  83c240               add edx, 0x40
// 00535c6c  83eb01               sub ebx, 1
// 00535c6f  66897006             mov word ptr [eax + 6], si
// 00535c73  75cb                 jne 0x535c40
// 00535c75  83c704               add edi, 4
// 00535c78  83ed01               sub ebp, 1
// 00535c7b  75b5                 jne 0x535c32
// 00535c7d  5f                   pop edi
// 00535c7e  5e                   pop esi
// 00535c7f  5d                   pop ebp
// 00535c80  5b                   pop ebx
// 00535c81  81c488010000         add esp, 0x188
// 00535c87  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
