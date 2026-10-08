// roc 2010-06 007d1d10  unit: CXTPReportControl  size: 860 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d1d10
//
// 007d1d10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d1d14  83ec78               sub esp, 0x78
// 007d1d17  57                   push edi
// 007d1d18  8bf9                 mov edi, ecx
// 007d1d1a  33c9                 xor ecx, ecx
// 007d1d1c  3bc1                 cmp eax, ecx
// 007d1d1e  741f                 je 0x7d1d3f
// 007d1d20  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007d1d27  50                   push eax
// 007d1d28  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007d1d2f  50                   push eax
// 007d1d30  51                   push ecx
// 007d1d31  8bcf                 mov ecx, edi
// 007d1d33  e892b21a00           call 0x97cfca
// 007d1d38  5f                   pop edi
// 007d1d39  83c478               add esp, 0x78
// 007d1d3c  c20c00               ret 0xc
// 007d1d3f  53                   push ebx
// 007d1d40  55                   push ebp
// 007d1d41  8baf0c010000         mov ebp, dword ptr [edi + 0x10c]
// 007d1d47  33db                 xor ebx, ebx
// 007d1d49  56                   push esi
// 007d1d4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 007d1d4e  8bf5                 mov esi, ebp
// 007d1d50  894c2420             mov dword ptr [esp + 0x20], ecx
// 007d1d54  894c2424             mov dword ptr [esp + 0x24], ecx
// 007d1d58  894c2418             mov dword ptr [esp + 0x18], ecx
// 007d1d5c  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d1d60  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007d1d64  398f18010000         cmp dword ptr [edi + 0x118], ecx
// 007d1d6a  742a                 je 0x7d1d96
// 007d1d6c  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 007d1d72  8d54241c             lea edx, [esp + 0x1c]
// 007d1d76  52                   push edx
// 007d1d77  8d442414             lea eax, [esp + 0x14]
// 007d1d7b  50                   push eax
// 007d1d7c  8d542420             lea edx, [esp + 0x20]
// 007d1d80  52                   push edx
// 007d1d81  8d442430             lea eax, [esp + 0x30]
// 007d1d85  50                   push eax
// 007d1d86  8d542430             lea edx, [esp + 0x30]
// 007d1d8a  52                   push edx
// 007d1d8b  e8f0af0000           call 0x7dcd80
// 007d1d90  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007d1d94  8bd8                 mov ebx, eax
// 007d1d96  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007d1d9d  83f807               cmp eax, 7
// 007d1da0  0f8762020000         ja 0x7d2008
// 007d1da6  ff24854c207d00       jmp dword ptr [eax*4 + 0x7d204c]
// 007d1dad  33f6                 xor esi, esi
// 007d1daf  89742414             mov dword ptr [esp + 0x14], esi
// 007d1db3  89742410             mov dword ptr [esp + 0x10], esi
// 007d1db7  e94c020000           jmp 0x7d2008
// 007d1dbc  6a00                 push 0
// 007d1dbe  8bcf                 mov ecx, edi
// 007d1dc0  e8ffb11a00           call 0x97cfc4
// 007d1dc5  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1dcc  89442414             mov dword ptr [esp + 0x14], eax
// 007d1dd0  0f845d020000         je 0x7d2033
// 007d1dd6  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007d1ddc  e8afe30400           call 0x820190
// 007d1de1  48                   dec eax
// 007d1de2  33c9                 xor ecx, ecx
// 007d1de4  85c0                 test eax, eax
// 007d1de6  0f9ec1               setle cl
// 007d1de9  49                   dec ecx
// 007d1dea  23c1                 and eax, ecx
// 007d1dec  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007d1df2  50                   push eax
// 007d1df3  e898e40400           call 0x820290
// 007d1df8  85c0                 test eax, eax
// 007d1dfa  0f843f020000         je 0x7d203f
// 007d1e00  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007d1e06  8d542428             lea edx, [esp + 0x28]
// 007d1e0a  52                   push edx
// 007d1e0b  8bc8                 mov ecx, eax
// 007d1e0d  e82e9d0000           call 0x7dbb40
// 007d1e12  8bc8                 mov ecx, eax
// 007d1e14  8b4660               mov eax, dword ptr [esi + 0x60]
// 007d1e17  2b01                 sub eax, dword ptr [ecx]
// 007d1e19  33c9                 xor ecx, ecx
// 007d1e1b  99                   cdq 
// 007d1e1c  8bf0                 mov esi, eax
// 007d1e1e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d1e22  33f2                 xor esi, edx
// 007d1e24  2bf2                 sub esi, edx
// 007d1e26  48                   dec eax
// 007d1e27  2bf3                 sub esi, ebx
// 007d1e29  85c0                 test eax, eax
// 007d1e2b  0f9ec1               setle cl
// 007d1e2e  49                   dec ecx
// 007d1e2f  23c8                 and ecx, eax
// 007d1e31  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d1e35  e9ce010000           jmp 0x7d2008
// 007d1e3a  2baf14010000         sub ebp, dword ptr [edi + 0x114]
// 007d1e40  33d2                 xor edx, edx
// 007d1e42  85ed                 test ebp, ebp
// 007d1e44  0f9ec2               setle dl
// 007d1e47  4a                   dec edx
// 007d1e48  23d5                 and edx, ebp
// 007d1e4a  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1e51  89542414             mov dword ptr [esp + 0x14], edx
// 007d1e55  0f84d8010000         je 0x7d2033
// 007d1e5b  85c9                 test ecx, ecx
// 007d1e5d  0f84a5010000         je 0x7d2008
// 007d1e63  8d442438             lea eax, [esp + 0x38]
// 007d1e67  50                   push eax
// 007d1e68  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007d1e6e  e8cd9c0000           call 0x7dbb40
// 007d1e73  8bc8                 mov ecx, eax
// 007d1e75  8b4660               mov eax, dword ptr [esi + 0x60]
// 007d1e78  2b01                 sub eax, dword ptr [ecx]
// 007d1e7a  33c9                 xor ecx, ecx
// 007d1e7c  99                   cdq 
// 007d1e7d  8bf0                 mov esi, eax
// 007d1e7f  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d1e83  33f2                 xor esi, edx
// 007d1e85  2bf2                 sub esi, edx
// 007d1e87  48                   dec eax
// 007d1e88  2bf3                 sub esi, ebx
// 007d1e8a  85c0                 test eax, eax
// 007d1e8c  0f9ec1               setle cl
// 007d1e8f  49                   dec ecx
// 007d1e90  23c8                 and ecx, eax
// 007d1e92  894c2410             mov dword ptr [esp + 0x10], ecx
// 007d1e96  e96d010000           jmp 0x7d2008
// 007d1e9b  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 007d1ea1  6a00                 push 0
// 007d1ea3  8bcf                 mov ecx, edi
// 007d1ea5  03ea                 add ebp, edx
// 007d1ea7  e818b11a00           call 0x97cfc4
// 007d1eac  3be8                 cmp ebp, eax
// 007d1eae  7d06                 jge 0x7d1eb6
// 007d1eb0  896c2414             mov dword ptr [esp + 0x14], ebp
// 007d1eb4  eb0d                 jmp 0x7d1ec3
// 007d1eb6  6a00                 push 0
// 007d1eb8  8bcf                 mov ecx, edi
// 007d1eba  e805b11a00           call 0x97cfc4
// 007d1ebf  89442414             mov dword ptr [esp + 0x14], eax
// 007d1ec3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1eca  0f8463010000         je 0x7d2033
// 007d1ed0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d1ed4  85c9                 test ecx, ecx
// 007d1ed6  0f842c010000         je 0x7d2008
// 007d1edc  8d442448             lea eax, [esp + 0x48]
// 007d1ee0  50                   push eax
// 007d1ee1  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007d1ee7  e8549c0000           call 0x7dbb40
// 007d1eec  8bc8                 mov ecx, eax
// 007d1eee  8b4660               mov eax, dword ptr [esi + 0x60]
// 007d1ef1  2b01                 sub eax, dword ptr [ecx]
// 007d1ef3  99                   cdq 
// 007d1ef4  8bf0                 mov esi, eax
// 007d1ef6  33f2                 xor esi, edx
// 007d1ef8  2bf2                 sub esi, edx
// 007d1efa  2bf3                 sub esi, ebx
// 007d1efc  ff442410             inc dword ptr [esp + 0x10]
// 007d1f00  e903010000           jmp 0x7d2008
// 007d1f05  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 007d1f0b  2b9798000000         sub edx, dword ptr [edi + 0x98]
// 007d1f11  03d5                 add edx, ebp
// 007d1f13  85d2                 test edx, edx
// 007d1f15  7e14                 jle 0x7d1f2b
// 007d1f17  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007d1f1d  2b8798000000         sub eax, dword ptr [edi + 0x98]
// 007d1f23  03e8                 add ebp, eax
// 007d1f25  896c2414             mov dword ptr [esp + 0x14], ebp
// 007d1f29  eb08                 jmp 0x7d1f33
// 007d1f2b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007d1f33  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1f3a  0f84f3000000         je 0x7d2033
// 007d1f40  85c9                 test ecx, ecx
// 007d1f42  0f84c0000000         je 0x7d2008
// 007d1f48  8d542458             lea edx, [esp + 0x58]
// 007d1f4c  52                   push edx
// 007d1f4d  e916ffffff           jmp 0x7d1e68
// 007d1f52  8baf98000000         mov ebp, dword ptr [edi + 0x98]
// 007d1f58  2baf90000000         sub ebp, dword ptr [edi + 0x90]
// 007d1f5e  6a00                 push 0
// 007d1f60  8bcf                 mov ecx, edi
// 007d1f62  e85db01a00           call 0x97cfc4
// 007d1f67  8bd6                 mov edx, esi
// 007d1f69  03ea                 add ebp, edx
// 007d1f6b  3be8                 cmp ebp, eax
// 007d1f6d  7d12                 jge 0x7d1f81
// 007d1f6f  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 007d1f75  2b8790000000         sub eax, dword ptr [edi + 0x90]
// 007d1f7b  01442414             add dword ptr [esp + 0x14], eax
// 007d1f7f  eb0d                 jmp 0x7d1f8e
// 007d1f81  6a00                 push 0
// 007d1f83  8bcf                 mov ecx, edi
// 007d1f85  e83ab01a00           call 0x97cfc4
// 007d1f8a  89442414             mov dword ptr [esp + 0x14], eax
// 007d1f8e  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1f95  0f8498000000         je 0x7d2033
// 007d1f9b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d1f9f  85c9                 test ecx, ecx
// 007d1fa1  7465                 je 0x7d2008
// 007d1fa3  8d542468             lea edx, [esp + 0x68]
// 007d1fa7  52                   push edx
// 007d1fa8  e934ffffff           jmp 0x7d1ee1
// 007d1fad  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d1fb4  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 007d1fbb  896c2414             mov dword ptr [esp + 0x14], ebp
// 007d1fbf  7472                 je 0x7d2033
// 007d1fc1  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007d1fc7  e8c4e10400           call 0x820190
// 007d1fcc  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007d1fd0  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007d1fd6  03c5                 add eax, ebp
// 007d1fd8  50                   push eax
// 007d1fd9  e8b2e20400           call 0x820290
// 007d1fde  85c0                 test eax, eax
// 007d1fe0  745d                 je 0x7d203f
// 007d1fe2  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007d1fe8  8d4c2478             lea ecx, [esp + 0x78]
// 007d1fec  51                   push ecx
// 007d1fed  8bc8                 mov ecx, eax
// 007d1fef  e84c9b0000           call 0x7dbb40
// 007d1ff4  8bc8                 mov ecx, eax
// 007d1ff6  8b4660               mov eax, dword ptr [esi + 0x60]
// 007d1ff9  2b01                 sub eax, dword ptr [ecx]
// 007d1ffb  896c2410             mov dword ptr [esp + 0x10], ebp
// 007d1fff  99                   cdq 
// 007d2000  8bf0                 mov esi, eax
// 007d2002  33f2                 xor esi, edx
// 007d2004  2bf2                 sub esi, edx
// 007d2006  2bf3                 sub esi, ebx
// 007d2008  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007d200f  7422                 je 0x7d2033
// 007d2011  56                   push esi
// 007d2012  8bcf                 mov ecx, edi
// 007d2014  e8b7f5ffff           call 0x7d15d0
// 007d2019  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d201d  6a01                 push 1
// 007d201f  52                   push edx
// 007d2020  6a00                 push 0
// 007d2022  8bcf                 mov ecx, edi
// 007d2024  e883af1a00           call 0x97cfac
// 007d2029  5e                   pop esi
// 007d202a  5d                   pop ebp
// 007d202b  5b                   pop ebx
// 007d202c  5f                   pop edi
// 007d202d  83c478               add esp, 0x78
// 007d2030  c20c00               ret 0xc
// 007d2033  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d2037  50                   push eax
// 007d2038  8bcf                 mov ecx, edi
// 007d203a  e891f5ffff           call 0x7d15d0
// 007d203f  5e                   pop esi
// 007d2040  5d                   pop ebp
// 007d2041  5b                   pop ebx
// 007d2042  5f                   pop edi
// 007d2043  83c478               add esp, 0x78
// 007d2046  c20c00               ret 0xc
// 007d2049  8d4900               lea ecx, [ecx]
// 007d204c  3a1e                 cmp bl, byte ptr [esi]
// 007d204e  7d00                 jge 0x7d2050
// 007d2050  9b                   wait 
// 007d2051  1e                   push ds
// 007d2052  7d00                 jge 0x7d2054
// 007d2054  051f7d0052           add eax, 0x52007d1f
// 007d2059  1f                   pop ds
// 007d205a  7d00                 jge 0x7d205c
// 007d205c  ad                   lodsd eax, dword ptr [esi]
// 007d205d  1f                   pop ds
// 007d205e  7d00                 jge 0x7d2060
// 007d2060  ad                   lodsd eax, dword ptr [esi]
// 007d2061  1f                   pop ds
// 007d2062  7d00                 jge 0x7d2064
// 007d2064  ad                   lodsd eax, dword ptr [esi]
// 007d2065  1d7d00bc1d           sbb eax, 0x1dbc007d
// 007d206a  7d00                 jge 0x7d206c
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnHScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
