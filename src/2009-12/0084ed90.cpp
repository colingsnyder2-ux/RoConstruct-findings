// roc 2009-12 0084ed90  unit: CXTPPropertyGrid  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ed90
//
// 0084ed90  56                   push esi
// 0084ed91  8bf1                 mov esi, ecx
// 0084ed93  e8e8ecffff           call 0x84da80
// 0084ed98  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 0084ed9f  0f8fdd000000         jg 0x84ee82
// 0084eda5  85f6                 test esi, esi
// 0084eda7  0f84d5000000         je 0x84ee82
// 0084edad  837e2000             cmp dword ptr [esi + 0x20], 0
// 0084edb1  0f84cb000000         je 0x84ee82
// 0084edb7  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0084edba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084edbe  53                   push ebx
// 0084edbf  55                   push ebp
// 0084edc0  33ed                 xor ebp, ebp
// 0084edc2  8bc2                 mov eax, edx
// 0084edc4  f7d8                 neg eax
// 0084edc6  1bc0                 sbb eax, eax
// 0084edc8  83e019               and eax, 0x19
// 0084edcb  83c014               add eax, 0x14
// 0084edce  57                   push edi
// 0084edcf  8bf9                 mov edi, ecx
// 0084edd1  396e60               cmp dword ptr [esi + 0x60], ebp
// 0084edd4  742f                 je 0x84ee05
// 0084edd6  3bc8                 cmp ecx, eax
// 0084edd8  7e23                 jle 0x84edfd
// 0084edda  2b7e54               sub edi, dword ptr [esi + 0x54]
// 0084eddd  83ef03               sub edi, 3
// 0084ede0  3bf8                 cmp edi, eax
// 0084ede2  7d19                 jge 0x84edfd
// 0084ede4  396e68               cmp dword ptr [esi + 0x68], ebp
// 0084ede7  7414                 je 0x84edfd
// 0084ede9  8bf9                 mov edi, ecx
// 0084edeb  2bf8                 sub edi, eax
// 0084eded  33db                 xor ebx, ebx
// 0084edef  8d47fd               lea eax, [edi - 3]
// 0084edf2  85c0                 test eax, eax
// 0084edf4  0f9cc3               setl bl
// 0084edf7  4b                   dec ebx
// 0084edf8  23c3                 and eax, ebx
// 0084edfa  894654               mov dword ptr [esi + 0x54], eax
// 0084edfd  2b4e54               sub ecx, dword ptr [esi + 0x54]
// 0084ee00  83e903               sub ecx, 3
// 0084ee03  8bf9                 mov edi, ecx
// 0084ee05  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0084ee0b  8b4028               mov eax, dword ptr [eax + 0x28]
// 0084ee0e  85c0                 test eax, eax
// 0084ee10  740a                 je 0x84ee1c
// 0084ee12  b9fdffffff           mov ecx, 0xfffffffd
// 0084ee17  2b4e58               sub ecx, dword ptr [esi + 0x58]
// 0084ee1a  03f9                 add edi, ecx
// 0084ee1c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0084ee20  33c9                 xor ecx, ecx
// 0084ee22  85c0                 test eax, eax
// 0084ee24  0f95c1               setne cl
// 0084ee27  898e3c010000         mov dword ptr [esi + 0x13c], ecx
// 0084ee2d  85d2                 test edx, edx
// 0084ee2f  7416                 je 0x84ee47
// 0084ee31  6a01                 push 1
// 0084ee33  6a19                 push 0x19
// 0084ee35  53                   push ebx
// 0084ee36  6a00                 push 0
// 0084ee38  6a00                 push 0
// 0084ee3a  8d4e70               lea ecx, [esi + 0x70]
// 0084ee3d  e8f04dfaff           call 0x7f3c32
// 0084ee42  bd19000000           mov ebp, 0x19
// 0084ee47  8bce                 mov ecx, esi
// 0084ee49  e832ecffff           call 0x84da80
// 0084ee4e  6a01                 push 1
// 0084ee50  2bfd                 sub edi, ebp
// 0084ee52  57                   push edi
// 0084ee53  53                   push ebx
// 0084ee54  55                   push ebp
// 0084ee55  6a00                 push 0
// 0084ee57  8bc8                 mov ecx, eax
// 0084ee59  e8d44dfaff           call 0x7f3c32
// 0084ee5e  8bce                 mov ecx, esi
// 0084ee60  e81becffff           call 0x84da80
// 0084ee65  8b5020               mov edx, dword ptr [eax + 0x20]
// 0084ee68  8b3de8cb9800         mov edi, dword ptr [0x98cbe8]
// 0084ee6e  6a00                 push 0
// 0084ee70  6a00                 push 0
// 0084ee72  52                   push edx
// 0084ee73  ffd7                 call edi
// 0084ee75  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084ee78  6a00                 push 0
// 0084ee7a  6a00                 push 0
// 0084ee7c  50                   push eax
// 0084ee7d  ffd7                 call edi
// 0084ee7f  5f                   pop edi
// 0084ee80  5d                   pop ebp
// 0084ee81  5b                   pop ebx
// 0084ee82  5e                   pop esi
// 0084ee83  c20800               ret 8
// copied from an identical function in another client (function ?Reposition@CXTPPropertyGrid@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp