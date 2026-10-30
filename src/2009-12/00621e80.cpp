// roc 2009-12 00621e80  unit: seg_00620000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621e80
//
// 00621e80  81ec88010000         sub esp, 0x188
// 00621e86  53                   push ebx
// 00621e87  55                   push ebp
// 00621e88  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 00621e8f  56                   push esi
// 00621e90  57                   push edi
// 00621e91  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 00621e98  8bf0                 mov esi, eax
// 00621e9a  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 00621ea1  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00621ea7  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00621eaa  c1fd02               sar ebp, 2
// 00621ead  c1ff02               sar edi, 2
// 00621eb0  c1fe03               sar esi, 3
// 00621eb3  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 00621eba  8d8c2498000000       lea ecx, [esp + 0x98]
// 00621ec1  51                   push ecx
// 00621ec2  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 00621ec9  8bde                 mov ebx, esi
// 00621ecb  c1e505               shl ebp, 5
// 00621ece  c1e705               shl edi, 5
// 00621ed1  c1e305               shl ebx, 5
// 00621ed4  83c504               add ebp, 4
// 00621ed7  83c704               add edi, 4
// 00621eda  83c302               add ebx, 2
// 00621edd  55                   push ebp
// 00621ede  57                   push edi
// 00621edf  8bcb                 mov ecx, ebx
// 00621ee1  89542420             mov dword ptr [esp + 0x20], edx
// 00621ee5  e846fcffff           call 0x621b30
// 00621eea  8d542424             lea edx, [esp + 0x24]
// 00621eee  52                   push edx
// 00621eef  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 00621ef6  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00621efd  51                   push ecx
// 00621efe  50                   push eax
// 00621eff  55                   push ebp
// 00621f00  53                   push ebx
// 00621f01  57                   push edi
// 00621f02  52                   push edx
// 00621f03  e8f8fdffff           call 0x621d00
// 00621f08  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 00621f0f  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 00621f16  03f6                 add esi, esi
// 00621f18  03f6                 add esi, esi
// 00621f1a  03f6                 add esi, esi
// 00621f1c  03c0                 add eax, eax
// 00621f1e  03c0                 add eax, eax
// 00621f20  c1e605               shl esi, 5
// 00621f23  03d2                 add edx, edx
// 00621f25  03f0                 add esi, eax
// 00621f27  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00621f2b  03d2                 add edx, edx
// 00621f2d  83c428               add esp, 0x28
// 00621f30  03f6                 add esi, esi
// 00621f32  8d4c2418             lea ecx, [esp + 0x18]
// 00621f36  89742410             mov dword ptr [esp + 0x10], esi
// 00621f3a  8d3c90               lea edi, [eax + edx*4]
// 00621f3d  bd04000000           mov ebp, 4
// 00621f42  8b542410             mov edx, dword ptr [esp + 0x10]
// 00621f46  bb08000000           mov ebx, 8
// 00621f4b  eb03                 jmp 0x621f50
// 00621f4d  8d4900               lea ecx, [ecx]
// 00621f50  8b07                 mov eax, dword ptr [edi]
// 00621f52  0fb631               movzx esi, byte ptr [ecx]
// 00621f55  6646                 inc si
// 00621f57  03c2                 add eax, edx
// 00621f59  668930               mov word ptr [eax], si
// 00621f5c  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00621f60  6646                 inc si
// 00621f62  66897002             mov word ptr [eax + 2], si
// 00621f66  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00621f6a  6646                 inc si
// 00621f6c  66897004             mov word ptr [eax + 4], si
// 00621f70  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00621f74  6646                 inc si
// 00621f76  83c104               add ecx, 4
// 00621f79  83c240               add edx, 0x40
// 00621f7c  83eb01               sub ebx, 1
// 00621f7f  66897006             mov word ptr [eax + 6], si
// 00621f83  75cb                 jne 0x621f50
// 00621f85  83c704               add edi, 4
// 00621f88  83ed01               sub ebp, 1
// 00621f8b  75b5                 jne 0x621f42
// 00621f8d  5f                   pop edi
// 00621f8e  5e                   pop esi
// 00621f8f  5d                   pop ebp
// 00621f90  5b                   pop ebx
// 00621f91  81c488010000         add esp, 0x188
// 00621f97  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
