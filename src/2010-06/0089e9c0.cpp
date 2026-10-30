// roc 2010-06 0089e9c0  unit: CXTPRibbonGroup  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e9c0
//
// 0089e9c0  83ec28               sub esp, 0x28
// 0089e9c3  53                   push ebx
// 0089e9c4  55                   push ebp
// 0089e9c5  56                   push esi
// 0089e9c6  8bf1                 mov esi, ecx
// 0089e9c8  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0089e9cb  57                   push edi
// 0089e9cc  e82fa4faff           call 0x848e00
// 0089e9d1  8b10                 mov edx, dword ptr [eax]
// 0089e9d3  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0089e9d7  56                   push esi
// 0089e9d8  8bc8                 mov ecx, eax
// 0089e9da  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0089e9e0  55                   push ebp
// 0089e9e1  ffd0                 call eax
// 0089e9e3  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089e9e6  33db                 xor ebx, ebx
// 0089e9e8  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0089e9f0  85c0                 test eax, eax
// 0089e9f2  0f8eca000000         jle 0x89eac2
// 0089e9f8  85db                 test ebx, ebx
// 0089e9fa  7c15                 jl 0x89ea11
// 0089e9fc  3bd8                 cmp ebx, eax
// 0089e9fe  7d11                 jge 0x89ea11
// 0089ea00  3b5e4c               cmp ebx, dword ptr [esi + 0x4c]
// 0089ea03  0f8d05010000         jge 0x89eb0e
// 0089ea09  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0089ea0c  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 0089ea0f  eb02                 jmp 0x89ea13
// 0089ea11  33ff                 xor edi, edi
// 0089ea13  8b17                 mov edx, dword ptr [edi]
// 0089ea15  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0089ea1b  6a00                 push 0
// 0089ea1d  8bcf                 mov ecx, edi
// 0089ea1f  ffd0                 call eax
// 0089ea21  85c0                 test eax, eax
// 0089ea23  0f848d000000         je 0x89eab6
// 0089ea29  837e2400             cmp dword ptr [esi + 0x24], 0
// 0089ea2d  7531                 jne 0x89ea60
// 0089ea2f  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 0089ea36  7428                 je 0x89ea60
// 0089ea38  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0089ea3d  7521                 jne 0x89ea60
// 0089ea3f  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0089ea42  e8499cf1ff           call 0x7b8690
// 0089ea47  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0089ea4a  8b10                 mov edx, dword ptr [eax]
// 0089ea4c  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 0089ea52  6a01                 push 1
// 0089ea54  57                   push edi
// 0089ea55  51                   push ecx
// 0089ea56  55                   push ebp
// 0089ea57  8d4c2420             lea ecx, [esp + 0x20]
// 0089ea5b  51                   push ecx
// 0089ea5c  8bc8                 mov ecx, eax
// 0089ea5e  ffd2                 call edx
// 0089ea60  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0089ea66  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 0089ea6c  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 0089ea72  89442418             mov dword ptr [esp + 0x18], eax
// 0089ea76  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 0089ea7c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0089ea80  8d4c2418             lea ecx, [esp + 0x18]
// 0089ea84  89542420             mov dword ptr [esp + 0x20], edx
// 0089ea88  51                   push ecx
// 0089ea89  8d542444             lea edx, [esp + 0x44]
// 0089ea8d  89442428             mov dword ptr [esp + 0x28], eax
// 0089ea91  52                   push edx
// 0089ea92  8d442430             lea eax, [esp + 0x30]
// 0089ea96  50                   push eax
// 0089ea97  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 0089ea9d  85c0                 test eax, eax
// 0089ea9f  740d                 je 0x89eaae
// 0089eaa1  8b17                 mov edx, dword ptr [edi]
// 0089eaa3  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0089eaa9  55                   push ebp
// 0089eaaa  8bcf                 mov ecx, edi
// 0089eaac  ffd0                 call eax
// 0089eaae  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0089eab6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089eab9  43                   inc ebx
// 0089eaba  3bd8                 cmp ebx, eax
// 0089eabc  0f8c36ffffff         jl 0x89e9f8
// 0089eac2  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0089eac5  8b11                 mov edx, dword ptr [ecx]
// 0089eac7  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0089eacd  6a00                 push 0
// 0089eacf  ffd0                 call eax
// 0089ead1  85c0                 test eax, eax
// 0089ead3  740e                 je 0x89eae3
// 0089ead5  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0089ead8  8b11                 mov edx, dword ptr [ecx]
// 0089eada  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0089eae0  55                   push ebp
// 0089eae1  ffd0                 call eax
// 0089eae3  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 0089eae6  8b11                 mov edx, dword ptr [ecx]
// 0089eae8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0089eaee  6a00                 push 0
// 0089eaf0  ffd0                 call eax
// 0089eaf2  85c0                 test eax, eax
// 0089eaf4  740e                 je 0x89eb04
// 0089eaf6  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 0089eaf9  8b11                 mov edx, dword ptr [ecx]
// 0089eafb  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0089eb01  55                   push ebp
// 0089eb02  ffd0                 call eax
// 0089eb04  5f                   pop edi
// 0089eb05  5e                   pop esi
// 0089eb06  5d                   pop ebp
// 0089eb07  5b                   pop ebx
// 0089eb08  83c428               add esp, 0x28
// 0089eb0b  c21400               ret 0x14
// 0089eb0e  e83991f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?Draw@CXTPRibbonGroup@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp