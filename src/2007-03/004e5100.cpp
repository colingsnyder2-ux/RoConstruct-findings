// roc 2007-03 004e5100  unit: seg_004e0000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5100
//
// 004e5100  83ec08               sub esp, 8
// 004e5103  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004e5106  53                   push ebx
// 004e5107  55                   push ebp
// 004e5108  8d5908               lea ebx, [ecx + 8]
// 004e510b  56                   push esi
// 004e510c  57                   push edi
// 004e510d  8b38                 mov edi, dword ptr [eax]
// 004e510f  8bf3                 mov esi, ebx
// 004e5111  897c2414             mov dword ptr [esp + 0x14], edi
// 004e5115  89742410             mov dword ptr [esp + 0x10], esi
// 004e5119  8be8                 mov ebp, eax
// 004e511b  eb03                 jmp 0x4e5120
// 004e511d  8d4900               lea ecx, [ecx]
// 004e5120  85f6                 test esi, esi
// 004e5122  7404                 je 0x4e5128
// 004e5124  3bf3                 cmp esi, ebx
// 004e5126  7406                 je 0x4e512e
// 004e5128  ff1544e97700         call dword ptr [0x77e944]
// 004e512e  3bfd                 cmp edi, ebp
// 004e5130  7439                 je 0x4e516b
// 004e5132  85f6                 test esi, esi
// 004e5134  7506                 jne 0x4e513c
// 004e5136  ff1544e97700         call dword ptr [0x77e944]
// 004e513c  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e513f  7506                 jne 0x4e5147
// 004e5141  ff1544e97700         call dword ptr [0x77e944]
// 004e5147  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004e514b  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004e514e  52                   push edx
// 004e514f  e87cf8ffff           call 0x4e49d0
// 004e5154  84c0                 test al, al
// 004e5156  7513                 jne 0x4e516b
// 004e5158  8d4c2410             lea ecx, [esp + 0x10]
// 004e515c  e8ffddffff           call 0x4e2f60
// 004e5161  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004e5165  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e5169  ebb5                 jmp 0x4e5120
// 004e516b  5f                   pop edi
// 004e516c  5e                   pop esi
// 004e516d  5d                   pop ebp
// 004e516e  5b                   pop ebx
// 004e516f  83c408               add esp, 8
// 004e5172  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@AggregatingSceneManager@Render@RBX@@AAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
