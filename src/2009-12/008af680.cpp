// roc 2009-12 008af680  unit: CXTPDockingPaneMiniWnd  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af680
//
// 008af680  6aff                 push -1
// 008af682  6898c59500           push 0x95c598
// 008af687  64a100000000         mov eax, dword ptr fs:[0]
// 008af68d  50                   push eax
// 008af68e  83ec1c               sub esp, 0x1c
// 008af691  53                   push ebx
// 008af692  55                   push ebp
// 008af693  56                   push esi
// 008af694  57                   push edi
// 008af695  a10052b600           mov eax, dword ptr [0xb65200]
// 008af69a  33c4                 xor eax, esp
// 008af69c  50                   push eax
// 008af69d  8d442430             lea eax, [esp + 0x30]
// 008af6a1  64a300000000         mov dword ptr fs:[0], eax
// 008af6a7  83b93001000000       cmp dword ptr [ecx + 0x130], 0
// 008af6ae  0f84a6000000         je 0x8af75a
// 008af6b4  8db1f8000000         lea esi, [ecx + 0xf8]
// 008af6ba  8bce                 mov ecx, esi
// 008af6bc  e87f110000           call 0x8b0840
// 008af6c1  6a0a                 push 0xa
// 008af6c3  8d4c2418             lea ecx, [esp + 0x18]
// 008af6c7  8bd8                 mov ebx, eax
// 008af6c9  e8f29ff8ff           call 0x8396c0
// 008af6ce  8b06                 mov eax, dword ptr [esi]
// 008af6d0  8b500c               mov edx, dword ptr [eax + 0xc]
// 008af6d3  8d4c2414             lea ecx, [esp + 0x14]
// 008af6d7  51                   push ecx
// 008af6d8  6a00                 push 0
// 008af6da  8bce                 mov ecx, esi
// 008af6dc  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008af6e4  ffd2                 call edx
// 008af6e6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008af6ea  85ff                 test edi, edi
// 008af6ec  745b                 je 0x8af749
// 008af6ee  8b2d0cb29800         mov ebp, dword ptr [0x98b20c]
// 008af6f4  8bc7                 mov eax, edi
// 008af6f6  8b4008               mov eax, dword ptr [eax + 8]
// 008af6f9  8b3f                 mov edi, dword ptr [edi]
// 008af6fb  85c0                 test eax, eax
// 008af6fd  7405                 je 0x8af704
// 008af6ff  8d70e0               lea esi, [eax - 0x20]
// 008af702  eb02                 jmp 0x8af706
// 008af704  33f6                 xor esi, esi
// 008af706  8bce                 mov ecx, esi
// 008af708  e873d4faff           call 0x85cb80
// 008af70d  a801                 test al, 1
// 008af70f  7534                 jne 0x8af745
// 008af711  8d4604               lea eax, [esi + 4]
// 008af714  50                   push eax
// 008af715  ffd5                 call ebp
// 008af717  6a00                 push 0
// 008af719  6a00                 push 0
// 008af71b  56                   push esi
// 008af71c  6a02                 push 2
// 008af71e  8bcb                 mov ecx, ebx
// 008af720  e8fb8df8ff           call 0x838520
// 008af725  85c0                 test eax, eax
// 008af727  7515                 jne 0x8af73e
// 008af729  8bce                 mov ecx, esi
// 008af72b  e8f0d0faff           call 0x85c820
// 008af730  6a00                 push 0
// 008af732  6a00                 push 0
// 008af734  56                   push esi
// 008af735  6a03                 push 3
// 008af737  8bcb                 mov ecx, ebx
// 008af739  e8e28df8ff           call 0x838520
// 008af73e  8bce                 mov ecx, esi
// 008af740  e89746f4ff           call 0x7f3ddc
// 008af745  85ff                 test edi, edi
// 008af747  75ab                 jne 0x8af6f4
// 008af749  8d4c2414             lea ecx, [esp + 0x14]
// 008af74d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008af755  e8969ff8ff           call 0x8396f0
// 008af75a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008af75e  64890d00000000       mov dword ptr fs:[0], ecx
// 008af765  59                   pop ecx
// 008af766  5f                   pop edi
// 008af767  5e                   pop esi
// 008af768  5d                   pop ebp
// 008af769  5b                   pop ebx
// 008af76a  83c428               add esp, 0x28
// 008af76d  c3                   ret 
// copied from an identical function in another client (function ?OnClose@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp