// from server: 100% by auto
// roc 2012-06 00666280  unit: seg_00660000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666280
//
// 00666280  83ec28               sub esp, 0x28
// 00666283  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00666287  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 0066628d  8b4218               mov eax, dword ptr [edx + 0x18]
// 00666290  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00666293  56                   push esi
// 00666294  8b30                 mov esi, dword ptr [eax]
// 00666296  89742414             mov dword ptr [esp + 0x14], esi
// 0066629a  8b7004               mov esi, dword ptr [eax + 4]
// 0066629d  8b4008               mov eax, dword ptr [eax + 8]
// 006662a0  894c2410             mov dword ptr [esp + 0x10], ecx
// 006662a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006662a8  89542424             mov dword ptr [esp + 0x24], edx
// 006662ac  89742418             mov dword ptr [esp + 0x18], esi
// 006662b0  89442420             mov dword ptr [esp + 0x20], eax
// 006662b4  85c9                 test ecx, ecx
// 006662b6  0f8ee0000000         jle 0x66639c
// 006662bc  8b442434             mov eax, dword ptr [esp + 0x34]
// 006662c0  53                   push ebx
// 006662c1  55                   push ebp
// 006662c2  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 006662c6  2bc5                 sub eax, ebp
// 006662c8  57                   push edi
// 006662c9  896c2410             mov dword ptr [esp + 0x10], ebp
// 006662cd  89442418             mov dword ptr [esp + 0x18], eax
// 006662d1  894c2414             mov dword ptr [esp + 0x14], ecx
// 006662d5  eb0d                 jmp 0x6662e4
// 006662d7  eb07                 jmp 0x6662e0
// 006662d9  8da42400000000       lea esp, [esp]
// 006662e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006662e4  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 006662e7  8b7500               mov esi, dword ptr [ebp]
// 006662ea  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 006662ed  8b7a38               mov edi, dword ptr [edx + 0x38]
// 006662f0  8b0428               mov eax, dword ptr [eax + ebp]
// 006662f3  894c2434             mov dword ptr [esp + 0x34], ecx
// 006662f7  c1e106               shl ecx, 6
// 006662fa  03d9                 add ebx, ecx
// 006662fc  8974243c             mov dword ptr [esp + 0x3c], esi
// 00666300  8b7234               mov esi, dword ptr [edx + 0x34]
// 00666303  03f1                 add esi, ecx
// 00666305  03f9                 add edi, ecx
// 00666307  895c2428             mov dword ptr [esp + 0x28], ebx
// 0066630b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066630f  33c9                 xor ecx, ecx
// 00666311  895c2448             mov dword ptr [esp + 0x48], ebx
// 00666315  85db                 test ebx, ebx
// 00666317  7663                 jbe 0x66637c
// 00666319  8da42400000000       lea esp, [esp]
// 00666320  0fb610               movzx edx, byte ptr [eax]
// 00666323  8b1c8e               mov ebx, dword ptr [esi + ecx*4]
// 00666326  8b2c8f               mov ebp, dword ptr [edi + ecx*4]
// 00666329  03da                 add ebx, edx
// 0066632b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066632f  0fb61413             movzx edx, byte ptr [ebx + edx]
// 00666333  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00666337  03eb                 add ebp, ebx
// 00666339  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066633d  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00666341  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00666345  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00666349  40                   inc eax
// 0066634a  03d3                 add edx, ebx
// 0066634c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00666350  40                   inc eax
// 00666351  03eb                 add ebp, ebx
// 00666353  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00666357  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0066635b  03d3                 add edx, ebx
// 0066635d  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00666361  41                   inc ecx
// 00666362  8813                 mov byte ptr [ebx], dl
// 00666364  43                   inc ebx
// 00666365  40                   inc eax
// 00666366  83e10f               and ecx, 0xf
// 00666369  836c244801           sub dword ptr [esp + 0x48], 1
// 0066636e  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00666372  75ac                 jne 0x666320
// 00666374  8b542430             mov edx, dword ptr [esp + 0x30]
// 00666378  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066637c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00666380  40                   inc eax
// 00666381  83e00f               and eax, 0xf
// 00666384  83c504               add ebp, 4
// 00666387  836c241401           sub dword ptr [esp + 0x14], 1
// 0066638c  894230               mov dword ptr [edx + 0x30], eax
// 0066638f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00666393  0f8547ffffff         jne 0x6662e0
// 00666399  5f                   pop edi
// 0066639a  5d                   pop ebp
// 0066639b  5b                   pop ebx
// 0066639c  5e                   pop esi
// 0066639d  83c428               add esp, 0x28
// 006663a0  c3                   ret 
// library jpeg-6b/jquant1.c (function _quantize3_ord_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
