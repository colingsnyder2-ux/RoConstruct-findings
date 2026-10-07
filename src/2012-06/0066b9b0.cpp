// roc 2012-06 0066b9b0  unit: seg_00660000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066b9b0
//
// 0066b9b0  53                   push ebx
// 0066b9b1  56                   push esi
// 0066b9b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066b9b6  8b4604               mov eax, dword ptr [esi + 4]
// 0066b9b9  8b08                 mov ecx, dword ptr [eax]
// 0066b9bb  57                   push edi
// 0066b9bc  6a20                 push 0x20
// 0066b9be  6a01                 push 1
// 0066b9c0  56                   push esi
// 0066b9c1  ffd1                 call ecx
// 0066b9c3  8bf8                 mov edi, eax
// 0066b9c5  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0066b9cb  33db                 xor ebx, ebx
// 0066b9cd  83c40c               add esp, 0xc
// 0066b9d0  c70770b76600         mov dword ptr [edi], 0x66b770
// 0066b9d6  c7470410b96600       mov dword ptr [edi + 4], 0x66b910
// 0066b9dd  c7470840b96600       mov dword ptr [edi + 8], 0x66b940
// 0066b9e4  885f0d               mov byte ptr [edi + 0xd], bl
// 0066b9e7  e814f5ffff           call 0x66af00
// 0066b9ec  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 0066b9f2  7407                 je 0x66b9fb
// 0066b9f4  e8e7f6ffff           call 0x66b0e0
// 0066b9f9  eb10                 jmp 0x66ba0b
// 0066b9fb  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 0066ba01  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 0066ba0b  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 0066ba11  7407                 je 0x66ba1a
// 0066ba13  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 0066ba1a  385c2414             cmp byte ptr [esp + 0x14], bl
// 0066ba1e  7411                 je 0x66ba31
// 0066ba20  33d2                 xor edx, edx
// 0066ba22  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0066ba28  0f94c2               sete dl
// 0066ba2b  42                   inc edx
// 0066ba2c  895710               mov dword ptr [edi + 0x10], edx
// 0066ba2f  eb03                 jmp 0x66ba34
// 0066ba31  895f10               mov dword ptr [edi + 0x10], ebx
// 0066ba34  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0066ba37  895f14               mov dword ptr [edi + 0x14], ebx
// 0066ba3a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0066ba40  740f                 je 0x66ba51
// 0066ba42  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0066ba48  03c0                 add eax, eax
// 0066ba4a  894718               mov dword ptr [edi + 0x18], eax
// 0066ba4d  5f                   pop edi
// 0066ba4e  5e                   pop esi
// 0066ba4f  5b                   pop ebx
// 0066ba50  c3                   ret 
// 0066ba51  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0066ba57  894f18               mov dword ptr [edi + 0x18], ecx
// 0066ba5a  5f                   pop edi
// 0066ba5b  5e                   pop esi
// 0066ba5c  5b                   pop ebx
// 0066ba5d  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
