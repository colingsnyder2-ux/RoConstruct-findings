// roc 2011-06 008b6030  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b6030
//
// 008b6030  83ec10               sub esp, 0x10
// 008b6033  53                   push ebx
// 008b6034  55                   push ebp
// 008b6035  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008b6039  56                   push esi
// 008b603a  8bf1                 mov esi, ecx
// 008b603c  33c0                 xor eax, eax
// 008b603e  8d4e54               lea ecx, [esi + 0x54]
// 008b6041  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008b6047  898688000000         mov dword ptr [esi + 0x88], eax
// 008b604d  8b01                 mov eax, dword ptr [ecx]
// 008b604f  8b5004               mov edx, dword ptr [eax + 4]
// 008b6052  57                   push edi
// 008b6053  55                   push ebp
// 008b6054  ffd2                 call edx
// 008b6056  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b605a  8b08                 mov ecx, dword ptr [eax]
// 008b605c  8b5008               mov edx, dword ptr [eax + 8]
// 008b605f  8b5804               mov ebx, dword ptr [eax + 4]
// 008b6062  8b780c               mov edi, dword ptr [eax + 0xc]
// 008b6065  894c2410             mov dword ptr [esp + 0x10], ecx
// 008b6069  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008b606c  895c2414             mov dword ptr [esp + 0x14], ebx
// 008b6070  89542418             mov dword ptr [esp + 0x18], edx
// 008b6074  897c241c             mov dword ptr [esp + 0x1c], edi
// 008b6078  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 008b607e  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 008b6085  740c                 je 0x8b6093
// 008b6087  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008b608d  03fb                 add edi, ebx
// 008b608f  897c241c             mov dword ptr [esp + 0x1c], edi
// 008b6093  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 008b609a  740b                 je 0x8b60a7
// 008b609c  8b08                 mov ecx, dword ptr [eax]
// 008b609e  8bd1                 mov edx, ecx
// 008b60a0  2b567c               sub edx, dword ptr [esi + 0x7c]
// 008b60a3  8910                 mov dword ptr [eax], edx
// 008b60a5  eb0b                 jmp 0x8b60b2
// 008b60a7  8b5008               mov edx, dword ptr [eax + 8]
// 008b60aa  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008b60ad  03ca                 add ecx, edx
// 008b60af  894808               mov dword ptr [eax + 8], ecx
// 008b60b2  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b60b6  894c2418             mov dword ptr [esp + 0x18], ecx
// 008b60ba  89542410             mov dword ptr [esp + 0x10], edx
// 008b60be  752c                 jne 0x8b60ec
// 008b60c0  8b4504               mov eax, dword ptr [ebp + 4]
// 008b60c3  68ffff0000           push 0xffff
// 008b60c8  50                   push eax
// 008b60c9  8d4c2418             lea ecx, [esp + 0x18]
// 008b60cd  51                   push ecx
// 008b60ce  6800010040           push 0x40000100
// 008b60d3  6a00                 push 0
// 008b60d5  8bce                 mov ecx, esi
// 008b60d7  e8244ff5ff           call 0x80b000
// 008b60dc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b60e0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b60e4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b60e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b60ec  6a44                 push 0x44
// 008b60ee  2bfb                 sub edi, ebx
// 008b60f0  57                   push edi
// 008b60f1  2bca                 sub ecx, edx
// 008b60f3  51                   push ecx
// 008b60f4  53                   push ebx
// 008b60f5  52                   push edx
// 008b60f6  6a00                 push 0
// 008b60f8  8bce                 mov ecx, esi
// 008b60fa  e82b43f5ff           call 0x80a42a
// 008b60ff  5f                   pop edi
// 008b6100  5e                   pop esi
// 008b6101  5d                   pop ebp
// 008b6102  5b                   pop ebx
// 008b6103  83c410               add esp, 0x10
// 008b6106  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
