// roc 2009-12 008925d0  unit: CXTPDockBar  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008925d0
//
// 008925d0  53                   push ebx
// 008925d1  55                   push ebp
// 008925d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008925d6  8bd9                 mov ebx, ecx
// 008925d8  85ed                 test ebp, ebp
// 008925da  7507                 jne 0x8925e3
// 008925dc  5d                   pop ebp
// 008925dd  33c0                 xor eax, eax
// 008925df  5b                   pop ebx
// 008925e0  c20800               ret 8
// 008925e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 008925e7  56                   push esi
// 008925e8  50                   push eax
// 008925e9  55                   push ebp
// 008925ea  e861f0ffff           call 0x891650
// 008925ef  8bf0                 mov esi, eax
// 008925f1  85f6                 test esi, esi
// 008925f3  7f08                 jg 0x8925fd
// 008925f5  5e                   pop esi
// 008925f6  5d                   pop ebp
// 008925f7  33c0                 xor eax, eax
// 008925f9  5b                   pop ebx
// 008925fa  c20800               ret 8
// 008925fd  57                   push edi
// 008925fe  6a01                 push 1
// 00892600  8d7b58               lea edi, [ebx + 0x58]
// 00892603  56                   push esi
// 00892604  8bcf                 mov ecx, edi
// 00892606  e875acf9ff           call 0x82d280
// 0089260b  8d46ff               lea eax, [esi - 1]
// 0089260e  85c0                 test eax, eax
// 00892610  7c45                 jl 0x892657
// 00892612  3b4708               cmp eax, dword ptr [edi + 8]
// 00892615  7d40                 jge 0x892657
// 00892617  8b4f04               mov ecx, dword ptr [edi + 4]
// 0089261a  833c8100             cmp dword ptr [ecx + eax*4], 0
// 0089261e  7517                 jne 0x892637
// 00892620  3b7708               cmp esi, dword ptr [edi + 8]
// 00892623  7d32                 jge 0x892657
// 00892625  8bd1                 mov edx, ecx
// 00892627  833cb200             cmp dword ptr [edx + esi*4], 0
// 0089262b  750a                 jne 0x892637
// 0089262d  6a01                 push 1
// 0089262f  56                   push esi
// 00892630  8bcf                 mov ecx, edi
// 00892632  e849acf9ff           call 0x82d280
// 00892637  c7858001000000000000 mov dword ptr [ebp + 0x180], 0
// 00892641  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 00892644  6a01                 push 1
// 00892646  e85523f8ff           call 0x8149a0
// 0089264b  5f                   pop edi
// 0089264c  5e                   pop esi
// 0089264d  5d                   pop ebp
// 0089264e  b801000000           mov eax, 1
// 00892653  5b                   pop ebx
// 00892654  c20800               ret 8
// 00892657  e8b014f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveCommandBar@CXTPDockBar@@IAEHPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp