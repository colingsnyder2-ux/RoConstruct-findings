// roc 2012-06 00a1bd90  unit: CXTPDockBar  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1bd90
//
// 00a1bd90  53                   push ebx
// 00a1bd91  55                   push ebp
// 00a1bd92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00a1bd96  8bd9                 mov ebx, ecx
// 00a1bd98  85ed                 test ebp, ebp
// 00a1bd9a  7507                 jne 0xa1bda3
// 00a1bd9c  5d                   pop ebp
// 00a1bd9d  33c0                 xor eax, eax
// 00a1bd9f  5b                   pop ebx
// 00a1bda0  c20800               ret 8
// 00a1bda3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a1bda7  56                   push esi
// 00a1bda8  50                   push eax
// 00a1bda9  55                   push ebp
// 00a1bdaa  e861f0ffff           call 0xa1ae10
// 00a1bdaf  8bf0                 mov esi, eax
// 00a1bdb1  85f6                 test esi, esi
// 00a1bdb3  7f08                 jg 0xa1bdbd
// 00a1bdb5  5e                   pop esi
// 00a1bdb6  5d                   pop ebp
// 00a1bdb7  33c0                 xor eax, eax
// 00a1bdb9  5b                   pop ebx
// 00a1bdba  c20800               ret 8
// 00a1bdbd  57                   push edi
// 00a1bdbe  6a01                 push 1
// 00a1bdc0  8d7b58               lea edi, [ebx + 0x58]
// 00a1bdc3  56                   push esi
// 00a1bdc4  8bcf                 mov ecx, edi
// 00a1bdc6  e8a573f7ff           call 0x993170
// 00a1bdcb  8d46ff               lea eax, [esi - 1]
// 00a1bdce  85c0                 test eax, eax
// 00a1bdd0  7c45                 jl 0xa1be17
// 00a1bdd2  3b4708               cmp eax, dword ptr [edi + 8]
// 00a1bdd5  7d40                 jge 0xa1be17
// 00a1bdd7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a1bdda  833c8100             cmp dword ptr [ecx + eax*4], 0
// 00a1bdde  7517                 jne 0xa1bdf7
// 00a1bde0  3b7708               cmp esi, dword ptr [edi + 8]
// 00a1bde3  7d32                 jge 0xa1be17
// 00a1bde5  8bd1                 mov edx, ecx
// 00a1bde7  833cb200             cmp dword ptr [edx + esi*4], 0
// 00a1bdeb  750a                 jne 0xa1bdf7
// 00a1bded  6a01                 push 1
// 00a1bdef  56                   push esi
// 00a1bdf0  8bcf                 mov ecx, edi
// 00a1bdf2  e87973f7ff           call 0x993170
// 00a1bdf7  c7858001000000000000 mov dword ptr [ebp + 0x180], 0
// 00a1be01  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 00a1be04  6a01                 push 1
// 00a1be06  e8056df8ff           call 0x9a2b10
// 00a1be0b  5f                   pop edi
// 00a1be0c  5e                   pop esi
// 00a1be0d  5d                   pop ebp
// 00a1be0e  b801000000           mov eax, 1
// 00a1be13  5b                   pop ebx
// 00a1be14  c20800               ret 8
// 00a1be17  e8a465f6ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveCommandBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp