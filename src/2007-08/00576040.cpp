// roc 2007-08 00576040  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576040
//
// 00576040  64a100000000         mov eax, dword ptr fs:[0]
// 00576046  6aff                 push -1
// 00576048  68d8bc7500           push 0x75bcd8
// 0057604d  50                   push eax
// 0057604e  64892500000000       mov dword ptr fs:[0], esp
// 00576055  83ec08               sub esp, 8
// 00576058  56                   push esi
// 00576059  8bf1                 mov esi, ecx
// 0057605b  8b4604               mov eax, dword ptr [esi + 4]
// 0057605e  3b4608               cmp eax, dword ptr [esi + 8]
// 00576061  8b0e                 mov ecx, dword ptr [esi]
// 00576063  7d3b                 jge 0x5760a0
// 00576065  8d04c1               lea eax, [ecx + eax*8]
// 00576068  85c0                 test eax, eax
// 0057606a  741e                 je 0x57608a
// 0057606c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00576070  8b11                 mov edx, dword ptr [ecx]
// 00576072  8910                 mov dword ptr [eax], edx
// 00576074  8b4904               mov ecx, dword ptr [ecx + 4]
// 00576077  85c9                 test ecx, ecx
// 00576079  894804               mov dword ptr [eax + 4], ecx
// 0057607c  740c                 je 0x57608a
// 0057607e  83c104               add ecx, 4
// 00576081  b801000000           mov eax, 1
// 00576086  f00fc101             lock xadd dword ptr [ecx], eax
// 0057608a  83460401             add dword ptr [esi + 4], 1
// 0057608e  5e                   pop esi
// 0057608f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00576093  64890d00000000       mov dword ptr fs:[0], ecx
// 0057609a  83c414               add esp, 0x14
// 0057609d  c20400               ret 4
// 005760a0  57                   push edi
// 005760a1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005760a5  3bf9                 cmp edi, ecx
// 005760a7  0f8285000000         jb 0x576132
// 005760ad  8d0cc1               lea ecx, [ecx + eax*8]
// 005760b0  3bf9                 cmp edi, ecx
// 005760b2  737e                 jae 0x576132
// 005760b4  8b17                 mov edx, dword ptr [edi]
// 005760b6  8b7f04               mov edi, dword ptr [edi + 4]
// 005760b9  85ff                 test edi, edi
// 005760bb  89542408             mov dword ptr [esp + 8], edx
// 005760bf  897c240c             mov dword ptr [esp + 0xc], edi
// 005760c3  740c                 je 0x5760d1
// 005760c5  83c704               add edi, 4
// 005760c8  b801000000           mov eax, 1
// 005760cd  f00fc107             lock xadd dword ptr [edi], eax
// 005760d1  8d4c2408             lea ecx, [esp + 8]
// 005760d5  51                   push ecx
// 005760d6  8bce                 mov ecx, esi
// 005760d8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005760e0  e85bffffff           call 0x576040
// 005760e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005760e9  85f6                 test esi, esi
// 005760eb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005760f3  7463                 je 0x576158
// 005760f5  8d5604               lea edx, [esi + 4]
// 005760f8  83c8ff               or eax, 0xffffffff
// 005760fb  f00fc102             lock xadd dword ptr [edx], eax
// 005760ff  7557                 jne 0x576158
// 00576101  8b16                 mov edx, dword ptr [esi]
// 00576103  8b4204               mov eax, dword ptr [edx + 4]
// 00576106  8bce                 mov ecx, esi
// 00576108  ffd0                 call eax
// 0057610a  8d4e08               lea ecx, [esi + 8]
// 0057610d  83caff               or edx, 0xffffffff
// 00576110  f00fc111             lock xadd dword ptr [ecx], edx
// 00576114  7542                 jne 0x576158
// 00576116  8b06                 mov eax, dword ptr [esi]
// 00576118  8b5008               mov edx, dword ptr [eax + 8]
// 0057611b  8bce                 mov ecx, esi
// 0057611d  ffd2                 call edx
// 0057611f  5f                   pop edi
// 00576120  5e                   pop esi
// 00576121  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00576125  64890d00000000       mov dword ptr fs:[0], ecx
// 0057612c  83c414               add esp, 0x14
// 0057612f  c20400               ret 4
// 00576132  6a00                 push 0
// 00576134  83c001               add eax, 1
// 00576137  50                   push eax
// 00576138  8bce                 mov ecx, esi
// 0057613a  e801ecffff           call 0x574d40
// 0057613f  8b0e                 mov ecx, dword ptr [esi]
// 00576141  8b4604               mov eax, dword ptr [esi + 4]
// 00576144  8b17                 mov edx, dword ptr [edi]
// 00576146  8d44c1f8             lea eax, [ecx + eax*8 - 8]
// 0057614a  83c704               add edi, 4
// 0057614d  57                   push edi
// 0057614e  8d4804               lea ecx, [eax + 4]
// 00576151  8910                 mov dword ptr [eax], edx
// 00576153  e808c9e8ff           call 0x402a60
// 00576158  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057615c  5f                   pop edi
// 0057615d  5e                   pop esi
// 0057615e  64890d00000000       mov dword ptr fs:[0], ecx
// 00576165  83c414               add esp, 0x14
// 00576168  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?append@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@QAEXABV?$shared_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
