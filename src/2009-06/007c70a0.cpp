// roc 2009-06 007c70a0  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c70a0
//
// 007c70a0  83ec10               sub esp, 0x10
// 007c70a3  53                   push ebx
// 007c70a4  55                   push ebp
// 007c70a5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007c70a9  56                   push esi
// 007c70aa  8bf1                 mov esi, ecx
// 007c70ac  33c0                 xor eax, eax
// 007c70ae  8d4e54               lea ecx, [esi + 0x54]
// 007c70b1  89868c000000         mov dword ptr [esi + 0x8c], eax
// 007c70b7  898688000000         mov dword ptr [esi + 0x88], eax
// 007c70bd  8b01                 mov eax, dword ptr [ecx]
// 007c70bf  8b5004               mov edx, dword ptr [eax + 4]
// 007c70c2  57                   push edi
// 007c70c3  55                   push ebp
// 007c70c4  ffd2                 call edx
// 007c70c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c70ca  8b08                 mov ecx, dword ptr [eax]
// 007c70cc  8b5008               mov edx, dword ptr [eax + 8]
// 007c70cf  8b5804               mov ebx, dword ptr [eax + 4]
// 007c70d2  8b780c               mov edi, dword ptr [eax + 0xc]
// 007c70d5  894c2410             mov dword ptr [esp + 0x10], ecx
// 007c70d9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007c70dc  895c2414             mov dword ptr [esp + 0x14], ebx
// 007c70e0  89542418             mov dword ptr [esp + 0x18], edx
// 007c70e4  897c241c             mov dword ptr [esp + 0x1c], edi
// 007c70e8  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 007c70ee  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 007c70f5  740c                 je 0x7c7103
// 007c70f7  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 007c70fd  03fb                 add edi, ebx
// 007c70ff  897c241c             mov dword ptr [esp + 0x1c], edi
// 007c7103  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 007c710a  740b                 je 0x7c7117
// 007c710c  8b08                 mov ecx, dword ptr [eax]
// 007c710e  8bd1                 mov edx, ecx
// 007c7110  2b567c               sub edx, dword ptr [esi + 0x7c]
// 007c7113  8910                 mov dword ptr [eax], edx
// 007c7115  eb0b                 jmp 0x7c7122
// 007c7117  8b5008               mov edx, dword ptr [eax + 8]
// 007c711a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 007c711d  03ca                 add ecx, edx
// 007c711f  894808               mov dword ptr [eax + 8], ecx
// 007c7122  837e2000             cmp dword ptr [esi + 0x20], 0
// 007c7126  894c2418             mov dword ptr [esp + 0x18], ecx
// 007c712a  89542410             mov dword ptr [esp + 0x10], edx
// 007c712e  752c                 jne 0x7c715c
// 007c7130  8b4504               mov eax, dword ptr [ebp + 4]
// 007c7133  68ffff0000           push 0xffff
// 007c7138  50                   push eax
// 007c7139  8d4c2418             lea ecx, [esp + 0x18]
// 007c713d  51                   push ecx
// 007c713e  6800010040           push 0x40000100
// 007c7143  6a00                 push 0
// 007c7145  8bce                 mov ecx, esi
// 007c7147  e85228f5ff           call 0x71999e
// 007c714c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007c7150  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c7154  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007c7158  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c715c  6a44                 push 0x44
// 007c715e  2bfb                 sub edi, ebx
// 007c7160  57                   push edi
// 007c7161  2bca                 sub ecx, edx
// 007c7163  51                   push ecx
// 007c7164  53                   push ebx
// 007c7165  52                   push edx
// 007c7166  6a00                 push 0
// 007c7168  8bce                 mov ecx, esi
// 007c716a  e8951cf5ff           call 0x718e04
// 007c716f  5f                   pop edi
// 007c7170  5e                   pop esi
// 007c7171  5d                   pop ebp
// 007c7172  5b                   pop ebx
// 007c7173  83c410               add esp, 0x10
// 007c7176  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
