// from server: 100% by auto
// roc 2011-06 00579c90  unit: seg_00570000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579c90
//
// 00579c90  81ec88010000         sub esp, 0x188
// 00579c96  53                   push ebx
// 00579c97  55                   push ebp
// 00579c98  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 00579c9f  56                   push esi
// 00579ca0  57                   push edi
// 00579ca1  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 00579ca8  8bf0                 mov esi, eax
// 00579caa  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 00579cb1  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00579cb7  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00579cba  c1fd02               sar ebp, 2
// 00579cbd  c1ff02               sar edi, 2
// 00579cc0  c1fe03               sar esi, 3
// 00579cc3  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 00579cca  8d8c2498000000       lea ecx, [esp + 0x98]
// 00579cd1  51                   push ecx
// 00579cd2  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 00579cd9  8bde                 mov ebx, esi
// 00579cdb  c1e505               shl ebp, 5
// 00579cde  c1e705               shl edi, 5
// 00579ce1  c1e305               shl ebx, 5
// 00579ce4  83c504               add ebp, 4
// 00579ce7  83c704               add edi, 4
// 00579cea  83c302               add ebx, 2
// 00579ced  55                   push ebp
// 00579cee  57                   push edi
// 00579cef  8bcb                 mov ecx, ebx
// 00579cf1  89542420             mov dword ptr [esp + 0x20], edx
// 00579cf5  e846fcffff           call 0x579940
// 00579cfa  8d542424             lea edx, [esp + 0x24]
// 00579cfe  52                   push edx
// 00579cff  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 00579d06  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00579d0d  51                   push ecx
// 00579d0e  50                   push eax
// 00579d0f  55                   push ebp
// 00579d10  53                   push ebx
// 00579d11  57                   push edi
// 00579d12  52                   push edx
// 00579d13  e8f8fdffff           call 0x579b10
// 00579d18  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 00579d1f  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 00579d26  03f6                 add esi, esi
// 00579d28  03f6                 add esi, esi
// 00579d2a  03f6                 add esi, esi
// 00579d2c  03c0                 add eax, eax
// 00579d2e  03c0                 add eax, eax
// 00579d30  c1e605               shl esi, 5
// 00579d33  03d2                 add edx, edx
// 00579d35  03f0                 add esi, eax
// 00579d37  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00579d3b  03d2                 add edx, edx
// 00579d3d  83c428               add esp, 0x28
// 00579d40  03f6                 add esi, esi
// 00579d42  8d4c2418             lea ecx, [esp + 0x18]
// 00579d46  89742410             mov dword ptr [esp + 0x10], esi
// 00579d4a  8d3c90               lea edi, [eax + edx*4]
// 00579d4d  bd04000000           mov ebp, 4
// 00579d52  8b542410             mov edx, dword ptr [esp + 0x10]
// 00579d56  bb08000000           mov ebx, 8
// 00579d5b  eb03                 jmp 0x579d60
// 00579d5d  8d4900               lea ecx, [ecx]
// 00579d60  8b07                 mov eax, dword ptr [edi]
// 00579d62  0fb631               movzx esi, byte ptr [ecx]
// 00579d65  6646                 inc si
// 00579d67  03c2                 add eax, edx
// 00579d69  668930               mov word ptr [eax], si
// 00579d6c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00579d70  6646                 inc si
// 00579d72  66897002             mov word ptr [eax + 2], si
// 00579d76  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00579d7a  6646                 inc si
// 00579d7c  66897004             mov word ptr [eax + 4], si
// 00579d80  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00579d84  6646                 inc si
// 00579d86  83c104               add ecx, 4
// 00579d89  83c240               add edx, 0x40
// 00579d8c  83eb01               sub ebx, 1
// 00579d8f  66897006             mov word ptr [eax + 6], si
// 00579d93  75cb                 jne 0x579d60
// 00579d95  83c704               add edi, 4
// 00579d98  83ed01               sub ebp, 1
// 00579d9b  75b5                 jne 0x579d52
// 00579d9d  5f                   pop edi
// 00579d9e  5e                   pop esi
// 00579d9f  5d                   pop ebp
// 00579da0  5b                   pop ebx
// 00579da1  81c488010000         add esp, 0x188
// 00579da7  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
