// roc 2008-06 0074ddd0  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ddd0
//
// 0074ddd0  83ec10               sub esp, 0x10
// 0074ddd3  53                   push ebx
// 0074ddd4  55                   push ebp
// 0074ddd5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0074ddd9  56                   push esi
// 0074ddda  8bf1                 mov esi, ecx
// 0074dddc  33c0                 xor eax, eax
// 0074ddde  8d4e54               lea ecx, [esi + 0x54]
// 0074dde1  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0074dde7  898688000000         mov dword ptr [esi + 0x88], eax
// 0074dded  8b01                 mov eax, dword ptr [ecx]
// 0074ddef  8b5004               mov edx, dword ptr [eax + 4]
// 0074ddf2  57                   push edi
// 0074ddf3  55                   push ebp
// 0074ddf4  ffd2                 call edx
// 0074ddf6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0074ddfa  8b08                 mov ecx, dword ptr [eax]
// 0074ddfc  8b5008               mov edx, dword ptr [eax + 8]
// 0074ddff  8b5804               mov ebx, dword ptr [eax + 4]
// 0074de02  8b780c               mov edi, dword ptr [eax + 0xc]
// 0074de05  894c2410             mov dword ptr [esp + 0x10], ecx
// 0074de09  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0074de0c  895c2414             mov dword ptr [esp + 0x14], ebx
// 0074de10  89542418             mov dword ptr [esp + 0x18], edx
// 0074de14  897c241c             mov dword ptr [esp + 0x1c], edi
// 0074de18  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 0074de1e  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 0074de25  740c                 je 0x74de33
// 0074de27  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0074de2d  03fb                 add edi, ebx
// 0074de2f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0074de33  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0074de3a  740b                 je 0x74de47
// 0074de3c  8b08                 mov ecx, dword ptr [eax]
// 0074de3e  8bd1                 mov edx, ecx
// 0074de40  2b567c               sub edx, dword ptr [esi + 0x7c]
// 0074de43  8910                 mov dword ptr [eax], edx
// 0074de45  eb0b                 jmp 0x74de52
// 0074de47  8b5008               mov edx, dword ptr [eax + 8]
// 0074de4a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0074de4d  03ca                 add ecx, edx
// 0074de4f  894808               mov dword ptr [eax + 8], ecx
// 0074de52  837e2000             cmp dword ptr [esi + 0x20], 0
// 0074de56  894c2418             mov dword ptr [esp + 0x18], ecx
// 0074de5a  89542410             mov dword ptr [esp + 0x10], edx
// 0074de5e  752c                 jne 0x74de8c
// 0074de60  8b4504               mov eax, dword ptr [ebp + 4]
// 0074de63  68ffff0000           push 0xffff
// 0074de68  50                   push eax
// 0074de69  8d4c2418             lea ecx, [esp + 0x18]
// 0074de6d  51                   push ecx
// 0074de6e  6800010040           push 0x40000100
// 0074de73  6a00                 push 0
// 0074de75  8bce                 mov ecx, esi
// 0074de77  e81436f5ff           call 0x6a1490
// 0074de7c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0074de80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074de84  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0074de88  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074de8c  6a44                 push 0x44
// 0074de8e  2bfb                 sub edi, ebx
// 0074de90  57                   push edi
// 0074de91  2bca                 sub ecx, edx
// 0074de93  51                   push ecx
// 0074de94  53                   push ebx
// 0074de95  52                   push edx
// 0074de96  6a00                 push 0
// 0074de98  8bce                 mov ecx, esi
// 0074de9a  e8a72bf5ff           call 0x6a0a46
// 0074de9f  5f                   pop edi
// 0074dea0  5e                   pop esi
// 0074dea1  5d                   pop ebp
// 0074dea2  5b                   pop ebx
// 0074dea3  83c410               add esp, 0x10
// 0074dea6  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
