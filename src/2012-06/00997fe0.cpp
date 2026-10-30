// roc 2012-06 00997fe0  unit: CXTPPropertyGridItemConstraint  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997fe0
//
// 00997fe0  83ec08               sub esp, 8
// 00997fe3  53                   push ebx
// 00997fe4  55                   push ebp
// 00997fe5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00997fe9  56                   push esi
// 00997fea  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00997fee  8b460c               mov eax, dword ptr [esi + 0xc]
// 00997ff1  2b4604               sub eax, dword ptr [esi + 4]
// 00997ff4  57                   push edi
// 00997ff5  894c2414             mov dword ptr [esp + 0x14], ecx
// 00997ff9  8b4e08               mov ecx, dword ptr [esi + 8]
// 00997ffc  2b0e                 sub ecx, dword ptr [esi]
// 00997ffe  33ff                 xor edi, edi
// 00998000  57                   push edi
// 00998001  50                   push eax
// 00998002  51                   push ecx
// 00998003  55                   push ebp
// 00998004  897c2420             mov dword ptr [esp + 0x20], edi
// 00998008  e813f4ffff           call 0x997420
// 0099800d  8bd8                 mov ebx, eax
// 0099800f  83c410               add esp, 0x10
// 00998012  895c2420             mov dword ptr [esp + 0x20], ebx
// 00998016  85db                 test ebx, ebx
// 00998018  0f84b6000000         je 0x9980d4
// 0099801e  55                   push ebp
// 0099801f  ff155821b200         call dword ptr [0xb22158]
// 00998025  8bf8                 mov edi, eax
// 00998027  85ff                 test edi, edi
// 00998029  0f8490000000         je 0x9980bf
// 0099802f  53                   push ebx
// 00998030  57                   push edi
// 00998031  ff156021b200         call dword ptr [0xb22160]
// 00998037  8b5604               mov edx, dword ptr [esi + 4]
// 0099803a  8b1e                 mov ebx, dword ptr [esi]
// 0099803c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0099803f  682000cc00           push 0xcc0020
// 00998044  52                   push edx
// 00998045  53                   push ebx
// 00998046  89442428             mov dword ptr [esp + 0x28], eax
// 0099804a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0099804d  55                   push ebp
// 0099804e  2bc2                 sub eax, edx
// 00998050  50                   push eax
// 00998051  2bcb                 sub ecx, ebx
// 00998053  8b1d6421b200         mov ebx, dword ptr [0xb22164]
// 00998059  51                   push ecx
// 0099805a  6a00                 push 0
// 0099805c  6a00                 push 0
// 0099805e  57                   push edi
// 0099805f  ffd3                 call ebx
// 00998061  85c0                 test eax, eax
// 00998063  743f                 je 0x9980a4
// 00998065  8b442424             mov eax, dword ptr [esp + 0x24]
// 00998069  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0099806d  50                   push eax
// 0099806e  6aff                 push -1
// 00998070  6aff                 push -1
// 00998072  51                   push ecx
// 00998073  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00998077  e8d4faffff           call 0x997b50
// 0099807c  89442410             mov dword ptr [esp + 0x10], eax
// 00998080  85c0                 test eax, eax
// 00998082  7420                 je 0x9980a4
// 00998084  8b4604               mov eax, dword ptr [esi + 4]
// 00998087  8b560c               mov edx, dword ptr [esi + 0xc]
// 0099808a  8b0e                 mov ecx, dword ptr [esi]
// 0099808c  682000cc00           push 0xcc0020
// 00998091  6a00                 push 0
// 00998093  6a00                 push 0
// 00998095  57                   push edi
// 00998096  2bd0                 sub edx, eax
// 00998098  52                   push edx
// 00998099  8b5608               mov edx, dword ptr [esi + 8]
// 0099809c  2bd1                 sub edx, ecx
// 0099809e  52                   push edx
// 0099809f  50                   push eax
// 009980a0  51                   push ecx
// 009980a1  55                   push ebp
// 009980a2  ffd3                 call ebx
// 009980a4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009980a8  85c0                 test eax, eax
// 009980aa  7408                 je 0x9980b4
// 009980ac  50                   push eax
// 009980ad  57                   push edi
// 009980ae  ff156021b200         call dword ptr [0xb22160]
// 009980b4  57                   push edi
// 009980b5  ff156c21b200         call dword ptr [0xb2216c]
// 009980bb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009980bf  53                   push ebx
// 009980c0  ff157021b200         call dword ptr [0xb22170]
// 009980c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 009980ca  5f                   pop edi
// 009980cb  5e                   pop esi
// 009980cc  5d                   pop ebp
// 009980cd  5b                   pop ebx
// 009980ce  83c408               add esp, 8
// 009980d1  c20c00               ret 0xc
// 009980d4  8bc7                 mov eax, edi
// 009980d6  5f                   pop edi
// 009980d7  5e                   pop esi
// 009980d8  5d                   pop ebp
// 009980d9  5b                   pop ebx
// 009980da  83c408               add esp, 8
// 009980dd  c20c00               ret 0xc
// copied from an identical function in another client (function ?BlackWhiteBitmap@CXTPImageManager@@QAEHPAUHDC__@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp