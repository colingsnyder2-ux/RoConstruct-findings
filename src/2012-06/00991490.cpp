// roc 2012-06 00991490  unit: CPatchedControlComboBox  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00991490
//
// 00991490  6aff                 push -1
// 00991492  68b2c7ad00           push 0xadc7b2
// 00991497  64a100000000         mov eax, dword ptr fs:[0]
// 0099149d  50                   push eax
// 0099149e  83ec14               sub esp, 0x14
// 009914a1  53                   push ebx
// 009914a2  55                   push ebp
// 009914a3  56                   push esi
// 009914a4  57                   push edi
// 009914a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009914aa  33c4                 xor eax, esp
// 009914ac  50                   push eax
// 009914ad  8d442428             lea eax, [esp + 0x28]
// 009914b1  64a300000000         mov dword ptr fs:[0], eax
// 009914b7  8bf1                 mov esi, ecx
// 009914b9  8bae84010000         mov ebp, dword ptr [esi + 0x184]
// 009914bf  e8dce8ffff           call 0x98fda0
// 009914c4  83bedc01000000       cmp dword ptr [esi + 0x1dc], 0
// 009914cb  8bf8                 mov edi, eax
// 009914cd  0f8534010000         jne 0x991607
// 009914d3  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 009914da  0f8427010000         je 0x991607
// 009914e0  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 009914e7  0f851a010000         jne 0x991607
// 009914ed  85ed                 test ebp, ebp
// 009914ef  0f8412010000         je 0x991607
// 009914f5  837d2000             cmp dword ptr [ebp + 0x20], 0
// 009914f9  0f8408010000         je 0x991607
// 009914ff  85ff                 test edi, edi
// 00991501  0f8400010000         je 0x991607
// 00991507  8d442418             lea eax, [esp + 0x18]
// 0099150b  50                   push eax
// 0099150c  8bce                 mov ecx, esi
// 0099150e  e88de1ffff           call 0x98f6a0
// 00991513  8d4c2418             lea ecx, [esp + 0x18]
// 00991517  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0099151f  ff155846b200         call dword ptr [0xb24658]
// 00991525  8bd8                 mov ebx, eax
// 00991527  33c0                 xor eax, eax
// 00991529  3bd8                 cmp ebx, eax
// 0099152b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0099152f  0f8eb6000000         jle 0x9915eb
// 00991535  8d4c241c             lea ecx, [esp + 0x1c]
// 00991539  51                   push ecx
// 0099153a  8d542424             lea edx, [esp + 0x24]
// 0099153e  52                   push edx
// 0099153f  8bcd                 mov ecx, ebp
// 00991541  89442428             mov dword ptr [esp + 0x28], eax
// 00991545  89442424             mov dword ptr [esp + 0x24], eax
// 00991549  e812daffff           call 0x98ef60
// 0099154e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00991552  39442420             cmp dword ptr [esp + 0x20], eax
// 00991556  0f858f000000         jne 0x9915eb
// 0099155c  3bd8                 cmp ebx, eax
// 0099155e  0f8587000000         jne 0x9915eb
// 00991564  8b1f                 mov ebx, dword ptr [edi]
// 00991566  8d4c2418             lea ecx, [esp + 0x18]
// 0099156a  ff159847b200         call dword ptr [0xb24798]
// 00991570  50                   push eax
// 00991571  8b8314020000         mov eax, dword ptr [ebx + 0x214]
// 00991577  6a00                 push 0
// 00991579  8bcf                 mov ecx, edi
// 0099157b  ffd0                 call eax
// 0099157d  8bd8                 mov ebx, eax
// 0099157f  83fbff               cmp ebx, -1
// 00991582  7467                 je 0x9915eb
// 00991584  8d4c2414             lea ecx, [esp + 0x14]
// 00991588  ff158447b200         call dword ptr [0xb24784]
// 0099158e  8b17                 mov edx, dword ptr [edi]
// 00991590  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 00991596  8d442414             lea eax, [esp + 0x14]
// 0099159a  50                   push eax
// 0099159b  53                   push ebx
// 0099159c  8bcf                 mov ecx, edi
// 0099159e  c644243801           mov byte ptr [esp + 0x38], 1
// 009915a3  ffd2                 call edx
// 009915a5  8d442414             lea eax, [esp + 0x14]
// 009915a9  50                   push eax
// 009915aa  8bce                 mov ecx, esi
// 009915ac  e84fe1ffff           call 0x98f700
// 009915b1  8d4c2414             lea ecx, [esp + 0x14]
// 009915b5  ff155846b200         call dword ptr [0xb24658]
// 009915bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009915bf  8b5520               mov edx, dword ptr [ebp + 0x20]
// 009915c2  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 009915c8  51                   push ecx
// 009915c9  50                   push eax
// 009915ca  68b1000000           push 0xb1
// 009915cf  52                   push edx
// 009915d0  ffd7                 call edi
// 009915d2  8b4520               mov eax, dword ptr [ebp + 0x20]
// 009915d5  6a00                 push 0
// 009915d7  6a00                 push 0
// 009915d9  68b7000000           push 0xb7
// 009915de  50                   push eax
// 009915df  ffd7                 call edi
// 009915e1  8d4c2414             lea ecx, [esp + 0x14]
// 009915e5  ff15d047b200         call dword ptr [0xb247d0]
// 009915eb  8d4c2418             lea ecx, [esp + 0x18]
// 009915ef  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 009915f9  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00991601  ff15d047b200         call dword ptr [0xb247d0]
// 00991607  8bce                 mov ecx, esi
// 00991609  e882fdffff           call 0x991390
// 0099160e  6a05                 push 5
// 00991610  8bce                 mov ecx, esi
// 00991612  e84959ffff           call 0x986f60
// 00991617  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0099161b  64890d00000000       mov dword ptr fs:[0], ecx
// 00991622  59                   pop ecx
// 00991623  5f                   pop edi
// 00991624  5e                   pop esi
// 00991625  5d                   pop ebp
// 00991626  5b                   pop ebx
// 00991627  83c420               add esp, 0x20
// 0099162a  c3                   ret 
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBox@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp