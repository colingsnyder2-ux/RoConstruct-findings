// roc 2009-12 008785d0  unit: CXTPControlGallery  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008785d0
//
// 008785d0  55                   push ebp
// 008785d1  8be9                 mov ebp, ecx
// 008785d3  e808fcffff           call 0x8781e0
// 008785d8  85c0                 test eax, eax
// 008785da  7507                 jne 0x8785e3
// 008785dc  83c8ff               or eax, 0xffffffff
// 008785df  5d                   pop ebp
// 008785e0  c20800               ret 8
// 008785e3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008785e7  53                   push ebx
// 008785e8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008785ec  56                   push esi
// 008785ed  8d3413               lea esi, [ebx + edx]
// 008785f0  83faff               cmp edx, -1
// 008785f3  750e                 jne 0x878603
// 008785f5  3bda                 cmp ebx, edx
// 008785f7  750a                 jne 0x878603
// 008785f9  8bcd                 mov ecx, ebp
// 008785fb  e8e0fbffff           call 0x8781e0
// 00878600  8bf0                 mov esi, eax
// 00878602  4e                   dec esi
// 00878603  57                   push edi
// 00878604  33ff                 xor edi, edi
// 00878606  3bf3                 cmp esi, ebx
// 00878608  750d                 jne 0x878617
// 0087860a  5f                   pop edi
// 0087860b  8bc6                 mov eax, esi
// 0087860d  5e                   pop esi
// 0087860e  5b                   pop ebx
// 0087860f  5d                   pop ebp
// 00878610  c20800               ret 8
// 00878613  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878617  8bcd                 mov ecx, ebp
// 00878619  e8c2fbffff           call 0x8781e0
// 0087861e  3bf0                 cmp esi, eax
// 00878620  7c12                 jl 0x878634
// 00878622  83fbff               cmp ebx, -1
// 00878625  7505                 jne 0x87862c
// 00878627  83fa01               cmp edx, 1
// 0087862a  7447                 je 0x878673
// 0087862c  85ff                 test edi, edi
// 0087862e  7543                 jne 0x878673
// 00878630  33f6                 xor esi, esi
// 00878632  eb1b                 jmp 0x87864f
// 00878634  85f6                 test esi, esi
// 00878636  7d1c                 jge 0x878654
// 00878638  83fbff               cmp ebx, -1
// 0087863b  7504                 jne 0x878641
// 0087863d  3bd3                 cmp edx, ebx
// 0087863f  7432                 je 0x878673
// 00878641  85ff                 test edi, edi
// 00878643  752e                 jne 0x878673
// 00878645  8bcd                 mov ecx, ebp
// 00878647  e894fbffff           call 0x8781e0
// 0087864c  8bf0                 mov esi, eax
// 0087864e  4e                   dec esi
// 0087864f  bf01000000           mov edi, 1
// 00878654  56                   push esi
// 00878655  8bcd                 mov ecx, ebp
// 00878657  e8a4fbffff           call 0x878200
// 0087865c  83784800             cmp dword ptr [eax + 0x48], 0
// 00878660  74a8                 je 0x87860a
// 00878662  03742418             add esi, dword ptr [esp + 0x18]
// 00878666  3bf3                 cmp esi, ebx
// 00878668  75a9                 jne 0x878613
// 0087866a  5f                   pop edi
// 0087866b  8bc6                 mov eax, esi
// 0087866d  5e                   pop esi
// 0087866e  5b                   pop ebx
// 0087866f  5d                   pop ebp
// 00878670  c20800               ret 8
// 00878673  5f                   pop edi
// 00878674  5e                   pop esi
// 00878675  5b                   pop ebx
// 00878676  83c8ff               or eax, 0xffffffff
// 00878679  5d                   pop ebp
// 0087867a  c20800               ret 8
// copied from an identical function in another client (function ?GetNext@CXTPControlGallery@@QBEJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp