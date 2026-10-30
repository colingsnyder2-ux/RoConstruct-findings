// roc 2009-12 0079b4c0  unit: seg_00790000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079b4c0
//
// 0079b4c0  53                   push ebx
// 0079b4c1  55                   push ebp
// 0079b4c2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079b4c6  56                   push esi
// 0079b4c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0079b4cb  33db                 xor ebx, ebx
// 0079b4cd  33c9                 xor ecx, ecx
// 0079b4cf  807d003e             cmp byte ptr [ebp], 0x3e
// 0079b4d3  57                   push edi
// 0079b4d4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079b4d8  750f                 jne 0x79b4e9
// 0079b4da  8b4708               mov eax, dword ptr [edi + 8]
// 0079b4dd  8b58f0               mov ebx, dword ptr [eax - 0x10]
// 0079b4e0  45                   inc ebp
// 0079b4e1  83c0f0               add eax, -0x10
// 0079b4e4  894708               mov dword ptr [edi + 8], eax
// 0079b4e7  eb16                 jmp 0x79b4ff
// 0079b4e9  8b4660               mov eax, dword ptr [esi + 0x60]
// 0079b4ec  85c0                 test eax, eax
// 0079b4ee  740f                 je 0x79b4ff
// 0079b4f0  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0079b4f3  8d0440               lea eax, [eax + eax*2]
// 0079b4f6  8b54c104             mov edx, dword ptr [ecx + eax*8 + 4]
// 0079b4fa  8b1a                 mov ebx, dword ptr [edx]
// 0079b4fc  8d0cc1               lea ecx, [ecx + eax*8]
// 0079b4ff  51                   push ecx
// 0079b500  53                   push ebx
// 0079b501  55                   push ebp
// 0079b502  57                   push edi
// 0079b503  e868feffff           call 0x79b370
// 0079b508  6a66                 push 0x66
// 0079b50a  55                   push ebp
// 0079b50b  8bf0                 mov esi, eax
// 0079b50d  ff1530b89800         call dword ptr [0x98b830]
// 0079b513  83c418               add esp, 0x18
// 0079b516  85c0                 test eax, eax
// 0079b518  742f                 je 0x79b549
// 0079b51a  8b4708               mov eax, dword ptr [edi + 8]
// 0079b51d  85db                 test ebx, ebx
// 0079b51f  7505                 jne 0x79b526
// 0079b521  895808               mov dword ptr [eax + 8], ebx
// 0079b524  eb09                 jmp 0x79b52f
// 0079b526  8918                 mov dword ptr [eax], ebx
// 0079b528  c7400806000000       mov dword ptr [eax + 8], 6
// 0079b52f  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0079b532  2b4f08               sub ecx, dword ptr [edi + 8]
// 0079b535  83f910               cmp ecx, 0x10
// 0079b538  7f0b                 jg 0x79b545
// 0079b53a  6a01                 push 1
// 0079b53c  57                   push edi
// 0079b53d  e8eebdffff           call 0x797330
// 0079b542  83c408               add esp, 8
// 0079b545  83470810             add dword ptr [edi + 8], 0x10
// 0079b549  6a4c                 push 0x4c
// 0079b54b  55                   push ebp
// 0079b54c  ff1530b89800         call dword ptr [0x98b830]
// 0079b552  83c408               add esp, 8
// 0079b555  85c0                 test eax, eax
// 0079b557  7405                 je 0x79b55e
// 0079b559  e852f4ffff           call 0x79a9b0
// 0079b55e  5f                   pop edi
// 0079b55f  8bc6                 mov eax, esi
// 0079b561  5e                   pop esi
// 0079b562  5d                   pop ebp
// 0079b563  5b                   pop ebx
// 0079b564  c3                   ret 
// copied from an identical function in another client (function _lua_getinfo)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll ldebug.c