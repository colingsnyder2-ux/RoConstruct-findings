// roc 2009-12 008a1eb0  unit: CXTPReportInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1eb0
//
// 008a1eb0  83ec10               sub esp, 0x10
// 008a1eb3  53                   push ebx
// 008a1eb4  55                   push ebp
// 008a1eb5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008a1eb9  56                   push esi
// 008a1eba  8bf1                 mov esi, ecx
// 008a1ebc  33c0                 xor eax, eax
// 008a1ebe  8d4e54               lea ecx, [esi + 0x54]
// 008a1ec1  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008a1ec7  898688000000         mov dword ptr [esi + 0x88], eax
// 008a1ecd  8b01                 mov eax, dword ptr [ecx]
// 008a1ecf  8b5004               mov edx, dword ptr [eax + 4]
// 008a1ed2  57                   push edi
// 008a1ed3  55                   push ebp
// 008a1ed4  ffd2                 call edx
// 008a1ed6  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a1eda  8b08                 mov ecx, dword ptr [eax]
// 008a1edc  8b5008               mov edx, dword ptr [eax + 8]
// 008a1edf  8b5804               mov ebx, dword ptr [eax + 4]
// 008a1ee2  8b780c               mov edi, dword ptr [eax + 0xc]
// 008a1ee5  894c2410             mov dword ptr [esp + 0x10], ecx
// 008a1ee9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a1eec  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a1ef0  89542418             mov dword ptr [esp + 0x18], edx
// 008a1ef4  897c241c             mov dword ptr [esp + 0x1c], edi
// 008a1ef8  8b9100010000         mov edx, dword ptr [ecx + 0x100]
// 008a1efe  83bab002000000       cmp dword ptr [edx + 0x2b0], 0
// 008a1f05  740c                 je 0x8a1f13
// 008a1f07  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008a1f0d  03fb                 add edi, ebx
// 008a1f0f  897c241c             mov dword ptr [esp + 0x1c], edi
// 008a1f13  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 008a1f1a  740b                 je 0x8a1f27
// 008a1f1c  8b08                 mov ecx, dword ptr [eax]
// 008a1f1e  8bd1                 mov edx, ecx
// 008a1f20  2b567c               sub edx, dword ptr [esi + 0x7c]
// 008a1f23  8910                 mov dword ptr [eax], edx
// 008a1f25  eb0b                 jmp 0x8a1f32
// 008a1f27  8b5008               mov edx, dword ptr [eax + 8]
// 008a1f2a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008a1f2d  03ca                 add ecx, edx
// 008a1f2f  894808               mov dword ptr [eax + 8], ecx
// 008a1f32  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a1f36  894c2418             mov dword ptr [esp + 0x18], ecx
// 008a1f3a  89542410             mov dword ptr [esp + 0x10], edx
// 008a1f3e  752c                 jne 0x8a1f6c
// 008a1f40  8b4504               mov eax, dword ptr [ebp + 4]
// 008a1f43  68ffff0000           push 0xffff
// 008a1f48  50                   push eax
// 008a1f49  8d4c2418             lea ecx, [esp + 0x18]
// 008a1f4d  51                   push ecx
// 008a1f4e  6800010040           push 0x40000100
// 008a1f53  6a00                 push 0
// 008a1f55  8bce                 mov ecx, esi
// 008a1f57  e87628f5ff           call 0x7f47d2
// 008a1f5c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008a1f60  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a1f64  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008a1f68  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a1f6c  6a44                 push 0x44
// 008a1f6e  2bfb                 sub edi, ebx
// 008a1f70  57                   push edi
// 008a1f71  2bca                 sub ecx, edx
// 008a1f73  51                   push ecx
// 008a1f74  53                   push ebx
// 008a1f75  52                   push edx
// 008a1f76  6a00                 push 0
// 008a1f78  8bce                 mov ecx, esi
// 008a1f7a  e8ad1cf5ff           call 0x7f3c2c
// 008a1f7f  5f                   pop edi
// 008a1f80  5e                   pop esi
// 008a1f81  5d                   pop ebp
// 008a1f82  5b                   pop ebx
// 008a1f83  83c410               add esp, 0x10
// 008a1f86  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?Create@CXTPReportInplaceButton@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
