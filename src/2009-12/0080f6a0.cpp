// roc 2009-12 0080f6a0  unit: CXTPImageManagerIcon  size: 805 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f6a0
//
// 0080f6a0  6aff                 push -1
// 0080f6a2  68809e9500           push 0x959e80
// 0080f6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0080f6ad  50                   push eax
// 0080f6ae  83ec28               sub esp, 0x28
// 0080f6b1  53                   push ebx
// 0080f6b2  55                   push ebp
// 0080f6b3  56                   push esi
// 0080f6b4  57                   push edi
// 0080f6b5  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f6ba  33c4                 xor eax, esp
// 0080f6bc  50                   push eax
// 0080f6bd  8d44243c             lea eax, [esp + 0x3c]
// 0080f6c1  64a300000000         mov dword ptr fs:[0], eax
// 0080f6c7  8be9                 mov ebp, ecx
// 0080f6c9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0080f6cd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080f6d1  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0080f6d5  8b1d5cb19800         mov ebx, dword ptr [0x98b15c]
// 0080f6db  85c9                 test ecx, ecx
// 0080f6dd  7533                 jne 0x80f712
// 0080f6df  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0080f6e4  752c                 jne 0x80f712
// 0080f6e6  8b742454             mov esi, dword ptr [esp + 0x54]
// 0080f6ea  85f6                 test esi, esi
// 0080f6ec  7e2a                 jle 0x80f718
// 0080f6ee  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080f6f1  8d442424             lea eax, [esp + 0x24]
// 0080f6f5  50                   push eax
// 0080f6f6  6a18                 push 0x18
// 0080f6f8  51                   push ecx
// 0080f6f9  ffd3                 call ebx
// 0080f6fb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080f6ff  99                   cdq 
// 0080f700  f7fe                 idiv esi
// 0080f702  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080f706  8954245c             mov dword ptr [esp + 0x5c], edx
// 0080f70a  8bc8                 mov ecx, eax
// 0080f70c  894c2458             mov dword ptr [esp + 0x58], ecx
// 0080f710  eb04                 jmp 0x80f716
// 0080f712  8b742454             mov esi, dword ptr [esp + 0x54]
// 0080f716  85f6                 test esi, esi
// 0080f718  7522                 jne 0x80f73c
// 0080f71a  85c9                 test ecx, ecx
// 0080f71c  7e20                 jle 0x80f73e
// 0080f71e  8b4704               mov eax, dword ptr [edi + 4]
// 0080f721  8d542424             lea edx, [esp + 0x24]
// 0080f725  52                   push edx
// 0080f726  6a18                 push 0x18
// 0080f728  50                   push eax
// 0080f729  ffd3                 call ebx
// 0080f72b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080f72f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080f733  99                   cdq 
// 0080f734  f7f9                 idiv ecx
// 0080f736  89442454             mov dword ptr [esp + 0x54], eax
// 0080f73a  8bf0                 mov esi, eax
// 0080f73c  85c9                 test ecx, ecx
// 0080f73e  0f84fe000000         je 0x80f842
// 0080f744  837c246400           cmp dword ptr [esp + 0x64], 0
// 0080f749  0f849d010000         je 0x80f8ec
// 0080f74f  8bcd                 mov ecx, ebp
// 0080f751  e81ae20200           call 0x83d970
// 0080f756  85c0                 test eax, eax
// 0080f758  0f858d000000         jne 0x80f7eb
// 0080f75e  3905acadb900         cmp dword ptr [0xb9adac], eax
// 0080f764  0f8481000000         je 0x80f7eb
// 0080f76a  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0080f76d  83f8ff               cmp eax, -1
// 0080f770  7505                 jne 0x80f777
// 0080f772  b800ff0000           mov eax, 0xff00
// 0080f777  85ff                 test edi, edi
// 0080f779  7403                 je 0x80f77e
// 0080f77b  8b7f04               mov edi, dword ptr [edi + 4]
// 0080f77e  50                   push eax
// 0080f77f  57                   push edi
// 0080f780  e86bbdffff           call 0x80b4f0
// 0080f785  33db                 xor ebx, ebx
// 0080f787  83c408               add esp, 8
// 0080f78a  3bc3                 cmp eax, ebx
// 0080f78c  0f84b0000000         je 0x80f842
// 0080f792  bf18229a00           mov edi, 0x9a2218
// 0080f797  895c2418             mov dword ptr [esp + 0x18], ebx
// 0080f79b  897c2414             mov dword ptr [esp + 0x14], edi
// 0080f79f  50                   push eax
// 0080f7a0  8d4c2418             lea ecx, [esp + 0x18]
// 0080f7a4  895c2448             mov dword ptr [esp + 0x48], ebx
// 0080f7a8  e87d46feff           call 0x7f3e2a
// 0080f7ad  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0080f7b1  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0080f7b5  8b442458             mov eax, dword ptr [esp + 0x58]
// 0080f7b9  53                   push ebx
// 0080f7ba  51                   push ecx
// 0080f7bb  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080f7bf  52                   push edx
// 0080f7c0  50                   push eax
// 0080f7c1  56                   push esi
// 0080f7c2  51                   push ecx
// 0080f7c3  8d54242c             lea edx, [esp + 0x2c]
// 0080f7c7  52                   push edx
// 0080f7c8  8bcd                 mov ecx, ebp
// 0080f7ca  e8d1feffff           call 0x80f6a0
// 0080f7cf  8d4c2414             lea ecx, [esp + 0x14]
// 0080f7d3  8bf0                 mov esi, eax
// 0080f7d5  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0080f7dd  897c2414             mov dword ptr [esp + 0x14], edi
// 0080f7e1  e84afabfff           call 0x40f230
// 0080f7e6  e9c2010000           jmp 0x80f9ad
// 0080f7eb  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080f7ee  8d442424             lea eax, [esp + 0x24]
// 0080f7f2  50                   push eax
// 0080f7f3  6a18                 push 0x18
// 0080f7f5  51                   push ecx
// 0080f7f6  ffd3                 call ebx
// 0080f7f8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080f7fc  99                   cdq 
// 0080f7fd  f77c2458             idiv dword ptr [esp + 0x58]
// 0080f801  8be8                 mov ebp, eax
// 0080f803  85d2                 test edx, edx
// 0080f805  753b                 jne 0x80f842
// 0080f807  33c9                 xor ecx, ecx
// 0080f809  ba04000000           mov edx, 4
// 0080f80e  f7e2                 mul edx
// 0080f810  0f90c1               seto cl
// 0080f813  f7d9                 neg ecx
// 0080f815  0bc8                 or ecx, eax
// 0080f817  51                   push ecx
// 0080f818  e82543feff           call 0x7f3b42
// 0080f81d  8b7f04               mov edi, dword ptr [edi + 4]
// 0080f820  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080f824  83c404               add esp, 4
// 0080f827  8bd8                 mov ebx, eax
// 0080f829  53                   push ebx
// 0080f82a  55                   push ebp
// 0080f82b  57                   push edi
// 0080f82c  895c2458             mov dword ptr [esp + 0x58], ebx
// 0080f830  e81bbaffff           call 0x80b250
// 0080f835  85c0                 test eax, eax
// 0080f837  7510                 jne 0x80f849
// 0080f839  53                   push ebx
// 0080f83a  e8c742feff           call 0x7f3b06
// 0080f83f  83c404               add esp, 4
// 0080f842  33c0                 xor eax, eax
// 0080f844  e966010000           jmp 0x80f9af
// 0080f849  33c0                 xor eax, eax
// 0080f84b  3bee                 cmp ebp, esi
// 0080f84d  0f94c0               sete al
// 0080f850  33db                 xor ebx, ebx
// 0080f852  33ff                 xor edi, edi
// 0080f854  89442464             mov dword ptr [esp + 0x64], eax
// 0080f858  85f6                 test esi, esi
// 0080f85a  7e5e                 jle 0x80f8ba
// 0080f85c  8b742450             mov esi, dword ptr [esp + 0x50]
// 0080f860  85f6                 test esi, esi
// 0080f862  740d                 je 0x80f871
// 0080f864  837c246400           cmp dword ptr [esp + 0x64], 0
// 0080f869  7506                 jne 0x80f871
// 0080f86b  833cbe00             cmp dword ptr [esi + edi*4], 0
// 0080f86f  7442                 je 0x80f8b3
// 0080f871  3bdd                 cmp ebx, ebp
// 0080f873  7d3e                 jge 0x80f8b3
// 0080f875  85f6                 test esi, esi
// 0080f877  7405                 je 0x80f87e
// 0080f879  8b04be               mov eax, dword ptr [esi + edi*4]
// 0080f87c  eb02                 jmp 0x80f880
// 0080f87e  8bc7                 mov eax, edi
// 0080f880  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0080f884  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0080f888  51                   push ecx
// 0080f889  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0080f88d  52                   push edx
// 0080f88e  8b542454             mov edx, dword ptr [esp + 0x54]
// 0080f892  51                   push ecx
// 0080f893  50                   push eax
// 0080f894  8b049a               mov eax, dword ptr [edx + ebx*4]
// 0080f897  83ec24               sub esp, 0x24
// 0080f89a  8bcc                 mov ecx, esp
// 0080f89c  89a42484000000       mov dword ptr [esp + 0x84], esp
// 0080f8a3  50                   push eax
// 0080f8a4  e827d4ffff           call 0x80ccd0
// 0080f8a9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0080f8ad  e83efaffff           call 0x80f2f0
// 0080f8b2  43                   inc ebx
// 0080f8b3  47                   inc edi
// 0080f8b4  3b7c2454             cmp edi, dword ptr [esp + 0x54]
// 0080f8b8  7ca6                 jl 0x80f860
// 0080f8ba  33f6                 xor esi, esi
// 0080f8bc  85ed                 test ebp, ebp
// 0080f8be  7e15                 jle 0x80f8d5
// 0080f8c0  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0080f8c6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0080f8ca  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 0080f8cd  52                   push edx
// 0080f8ce  ffd7                 call edi
// 0080f8d0  46                   inc esi
// 0080f8d1  3bf5                 cmp esi, ebp
// 0080f8d3  7cf1                 jl 0x80f8c6
// 0080f8d5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080f8d9  50                   push eax
// 0080f8da  e82742feff           call 0x7f3b06
// 0080f8df  83c404               add esp, 4
// 0080f8e2  b801000000           mov eax, 1
// 0080f8e7  e9c3000000           jmp 0x80f9af
// 0080f8ec  8d4c241c             lea ecx, [esp + 0x1c]
// 0080f8f0  e81b47feff           call 0x7f4010
// 0080f8f5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0080f8f9  8b542458             mov edx, dword ptr [esp + 0x58]
// 0080f8fd  6a01                 push 1
// 0080f8ff  6a00                 push 0
// 0080f901  6a19                 push 0x19
// 0080f903  51                   push ecx
// 0080f904  52                   push edx
// 0080f905  8d4c2430             lea ecx, [esp + 0x30]
// 0080f909  c744245801000000     mov dword ptr [esp + 0x58], 1
// 0080f911  e8f446feff           call 0x7f400a
// 0080f916  85c0                 test eax, eax
// 0080f918  7518                 jne 0x80f932
// 0080f91a  8d4c241c             lea ecx, [esp + 0x1c]
// 0080f91e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0080f926  e8c746feff           call 0x7f3ff2
// 0080f92b  33c0                 xor eax, eax
// 0080f92d  e97d000000           jmp 0x80f9af
// 0080f932  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0080f935  83f8ff               cmp eax, -1
// 0080f938  751f                 jne 0x80f959
// 0080f93a  83ec08               sub esp, 8
// 0080f93d  8bc4                 mov eax, esp
// 0080f93f  8964245c             mov dword ptr [esp + 0x5c], esp
// 0080f943  57                   push edi
// 0080f944  c70000000000         mov dword ptr [eax], 0
// 0080f94a  c7400400000000       mov dword ptr [eax + 4], 0
// 0080f951  e85abbffff           call 0x80b4b0
// 0080f956  83c40c               add esp, 0xc
// 0080f959  85ff                 test edi, edi
// 0080f95b  7403                 je 0x80f960
// 0080f95d  8b7f04               mov edi, dword ptr [edi + 4]
// 0080f960  50                   push eax
// 0080f961  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080f965  57                   push edi
// 0080f966  50                   push eax
// 0080f967  e8b241feff           call 0x7f3b1e
// 0080f96c  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 0080f972  8b09                 mov ecx, dword ptr [ecx]
// 0080f974  e8a737c0ff           call 0x413120
// 0080f979  8b542460             mov edx, dword ptr [esp + 0x60]
// 0080f97d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0080f981  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0080f985  52                   push edx
// 0080f986  8b542454             mov edx, dword ptr [esp + 0x54]
// 0080f98a  50                   push eax
// 0080f98b  51                   push ecx
// 0080f98c  56                   push esi
// 0080f98d  52                   push edx
// 0080f98e  8d442430             lea eax, [esp + 0x30]
// 0080f992  50                   push eax
// 0080f993  8bcd                 mov ecx, ebp
// 0080f995  e896fbffff           call 0x80f530
// 0080f99a  8d4c241c             lea ecx, [esp + 0x1c]
// 0080f99e  8bf0                 mov esi, eax
// 0080f9a0  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0080f9a8  e84546feff           call 0x7f3ff2
// 0080f9ad  8bc6                 mov eax, esi
// 0080f9af  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080f9b3  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f9ba  59                   pop ecx
// 0080f9bb  5f                   pop edi
// 0080f9bc  5e                   pop esi
// 0080f9bd  5d                   pop ebp
// 0080f9be  5b                   pop ebx
// 0080f9bf  83c434               add esp, 0x34
// 0080f9c2  c21c00               ret 0x1c
// copied from an identical function in another client (function ?SetIcons@CXTPImageManager@@QAEHAAVCBitmap@@PAIHVCSize@@W4XTPImageState@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp