// roc 2008-06 006c9d80  unit: CXTPReportControl  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9d80
//
// 006c9d80  55                   push ebp
// 006c9d81  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006c9d85  57                   push edi
// 006c9d86  8bf9                 mov edi, ecx
// 006c9d88  85ed                 test ebp, ebp
// 006c9d8a  0f84b3010000         je 0x6c9f43
// 006c9d90  83bfe800000000       cmp dword ptr [edi + 0xe8], 0
// 006c9d97  0f84a6010000         je 0x6c9f43
// 006c9d9d  53                   push ebx
// 006c9d9e  56                   push esi
// 006c9d9f  8bcd                 mov ecx, ebp
// 006c9da1  e87ae10000           call 0x6d7f20
// 006c9da6  85c0                 test eax, eax
// 006c9da8  7440                 je 0x6c9dea
// 006c9daa  8bcd                 mov ecx, ebp
// 006c9dac  e8cfe30000           call 0x6d8180
// 006c9db1  8bc8                 mov ecx, eax
// 006c9db3  e898020100           call 0x6da050
// 006c9db8  8bd8                 mov ebx, eax
// 006c9dba  83eb01               sub ebx, 1
// 006c9dbd  782b                 js 0x6c9dea
// 006c9dbf  90                   nop 
// 006c9dc0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c9dc4  8b37                 mov esi, dword ptr [edi]
// 006c9dc6  6a00                 push 0
// 006c9dc8  50                   push eax
// 006c9dc9  53                   push ebx
// 006c9dca  8bcd                 mov ecx, ebp
// 006c9dcc  81c654010000         add esi, 0x154
// 006c9dd2  e8a9e30000           call 0x6d8180
// 006c9dd7  8bc8                 mov ecx, eax
// 006c9dd9  e842db0000           call 0x6d7920
// 006c9dde  8b16                 mov edx, dword ptr [esi]
// 006c9de0  50                   push eax
// 006c9de1  8bcf                 mov ecx, edi
// 006c9de3  ffd2                 call edx
// 006c9de5  83eb01               sub ebx, 1
// 006c9de8  79d6                 jns 0x6c9dc0
// 006c9dea  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 006c9df0  8b01                 mov eax, dword ptr [ecx]
// 006c9df2  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 006c9df8  55                   push ebp
// 006c9df9  33f6                 xor esi, esi
// 006c9dfb  ffd2                 call edx
// 006c9dfd  85c0                 test eax, eax
// 006c9dff  0f84d3000000         je 0x6c9ed8
// 006c9e05  8bf0                 mov esi, eax
// 006c9e07  eb07                 jmp 0x6c9e10
// 006c9e09  8da42400000000       lea esp, [esp]
// 006c9e10  8b06                 mov eax, dword ptr [esi]
// 006c9e12  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 006c9e18  8bce                 mov ecx, esi
// 006c9e1a  ffd2                 call edx
// 006c9e1c  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 006c9e22  56                   push esi
// 006c9e23  8bd8                 mov ebx, eax
// 006c9e25  e806160100           call 0x6db430
// 006c9e2a  85c0                 test eax, eax
// 006c9e2c  740c                 je 0x6c9e3a
// 006c9e2e  8b8f28010000         mov ecx, dword ptr [edi + 0x128]
// 006c9e34  56                   push esi
// 006c9e35  e876130100           call 0x6db1b0
// 006c9e3a  8b06                 mov eax, dword ptr [esi]
// 006c9e3c  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006c9e42  8bce                 mov ecx, esi
// 006c9e44  ffd2                 call edx
// 006c9e46  85c0                 test eax, eax
// 006c9e48  7416                 je 0x6c9e60
// 006c9e4a  8b06                 mov eax, dword ptr [esi]
// 006c9e4c  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 006c9e52  8bce                 mov ecx, esi
// 006c9e54  ffd2                 call edx
// 006c9e56  8b10                 mov edx, dword ptr [eax]
// 006c9e58  8bc8                 mov ecx, eax
// 006c9e5a  8b4268               mov eax, dword ptr [edx + 0x68]
// 006c9e5d  56                   push esi
// 006c9e5e  ffd0                 call eax
// 006c9e60  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006c9e66  8b11                 mov edx, dword ptr [ecx]
// 006c9e68  8b4268               mov eax, dword ptr [edx + 0x68]
// 006c9e6b  56                   push esi
// 006c9e6c  ffd0                 call eax
// 006c9e6e  8bf3                 mov esi, ebx
// 006c9e70  85db                 test ebx, ebx
// 006c9e72  744d                 je 0x6c9ec1
// 006c9e74  8b13                 mov edx, dword ptr [ebx]
// 006c9e76  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006c9e7c  8bcb                 mov ecx, ebx
// 006c9e7e  ffd0                 call eax
// 006c9e80  85c0                 test eax, eax
// 006c9e82  741b                 je 0x6c9e9f
// 006c9e84  8b13                 mov edx, dword ptr [ebx]
// 006c9e86  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 006c9e8c  8bcb                 mov ecx, ebx
// 006c9e8e  ffd0                 call eax
// 006c9e90  8bc8                 mov ecx, eax
// 006c9e92  e8b9010100           call 0x6da050
// 006c9e97  85c0                 test eax, eax
// 006c9e99  0f8471ffffff         je 0x6c9e10
// 006c9e9f  8b13                 mov edx, dword ptr [ebx]
// 006c9ea1  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 006c9ea7  8bcb                 mov ecx, ebx
// 006c9ea9  ffd0                 call eax
// 006c9eab  85c0                 test eax, eax
// 006c9ead  7412                 je 0x6c9ec1
// 006c9eaf  8b13                 mov edx, dword ptr [ebx]
// 006c9eb1  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 006c9eb7  8bcb                 mov ecx, ebx
// 006c9eb9  ffd0                 call eax
// 006c9ebb  8b10                 mov edx, dword ptr [eax]
// 006c9ebd  8bc8                 mov ecx, eax
// 006c9ebf  eb08                 jmp 0x6c9ec9
// 006c9ec1  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 006c9ec7  8b11                 mov edx, dword ptr [ecx]
// 006c9ec9  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006c9ecf  6a01                 push 1
// 006c9ed1  ffd0                 call eax
// 006c9ed3  be01000000           mov esi, 1
// 006c9ed8  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006c9edd  7416                 je 0x6c9ef5
// 006c9edf  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 006c9ee2  85c9                 test ecx, ecx
// 006c9ee4  740f                 je 0x6c9ef5
// 006c9ee6  55                   push ebp
// 006c9ee7  e8a4d90000           call 0x6d7890
// 006c9eec  33c9                 xor ecx, ecx
// 006c9eee  85c0                 test eax, eax
// 006c9ef0  0f9dc1               setge cl
// 006c9ef3  0bf1                 or esi, ecx
// 006c9ef5  83bf1c01000000       cmp dword ptr [edi + 0x11c], 0
// 006c9efc  7c25                 jl 0x6c9f23
// 006c9efe  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006c9f04  e847010100           call 0x6da050
// 006c9f09  39871c010000         cmp dword ptr [edi + 0x11c], eax
// 006c9f0f  7c12                 jl 0x6c9f23
// 006c9f11  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 006c9f17  e834010100           call 0x6da050
// 006c9f1c  48                   dec eax
// 006c9f1d  89871c010000         mov dword ptr [edi + 0x11c], eax
// 006c9f23  85f6                 test esi, esi
// 006c9f25  7413                 je 0x6c9f3a
// 006c9f27  8b17                 mov edx, dword ptr [edi]
// 006c9f29  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c9f2d  8b92d4010000         mov edx, dword ptr [edx + 0x1d4]
// 006c9f33  6a00                 push 0
// 006c9f35  50                   push eax
// 006c9f36  8bcf                 mov ecx, edi
// 006c9f38  ffd2                 call edx
// 006c9f3a  8bc6                 mov eax, esi
// 006c9f3c  5e                   pop esi
// 006c9f3d  5b                   pop ebx
// 006c9f3e  5f                   pop edi
// 006c9f3f  5d                   pop ebp
// 006c9f40  c20c00               ret 0xc
// 006c9f43  5f                   pop edi
// 006c9f44  33c0                 xor eax, eax
// 006c9f46  5d                   pop ebp
// 006c9f47  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?RemoveRecordEx@CXTPReportControl@@UAEHPAVCXTPReportRecord@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
