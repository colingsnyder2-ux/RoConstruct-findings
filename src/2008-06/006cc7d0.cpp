// roc 2008-06 006cc7d0  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cc7d0
//
// 006cc7d0  83ec24               sub esp, 0x24
// 006cc7d3  53                   push ebx
// 006cc7d4  56                   push esi
// 006cc7d5  8b742430             mov esi, dword ptr [esp + 0x30]
// 006cc7d9  57                   push edi
// 006cc7da  33ff                 xor edi, edi
// 006cc7dc  8bd9                 mov ebx, ecx
// 006cc7de  3bf7                 cmp esi, edi
// 006cc7e0  0f841e010000         je 0x6cc904
// 006cc7e6  8bce                 mov ecx, esi
// 006cc7e8  e8537f0000           call 0x6d4740
// 006cc7ed  83f8ff               cmp eax, -1
// 006cc7f0  0f840e010000         je 0x6cc904
// 006cc7f6  397e60               cmp dword ptr [esi + 0x60], edi
// 006cc7f9  0f8405010000         je 0x6cc904
// 006cc7ff  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 006cc805  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 006cc808  0f8df6000000         jge 0x6cc904
// 006cc80e  8d542410             lea edx, [esp + 0x10]
// 006cc812  52                   push edx
// 006cc813  8bce                 mov ecx, esi
// 006cc815  e8667d0000           call 0x6d4580
// 006cc81a  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 006cc820  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 006cc826  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cc82a  3bc8                 cmp ecx, eax
// 006cc82c  7c3d                 jl 0x6cc86b
// 006cc82e  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 006cc834  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 006cc83a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cc83e  03d1                 add edx, ecx
// 006cc840  3bc2                 cmp eax, edx
// 006cc842  7c0e                 jl 0x6cc852
// 006cc844  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 006cc84a  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 006cc850  03c1                 add eax, ecx
// 006cc852  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 006cc858  03c8                 add ecx, eax
// 006cc85a  51                   push ecx
// 006cc85b  8bcb                 mov ecx, ebx
// 006cc85d  e84ed8ffff           call 0x6ca0b0
// 006cc862  5f                   pop edi
// 006cc863  5e                   pop esi
// 006cc864  5b                   pop ebx
// 006cc865  83c424               add esp, 0x24
// 006cc868  c20400               ret 4
// 006cc86b  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 006cc871  3bc7                 cmp eax, edi
// 006cc873  55                   push ebp
// 006cc874  897c2410             mov dword ptr [esp + 0x10], edi
// 006cc878  7e63                 jle 0x6cc8dd
// 006cc87a  8be8                 mov ebp, eax
// 006cc87c  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 006cc882  397830               cmp dword ptr [eax + 0x30], edi
// 006cc885  7e56                 jle 0x6cc8dd
// 006cc887  85ed                 test ebp, ebp
// 006cc889  7e52                 jle 0x6cc8dd
// 006cc88b  85ff                 test edi, edi
// 006cc88d  7c0d                 jl 0x6cc89c
// 006cc88f  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006cc892  7d08                 jge 0x6cc89c
// 006cc894  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006cc897  8b34ba               mov esi, dword ptr [edx + edi*4]
// 006cc89a  eb02                 jmp 0x6cc89e
// 006cc89c  33f6                 xor esi, esi
// 006cc89e  3b742438             cmp esi, dword ptr [esp + 0x38]
// 006cc8a2  7431                 je 0x6cc8d5
// 006cc8a4  85f6                 test esi, esi
// 006cc8a6  741f                 je 0x6cc8c7
// 006cc8a8  8bce                 mov ecx, esi
// 006cc8aa  e8317d0000           call 0x6d45e0
// 006cc8af  85c0                 test eax, eax
// 006cc8b1  7414                 je 0x6cc8c7
// 006cc8b3  8d442424             lea eax, [esp + 0x24]
// 006cc8b7  50                   push eax
// 006cc8b8  8bce                 mov ecx, esi
// 006cc8ba  4d                   dec ebp
// 006cc8bb  e8c07c0000           call 0x6d4580
// 006cc8c0  8b4808               mov ecx, dword ptr [eax + 8]
// 006cc8c3  894c2410             mov dword ptr [esp + 0x10], ecx
// 006cc8c7  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 006cc8cd  47                   inc edi
// 006cc8ce  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006cc8d1  7cb4                 jl 0x6cc887
// 006cc8d3  eb08                 jmp 0x6cc8dd
// 006cc8d5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006cc8dd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cc8e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cc8e5  8bc1                 mov eax, ecx
// 006cc8e7  2bc2                 sub eax, edx
// 006cc8e9  85c0                 test eax, eax
// 006cc8eb  7f16                 jg 0x6cc903
// 006cc8ed  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 006cc8f3  85c0                 test eax, eax
// 006cc8f5  740c                 je 0x6cc903
// 006cc8f7  2bc2                 sub eax, edx
// 006cc8f9  03c1                 add eax, ecx
// 006cc8fb  50                   push eax
// 006cc8fc  8bcb                 mov ecx, ebx
// 006cc8fe  e8add7ffff           call 0x6ca0b0
// 006cc903  5d                   pop ebp
// 006cc904  5f                   pop edi
// 006cc905  5e                   pop esi
// 006cc906  5b                   pop ebx
// 006cc907  83c424               add esp, 0x24
// 006cc90a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
