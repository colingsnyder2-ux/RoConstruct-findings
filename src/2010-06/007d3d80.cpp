// roc 2010-06 007d3d80  unit: CXTPReportControl  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d3d80
//
// 007d3d80  83ec24               sub esp, 0x24
// 007d3d83  53                   push ebx
// 007d3d84  56                   push esi
// 007d3d85  8b742430             mov esi, dword ptr [esp + 0x30]
// 007d3d89  57                   push edi
// 007d3d8a  33ff                 xor edi, edi
// 007d3d8c  8bd9                 mov ebx, ecx
// 007d3d8e  3bf7                 cmp esi, edi
// 007d3d90  0f841e010000         je 0x7d3eb4
// 007d3d96  8bce                 mov ecx, esi
// 007d3d98  e8637f0000           call 0x7dbd00
// 007d3d9d  83f8ff               cmp eax, -1
// 007d3da0  0f840e010000         je 0x7d3eb4
// 007d3da6  397e60               cmp dword ptr [esi + 0x60], edi
// 007d3da9  0f8405010000         je 0x7d3eb4
// 007d3daf  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 007d3db5  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 007d3db8  0f8df6000000         jge 0x7d3eb4
// 007d3dbe  8d542410             lea edx, [esp + 0x10]
// 007d3dc2  52                   push edx
// 007d3dc3  8bce                 mov ecx, esi
// 007d3dc5  e8767d0000           call 0x7dbb40
// 007d3dca  8b8398000000         mov eax, dword ptr [ebx + 0x98]
// 007d3dd0  2b8390000000         sub eax, dword ptr [ebx + 0x90]
// 007d3dd6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d3dda  3bc8                 cmp ecx, eax
// 007d3ddc  7c3d                 jl 0x7d3e1b
// 007d3dde  8b9390000000         mov edx, dword ptr [ebx + 0x90]
// 007d3de4  2b9398000000         sub edx, dword ptr [ebx + 0x98]
// 007d3dea  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d3dee  03d1                 add edx, ecx
// 007d3df0  3bc2                 cmp eax, edx
// 007d3df2  7c0e                 jl 0x7d3e02
// 007d3df4  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 007d3dfa  2b8398000000         sub eax, dword ptr [ebx + 0x98]
// 007d3e00  03c1                 add eax, ecx
// 007d3e02  8b8b0c010000         mov ecx, dword ptr [ebx + 0x10c]
// 007d3e08  03c8                 add ecx, eax
// 007d3e0a  51                   push ecx
// 007d3e0b  8bcb                 mov ecx, ebx
// 007d3e0d  e8bed7ffff           call 0x7d15d0
// 007d3e12  5f                   pop edi
// 007d3e13  5e                   pop esi
// 007d3e14  5b                   pop ebx
// 007d3e15  83c424               add esp, 0x24
// 007d3e18  c20400               ret 4
// 007d3e1b  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 007d3e21  3bc7                 cmp eax, edi
// 007d3e23  55                   push ebp
// 007d3e24  897c2410             mov dword ptr [esp + 0x10], edi
// 007d3e28  7e63                 jle 0x7d3e8d
// 007d3e2a  8be8                 mov ebp, eax
// 007d3e2c  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 007d3e32  397830               cmp dword ptr [eax + 0x30], edi
// 007d3e35  7e56                 jle 0x7d3e8d
// 007d3e37  85ed                 test ebp, ebp
// 007d3e39  7e52                 jle 0x7d3e8d
// 007d3e3b  85ff                 test edi, edi
// 007d3e3d  7c0d                 jl 0x7d3e4c
// 007d3e3f  3b7830               cmp edi, dword ptr [eax + 0x30]
// 007d3e42  7d08                 jge 0x7d3e4c
// 007d3e44  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007d3e47  8b34ba               mov esi, dword ptr [edx + edi*4]
// 007d3e4a  eb02                 jmp 0x7d3e4e
// 007d3e4c  33f6                 xor esi, esi
// 007d3e4e  3b742438             cmp esi, dword ptr [esp + 0x38]
// 007d3e52  7431                 je 0x7d3e85
// 007d3e54  85f6                 test esi, esi
// 007d3e56  741f                 je 0x7d3e77
// 007d3e58  8bce                 mov ecx, esi
// 007d3e5a  e8417d0000           call 0x7dbba0
// 007d3e5f  85c0                 test eax, eax
// 007d3e61  7414                 je 0x7d3e77
// 007d3e63  8d442424             lea eax, [esp + 0x24]
// 007d3e67  50                   push eax
// 007d3e68  8bce                 mov ecx, esi
// 007d3e6a  4d                   dec ebp
// 007d3e6b  e8d07c0000           call 0x7dbb40
// 007d3e70  8b4808               mov ecx, dword ptr [eax + 8]
// 007d3e73  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d3e77  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 007d3e7d  47                   inc edi
// 007d3e7e  3b7830               cmp edi, dword ptr [eax + 0x30]
// 007d3e81  7cb4                 jl 0x7d3e37
// 007d3e83  eb08                 jmp 0x7d3e8d
// 007d3e85  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007d3e8d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d3e91  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d3e95  8bc1                 mov eax, ecx
// 007d3e97  2bc2                 sub eax, edx
// 007d3e99  85c0                 test eax, eax
// 007d3e9b  7f16                 jg 0x7d3eb3
// 007d3e9d  8b830c010000         mov eax, dword ptr [ebx + 0x10c]
// 007d3ea3  85c0                 test eax, eax
// 007d3ea5  740c                 je 0x7d3eb3
// 007d3ea7  2bc2                 sub eax, edx
// 007d3ea9  03c1                 add eax, ecx
// 007d3eab  50                   push eax
// 007d3eac  8bcb                 mov ecx, ebx
// 007d3eae  e81dd7ffff           call 0x7d15d0
// 007d3eb3  5d                   pop ebp
// 007d3eb4  5f                   pop edi
// 007d3eb5  5e                   pop esi
// 007d3eb6  5b                   pop ebx
// 007d3eb7  83c424               add esp, 0x24
// 007d3eba  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?EnsureVisible@CXTPReportControl@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
