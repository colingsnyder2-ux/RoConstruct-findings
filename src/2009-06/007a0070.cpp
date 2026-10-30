// roc 2009-06 007a0070  unit: CXTPControlGallery  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a0070
//
// 007a0070  83ec20               sub esp, 0x20
// 007a0073  57                   push edi
// 007a0074  8bf9                 mov edi, ecx
// 007a0076  e8d5d1ffff           call 0x79d250
// 007a007b  85c0                 test eax, eax
// 007a007d  750a                 jne 0x7a0089
// 007a007f  83c8ff               or eax, 0xffffffff
// 007a0082  5f                   pop edi
// 007a0083  83c420               add esp, 0x20
// 007a0086  c20800               ret 8
// 007a0089  53                   push ebx
// 007a008a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007a008e  56                   push esi
// 007a008f  8b742434             mov esi, dword ptr [esp + 0x34]
// 007a0093  83fbff               cmp ebx, -1
// 007a0096  740b                 je 0x7a00a3
// 007a0098  8bcf                 mov ecx, edi
// 007a009a  e8b1d1ffff           call 0x79d250
// 007a009f  3bd8                 cmp ebx, eax
// 007a00a1  7c10                 jl 0x7a00b3
// 007a00a3  56                   push esi
// 007a00a4  6aff                 push -1
// 007a00a6  8bcf                 mov ecx, edi
// 007a00a8  e893d5ffff           call 0x79d640
// 007a00ad  8bd8                 mov ebx, eax
// 007a00af  895c2430             mov dword ptr [esp + 0x30], ebx
// 007a00b3  85db                 test ebx, ebx
// 007a00b5  0f8c4b010000         jl 0x7a0206
// 007a00bb  3b9f54020000         cmp ebx, dword ptr [edi + 0x254]
// 007a00c1  0f8d3f010000         jge 0x7a0206
// 007a00c7  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 007a00cd  8d045b               lea eax, [ebx + ebx*2]
// 007a00d0  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 007a00d3  8d04c1               lea eax, [ecx + eax*8]
// 007a00d6  8b4804               mov ecx, dword ptr [eax + 4]
// 007a00d9  894c2410             mov dword ptr [esp + 0x10], ecx
// 007a00dd  55                   push ebp
// 007a00de  89542410             mov dword ptr [esp + 0x10], edx
// 007a00e2  8b5008               mov edx, dword ptr [eax + 8]
// 007a00e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a00e8  8d4c2420             lea ecx, [esp + 0x20]
// 007a00ec  51                   push ecx
// 007a00ed  8bcf                 mov ecx, edi
// 007a00ef  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a00f3  89442420             mov dword ptr [esp + 0x20], eax
// 007a00f7  e8c4d3ffff           call 0x79d4c0
// 007a00fc  85f6                 test esi, esi
// 007a00fe  0f8d81000000         jge 0x7a0185
// 007a0104  8d4bff               lea ecx, [ebx - 1]
// 007a0107  85c9                 test ecx, ecx
// 007a0109  0f8ceb000000         jl 0x7a01fa
// 007a010f  8b742424             mov esi, dword ptr [esp + 0x24]
// 007a0113  8d1449               lea edx, [ecx + ecx*2]
// 007a0116  03d2                 add edx, edx
// 007a0118  03d2                 add edx, edx
// 007a011a  03d2                 add edx, edx
// 007a011c  85c9                 test ecx, ecx
// 007a011e  7c60                 jl 0x7a0180
// 007a0120  3b8f54020000         cmp ecx, dword ptr [edi + 0x254]
// 007a0126  7d58                 jge 0x7a0180
// 007a0128  8b8750020000         mov eax, dword ptr [edi + 0x250]
// 007a012e  8b6c1010             mov ebp, dword ptr [eax + edx + 0x10]
// 007a0132  03c2                 add eax, edx
// 007a0134  837d4800             cmp dword ptr [ebp + 0x48], 0
// 007a0138  751d                 jne 0x7a0157
// 007a013a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007a013e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a0142  2b5804               sub ebx, dword ptr [eax + 4]
// 007a0145  2bee                 sub ebp, esi
// 007a0147  3bdd                 cmp ebx, ebp
// 007a0149  7d08                 jge 0x7a0153
// 007a014b  8bd9                 mov ebx, ecx
// 007a014d  895c2434             mov dword ptr [esp + 0x34], ebx
// 007a0151  eb04                 jmp 0x7a0157
// 007a0153  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007a0157  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007a015b  2b6804               sub ebp, dword ptr [eax + 4]
// 007a015e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007a0162  2bc6                 sub eax, esi
// 007a0164  3be8                 cmp ebp, eax
// 007a0166  0f8f8e000000         jg 0x7a01fa
// 007a016c  49                   dec ecx
// 007a016d  83ea18               sub edx, 0x18
// 007a0170  85c9                 test ecx, ecx
// 007a0172  7dac                 jge 0x7a0120
// 007a0174  5d                   pop ebp
// 007a0175  5e                   pop esi
// 007a0176  8bc3                 mov eax, ebx
// 007a0178  5b                   pop ebx
// 007a0179  5f                   pop edi
// 007a017a  83c420               add esp, 0x20
// 007a017d  c20800               ret 8
// 007a0180  e85f8bf7ff           call 0x718ce4
// 007a0185  8bcf                 mov ecx, edi
// 007a0187  8d5301               lea edx, [ebx + 1]
// 007a018a  e8c1d0ffff           call 0x79d250
// 007a018f  3bd0                 cmp edx, eax
// 007a0191  89442438             mov dword ptr [esp + 0x38], eax
// 007a0195  7d63                 jge 0x7a01fa
// 007a0197  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a019b  8d3452               lea esi, [edx + edx*2]
// 007a019e  03f6                 add esi, esi
// 007a01a0  03f6                 add esi, esi
// 007a01a2  03f6                 add esi, esi
// 007a01a4  85f6                 test esi, esi
// 007a01a6  7cd8                 jl 0x7a0180
// 007a01a8  3b9754020000         cmp edx, dword ptr [edi + 0x254]
// 007a01ae  7dd0                 jge 0x7a0180
// 007a01b0  8b8f50020000         mov ecx, dword ptr [edi + 0x250]
// 007a01b6  8b6c3110             mov ebp, dword ptr [ecx + esi + 0x10]
// 007a01ba  03ce                 add ecx, esi
// 007a01bc  837d4800             cmp dword ptr [ebp + 0x48], 0
// 007a01c0  751d                 jne 0x7a01df
// 007a01c2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 007a01c5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a01c9  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 007a01cd  2be8                 sub ebp, eax
// 007a01cf  3bdd                 cmp ebx, ebp
// 007a01d1  7d08                 jge 0x7a01db
// 007a01d3  8bda                 mov ebx, edx
// 007a01d5  895c2434             mov dword ptr [esp + 0x34], ebx
// 007a01d9  eb04                 jmp 0x7a01df
// 007a01db  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007a01df  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007a01e2  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a01e6  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 007a01ea  2be8                 sub ebp, eax
// 007a01ec  3bcd                 cmp ecx, ebp
// 007a01ee  7f0a                 jg 0x7a01fa
// 007a01f0  42                   inc edx
// 007a01f1  83c618               add esi, 0x18
// 007a01f4  3b542438             cmp edx, dword ptr [esp + 0x38]
// 007a01f8  7caa                 jl 0x7a01a4
// 007a01fa  5d                   pop ebp
// 007a01fb  5e                   pop esi
// 007a01fc  8bc3                 mov eax, ebx
// 007a01fe  5b                   pop ebx
// 007a01ff  5f                   pop edi
// 007a0200  83c420               add esp, 0x20
// 007a0203  c20800               ret 8
// 007a0206  e8d98af7ff           call 0x718ce4
// copied from an identical function in another client (function ?GetNextInPage@CXTPControlGallery@@QBEJJH@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lang: cpp
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp