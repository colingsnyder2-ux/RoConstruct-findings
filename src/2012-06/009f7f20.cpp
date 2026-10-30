// from server: 100% by auto
// roc 2012-06 009f7f20  unit: CXTPResourceManager  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7f20
//
// 009f7f20  8b442408             mov eax, dword ptr [esp + 8]
// 009f7f24  56                   push esi
// 009f7f25  8b354022b200         mov esi, dword ptr [0xb22240]
// 009f7f2b  57                   push edi
// 009f7f2c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009f7f30  6a0e                 push 0xe
// 009f7f32  50                   push eax
// 009f7f33  57                   push edi
// 009f7f34  ffd6                 call esi
// 009f7f36  85c0                 test eax, eax
// 009f7f38  7505                 jne 0x9f7f3f
// 009f7f3a  5f                   pop edi
// 009f7f3b  5e                   pop esi
// 009f7f3c  c21000               ret 0x10
// 009f7f3f  55                   push ebp
// 009f7f40  8b2d8421b200         mov ebp, dword ptr [0xb22184]
// 009f7f46  50                   push eax
// 009f7f47  57                   push edi
// 009f7f48  ffd5                 call ebp
// 009f7f4a  85c0                 test eax, eax
// 009f7f4c  7506                 jne 0x9f7f54
// 009f7f4e  5d                   pop ebp
// 009f7f4f  5f                   pop edi
// 009f7f50  5e                   pop esi
// 009f7f51  c21000               ret 0x10
// 009f7f54  53                   push ebx
// 009f7f55  8b1dd422b200         mov ebx, dword ptr [0xb222d4]
// 009f7f5b  50                   push eax
// 009f7f5c  ffd3                 call ebx
// 009f7f5e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f7f62  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009f7f66  6a00                 push 0
// 009f7f68  51                   push ecx
// 009f7f69  52                   push edx
// 009f7f6a  6a01                 push 1
// 009f7f6c  50                   push eax
// 009f7f6d  ff15743cb200         call dword ptr [0xb23c74]
// 009f7f73  0fb7c0               movzx eax, ax
// 009f7f76  6a03                 push 3
// 009f7f78  50                   push eax
// 009f7f79  57                   push edi
// 009f7f7a  ffd6                 call esi
// 009f7f7c  8bf0                 mov esi, eax
// 009f7f7e  85f6                 test esi, esi
// 009f7f80  7408                 je 0x9f7f8a
// 009f7f82  56                   push esi
// 009f7f83  57                   push edi
// 009f7f84  ffd5                 call ebp
// 009f7f86  85c0                 test eax, eax
// 009f7f88  7509                 jne 0x9f7f93
// 009f7f8a  5b                   pop ebx
// 009f7f8b  5d                   pop ebp
// 009f7f8c  5f                   pop edi
// 009f7f8d  33c0                 xor eax, eax
// 009f7f8f  5e                   pop esi
// 009f7f90  c21000               ret 0x10
// 009f7f93  50                   push eax
// 009f7f94  ffd3                 call ebx
// 009f7f96  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f7f9a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009f7f9e  6a00                 push 0
// 009f7fa0  51                   push ecx
// 009f7fa1  52                   push edx
// 009f7fa2  6800000300           push 0x30000
// 009f7fa7  6a01                 push 1
// 009f7fa9  56                   push esi
// 009f7faa  57                   push edi
// 009f7fab  8bd8                 mov ebx, eax
// 009f7fad  ff158821b200         call dword ptr [0xb22188]
// 009f7fb3  50                   push eax
// 009f7fb4  53                   push ebx
// 009f7fb5  ff15343db200         call dword ptr [0xb23d34]
// 009f7fbb  5b                   pop ebx
// 009f7fbc  5d                   pop ebp
// 009f7fbd  5f                   pop edi
// 009f7fbe  5e                   pop esi
// 009f7fbf  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?CreateIconFromResource@CXTPResourceManager@@UAEPAUHICON__@@PAUHINSTANCE__@@PBDVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
