// roc 2009-12 00839c50  unit: CXTPDockingPaneManager  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839c50
//
// 00839c50  55                   push ebp
// 00839c51  8be9                 mov ebp, ecx
// 00839c53  837d2000             cmp dword ptr [ebp + 0x20], 0
// 00839c57  0f8495000000         je 0x839cf2
// 00839c5d  53                   push ebx
// 00839c5e  e81deaffff           call 0x838680
// 00839c63  8b5804               mov ebx, dword ptr [eax + 4]
// 00839c66  85db                 test ebx, ebx
// 00839c68  0f8483000000         je 0x839cf1
// 00839c6e  56                   push esi
// 00839c6f  57                   push edi
// 00839c70  8bc3                 mov eax, ebx
// 00839c72  8b7008               mov esi, dword ptr [eax + 8]
// 00839c75  8b1b                 mov ebx, dword ptr [ebx]
// 00839c77  85f6                 test esi, esi
// 00839c79  7405                 je 0x839c80
// 00839c7b  8d4620               lea eax, [esi + 0x20]
// 00839c7e  eb02                 jmp 0x839c82
// 00839c80  33c0                 xor eax, eax
// 00839c82  6a01                 push 1
// 00839c84  50                   push eax
// 00839c85  8bcd                 mov ecx, ebp
// 00839c87  e844f6ffff           call 0x8392d0
// 00839c8c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00839c8f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00839c92  8d4e20               lea ecx, [esi + 0x20]
// 00839c95  ffd2                 call edx
// 00839c97  8bf8                 mov edi, eax
// 00839c99  57                   push edi
// 00839c9a  e821480700           call 0x8ae4c0
// 00839c9f  50                   push eax
// 00839ca0  e8999ffbff           call 0x7f3c3e
// 00839ca5  83c408               add esp, 8
// 00839ca8  85c0                 test eax, eax
// 00839caa  7407                 je 0x839cb3
// 00839cac  8bcf                 mov ecx, edi
// 00839cae  e87d670700           call 0x8b0430
// 00839cb3  8b7630               mov esi, dword ptr [esi + 0x30]
// 00839cb6  85f6                 test esi, esi
// 00839cb8  7431                 je 0x839ceb
// 00839cba  8d46ac               lea eax, [esi - 0x54]
// 00839cbd  85c0                 test eax, eax
// 00839cbf  742a                 je 0x839ceb
// 00839cc1  85f6                 test esi, esi
// 00839cc3  7426                 je 0x839ceb
// 00839cc5  8d46ac               lea eax, [esi - 0x54]
// 00839cc8  85c0                 test eax, eax
// 00839cca  741f                 je 0x839ceb
// 00839ccc  83782000             cmp dword ptr [eax + 0x20], 0
// 00839cd0  7419                 je 0x839ceb
// 00839cd2  85f6                 test esi, esi
// 00839cd4  7405                 je 0x839cdb
// 00839cd6  8d46ac               lea eax, [esi - 0x54]
// 00839cd9  eb02                 jmp 0x839cdd
// 00839cdb  33c0                 xor eax, eax
// 00839cdd  8b4020               mov eax, dword ptr [eax + 0x20]
// 00839ce0  6a00                 push 0
// 00839ce2  6a00                 push 0
// 00839ce4  50                   push eax
// 00839ce5  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00839ceb  85db                 test ebx, ebx
// 00839ced  7581                 jne 0x839c70
// 00839cef  5f                   pop edi
// 00839cf0  5e                   pop esi
// 00839cf1  5b                   pop ebx
// 00839cf2  5d                   pop ebp
// 00839cf3  c3                   ret 
// copied from an identical function in another client (function ?_Redraw@CXTPDockingPaneManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp