// roc 2008-06 004b01e0  unit: RBX::Network::Replicator::NewInstanceItem  size: 856 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b01e0
//
// 004b01e0  6aff                 push -1
// 004b01e2  68b5857c00           push 0x7c85b5
// 004b01e7  64a100000000         mov eax, dword ptr fs:[0]
// 004b01ed  50                   push eax
// 004b01ee  64892500000000       mov dword ptr fs:[0], esp
// 004b01f5  83ec14               sub esp, 0x14
// 004b01f8  53                   push ebx
// 004b01f9  55                   push ebp
// 004b01fa  56                   push esi
// 004b01fb  33c0                 xor eax, eax
// 004b01fd  57                   push edi
// 004b01fe  8bf9                 mov edi, ecx
// 004b0200  89442410             mov dword ptr [esp + 0x10], eax
// 004b0204  8b9f502c0000         mov ebx, dword ptr [edi + 0x2c50]
// 004b020a  8baf382c0000         mov ebp, dword ptr [edi + 0x2c38]
// 004b0210  8944242c             mov dword ptr [esp + 0x2c], eax
// 004b0214  8b442434             mov eax, dword ptr [esp + 0x34]
// 004b0218  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 004b021e  8d542414             lea edx, [esp + 0x14]
// 004b0222  894c2414             mov dword ptr [esp + 0x14], ecx
// 004b0226  8d8f382c0000         lea ecx, [edi + 0x2c38]
// 004b022c  52                   push edx
// 004b022d  8d442420             lea eax, [esp + 0x20]
// 004b0231  50                   push eax
// 004b0232  e899ddffff           call 0x4adfd0
// 004b0237  8bf0                 mov esi, eax
// 004b0239  8b06                 mov eax, dword ptr [esi]
// 004b023b  85c0                 test eax, eax
// 004b023d  7404                 je 0x4b0243
// 004b023f  3bc5                 cmp eax, ebp
// 004b0241  7406                 je 0x4b0249
// 004b0243  ff1590288000         call dword ptr [0x802890]
// 004b0249  395e04               cmp dword ptr [esi + 4], ebx
// 004b024c  0f8446010000         je 0x4b0398
// 004b0252  6a14                 push 0x14
// 004b0254  e8c7061f00           call 0x6a0920
// 004b0259  83c404               add esp, 4
// 004b025c  85c0                 test eax, eax
// 004b025e  7457                 je 0x4b02b7
// 004b0260  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004b0264  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b0268  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004b026c  895c2420             mov dword ptr [esp + 0x20], ebx
// 004b0270  85db                 test ebx, ebx
// 004b0272  740c                 je 0x4b0280
// 004b0274  8d5304               lea edx, [ebx + 4]
// 004b0277  be01000000           mov esi, 1
// 004b027c  f00fc132             lock xadd dword ptr [edx], esi
// 004b0280  897804               mov dword ptr [eax + 4], edi
// 004b0283  c70028488200         mov dword ptr [eax], 0x824828
// 004b0289  c74008343d9700       mov dword ptr [eax + 8], 0x973d34
// 004b0290  89480c               mov dword ptr [eax + 0xc], ecx
// 004b0293  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004b0298  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004b02a0  895810               mov dword ptr [eax + 0x10], ebx
// 004b02a3  85db                 test ebx, ebx
// 004b02a5  740c                 je 0x4b02b3
// 004b02a7  8d4b04               lea ecx, [ebx + 4]
// 004b02aa  ba01000000           mov edx, 1
// 004b02af  f00fc111             lock xadd dword ptr [ecx], edx
// 004b02b3  8bf0                 mov esi, eax
// 004b02b5  eb06                 jmp 0x4b02bd
// 004b02b7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004b02bb  33f6                 xor esi, esi
// 004b02bd  56                   push esi
// 004b02be  8d4c241c             lea ecx, [esp + 0x1c]
// 004b02c2  89742418             mov dword ptr [esp + 0x18], esi
// 004b02c6  e895beffff           call 0x4ac160
// 004b02cb  56                   push esi
// 004b02cc  8d44241c             lea eax, [esp + 0x1c]
// 004b02d0  56                   push esi
// 004b02d1  50                   push eax
// 004b02d2  e839d1fcff           call 0x47d410
// 004b02d7  83c40c               add esp, 0xc
// 004b02da  8db7742c0000         lea esi, [edi + 0x2c74]
// 004b02e0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004b02e3  8b5704               mov edx, dword ptr [edi + 4]
// 004b02e6  8d4c2414             lea ecx, [esp + 0x14]
// 004b02ea  51                   push ecx
// 004b02eb  52                   push edx
// 004b02ec  57                   push edi
// 004b02ed  8bce                 mov ecx, esi
// 004b02ef  c744243802000000     mov dword ptr [esp + 0x38], 2
// 004b02f7  e864d5ffff           call 0x4ad860
// 004b02fc  6a01                 push 1
// 004b02fe  8bce                 mov ecx, esi
// 004b0300  8be8                 mov ebp, eax
// 004b0302  e849c8ffff           call 0x4acb50
// 004b0307  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b030b  896f04               mov dword ptr [edi + 4], ebp
// 004b030e  8b4504               mov eax, dword ptr [ebp + 4]
// 004b0311  8928                 mov dword ptr [eax], ebp
// 004b0313  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004b0318  85f6                 test esi, esi
// 004b031a  742a                 je 0x4b0346
// 004b031c  8d4604               lea eax, [esi + 4]
// 004b031f  83c9ff               or ecx, 0xffffffff
// 004b0322  f00fc108             lock xadd dword ptr [eax], ecx
// 004b0326  751e                 jne 0x4b0346
// 004b0328  8b16                 mov edx, dword ptr [esi]
// 004b032a  8b4204               mov eax, dword ptr [edx + 4]
// 004b032d  8bce                 mov ecx, esi
// 004b032f  ffd0                 call eax
// 004b0331  8d4e08               lea ecx, [esi + 8]
// 004b0334  83caff               or edx, 0xffffffff
// 004b0337  f00fc111             lock xadd dword ptr [ecx], edx
// 004b033b  7509                 jne 0x4b0346
// 004b033d  8b06                 mov eax, dword ptr [esi]
// 004b033f  8b5008               mov edx, dword ptr [eax + 8]
// 004b0342  8bce                 mov ecx, esi
// 004b0344  ffd2                 call edx
// 004b0346  f644241001           test byte ptr [esp + 0x10], 1
// 004b034b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004b0353  0f8490010000         je 0x4b04e9
// 004b0359  85db                 test ebx, ebx
// 004b035b  0f8488010000         je 0x4b04e9
// 004b0361  8d4304               lea eax, [ebx + 4]
// 004b0364  83c9ff               or ecx, 0xffffffff
// 004b0367  f00fc108             lock xadd dword ptr [eax], ecx
// 004b036b  0f8578010000         jne 0x4b04e9
// 004b0371  8b13                 mov edx, dword ptr [ebx]
// 004b0373  8b4204               mov eax, dword ptr [edx + 4]
// 004b0376  8bcb                 mov ecx, ebx
// 004b0378  ffd0                 call eax
// 004b037a  8d4b08               lea ecx, [ebx + 8]
// 004b037d  83caff               or edx, 0xffffffff
// 004b0380  f00fc111             lock xadd dword ptr [ecx], edx
// 004b0384  0f855f010000         jne 0x4b04e9
// 004b038a  8b03                 mov eax, dword ptr [ebx]
// 004b038c  8b5008               mov edx, dword ptr [eax + 8]
// 004b038f  8bcb                 mov ecx, ebx
// 004b0391  ffd2                 call edx
// 004b0393  e951010000           jmp 0x4b04e9
// 004b0398  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b039c  83ec08               sub esp, 8
// 004b039f  8bc4                 mov eax, esp
// 004b03a1  8908                 mov dword ptr [eax], ecx
// 004b03a3  8b542440             mov edx, dword ptr [esp + 0x40]
// 004b03a7  895004               mov dword ptr [eax + 4], edx
// 004b03aa  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b03ae  8964241c             mov dword ptr [esp + 0x1c], esp
// 004b03b2  85c0                 test eax, eax
// 004b03b4  740c                 je 0x4b03c2
// 004b03b6  83c004               add eax, 4
// 004b03b9  b901000000           mov ecx, 1
// 004b03be  f00fc108             lock xadd dword ptr [eax], ecx
// 004b03c2  8bcf                 mov ecx, edi
// 004b03c4  e837f9ffff           call 0x4afd00
// 004b03c9  8b542434             mov edx, dword ptr [esp + 0x34]
// 004b03cd  8d442414             lea eax, [esp + 0x14]
// 004b03d1  50                   push eax
// 004b03d2  8d8f902c0000         lea ecx, [edi + 0x2c90]
// 004b03d8  89542418             mov dword ptr [esp + 0x18], edx
// 004b03dc  e87f9b1300           call 0x5e9f60
// 004b03e1  85c0                 test eax, eax
// 004b03e3  0f95c0               setne al
// 004b03e6  84c0                 test al, al
// 004b03e8  0f85fb000000         jne 0x4b04e9
// 004b03ee  6a10                 push 0x10
// 004b03f0  e82b051f00           call 0x6a0920
// 004b03f5  83c404               add esp, 4
// 004b03f8  89442414             mov dword ptr [esp + 0x14], eax
// 004b03fc  85c0                 test eax, eax
// 004b03fe  743e                 je 0x4b043e
// 004b0400  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b0404  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004b0408  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004b040c  894c2420             mov dword ptr [esp + 0x20], ecx
// 004b0410  85c9                 test ecx, ecx
// 004b0412  740c                 je 0x4b0420
// 004b0414  83c104               add ecx, 4
// 004b0417  ba01000000           mov edx, 1
// 004b041c  f00fc111             lock xadd dword ptr [ecx], edx
// 004b0420  8d4c241c             lea ecx, [esp + 0x1c]
// 004b0424  51                   push ecx
// 004b0425  57                   push edi
// 004b0426  8bc8                 mov ecx, eax
// 004b0428  c644243404           mov byte ptr [esp + 0x34], 4
// 004b042d  c744241802000000     mov dword ptr [esp + 0x18], 2
// 004b0435  e856faffff           call 0x4afe90
// 004b043a  8bf0                 mov esi, eax
// 004b043c  eb02                 jmp 0x4b0440
// 004b043e  33f6                 xor esi, esi
// 004b0440  bb05000000           mov ebx, 5
// 004b0445  56                   push esi
// 004b0446  8d4c241c             lea ecx, [esp + 0x1c]
// 004b044a  895c2430             mov dword ptr [esp + 0x30], ebx
// 004b044e  89742418             mov dword ptr [esp + 0x18], esi
// 004b0452  e899bdffff           call 0x4ac1f0
// 004b0457  56                   push esi
// 004b0458  8d54241c             lea edx, [esp + 0x1c]
// 004b045c  56                   push esi
// 004b045d  52                   push edx
// 004b045e  e8adcffcff           call 0x47d410
// 004b0463  83c40c               add esp, 0xc
// 004b0466  8db7742c0000         lea esi, [edi + 0x2c74]
// 004b046c  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004b046f  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b0472  8d442414             lea eax, [esp + 0x14]
// 004b0476  50                   push eax
// 004b0477  51                   push ecx
// 004b0478  57                   push edi
// 004b0479  8bce                 mov ecx, esi
// 004b047b  c744243806000000     mov dword ptr [esp + 0x38], 6
// 004b0483  e8d8d3ffff           call 0x4ad860
// 004b0488  6a01                 push 1
// 004b048a  8bce                 mov ecx, esi
// 004b048c  8be8                 mov ebp, eax
// 004b048e  e8bdc6ffff           call 0x4acb50
// 004b0493  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b0497  896f04               mov dword ptr [edi + 4], ebp
// 004b049a  8b4504               mov eax, dword ptr [ebp + 4]
// 004b049d  8928                 mov dword ptr [eax], ebp
// 004b049f  885c242c             mov byte ptr [esp + 0x2c], bl
// 004b04a3  85f6                 test esi, esi
// 004b04a5  742a                 je 0x4b04d1
// 004b04a7  8d5604               lea edx, [esi + 4]
// 004b04aa  83c8ff               or eax, 0xffffffff
// 004b04ad  f00fc102             lock xadd dword ptr [edx], eax
// 004b04b1  751e                 jne 0x4b04d1
// 004b04b3  8b16                 mov edx, dword ptr [esi]
// 004b04b5  8b4204               mov eax, dword ptr [edx + 4]
// 004b04b8  8bce                 mov ecx, esi
// 004b04ba  ffd0                 call eax
// 004b04bc  8d4e08               lea ecx, [esi + 8]
// 004b04bf  83caff               or edx, 0xffffffff
// 004b04c2  f00fc111             lock xadd dword ptr [ecx], edx
// 004b04c6  7509                 jne 0x4b04d1
// 004b04c8  8b06                 mov eax, dword ptr [esi]
// 004b04ca  8b5008               mov edx, dword ptr [eax + 8]
// 004b04cd  8bce                 mov ecx, esi
// 004b04cf  ffd2                 call edx
// 004b04d1  f644241002           test byte ptr [esp + 0x10], 2
// 004b04d6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004b04de  7409                 je 0x4b04e9
// 004b04e0  8d4c241c             lea ecx, [esp + 0x1c]
// 004b04e4  e877011500           call 0x600660
// 004b04e9  8b742438             mov esi, dword ptr [esp + 0x38]
// 004b04ed  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004b04f5  85f6                 test esi, esi
// 004b04f7  742a                 je 0x4b0523
// 004b04f9  8d4604               lea eax, [esi + 4]
// 004b04fc  83c9ff               or ecx, 0xffffffff
// 004b04ff  f00fc108             lock xadd dword ptr [eax], ecx
// 004b0503  751e                 jne 0x4b0523
// 004b0505  8b16                 mov edx, dword ptr [esi]
// 004b0507  8b4204               mov eax, dword ptr [edx + 4]
// 004b050a  8bce                 mov ecx, esi
// 004b050c  ffd0                 call eax
// 004b050e  8d4e08               lea ecx, [esi + 8]
// 004b0511  83caff               or edx, 0xffffffff
// 004b0514  f00fc111             lock xadd dword ptr [ecx], edx
// 004b0518  7509                 jne 0x4b0523
// 004b051a  8b06                 mov eax, dword ptr [esi]
// 004b051c  8b5008               mov edx, dword ptr [eax + 8]
// 004b051f  8bce                 mov ecx, esi
// 004b0521  ffd2                 call edx
// 004b0523  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004b0527  5f                   pop edi
// 004b0528  5e                   pop esi
// 004b0529  5d                   pop ebp
// 004b052a  64890d00000000       mov dword ptr fs:[0], ecx
// 004b0531  5b                   pop ebx
// 004b0532  83c420               add esp, 0x20
// 004b0535  c20800               ret 8

void func_004b01e0()
{
}
