// roc 2010-06 00856030  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856030
//
// 00856030  83ec10               sub esp, 0x10
// 00856033  53                   push ebx
// 00856034  55                   push ebp
// 00856035  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00856039  56                   push esi
// 0085603a  8bf1                 mov esi, ecx
// 0085603c  33c0                 xor eax, eax
// 0085603e  8d4e54               lea ecx, [esi + 0x54]
// 00856041  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00856047  898688000000         mov dword ptr [esi + 0x88], eax
// 0085604d  8b01                 mov eax, dword ptr [ecx]
// 0085604f  8b5004               mov edx, dword ptr [eax + 4]
// 00856052  57                   push edi
// 00856053  55                   push ebp
// 00856054  ffd2                 call edx
// 00856056  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085605a  8b08                 mov ecx, dword ptr [eax]
// 0085605c  8b5008               mov edx, dword ptr [eax + 8]
// 0085605f  8b5804               mov ebx, dword ptr [eax + 4]
// 00856062  8b780c               mov edi, dword ptr [eax + 0xc]
// 00856065  894c2410             mov dword ptr [esp + 0x10], ecx
// 00856069  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0085606c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00856070  89542418             mov dword ptr [esp + 0x18], edx
// 00856074  897c241c             mov dword ptr [esp + 0x1c], edi
// 00856078  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 0085607e  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 00856085  740c                 je 0x856093
// 00856087  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0085608d  03fb                 add edi, ebx
// 0085608f  897c241c             mov dword ptr [esp + 0x1c], edi
// 00856093  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0085609a  740b                 je 0x8560a7
// 0085609c  8b08                 mov ecx, dword ptr [eax]
// 0085609e  8bd1                 mov edx, ecx
// 008560a0  2b567c               sub edx, dword ptr [esi + 0x7c]
// 008560a3  8910                 mov dword ptr [eax], edx
// 008560a5  eb0b                 jmp 0x8560b2
// 008560a7  8b5008               mov edx, dword ptr [eax + 8]
// 008560aa  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008560ad  03ca                 add ecx, edx
// 008560af  894808               mov dword ptr [eax + 8], ecx
// 008560b2  837e2000             cmp dword ptr [esi + 0x20], 0
// 008560b6  894c2418             mov dword ptr [esp + 0x18], ecx
// 008560ba  89542410             mov dword ptr [esp + 0x10], edx
// 008560be  752c                 jne 0x8560ec
// 008560c0  8b4504               mov eax, dword ptr [ebp + 4]
// 008560c3  68ffff0000           push 0xffff
// 008560c8  50                   push eax
// 008560c9  8d4c2418             lea ecx, [esp + 0x18]
// 008560cd  51                   push ecx
// 008560ce  6800010040           push 0x40000100
// 008560d3  6a00                 push 0
// 008560d5  8bce                 mov ecx, esi
// 008560d7  e83028f5ff           call 0x7a890c
// 008560dc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008560e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008560e4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008560e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 008560ec  6a44                 push 0x44
// 008560ee  2bfb                 sub edi, ebx
// 008560f0  57                   push edi
// 008560f1  2bca                 sub ecx, edx
// 008560f3  51                   push ecx
// 008560f4  53                   push ebx
// 008560f5  52                   push edx
// 008560f6  6a00                 push 0
// 008560f8  8bce                 mov ecx, esi
// 008560fa  e86d1cf5ff           call 0x7a7d6c
// 008560ff  5f                   pop edi
// 00856100  5e                   pop esi
// 00856101  5d                   pop ebp
// 00856102  5b                   pop ebx
// 00856103  83c410               add esp, 0x10
// 00856106  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
