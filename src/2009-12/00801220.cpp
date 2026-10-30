// roc 2009-12 00801220  unit: CXTPPaintManager  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801220
//
// 00801220  83ec24               sub esp, 0x24
// 00801223  53                   push ebx
// 00801224  55                   push ebp
// 00801225  8bc1                 mov eax, ecx
// 00801227  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080122b  8b9900010000         mov ebx, dword ptr [ecx + 0x100]
// 00801231  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 00801238  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0080123e  8ba9c0000000         mov ebp, dword ptr [ecx + 0xc0]
// 00801244  56                   push esi
// 00801245  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 0080124b  57                   push edi
// 0080124c  8bb9cc000000         mov edi, dword ptr [ecx + 0xcc]
// 00801252  89442410             mov dword ptr [esp + 0x10], eax
// 00801256  89542428             mov dword ptr [esp + 0x28], edx
// 0080125a  747a                 je 0x8012d6
// 0080125c  e82f4affff           call 0x7f5c90
// 00801261  83f804               cmp eax, 4
// 00801264  7563                 jne 0x8012c9
// 00801266  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080126a  e8d1ccffff           call 0x7fdf40
// 0080126f  8b9b00010000         mov ebx, dword ptr [ebx + 0x100]
// 00801275  83fb02               cmp ebx, 2
// 00801278  7405                 je 0x80127f
// 0080127a  83fb03               cmp ebx, 3
// 0080127d  750c                 jne 0x80128b
// 0080127f  03e8                 add ebp, eax
// 00801281  8b442428             mov eax, dword ptr [esp + 0x28]
// 00801285  89442418             mov dword ptr [esp + 0x18], eax
// 00801289  eb0a                 jmp 0x801295
// 0080128b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080128f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00801293  2bf8                 sub edi, eax
// 00801295  8b442438             mov eax, dword ptr [esp + 0x38]
// 00801299  8d4c2414             lea ecx, [esp + 0x14]
// 0080129d  897c2420             mov dword ptr [esp + 0x20], edi
// 008012a1  8974241c             mov dword ptr [esp + 0x1c], esi
// 008012a5  896c2414             mov dword ptr [esp + 0x14], ebp
// 008012a9  8b11                 mov edx, dword ptr [ecx]
// 008012ab  8910                 mov dword ptr [eax], edx
// 008012ad  8b5104               mov edx, dword ptr [ecx + 4]
// 008012b0  5f                   pop edi
// 008012b1  895004               mov dword ptr [eax + 4], edx
// 008012b4  8b5108               mov edx, dword ptr [ecx + 8]
// 008012b7  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008012ba  5e                   pop esi
// 008012bb  5d                   pop ebp
// 008012bc  895008               mov dword ptr [eax + 8], edx
// 008012bf  89480c               mov dword ptr [eax + 0xc], ecx
// 008012c2  5b                   pop ebx
// 008012c3  83c424               add esp, 0x24
// 008012c6  c20800               ret 8
// 008012c9  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 008012d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008012d4  7508                 jne 0x8012de
// 008012d6  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008012dc  eb07                 jmp 0x8012e5
// 008012de  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 008012e4  41                   inc ecx
// 008012e5  8b442438             mov eax, dword ptr [esp + 0x38]
// 008012e9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008012ed  2bf1                 sub esi, ecx
// 008012ef  89780c               mov dword ptr [eax + 0xc], edi
// 008012f2  5f                   pop edi
// 008012f3  897008               mov dword ptr [eax + 8], esi
// 008012f6  5e                   pop esi
// 008012f7  8928                 mov dword ptr [eax], ebp
// 008012f9  5d                   pop ebp
// 008012fa  895004               mov dword ptr [eax + 4], edx
// 008012fd  5b                   pop ebx
// 008012fe  83c424               add esp, 0x24
// 00801301  c20800               ret 8
// copied from an identical function in another client (function ?GetSplitButtonCommandRect@CXTPPaintManager@@UAE?AVCRect@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp