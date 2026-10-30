// roc 2009-12 00815040  unit: MyXTPCommandBars  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815040
//
// 00815040  51                   push ecx
// 00815041  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 00815047  890c24               mov dword ptr [esp], ecx
// 0081504a  85c0                 test eax, eax
// 0081504c  7507                 jne 0x815055
// 0081504e  83c8ff               or eax, 0xffffffff
// 00815051  59                   pop ecx
// 00815052  c20800               ret 8
// 00815055  53                   push ebx
// 00815056  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0081505a  55                   push ebp
// 0081505b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081505f  56                   push esi
// 00815060  8d342b               lea esi, [ebx + ebp]
// 00815063  83fdff               cmp ebp, -1
// 00815066  7507                 jne 0x81506f
// 00815068  3bdd                 cmp ebx, ebp
// 0081506a  7503                 jne 0x81506f
// 0081506c  8d70ff               lea esi, [eax - 1]
// 0081506f  57                   push edi
// 00815070  33ff                 xor edi, edi
// 00815072  3bf3                 cmp esi, ebx
// 00815074  750e                 jne 0x815084
// 00815076  5f                   pop edi
// 00815077  8bc6                 mov eax, esi
// 00815079  5e                   pop esi
// 0081507a  5d                   pop ebp
// 0081507b  5b                   pop ebx
// 0081507c  59                   pop ecx
// 0081507d  c20800               ret 8
// 00815080  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00815084  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0081508a  3bf0                 cmp esi, eax
// 0081508c  7c12                 jl 0x8150a0
// 0081508e  83fbff               cmp ebx, -1
// 00815091  7505                 jne 0x815098
// 00815093  83fd01               cmp ebp, 1
// 00815096  7442                 je 0x8150da
// 00815098  85ff                 test edi, edi
// 0081509a  753e                 jne 0x8150da
// 0081509c  33f6                 xor esi, esi
// 0081509e  eb14                 jmp 0x8150b4
// 008150a0  85f6                 test esi, esi
// 008150a2  7d15                 jge 0x8150b9
// 008150a4  83fbff               cmp ebx, -1
// 008150a7  7504                 jne 0x8150ad
// 008150a9  3beb                 cmp ebp, ebx
// 008150ab  742d                 je 0x8150da
// 008150ad  85ff                 test edi, edi
// 008150af  7529                 jne 0x8150da
// 008150b1  8d70ff               lea esi, [eax - 1]
// 008150b4  bf01000000           mov edi, 1
// 008150b9  56                   push esi
// 008150ba  e821fcffff           call 0x814ce0
// 008150bf  8bc8                 mov ecx, eax
// 008150c1  e86adeffff           call 0x812f30
// 008150c6  85c0                 test eax, eax
// 008150c8  75ac                 jne 0x815076
// 008150ca  03f5                 add esi, ebp
// 008150cc  3bf3                 cmp esi, ebx
// 008150ce  75b0                 jne 0x815080
// 008150d0  5f                   pop edi
// 008150d1  8bc6                 mov eax, esi
// 008150d3  5e                   pop esi
// 008150d4  5d                   pop ebp
// 008150d5  5b                   pop ebx
// 008150d6  59                   pop ecx
// 008150d7  c20800               ret 8
// 008150da  5f                   pop edi
// 008150db  5e                   pop esi
// 008150dc  5d                   pop ebp
// 008150dd  83c8ff               or eax, 0xffffffff
// 008150e0  5b                   pop ebx
// 008150e1  59                   pop ecx
// 008150e2  c20800               ret 8
// copied from an identical function in another client (function ?GetNextVisible@CXTPCommandBars@@IBEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp