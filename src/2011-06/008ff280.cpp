// roc 2011-06 008ff280  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff280
//
// 008ff280  6aff                 push -1
// 008ff282  6855f5a000           push 0xa0f555
// 008ff287  64a100000000         mov eax, dword ptr fs:[0]
// 008ff28d  50                   push eax
// 008ff28e  83ec3c               sub esp, 0x3c
// 008ff291  53                   push ebx
// 008ff292  55                   push ebp
// 008ff293  56                   push esi
// 008ff294  57                   push edi
// 008ff295  a12058c900           mov eax, dword ptr [0xc95820]
// 008ff29a  33c4                 xor eax, esp
// 008ff29c  50                   push eax
// 008ff29d  8d442450             lea eax, [esp + 0x50]
// 008ff2a1  64a300000000         mov dword ptr fs:[0], eax
// 008ff2a7  8bf1                 mov esi, ecx
// 008ff2a9  e8b2d4f0ff           call 0x80c760
// 008ff2ae  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008ff2b2  8bf8                 mov edi, eax
// 008ff2b4  8d87f8000000         lea eax, [edi + 0xf8]
// 008ff2ba  50                   push eax
// 008ff2bb  55                   push ebp
// 008ff2bc  8d4c2448             lea ecx, [esp + 0x48]
// 008ff2c0  e85bdef5ff           call 0x85d120
// 008ff2c5  8b17                 mov edx, dword ptr [edi]
// 008ff2c7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008ff2ca  56                   push esi
// 008ff2cb  8bcf                 mov ecx, edi
// 008ff2cd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008ff2d5  ffd0                 call eax
// 008ff2d7  8b5500               mov edx, dword ptr [ebp]
// 008ff2da  50                   push eax
// 008ff2db  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ff2de  8bcd                 mov ecx, ebp
// 008ff2e0  ffd0                 call eax
// 008ff2e2  6a01                 push 1
// 008ff2e4  8bcd                 mov ecx, ebp
// 008ff2e6  e803d30c00           call 0x9cc5ee
// 008ff2eb  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008ff2f1  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008ff2f7  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 008ff2fd  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008ff303  8954243c             mov dword ptr [esp + 0x3c], edx
// 008ff307  83c2fb               add edx, -5
// 008ff30a  89542460             mov dword ptr [esp + 0x60], edx
// 008ff30e  83c004               add eax, 4
// 008ff311  89442424             mov dword ptr [esp + 0x24], eax
// 008ff315  8b442460             mov eax, dword ptr [esp + 0x60]
// 008ff319  8d5307               lea edx, [ebx + 7]
// 008ff31c  89542420             mov dword ptr [esp + 0x20], edx
// 008ff320  8b16                 mov edx, dword ptr [esi]
// 008ff322  8b5258               mov edx, dword ptr [edx + 0x58]
// 008ff325  8944242c             mov dword ptr [esp + 0x2c], eax
// 008ff329  8d442418             lea eax, [esp + 0x18]
// 008ff32d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008ff331  894c2428             mov dword ptr [esp + 0x28], ecx
// 008ff335  50                   push eax
// 008ff336  8bce                 mov ecx, esi
// 008ff338  ffd2                 call edx
// 008ff33a  8bf0                 mov esi, eax
// 008ff33c  8b4500               mov eax, dword ptr [ebp]
// 008ff33f  6a20                 push 0x20
// 008ff341  8d4c2424             lea ecx, [esp + 0x24]
// 008ff345  51                   push ecx
// 008ff346  8bce                 mov ecx, esi
// 008ff348  c644246001           mov byte ptr [esp + 0x60], 1
// 008ff34d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ff351  ff15a826a400         call dword ptr [0xa426a8]
// 008ff357  50                   push eax
// 008ff358  8bce                 mov ecx, esi
// 008ff35a  ff15c82da400         call dword ptr [0xa42dc8]
// 008ff360  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ff364  50                   push eax
// 008ff365  8b4270               mov eax, dword ptr [edx + 0x70]
// 008ff368  8bcd                 mov ecx, ebp
// 008ff36a  ffd0                 call eax
// 008ff36c  8d4c2418             lea ecx, [esp + 0x18]
// 008ff370  c644245800           mov byte ptr [esp + 0x58], 0
// 008ff375  ff15082ea400         call dword ptr [0xa42e08]
// 008ff37b  51                   push ecx
// 008ff37c  8bcc                 mov ecx, esp
// 008ff37e  89642418             mov dword ptr [esp + 0x18], esp
// 008ff382  6878d6ad00           push 0xadd678
// 008ff387  ff15002ea400         call dword ptr [0xa42e00]
// 008ff38d  51                   push ecx
// 008ff38e  8bcc                 mov ecx, esp
// 008ff390  89642424             mov dword ptr [esp + 0x24], esp
// 008ff394  686402ad00           push 0xad0264
// 008ff399  c644246402           mov byte ptr [esp + 0x64], 2
// 008ff39e  ff15002ea400         call dword ptr [0xa42e00]
// 008ff3a4  8bcf                 mov ecx, edi
// 008ff3a6  c644246003           mov byte ptr [esp + 0x60], 3
// 008ff3ab  e8d0fef8ff           call 0x88f280
// 008ff3b0  8bc8                 mov ecx, eax
// 008ff3b2  c644246000           mov byte ptr [esp + 0x60], 0
// 008ff3b7  e894ebfeff           call 0x8edf50
// 008ff3bc  8b742438             mov esi, dword ptr [esp + 0x38]
// 008ff3c0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008ff3c4  50                   push eax
// 008ff3c5  56                   push esi
// 008ff3c6  83c1fa               add ecx, -6
// 008ff3c9  51                   push ecx
// 008ff3ca  53                   push ebx
// 008ff3cb  55                   push ebp
// 008ff3cc  8bcf                 mov ecx, edi
// 008ff3ce  e80d04f1ff           call 0x80f7e0
// 008ff3d3  51                   push ecx
// 008ff3d4  8bcc                 mov ecx, esp
// 008ff3d6  89642420             mov dword ptr [esp + 0x20], esp
// 008ff3da  685cd6ad00           push 0xadd65c
// 008ff3df  ff15002ea400         call dword ptr [0xa42e00]
// 008ff3e5  51                   push ecx
// 008ff3e6  8bcc                 mov ecx, esp
// 008ff3e8  8964241c             mov dword ptr [esp + 0x1c], esp
// 008ff3ec  686402ad00           push 0xad0264
// 008ff3f1  c644246404           mov byte ptr [esp + 0x64], 4
// 008ff3f6  ff15002ea400         call dword ptr [0xa42e00]
// 008ff3fc  8bcf                 mov ecx, edi
// 008ff3fe  c644246005           mov byte ptr [esp + 0x60], 5
// 008ff403  e878fef8ff           call 0x88f280
// 008ff408  8bc8                 mov ecx, eax
// 008ff40a  c644246000           mov byte ptr [esp + 0x60], 0
// 008ff40f  e83cebfeff           call 0x8edf50
// 008ff414  8b542460             mov edx, dword ptr [esp + 0x60]
// 008ff418  50                   push eax
// 008ff419  56                   push esi
// 008ff41a  52                   push edx
// 008ff41b  53                   push ebx
// 008ff41c  55                   push ebp
// 008ff41d  8bcf                 mov ecx, edi
// 008ff41f  e8bc03f1ff           call 0x80f7e0
// 008ff424  8d4c2440             lea ecx, [esp + 0x40]
// 008ff428  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008ff430  e86bddf5ff           call 0x85d1a0
// 008ff435  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008ff439  64890d00000000       mov dword ptr fs:[0], ecx
// 008ff440  59                   pop ecx
// 008ff441  5f                   pop edi
// 008ff442  5e                   pop esi
// 008ff443  5d                   pop ebp
// 008ff444  5b                   pop ebx
// 008ff445  83c448               add esp, 0x48
// 008ff448  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp