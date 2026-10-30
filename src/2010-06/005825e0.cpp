// from server: 100% by auto
// roc 2010-06 005825e0  unit: seg_00580000  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005825e0
//
// 005825e0  83ec28               sub esp, 0x28
// 005825e3  836c243c01           sub dword ptr [esp + 0x3c], 1
// 005825e8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005825ec  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 005825ef  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 005825f5  891424               mov dword ptr [esp], edx
// 005825f8  8b9120010000         mov edx, dword ptr [ecx + 0x120]
// 005825fe  8b4808               mov ecx, dword ptr [eax + 8]
// 00582601  894c2410             mov dword ptr [esp + 0x10], ecx
// 00582605  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00582608  894c2420             mov dword ptr [esp + 0x20], ecx
// 0058260c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0058260f  8b4014               mov eax, dword ptr [eax + 0x14]
// 00582612  8954241c             mov dword ptr [esp + 0x1c], edx
// 00582616  894c2418             mov dword ptr [esp + 0x18], ecx
// 0058261a  89442414             mov dword ptr [esp + 0x14], eax
// 0058261e  0f8808010000         js 0x58272c
// 00582624  53                   push ebx
// 00582625  55                   push ebp
// 00582626  56                   push esi
// 00582627  8b742440             mov esi, dword ptr [esp + 0x40]
// 0058262b  03f6                 add esi, esi
// 0058262d  57                   push edi
// 0058262e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00582632  03f6                 add esi, esi
// 00582634  8b0f                 mov ecx, dword ptr [edi]
// 00582636  8b1c0e               mov ebx, dword ptr [esi + ecx]
// 00582639  8b4f08               mov ecx, dword ptr [edi + 8]
// 0058263c  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 0058263f  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00582643  8b4704               mov eax, dword ptr [edi + 4]
// 00582646  8b0406               mov eax, dword ptr [esi + eax]
// 00582649  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0058264d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00582650  8b0c0e               mov ecx, dword ptr [esi + ecx]
// 00582653  894c2414             mov dword ptr [esp + 0x14], ecx
// 00582657  8b4d00               mov ecx, dword ptr [ebp]
// 0058265a  83c504               add ebp, 4
// 0058265d  896c2448             mov dword ptr [esp + 0x48], ebp
// 00582661  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00582665  83c604               add esi, 4
// 00582668  89742434             mov dword ptr [esp + 0x34], esi
// 0058266c  85ed                 test ebp, ebp
// 0058266e  0f86a9000000         jbe 0x58271d
// 00582674  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00582678  8bf3                 mov esi, ebx
// 0058267a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0058267e  2bf0                 sub esi, eax
// 00582680  2bd8                 sub ebx, eax
// 00582682  2bf8                 sub edi, eax
// 00582684  89742418             mov dword ptr [esp + 0x18], esi
// 00582688  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058268c  897c2414             mov dword ptr [esp + 0x14], edi
// 00582690  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00582694  eb12                 jmp 0x5826a8
// 00582696  eb08                 jmp 0x5826a0
// 00582698  8da42400000000       lea esp, [esp]
// 0058269f  90                   nop 
// 005826a0  8b742418             mov esi, dword ptr [esp + 0x18]
// 005826a4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005826a8  0fb62c03             movzx ebp, byte ptr [ebx + eax]
// 005826ac  0fb63406             movzx esi, byte ptr [esi + eax]
// 005826b0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005826b4  2b14ab               sub edx, dword ptr [ebx + ebp*4]
// 005826b7  0fb638               movzx edi, byte ptr [eax]
// 005826ba  2bd6                 sub edx, esi
// 005826bc  8a92ff000000         mov dl, byte ptr [edx + 0xff]
// 005826c2  8811                 mov byte ptr [ecx], dl
// 005826c4  8b542424             mov edx, dword ptr [esp + 0x24]
// 005826c8  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 005826cb  8b542428             mov edx, dword ptr [esp + 0x28]
// 005826cf  031caa               add ebx, dword ptr [edx + ebp*4]
// 005826d2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005826d6  c1fb10               sar ebx, 0x10
// 005826d9  8bea                 mov ebp, edx
// 005826db  2beb                 sub ebp, ebx
// 005826dd  2bee                 sub ebp, esi
// 005826df  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 005826e6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005826ea  885901               mov byte ptr [ecx + 1], bl
// 005826ed  8bda                 mov ebx, edx
// 005826ef  2b5cbd00             sub ebx, dword ptr [ebp + edi*4]
// 005826f3  83c104               add ecx, 4
// 005826f6  2bde                 sub ebx, esi
// 005826f8  0fb69bff000000       movzx ebx, byte ptr [ebx + 0xff]
// 005826ff  8b742414             mov esi, dword ptr [esp + 0x14]
// 00582703  8859fe               mov byte ptr [ecx - 2], bl
// 00582706  0fb61c06             movzx ebx, byte ptr [esi + eax]
// 0058270a  8859ff               mov byte ptr [ecx - 1], bl
// 0058270d  40                   inc eax
// 0058270e  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00582713  758b                 jne 0x5826a0
// 00582715  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00582719  8b742434             mov esi, dword ptr [esp + 0x34]
// 0058271d  836c244c01           sub dword ptr [esp + 0x4c], 1
// 00582722  0f890cffffff         jns 0x582634
// 00582728  5f                   pop edi
// 00582729  5e                   pop esi
// 0058272a  5d                   pop ebp
// 0058272b  5b                   pop ebx
// 0058272c  83c428               add esp, 0x28
// 0058272f  c3                   ret 
// library jpeg-6b/jdcolor.c (function _ycck_cmyk_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
