// roc 2009-12 00829e80  unit: CXTPReportHeader  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829e80
//
// 00829e80  83ec0c               sub esp, 0xc
// 00829e83  53                   push ebx
// 00829e84  55                   push ebp
// 00829e85  56                   push esi
// 00829e86  8bd9                 mov ebx, ecx
// 00829e88  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00829e8b  57                   push edi
// 00829e8c  33ff                 xor edi, edi
// 00829e8e  33ed                 xor ebp, ebp
// 00829e90  397830               cmp dword ptr [eax + 0x30], edi
// 00829e93  897c2410             mov dword ptr [esp + 0x10], edi
// 00829e97  0f8ec0000000         jle 0x829f5d
// 00829e9d  8d4900               lea ecx, [ecx]
// 00829ea0  85ff                 test edi, edi
// 00829ea2  7c0d                 jl 0x829eb1
// 00829ea4  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00829ea7  7d08                 jge 0x829eb1
// 00829ea9  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00829eac  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00829eaf  eb02                 jmp 0x829eb3
// 00829eb1  33f6                 xor esi, esi
// 00829eb3  8bce                 mov ecx, esi
// 00829eb5  e8069c0800           call 0x8b3ac0
// 00829eba  85c0                 test eax, eax
// 00829ebc  0f848e000000         je 0x829f50
// 00829ec2  837c241000           cmp dword ptr [esp + 0x10], 0
// 00829ec7  7e06                 jle 0x829ecf
// 00829ec9  03aea4000000         add ebp, dword ptr [esi + 0xa4]
// 00829ecf  39742420             cmp dword ptr [esp + 0x20], esi
// 00829ed3  756f                 jne 0x829f44
// 00829ed5  8bce                 mov ecx, esi
// 00829ed7  e8a4e2ffff           call 0x828180
// 00829edc  8d4f01               lea ecx, [edi + 1]
// 00829edf  8be8                 mov ebp, eax
// 00829ee1  2b6c2424             sub ebp, dword ptr [esp + 0x24]
// 00829ee5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00829ee9  8bce                 mov ecx, esi
// 00829eeb  e890e2ffff           call 0x828180
// 00829ef0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00829ef4  2bc1                 sub eax, ecx
// 00829ef6  898ea4000000         mov dword ptr [esi + 0xa4], ecx
// 00829efc  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 00829f03  89442414             mov dword ptr [esp + 0x14], eax
// 00829f07  7437                 je 0x829f40
// 00829f09  6a01                 push 1
// 00829f0b  57                   push edi
// 00829f0c  8bcb                 mov ecx, ebx
// 00829f0e  e8edfbffff           call 0x829b00
// 00829f13  89442418             mov dword ptr [esp + 0x18], eax
// 00829f17  85c0                 test eax, eax
// 00829f19  7425                 je 0x829f40
// 00829f1b  83b8a800000000       cmp dword ptr [eax + 0xa8], 0
// 00829f22  751c                 jne 0x829f40
// 00829f24  83786800             cmp dword ptr [eax + 0x68], 0
// 00829f28  7416                 je 0x829f40
// 00829f2a  50                   push eax
// 00829f2b  8bcb                 mov ecx, ebx
// 00829f2d  e85efbffff           call 0x829a90
// 00829f32  85c0                 test eax, eax
// 00829f34  740a                 je 0x829f40
// 00829f36  8b442418             mov eax, dword ptr [esp + 0x18]
// 00829f3a  01a8a4000000         add dword ptr [eax + 0xa4], ebp
// 00829f40  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00829f44  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 00829f4a  8996a0000000         mov dword ptr [esi + 0xa0], edx
// 00829f50  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00829f53  47                   inc edi
// 00829f54  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00829f57  0f8c43ffffff         jl 0x829ea0
// 00829f5d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00829f61  50                   push eax
// 00829f62  55                   push ebp
// 00829f63  8bcb                 mov ecx, ebx
// 00829f65  e8b6eaffff           call 0x828a20
// 00829f6a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00829f6d  33c9                 xor ecx, ecx
// 00829f6f  394830               cmp dword ptr [eax + 0x30], ecx
// 00829f72  7e28                 jle 0x829f9c
// 00829f74  85c9                 test ecx, ecx
// 00829f76  7c0d                 jl 0x829f85
// 00829f78  3b4830               cmp ecx, dword ptr [eax + 0x30]
// 00829f7b  7d08                 jge 0x829f85
// 00829f7d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00829f80  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00829f83  eb02                 jmp 0x829f87
// 00829f85  33c0                 xor eax, eax
// 00829f87  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 00829f8d  8990a0000000         mov dword ptr [eax + 0xa0], edx
// 00829f93  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00829f96  41                   inc ecx
// 00829f97  3b4830               cmp ecx, dword ptr [eax + 0x30]
// 00829f9a  7cd8                 jl 0x829f74
// 00829f9c  8b4368               mov eax, dword ptr [ebx + 0x68]
// 00829f9f  2b4360               sub eax, dword ptr [ebx + 0x60]
// 00829fa2  6a00                 push 0
// 00829fa4  50                   push eax
// 00829fa5  8bcb                 mov ecx, ebx
// 00829fa7  e874eaffff           call 0x828a20
// 00829fac  8bcb                 mov ecx, ebx
// 00829fae  e86de3ffff           call 0x828320
// 00829fb3  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 00829fba  750d                 jne 0x829fc9
// 00829fbc  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00829fbf  8b11                 mov edx, dword ptr [ecx]
// 00829fc1  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00829fc7  ffd0                 call eax
// 00829fc9  5f                   pop edi
// 00829fca  5e                   pop esi
// 00829fcb  5d                   pop ebp
// 00829fcc  5b                   pop ebx
// 00829fcd  83c40c               add esp, 0xc
// 00829fd0  c20800               ret 8
// copied from an identical function in another client (function ?ResizeColumn@CXTPReportHeader@@IAEXPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp