// roc 2007-08 005ac630  unit: RBX::World  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac630
//
// 005ac630  83ec08               sub esp, 8
// 005ac633  53                   push ebx
// 005ac634  55                   push ebp
// 005ac635  56                   push esi
// 005ac636  57                   push edi
// 005ac637  8bf9                 mov edi, ecx
// 005ac639  8b4704               mov eax, dword ptr [edi + 4]
// 005ac63c  8b00                 mov eax, dword ptr [eax]
// 005ac63e  8bf7                 mov esi, edi
// 005ac640  8be8                 mov ebp, eax
// 005ac642  89742410             mov dword ptr [esp + 0x10], esi
// 005ac646  896c2414             mov dword ptr [esp + 0x14], ebp
// 005ac64a  8d9b00000000         lea ebx, [ebx]
// 005ac650  85f6                 test esi, esi
// 005ac652  8b5f04               mov ebx, dword ptr [edi + 4]
// 005ac655  7404                 je 0x5ac65b
// 005ac657  3bf7                 cmp esi, edi
// 005ac659  7406                 je 0x5ac661
// 005ac65b  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac661  3beb                 cmp ebp, ebx
// 005ac663  7430                 je 0x5ac695
// 005ac665  85f6                 test esi, esi
// 005ac667  7506                 jne 0x5ac66f
// 005ac669  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac66f  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005ac672  7506                 jne 0x5ac67a
// 005ac674  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ac67a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005ac67d  e86e730000           call 0x5b39f0
// 005ac682  8d4c2410             lea ecx, [esp + 0x10]
// 005ac686  e8b5ab0700           call 0x627240
// 005ac68b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ac68f  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ac693  ebbb                 jmp 0x5ac650
// 005ac695  5f                   pop edi
// 005ac696  5e                   pop esi
// 005ac697  5d                   pop ebp
// 005ac698  5b                   pop ebx
// 005ac699  83c408               add esp, 8
// 005ac69c  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?notifyMovingPrimitives@Mechanism@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
