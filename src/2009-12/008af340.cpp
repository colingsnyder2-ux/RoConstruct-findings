// roc 2009-12 008af340  unit: CXTPDockingPaneMiniWnd  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af340
//
// 008af340  6aff                 push -1
// 008af342  68f32d9600           push 0x962df3
// 008af347  64a100000000         mov eax, dword ptr fs:[0]
// 008af34d  50                   push eax
// 008af34e  83ec58               sub esp, 0x58
// 008af351  53                   push ebx
// 008af352  55                   push ebp
// 008af353  56                   push esi
// 008af354  57                   push edi
// 008af355  a10052b600           mov eax, dword ptr [0xb65200]
// 008af35a  33c4                 xor eax, esp
// 008af35c  50                   push eax
// 008af35d  8d44246c             lea eax, [esp + 0x6c]
// 008af361  64a300000000         mov dword ptr fs:[0], eax
// 008af367  8bf9                 mov edi, ecx
// 008af369  33ed                 xor ebp, ebp
// 008af36b  896c2414             mov dword ptr [esp + 0x14], ebp
// 008af36f  396f38               cmp dword ptr [edi + 0x38], ebp
// 008af372  0f8416020000         je 0x8af58e
// 008af378  39af28ffffff         cmp dword ptr [edi - 0xd8], ebp
// 008af37e  0f840a020000         je 0x8af58e
// 008af384  6a0a                 push 0xa
// 008af386  8d4c2438             lea ecx, [esp + 0x38]
// 008af38a  e831a3f8ff           call 0x8396c0
// 008af38f  8b07                 mov eax, dword ptr [edi]
// 008af391  8b500c               mov edx, dword ptr [eax + 0xc]
// 008af394  8d4c2434             lea ecx, [esp + 0x34]
// 008af398  51                   push ecx
// 008af399  6a01                 push 1
// 008af39b  8bcf                 mov ecx, edi
// 008af39d  896c247c             mov dword ptr [esp + 0x7c], ebp
// 008af3a1  ffd2                 call edx
// 008af3a3  8b442440             mov eax, dword ptr [esp + 0x40]
// 008af3a7  8b742438             mov esi, dword ptr [esp + 0x38]
// 008af3ab  8bd8                 mov ebx, eax
// 008af3ad  895c2418             mov dword ptr [esp + 0x18], ebx
// 008af3b1  3bf5                 cmp esi, ebp
// 008af3b3  742b                 je 0x8af3e0
// 008af3b5  33c9                 xor ecx, ecx
// 008af3b7  83f801               cmp eax, 1
// 008af3ba  0f95c1               setne cl
// 008af3bd  8be9                 mov ebp, ecx
// 008af3bf  90                   nop 
// 008af3c0  8bc6                 mov eax, esi
// 008af3c2  8b4008               mov eax, dword ptr [eax + 8]
// 008af3c5  8b36                 mov esi, dword ptr [esi]
// 008af3c7  85c0                 test eax, eax
// 008af3c9  7405                 je 0x8af3d0
// 008af3cb  8d48ac               lea ecx, [eax - 0x54]
// 008af3ce  eb02                 jmp 0x8af3d2
// 008af3d0  33c9                 xor ecx, ecx
// 008af3d2  55                   push ebp
// 008af3d3  e8f8190000           call 0x8b0dd0
// 008af3d8  85f6                 test esi, esi
// 008af3da  75e4                 jne 0x8af3c0
// 008af3dc  8b742438             mov esi, dword ptr [esp + 0x38]
// 008af3e0  83fb01               cmp ebx, 1
// 008af3e3  740e                 je 0x8af3f3
// 008af3e5  8bcf                 mov ecx, edi
// 008af3e7  e854140000           call 0x8b0840
// 008af3ec  051c010000           add eax, 0x11c
// 008af3f1  eb35                 jmp 0x8af428
// 008af3f3  33c0                 xor eax, eax
// 008af3f5  85f6                 test esi, esi
// 008af3f7  0f95c0               setne al
// 008af3fa  85c0                 test eax, eax
// 008af3fc  7505                 jne 0x8af403
// 008af3fe  e80947f4ff           call 0x7f3b0c
// 008af403  8b7608               mov esi, dword ptr [esi + 8]
// 008af406  85f6                 test esi, esi
// 008af408  7405                 je 0x8af40f
// 008af40a  8d4eac               lea ecx, [esi - 0x54]
// 008af40d  eb02                 jmp 0x8af411
// 008af40f  33c9                 xor ecx, ecx
// 008af411  8d542420             lea edx, [esp + 0x20]
// 008af415  52                   push edx
// 008af416  e8251a0000           call 0x8b0e40
// 008af41b  c644247401           mov byte ptr [esp + 0x74], 1
// 008af420  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008af428  50                   push eax
// 008af429  8d4c2420             lea ecx, [esp + 0x20]
// 008af42d  ff1594de9800         call dword ptr [0x98de94]
// 008af433  f644241401           test byte ptr [esp + 0x14], 1
// 008af438  c744247403000000     mov dword ptr [esp + 0x74], 3
// 008af440  740a                 je 0x8af44c
// 008af442  8d4c2420             lea ecx, [esp + 0x20]
// 008af446  ff15c0de9800         call dword ptr [0x98dec0]
// 008af44c  8d4c241c             lea ecx, [esp + 0x1c]
// 008af450  8d9f08ffffff         lea ebx, [edi - 0xf8]
// 008af456  ff1580de9800         call dword ptr [0x98de80]
// 008af45c  50                   push eax
// 008af45d  8bcb                 mov ecx, ebx
// 008af45f  e8b047f4ff           call 0x7f3c14
// 008af464  8bcb                 mov ecx, ebx
// 008af466  e807700700           call 0x926472
// 008af46b  a900000010           test eax, 0x10000000
// 008af470  751d                 jne 0x8af48f
// 008af472  837c241800           cmp dword ptr [esp + 0x18], 0
// 008af477  0f8ed7000000         jle 0x8af554
// 008af47d  83bf28ffffff00       cmp dword ptr [edi - 0xd8], 0
// 008af484  7409                 je 0x8af48f
// 008af486  6a04                 push 4
// 008af488  8bcb                 mov ecx, ebx
// 008af48a  e8b946f4ff           call 0x7f3b48
// 008af48f  837c241800           cmp dword ptr [esp + 0x18], 0
// 008af494  0f8eba000000         jle 0x8af554
// 008af49a  6a0a                 push 0xa
// 008af49c  8d4c2454             lea ecx, [esp + 0x54]
// 008af4a0  33ed                 xor ebp, ebp
// 008af4a2  e819a2f8ff           call 0x8396c0
// 008af4a7  8b07                 mov eax, dword ptr [edi]
// 008af4a9  8b500c               mov edx, dword ptr [eax + 0xc]
// 008af4ac  8d4c2450             lea ecx, [esp + 0x50]
// 008af4b0  51                   push ecx
// 008af4b1  55                   push ebp
// 008af4b2  8bcf                 mov ecx, edi
// 008af4b4  c644247c04           mov byte ptr [esp + 0x7c], 4
// 008af4b9  ffd2                 call edx
// 008af4bb  8b742454             mov esi, dword ptr [esp + 0x54]
// 008af4bf  85f6                 test esi, esi
// 008af4c1  742d                 je 0x8af4f0
// 008af4c3  8bc6                 mov eax, esi
// 008af4c5  8b4008               mov eax, dword ptr [eax + 8]
// 008af4c8  8b36                 mov esi, dword ptr [esi]
// 008af4ca  85c0                 test eax, eax
// 008af4cc  7405                 je 0x8af4d3
// 008af4ce  8d48e0               lea ecx, [eax - 0x20]
// 008af4d1  eb02                 jmp 0x8af4d5
// 008af4d3  33c9                 xor ecx, ecx
// 008af4d5  e8a6d6faff           call 0x85cb80
// 008af4da  a801                 test al, 1
// 008af4dc  7505                 jne 0x8af4e3
// 008af4de  bd01000000           mov ebp, 1
// 008af4e3  85f6                 test esi, esi
// 008af4e5  75dc                 jne 0x8af4c3
// 008af4e7  85ed                 test ebp, ebp
// 008af4e9  7405                 je 0x8af4f0
// 008af4eb  39773c               cmp dword ptr [edi + 0x3c], esi
// 008af4ee  7534                 jne 0x8af524
// 008af4f0  8b8728ffffff         mov eax, dword ptr [edi - 0xd8]
// 008af4f6  6a00                 push 0
// 008af4f8  50                   push eax
// 008af4f9  ff15f4cb9800         call dword ptr [0x98cbf4]
// 008af4ff  50                   push eax
// 008af500  e8e549f4ff           call 0x7f3eea
// 008af505  8b5004               mov edx, dword ptr [eax + 4]
// 008af508  8bcd                 mov ecx, ebp
// 008af50a  f7d9                 neg ecx
// 008af50c  1bc9                 sbb ecx, ecx
// 008af50e  83e1fe               and ecx, 0xfffffffe
// 008af511  83c102               add ecx, 2
// 008af514  51                   push ecx
// 008af515  6860f00000           push 0xf060
// 008af51a  52                   push edx
// 008af51b  ff153ccc9800         call dword ptr [0x98cc3c]
// 008af521  896f3c               mov dword ptr [edi + 0x3c], ebp
// 008af524  8bcb                 mov ecx, ebx
// 008af526  e8476f0700           call 0x926472
// 008af52b  a900000040           test eax, 0x40000000
// 008af530  7514                 jne 0x8af546
// 008af532  53                   push ebx
// 008af533  8d4c2428             lea ecx, [esp + 0x28]
// 008af537  e834bdf9ff           call 0x84b270
// 008af53c  6a01                 push 1
// 008af53e  50                   push eax
// 008af53f  8bcb                 mov ecx, ebx
// 008af541  e8babebbff           call 0x46b400
// 008af546  8d4c2450             lea ecx, [esp + 0x50]
// 008af54a  c644247403           mov byte ptr [esp + 0x74], 3
// 008af54f  e89ca1f8ff           call 0x8396f0
// 008af554  8b8728ffffff         mov eax, dword ptr [edi - 0xd8]
// 008af55a  6a00                 push 0
// 008af55c  6a00                 push 0
// 008af55e  6885000000           push 0x85
// 008af563  50                   push eax
// 008af564  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008af56a  8b17                 mov edx, dword ptr [edi]
// 008af56c  8b4228               mov eax, dword ptr [edx + 0x28]
// 008af56f  8bcf                 mov ecx, edi
// 008af571  ffd0                 call eax
// 008af573  8d4c241c             lea ecx, [esp + 0x1c]
// 008af577  ff15c0de9800         call dword ptr [0x98dec0]
// 008af57d  8d4c2434             lea ecx, [esp + 0x34]
// 008af581  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 008af589  e862a1f8ff           call 0x8396f0
// 008af58e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008af592  64890d00000000       mov dword ptr fs:[0], ecx
// 008af599  59                   pop ecx
// 008af59a  5f                   pop edi
// 008af59b  5e                   pop esi
// 008af59c  5d                   pop ebp
// 008af59d  5b                   pop ebx
// 008af59e  83c464               add esp, 0x64
// 008af5a1  c20400               ret 4
// copied from an identical function in another client (function ?InvalidatePane@CXTPDockingPaneMiniWnd@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\DockingPane\XTPDockingPaneMiniWnd.cpp