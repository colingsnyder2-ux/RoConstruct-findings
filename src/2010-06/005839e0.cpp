// from server: 100% by auto
// roc 2010-06 005839e0  unit: seg_00580000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005839e0
//
// 005839e0  81ec88010000         sub esp, 0x188
// 005839e6  53                   push ebx
// 005839e7  55                   push ebp
// 005839e8  8bac249c010000       mov ebp, dword ptr [esp + 0x19c]
// 005839ef  56                   push esi
// 005839f0  57                   push edi
// 005839f1  8bbc24a0010000       mov edi, dword ptr [esp + 0x1a0]
// 005839f8  8bf0                 mov esi, eax
// 005839fa  8b84249c010000       mov eax, dword ptr [esp + 0x19c]
// 00583a01  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00583a07  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00583a0a  c1fd02               sar ebp, 2
// 00583a0d  c1ff02               sar edi, 2
// 00583a10  c1fe03               sar esi, 3
// 00583a13  89ac24a4010000       mov dword ptr [esp + 0x1a4], ebp
// 00583a1a  8d8c2498000000       lea ecx, [esp + 0x98]
// 00583a21  51                   push ecx
// 00583a22  89bc24a4010000       mov dword ptr [esp + 0x1a4], edi
// 00583a29  8bde                 mov ebx, esi
// 00583a2b  c1e505               shl ebp, 5
// 00583a2e  c1e705               shl edi, 5
// 00583a31  c1e305               shl ebx, 5
// 00583a34  83c504               add ebp, 4
// 00583a37  83c704               add edi, 4
// 00583a3a  83c302               add ebx, 2
// 00583a3d  55                   push ebp
// 00583a3e  57                   push edi
// 00583a3f  8bcb                 mov ecx, ebx
// 00583a41  89542420             mov dword ptr [esp + 0x20], edx
// 00583a45  e846fcffff           call 0x583690
// 00583a4a  8d542424             lea edx, [esp + 0x24]
// 00583a4e  52                   push edx
// 00583a4f  8b9424ac010000       mov edx, dword ptr [esp + 0x1ac]
// 00583a56  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00583a5d  51                   push ecx
// 00583a5e  50                   push eax
// 00583a5f  55                   push ebp
// 00583a60  53                   push ebx
// 00583a61  57                   push edi
// 00583a62  52                   push edx
// 00583a63  e8f8fdffff           call 0x583860
// 00583a68  8b8424cc010000       mov eax, dword ptr [esp + 0x1cc]
// 00583a6f  8b9424c8010000       mov edx, dword ptr [esp + 0x1c8]
// 00583a76  03f6                 add esi, esi
// 00583a78  03f6                 add esi, esi
// 00583a7a  03f6                 add esi, esi
// 00583a7c  03c0                 add eax, eax
// 00583a7e  03c0                 add eax, eax
// 00583a80  c1e605               shl esi, 5
// 00583a83  03d2                 add edx, edx
// 00583a85  03f0                 add esi, eax
// 00583a87  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00583a8b  03d2                 add edx, edx
// 00583a8d  83c428               add esp, 0x28
// 00583a90  03f6                 add esi, esi
// 00583a92  8d4c2418             lea ecx, [esp + 0x18]
// 00583a96  89742410             mov dword ptr [esp + 0x10], esi
// 00583a9a  8d3c90               lea edi, [eax + edx*4]
// 00583a9d  bd04000000           mov ebp, 4
// 00583aa2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00583aa6  bb08000000           mov ebx, 8
// 00583aab  eb03                 jmp 0x583ab0
// 00583aad  8d4900               lea ecx, [ecx]
// 00583ab0  8b07                 mov eax, dword ptr [edi]
// 00583ab2  0fb631               movzx esi, byte ptr [ecx]
// 00583ab5  6646                 inc si
// 00583ab7  03c2                 add eax, edx
// 00583ab9  668930               mov word ptr [eax], si
// 00583abc  0fb67101             movzx esi, byte ptr [ecx + 1]
// 00583ac0  6646                 inc si
// 00583ac2  66897002             mov word ptr [eax + 2], si
// 00583ac6  0fb67102             movzx esi, byte ptr [ecx + 2]
// 00583aca  6646                 inc si
// 00583acc  66897004             mov word ptr [eax + 4], si
// 00583ad0  0fb67103             movzx esi, byte ptr [ecx + 3]
// 00583ad4  6646                 inc si
// 00583ad6  83c104               add ecx, 4
// 00583ad9  83c240               add edx, 0x40
// 00583adc  83eb01               sub ebx, 1
// 00583adf  66897006             mov word ptr [eax + 6], si
// 00583ae3  75cb                 jne 0x583ab0
// 00583ae5  83c704               add edi, 4
// 00583ae8  83ed01               sub ebp, 1
// 00583aeb  75b5                 jne 0x583aa2
// 00583aed  5f                   pop edi
// 00583aee  5e                   pop esi
// 00583aef  5d                   pop ebp
// 00583af0  5b                   pop ebx
// 00583af1  81c488010000         add esp, 0x188
// 00583af7  c3                   ret 
// library jpeg-6b/jquant2.c (function _fill_inverse_cmap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
