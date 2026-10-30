// roc 2011-06 008a3960  unit: CXTPDockBar  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3960
//
// 008a3960  53                   push ebx
// 008a3961  55                   push ebp
// 008a3962  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008a3966  8bd9                 mov ebx, ecx
// 008a3968  85ed                 test ebp, ebp
// 008a396a  7507                 jne 0x8a3973
// 008a396c  5d                   pop ebp
// 008a396d  33c0                 xor eax, eax
// 008a396f  5b                   pop ebx
// 008a3970  c20800               ret 8
// 008a3973  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a3977  56                   push esi
// 008a3978  50                   push eax
// 008a3979  55                   push ebp
// 008a397a  e861f0ffff           call 0x8a29e0
// 008a397f  8bf0                 mov esi, eax
// 008a3981  85f6                 test esi, esi
// 008a3983  7f08                 jg 0x8a398d
// 008a3985  5e                   pop esi
// 008a3986  5d                   pop ebp
// 008a3987  33c0                 xor eax, eax
// 008a3989  5b                   pop ebx
// 008a398a  c20800               ret 8
// 008a398d  57                   push edi
// 008a398e  6a01                 push 1
// 008a3990  8d7b58               lea edi, [ebx + 0x58]
// 008a3993  56                   push esi
// 008a3994  8bcf                 mov ecx, edi
// 008a3996  e8e568f8ff           call 0x82a280
// 008a399b  8d46ff               lea eax, [esi - 1]
// 008a399e  85c0                 test eax, eax
// 008a39a0  7c45                 jl 0x8a39e7
// 008a39a2  3b4708               cmp eax, dword ptr [edi + 8]
// 008a39a5  7d40                 jge 0x8a39e7
// 008a39a7  8b4f04               mov ecx, dword ptr [edi + 4]
// 008a39aa  833c8100             cmp dword ptr [ecx + eax*4], 0
// 008a39ae  7517                 jne 0x8a39c7
// 008a39b0  3b7708               cmp esi, dword ptr [edi + 8]
// 008a39b3  7d32                 jge 0x8a39e7
// 008a39b5  8bd1                 mov edx, ecx
// 008a39b7  833cb200             cmp dword ptr [edx + esi*4], 0
// 008a39bb  750a                 jne 0x8a39c7
// 008a39bd  6a01                 push 1
// 008a39bf  56                   push esi
// 008a39c0  8bcf                 mov ecx, edi
// 008a39c2  e8b968f8ff           call 0x82a280
// 008a39c7  c7858001000000000000 mov dword ptr [ebp + 0x180], 0
// 008a39d1  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 008a39d4  6a01                 push 1
// 008a39d6  e8656bf8ff           call 0x82a540
// 008a39db  5f                   pop edi
// 008a39dc  5e                   pop esi
// 008a39dd  5d                   pop ebp
// 008a39de  b801000000           mov eax, 1
// 008a39e3  5b                   pop ebx
// 008a39e4  c20800               ret 8
// 008a39e7  e81e69f6ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveCommandBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp