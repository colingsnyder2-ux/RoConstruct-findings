// roc 2009-06 007b3bf0  unit: CXTPDockBar  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b3bf0
//
// 007b3bf0  53                   push ebx
// 007b3bf1  55                   push ebp
// 007b3bf2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007b3bf6  8bd9                 mov ebx, ecx
// 007b3bf8  85ed                 test ebp, ebp
// 007b3bfa  7507                 jne 0x7b3c03
// 007b3bfc  5d                   pop ebp
// 007b3bfd  33c0                 xor eax, eax
// 007b3bff  5b                   pop ebx
// 007b3c00  c20800               ret 8
// 007b3c03  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b3c07  56                   push esi
// 007b3c08  50                   push eax
// 007b3c09  55                   push ebp
// 007b3c0a  e861f0ffff           call 0x7b2c70
// 007b3c0f  8bf0                 mov esi, eax
// 007b3c11  85f6                 test esi, esi
// 007b3c13  7f08                 jg 0x7b3c1d
// 007b3c15  5e                   pop esi
// 007b3c16  5d                   pop ebp
// 007b3c17  33c0                 xor eax, eax
// 007b3c19  5b                   pop ebx
// 007b3c1a  c20800               ret 8
// 007b3c1d  57                   push edi
// 007b3c1e  6a01                 push 1
// 007b3c20  8d7b58               lea edi, [ebx + 0x58]
// 007b3c23  56                   push esi
// 007b3c24  8bcf                 mov ecx, edi
// 007b3c26  e835eaf9ff           call 0x752660
// 007b3c2b  8d46ff               lea eax, [esi - 1]
// 007b3c2e  85c0                 test eax, eax
// 007b3c30  7c45                 jl 0x7b3c77
// 007b3c32  3b4708               cmp eax, dword ptr [edi + 8]
// 007b3c35  7d40                 jge 0x7b3c77
// 007b3c37  8b4f04               mov ecx, dword ptr [edi + 4]
// 007b3c3a  833c8100             cmp dword ptr [ecx + eax*4], 0
// 007b3c3e  7517                 jne 0x7b3c57
// 007b3c40  3b7708               cmp esi, dword ptr [edi + 8]
// 007b3c43  7d32                 jge 0x7b3c77
// 007b3c45  8bd1                 mov edx, ecx
// 007b3c47  833cb200             cmp dword ptr [edx + esi*4], 0
// 007b3c4b  750a                 jne 0x7b3c57
// 007b3c4d  6a01                 push 1
// 007b3c4f  56                   push esi
// 007b3c50  8bcf                 mov ecx, edi
// 007b3c52  e809eaf9ff           call 0x752660
// 007b3c57  c7858001000000000000 mov dword ptr [ebp + 0x180], 0
// 007b3c61  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 007b3c64  6a01                 push 1
// 007b3c66  e88560f7ff           call 0x729cf0
// 007b3c6b  5f                   pop edi
// 007b3c6c  5e                   pop esi
// 007b3c6d  5d                   pop ebp
// 007b3c6e  b801000000           mov eax, 1
// 007b3c73  5b                   pop ebx
// 007b3c74  c20800               ret 8
// 007b3c77  e86850f6ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveCommandBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp