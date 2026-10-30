// roc 2009-12 00838d70  unit: CXTPDockingPaneManager  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838d70
//
// 00838d70  8b542410             mov edx, dword ptr [esp + 0x10]
// 00838d74  56                   push esi
// 00838d75  33f6                 xor esi, esi
// 00838d77  3bd6                 cmp edx, esi
// 00838d79  751e                 jne 0x838d99
// 00838d7b  e830f9ffff           call 0x8386b0
// 00838d80  8bd0                 mov edx, eax
// 00838d82  3bd6                 cmp edx, esi
// 00838d84  7513                 jne 0x838d99
// 00838d86  8b442408             mov eax, dword ptr [esp + 8]
// 00838d8a  8930                 mov dword ptr [eax], esi
// 00838d8c  897004               mov dword ptr [eax + 4], esi
// 00838d8f  897008               mov dword ptr [eax + 8], esi
// 00838d92  89700c               mov dword ptr [eax + 0xc], esi
// 00838d95  5e                   pop esi
// 00838d96  c21000               ret 0x10
// 00838d99  53                   push ebx
// 00838d9a  57                   push edi
// 00838d9b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00838d9f  3bfe                 cmp edi, esi
// 00838da1  7409                 je 0x838dac
// 00838da3  83ff01               cmp edi, 1
// 00838da6  7404                 je 0x838dac
// 00838da8  33db                 xor ebx, ebx
// 00838daa  eb05                 jmp 0x838db1
// 00838dac  bb01000000           mov ebx, 1
// 00838db1  e8faf8ffff           call 0x8386b0
// 00838db6  3bd0                 cmp edx, eax
// 00838db8  7548                 jne 0x838e02
// 00838dba  3bd6                 cmp edx, esi
// 00838dbc  7426                 je 0x838de4
// 00838dbe  8d42e0               lea eax, [edx - 0x20]
// 00838dc1  3bc6                 cmp eax, esi
// 00838dc3  741f                 je 0x838de4
// 00838dc5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00838dc9  8b742410             mov esi, dword ptr [esp + 0x10]
// 00838dcd  57                   push edi
// 00838dce  51                   push ecx
// 00838dcf  83c020               add eax, 0x20
// 00838dd2  50                   push eax
// 00838dd3  56                   push esi
// 00838dd4  e817c70700           call 0x8b54f0
// 00838dd9  83c410               add esp, 0x10
// 00838ddc  5f                   pop edi
// 00838ddd  5b                   pop ebx
// 00838dde  8bc6                 mov eax, esi
// 00838de0  5e                   pop esi
// 00838de1  c21000               ret 0x10
// 00838de4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00838de8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00838dec  57                   push edi
// 00838ded  51                   push ecx
// 00838dee  33c0                 xor eax, eax
// 00838df0  50                   push eax
// 00838df1  56                   push esi
// 00838df2  e8f9c60700           call 0x8b54f0
// 00838df7  83c410               add esp, 0x10
// 00838dfa  5f                   pop edi
// 00838dfb  5b                   pop ebx
// 00838dfc  8bc6                 mov eax, esi
// 00838dfe  5e                   pop esi
// 00838dff  c21000               ret 0x10
// 00838e02  8b4210               mov eax, dword ptr [edx + 0x10]
// 00838e05  3bc6                 cmp eax, esi
// 00838e07  740d                 je 0x838e16
// 00838e09  83781801             cmp dword ptr [eax + 0x18], 1
// 00838e0d  751c                 jne 0x838e2b
// 00838e0f  8bd0                 mov edx, eax
// 00838e11  397210               cmp dword ptr [edx + 0x10], esi
// 00838e14  7515                 jne 0x838e2b
// 00838e16  8b442410             mov eax, dword ptr [esp + 0x10]
// 00838e1a  5f                   pop edi
// 00838e1b  5b                   pop ebx
// 00838e1c  8930                 mov dword ptr [eax], esi
// 00838e1e  897004               mov dword ptr [eax + 4], esi
// 00838e21  897008               mov dword ptr [eax + 8], esi
// 00838e24  89700c               mov dword ptr [eax + 0xc], esi
// 00838e27  5e                   pop esi
// 00838e28  c21000               ret 0x10
// 00838e2b  8b4210               mov eax, dword ptr [edx + 0x10]
// 00838e2e  3bc6                 cmp eax, esi
// 00838e30  7405                 je 0x838e37
// 00838e32  8d48e0               lea ecx, [eax - 0x20]
// 00838e35  eb02                 jmp 0x838e39
// 00838e37  33c9                 xor ecx, ecx
// 00838e39  399990000000         cmp dword ptr [ecx + 0x90], ebx
// 00838e3f  7519                 jne 0x838e5a
// 00838e41  8b742410             mov esi, dword ptr [esp + 0x10]
// 00838e45  52                   push edx
// 00838e46  8b542418             mov edx, dword ptr [esp + 0x18]
// 00838e4a  57                   push edi
// 00838e4b  52                   push edx
// 00838e4c  56                   push esi
// 00838e4d  e85ec50700           call 0x8b53b0
// 00838e52  5f                   pop edi
// 00838e53  5b                   pop ebx
// 00838e54  8bc6                 mov eax, esi
// 00838e56  5e                   pop esi
// 00838e57  c21000               ret 0x10
// 00838e5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00838e5e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00838e62  57                   push edi
// 00838e63  50                   push eax
// 00838e64  52                   push edx
// 00838e65  56                   push esi
// 00838e66  e885c60700           call 0x8b54f0
// 00838e6b  83c410               add esp, 0x10
// 00838e6e  5f                   pop edi
// 00838e6f  5b                   pop ebx
// 00838e70  8bc6                 mov eax, esi
// 00838e72  5e                   pop esi
// 00838e73  c21000               ret 0x10
// copied from an identical function in another client (function ?_CalculateResultDockingRect@CXTPDockingPaneManager@@AAE?AVCRect@@PAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp