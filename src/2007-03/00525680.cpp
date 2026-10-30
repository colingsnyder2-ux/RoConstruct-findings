// roc 2007-03 00525680  unit: seg_00520000  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525680
//
// 00525680  83ec28               sub esp, 0x28
// 00525683  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00525687  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 0052568d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00525690  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00525693  56                   push esi
// 00525694  8b30                 mov esi, dword ptr [eax]
// 00525696  89742414             mov dword ptr [esp + 0x14], esi
// 0052569a  8b7004               mov esi, dword ptr [eax + 4]
// 0052569d  8b4008               mov eax, dword ptr [eax + 8]
// 005256a0  894c2410             mov dword ptr [esp + 0x10], ecx
// 005256a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005256a8  85c9                 test ecx, ecx
// 005256aa  89542424             mov dword ptr [esp + 0x24], edx
// 005256ae  89742418             mov dword ptr [esp + 0x18], esi
// 005256b2  89442420             mov dword ptr [esp + 0x20], eax
// 005256b6  0f8eec000000         jle 0x5257a8
// 005256bc  8b442434             mov eax, dword ptr [esp + 0x34]
// 005256c0  53                   push ebx
// 005256c1  55                   push ebp
// 005256c2  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005256c6  2bc5                 sub eax, ebp
// 005256c8  57                   push edi
// 005256c9  896c2410             mov dword ptr [esp + 0x10], ebp
// 005256cd  89442418             mov dword ptr [esp + 0x18], eax
// 005256d1  894c2414             mov dword ptr [esp + 0x14], ecx
// 005256d5  eb0d                 jmp 0x5256e4
// 005256d7  eb07                 jmp 0x5256e0
// 005256d9  8da42400000000       lea esp, [esp]
// 005256e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005256e4  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 005256e7  8b7500               mov esi, dword ptr [ebp]
// 005256ea  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 005256ed  8b7a38               mov edi, dword ptr [edx + 0x38]
// 005256f0  8b0428               mov eax, dword ptr [eax + ebp]
// 005256f3  894c2434             mov dword ptr [esp + 0x34], ecx
// 005256f7  c1e106               shl ecx, 6
// 005256fa  03d9                 add ebx, ecx
// 005256fc  8974243c             mov dword ptr [esp + 0x3c], esi
// 00525700  8b7234               mov esi, dword ptr [edx + 0x34]
// 00525703  03f1                 add esi, ecx
// 00525705  03f9                 add edi, ecx
// 00525707  895c2428             mov dword ptr [esp + 0x28], ebx
// 0052570b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052570f  33c9                 xor ecx, ecx
// 00525711  85db                 test ebx, ebx
// 00525713  895c2448             mov dword ptr [esp + 0x48], ebx
// 00525717  766d                 jbe 0x525786
// 00525719  8da42400000000       lea esp, [esp]
// 00525720  0fb610               movzx edx, byte ptr [eax]
// 00525723  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 00525726  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 00525729  03da                 add ebx, edx
// 0052572b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052572f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 00525733  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00525737  03eb                 add ebp, ebx
// 00525739  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052573d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00525741  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00525745  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00525749  83c001               add eax, 1
// 0052574c  03d3                 add edx, ebx
// 0052574e  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00525752  83c001               add eax, 1
// 00525755  03eb                 add ebp, ebx
// 00525757  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0052575b  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052575f  03d3                 add edx, ebx
// 00525761  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00525765  83c101               add ecx, 1
// 00525768  8813                 mov byte ptr [ebx], dl
// 0052576a  83c301               add ebx, 1
// 0052576d  83c001               add eax, 1
// 00525770  83e10f               and ecx, 0xf
// 00525773  836c244801           sub dword ptr [esp + 0x48], 1
// 00525778  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0052577c  75a2                 jne 0x525720
// 0052577e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00525782  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00525786  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052578a  83c001               add eax, 1
// 0052578d  83e00f               and eax, 0xf
// 00525790  83c504               add ebp, 4
// 00525793  836c241401           sub dword ptr [esp + 0x14], 1
// 00525798  894230               mov dword ptr [edx + 0x30], eax
// 0052579b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052579f  0f853bffffff         jne 0x5256e0
// 005257a5  5f                   pop edi
// 005257a6  5d                   pop ebp
// 005257a7  5b                   pop ebx
// 005257a8  5e                   pop esi
// 005257a9  83c428               add esp, 0x28
// 005257ac  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
