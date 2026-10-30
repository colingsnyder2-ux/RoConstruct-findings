// roc 2009-12 0079e400  unit: seg_00790000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e400
//
// 0079e400  803b00               cmp byte ptr [ebx], 0
// 0079e403  55                   push ebp
// 0079e404  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0079e408  56                   push esi
// 0079e409  57                   push edi
// 0079e40a  8bf3                 mov esi, ebx
// 0079e40c  741e                 je 0x79e42c
// 0079e40e  8b3d30b89800         mov edi, dword ptr [0x98b830]
// 0079e414  0fbe06               movsx eax, byte ptr [esi]
// 0079e417  50                   push eax
// 0079e418  6864b29e00           push 0x9eb264
// 0079e41d  ffd7                 call edi
// 0079e41f  83c408               add esp, 8
// 0079e422  85c0                 test eax, eax
// 0079e424  7406                 je 0x79e42c
// 0079e426  46                   inc esi
// 0079e427  803e00               cmp byte ptr [esi], 0
// 0079e42a  75e8                 jne 0x79e414
// 0079e42c  8bce                 mov ecx, esi
// 0079e42e  2bcb                 sub ecx, ebx
// 0079e430  83f906               cmp ecx, 6
// 0079e433  7212                 jb 0x79e447
// 0079e435  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079e439  6844b29e00           push 0x9eb244
// 0079e43e  52                   push edx
// 0079e43f  e8acb8feff           call 0x789cf0
// 0079e444  83c408               add esp, 8
// 0079e447  0fb606               movzx eax, byte ptr [esi]
// 0079e44a  8b3ddcb89800         mov edi, dword ptr [0x98b8dc]
// 0079e450  50                   push eax
// 0079e451  ffd7                 call edi
// 0079e453  83c404               add esp, 4
// 0079e456  85c0                 test eax, eax
// 0079e458  7401                 je 0x79e45b
// 0079e45a  46                   inc esi
// 0079e45b  0fb60e               movzx ecx, byte ptr [esi]
// 0079e45e  51                   push ecx
// 0079e45f  ffd7                 call edi
// 0079e461  83c404               add esp, 4
// 0079e464  85c0                 test eax, eax
// 0079e466  7401                 je 0x79e469
// 0079e468  46                   inc esi
// 0079e469  803e2e               cmp byte ptr [esi], 0x2e
// 0079e46c  751e                 jne 0x79e48c
// 0079e46e  0fb65601             movzx edx, byte ptr [esi + 1]
// 0079e472  46                   inc esi
// 0079e473  52                   push edx
// 0079e474  ffd7                 call edi
// 0079e476  83c404               add esp, 4
// 0079e479  85c0                 test eax, eax
// 0079e47b  7401                 je 0x79e47e
// 0079e47d  46                   inc esi
// 0079e47e  0fb606               movzx eax, byte ptr [esi]
// 0079e481  50                   push eax
// 0079e482  ffd7                 call edi
// 0079e484  83c404               add esp, 4
// 0079e487  85c0                 test eax, eax
// 0079e489  7401                 je 0x79e48c
// 0079e48b  46                   inc esi
// 0079e48c  0fb60e               movzx ecx, byte ptr [esi]
// 0079e48f  51                   push ecx
// 0079e490  ffd7                 call edi
// 0079e492  83c404               add esp, 4
// 0079e495  85c0                 test eax, eax
// 0079e497  7412                 je 0x79e4ab
// 0079e499  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079e49d  6814b29e00           push 0x9eb214
// 0079e4a2  52                   push edx
// 0079e4a3  e848b8feff           call 0x789cf0
// 0079e4a8  83c408               add esp, 8
// 0079e4ab  8bfe                 mov edi, esi
// 0079e4ad  2bfb                 sub edi, ebx
// 0079e4af  8d4701               lea eax, [edi + 1]
// 0079e4b2  50                   push eax
// 0079e4b3  c6450025             mov byte ptr [ebp], 0x25
// 0079e4b7  45                   inc ebp
// 0079e4b8  53                   push ebx
// 0079e4b9  55                   push ebp
// 0079e4ba  ff1580b89800         call dword ptr [0x98b880]
// 0079e4c0  83c40c               add esp, 0xc
// 0079e4c3  c6442f0100           mov byte ptr [edi + ebp + 1], 0
// 0079e4c8  5f                   pop edi
// 0079e4c9  8bc6                 mov eax, esi
// 0079e4cb  5e                   pop esi
// 0079e4cc  5d                   pop ebp
// 0079e4cd  c3                   ret 
// copied from an identical function in another client (function _scanformat)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c