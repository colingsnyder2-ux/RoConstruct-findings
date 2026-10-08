// from server: 100% by auto
// roc 2007-08 005285c0  unit: seg_00520000  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005285c0
//
// 005285c0  83ec28               sub esp, 0x28
// 005285c3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005285c8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005285cc  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 005285cf  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 005285d5  891424               mov dword ptr [esp], edx
// 005285d8  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005285de  8b4808               mov ecx, dword ptr [eax + 8]
// 005285e1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005285e5  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005285e8  894c2420             mov dword ptr [esp + 0x20], ecx
// 005285ec  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005285ef  8b4014               mov eax, dword ptr [eax + 0x14]
// 005285f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 005285f6  894c2418             mov dword ptr [esp + 0x18], ecx
// 005285fa  89442414             mov dword ptr [esp + 0x14], eax
// 005285fe  0f880a010000         js 0x52870e
// 00528604  53                   push ebx
// 00528605  55                   push ebp
// 00528606  56                   push esi
// 00528607  8b742440             mov esi, dword ptr [esp + 0x40]
// 0052860b  03f6                 add esi, esi
// 0052860d  57                   push edi
// 0052860e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00528612  03f6                 add esi, esi
// 00528614  8b0f                 mov ecx, dword ptr [edi]
// 00528616  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 00528619  8b4f08               mov ecx, dword ptr [edi + 8]
// 0052861c  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 0052861f  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00528623  8b4704               mov eax, dword ptr [edi + 4]
// 00528626  8b0406               mov eax, dword ptr [esi + eax]
// 00528629  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0052862d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00528630  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00528633  894c2414             mov dword ptr [esp + 0x14], ecx
// 00528637  8b4d00               mov ecx, dword ptr [ebp]
// 0052863a  83c504               add ebp, 4
// 0052863d  896c2448             mov dword ptr [esp + 0x48], ebp
// 00528641  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00528645  83c604               add esi, 4
// 00528648  85ed                 test ebp, ebp
// 0052864a  89742434             mov dword ptr [esp + 0x34], esi
// 0052864e  0f86ab000000         jbe 0x5286ff
// 00528654  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00528658  8bf3                 mov esi, ebx
// 0052865a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0052865e  2bf0                 sub esi, eax
// 00528660  2bd8                 sub ebx, eax
// 00528662  2bf8                 sub edi, eax
// 00528664  89742418             mov dword ptr [esp + 0x18], esi
// 00528668  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052866c  897c2414             mov dword ptr [esp + 0x14], edi
// 00528670  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00528674  eb12                 jmp 0x528688
// 00528676  eb08                 jmp 0x528680
// 00528678  8da42400000000       lea esp, [esp]
// 0052867f  90                   nop 
// 00528680  8b742418             mov esi, dword ptr [esp + 0x18]
// 00528684  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00528688  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 0052868c  0fb63406             movzx esi, byte ptr [esi + eax]
// 00528690  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00528694  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 00528697  0fb638               movzx edi, byte ptr [eax]
// 0052869a  2bd6                 sub edx, esi
// 0052869c  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 005286a2  8811                 mov byte ptr [ecx], dl
// 005286a4  8b542424             mov edx, dword ptr [esp + 0x24]
// 005286a8  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 005286ab  8b542428             mov edx, dword ptr [esp + 0x28]
// 005286af  031caa               add ebx, dword ptr [edx + ebp*4]
// 005286b2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005286b6  c1fb10               sar ebx, 0x10
// 005286b9  8bea                 mov ebp, edx
// 005286bb  2beb                 sub ebp, ebx
// 005286bd  2bee                 sub ebp, esi
// 005286bf  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 005286c6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005286ca  885901               mov byte ptr [ecx + 1], bl
// 005286cd  8bda                 mov ebx, edx
// 005286cf  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 005286d3  83c104               add ecx, 4
// 005286d6  2bde                 sub ebx, esi
// 005286d8  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 005286df  8b742414             mov esi, dword ptr [esp + 0x14]
// 005286e3  8859fe               mov byte ptr [ecx - 2], bl
// 005286e6  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 005286ea  8859ff               mov byte ptr [ecx - 1], bl
// 005286ed  83c001               add eax, 1
// 005286f0  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005286f5  7589                 jne 0x528680
// 005286f7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005286fb  8b742434             mov esi, dword ptr [esp + 0x34]
// 005286ff  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00528704  0f890affffff         jns 0x528614
// 0052870a  5f                   pop edi
// 0052870b  5e                   pop esi
// 0052870c  5d                   pop ebp
// 0052870d  5b                   pop ebx
// 0052870e  83c428               add esp, 0x28
// 00528711  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
