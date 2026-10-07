// roc 2007-08 005395c0  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 419 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005395c0
//
// 005395c0  55                   push ebp
// 005395c1  8bec                 mov ebp, esp
// 005395c3  6aff                 push -1
// 005395c5  68180c7500           push 0x750c18
// 005395ca  64a100000000         mov eax, dword ptr fs:[0]
// 005395d0  50                   push eax
// 005395d1  64892500000000       mov dword ptr fs:[0], esp
// 005395d8  83ec1c               sub esp, 0x1c
// 005395db  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005395de  53                   push ebx
// 005395df  56                   push esi
// 005395e0  57                   push edi
// 005395e1  8b7804               mov edi, dword ptr [eax + 4]
// 005395e4  8bf1                 mov esi, ecx
// 005395e6  8b08                 mov ecx, dword ptr [eax]
// 005395e8  33c0                 xor eax, eax
// 005395ea  3bf8                 cmp edi, eax
// 005395ec  8965f0               mov dword ptr [ebp - 0x10], esp
// 005395ef  8975e8               mov dword ptr [ebp - 0x18], esi
// 005395f2  894dd8               mov dword ptr [ebp - 0x28], ecx
// 005395f5  897ddc               mov dword ptr [ebp - 0x24], edi
// 005395f8  740c                 je 0x539606
// 005395fa  8d5704               lea edx, [edi + 4]
// 005395fd  b901000000           mov ecx, 1
// 00539602  f00fc10a             lock xadd dword ptr [edx], ecx
// 00539606  8b4e04               mov ecx, dword ptr [esi + 4]
// 00539609  3bc8                 cmp ecx, eax
// 0053960b  8945fc               mov dword ptr [ebp - 4], eax
// 0053960e  7504                 jne 0x539614
// 00539610  33db                 xor ebx, ebx
// 00539612  eb08                 jmp 0x53961c
// 00539614  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00539617  2bd9                 sub ebx, ecx
// 00539619  c1fb03               sar ebx, 3
// 0053961c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0053961f  3bd0                 cmp edx, eax
// 00539621  895d14               mov dword ptr [ebp + 0x14], ebx
// 00539624  0f842a020000         je 0x539854
// 0053962a  3bc8                 cmp ecx, eax
// 0053962c  7408                 je 0x539636
// 0053962e  8b4608               mov eax, dword ptr [esi + 8]
// 00539631  2bc1                 sub eax, ecx
// 00539633  c1f803               sar eax, 3
// 00539636  bfffffff1f           mov edi, 0x1fffffff
// 0053963b  2bf8                 sub edi, eax
// 0053963d  3bfa                 cmp edi, edx
// 0053963f  7305                 jae 0x539646
// 00539641  e8ea360900           call 0x5ccd30
// 00539646  85c9                 test ecx, ecx
// 00539648  7504                 jne 0x53964e
// 0053964a  33c0                 xor eax, eax
// 0053964c  eb08                 jmp 0x539656
// 0053964e  8b4608               mov eax, dword ptr [esi + 8]
// 00539651  2bc1                 sub eax, ecx
// 00539653  c1f803               sar eax, 3
// 00539656  03c2                 add eax, edx
// 00539658  3bd8                 cmp ebx, eax
// 0053965a  0f8325010000         jae 0x539785
// 00539660  8bc3                 mov eax, ebx
// 00539662  d1e8                 shr eax, 1
// 00539664  bfffffff1f           mov edi, 0x1fffffff
// 00539669  2bf8                 sub edi, eax
// 0053966b  3b7d14               cmp edi, dword ptr [ebp + 0x14]
// 0053966e  7309                 jae 0x539679
// 00539670  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 00539677  eb03                 jmp 0x53967c
// 00539679  014514               add dword ptr [ebp + 0x14], eax
// 0053967c  85c9                 test ecx, ecx
// 0053967e  7504                 jne 0x539684
// 00539680  33c0                 xor eax, eax
// 00539682  eb08                 jmp 0x53968c
// 00539684  8b4608               mov eax, dword ptr [esi + 8]
// 00539687  2bc1                 sub eax, ecx
// 00539689  c1f803               sar eax, 3
// 0053968c  03c2                 add eax, edx
// 0053968e  394514               cmp dword ptr [ebp + 0x14], eax
// 00539691  7315                 jae 0x5396a8
// 00539693  85c9                 test ecx, ecx
// 00539695  7504                 jne 0x53969b
// 00539697  33c0                 xor eax, eax
// 00539699  eb08                 jmp 0x5396a3
// 0053969b  8b4608               mov eax, dword ptr [esi + 8]
// 0053969e  2bc1                 sub eax, ecx
// 005396a0  c1f803               sar eax, 3
// 005396a3  03c2                 add eax, edx
// 005396a5  894514               mov dword ptr [ebp + 0x14], eax
// 005396a8  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005396ab  6a00                 push 0
// 005396ad  52                   push edx
// 005396ae  e80de40200           call 0x567ac0
// 005396b3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005396b6  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 005396b9  c645e400             mov byte ptr [ebp - 0x1c], 0
// 005396bd  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005396c0  51                   push ecx
// 005396c1  52                   push edx
// 005396c2  8bf8                 mov edi, eax
// 005396c4  8b4604               mov eax, dword ptr [esi + 4]
// 005396c7  56                   push esi
// 005396c8  57                   push edi
// 005396c9  53                   push ebx
// 005396ca  50                   push eax
// 005396cb  897de0               mov dword ptr [ebp - 0x20], edi
// 005396ce  897dec               mov dword ptr [ebp - 0x14], edi
// 005396d1  c645fc01             mov byte ptr [ebp - 4], 1
// 005396d5  e82644edff           call 0x40db00
// 005396da  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005396dd  83c420               add esp, 0x20
// 005396e0  8d4dd8               lea ecx, [ebp - 0x28]
// 005396e3  51                   push ecx
// 005396e4  52                   push edx
// 005396e5  50                   push eax
// 005396e6  8bce                 mov ecx, esi
// 005396e8  8945ec               mov dword ptr [ebp - 0x14], eax
// 005396eb  e840f8ffff           call 0x538f30
// 005396f0  8b4e08               mov ecx, dword ptr [esi + 8]
// 005396f3  c6450c00             mov byte ptr [ebp + 0xc], 0
// 005396f7  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005396fa  52                   push edx
// 005396fb  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005396fe  52                   push edx
// 005396ff  56                   push esi
// 00539700  50                   push eax
// 00539701  51                   push ecx
// 00539702  53                   push ebx
// 00539703  8945ec               mov dword ptr [ebp - 0x14], eax
// 00539706  e8f543edff           call 0x40db00
// 0053970b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053970e  83c418               add esp, 0x18
// 00539711  85c9                 test ecx, ecx
// 00539713  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0053971a  7504                 jne 0x539720
// 0053971c  33c0                 xor eax, eax
// 0053971e  eb08                 jmp 0x539728
// 00539720  8b4608               mov eax, dword ptr [esi + 8]
// 00539723  2bc1                 sub eax, ecx
// 00539725  c1f803               sar eax, 3
// 00539728  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0053972b  03d8                 add ebx, eax
// 0053972d  85c9                 test ecx, ecx
// 0053972f  741b                 je 0x53974c
// 00539731  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00539734  8b4608               mov eax, dword ptr [esi + 8]
// 00539737  52                   push edx
// 00539738  56                   push esi
// 00539739  50                   push eax
// 0053973a  51                   push ecx
// 0053973b  e81044edff           call 0x40db50
// 00539740  8b4604               mov eax, dword ptr [esi + 4]
// 00539743  50                   push eax
// 00539744  e819650f00           call 0x62fc62
// 00539749  83c414               add esp, 0x14
// 0053974c  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0053974f  8d0cc7               lea ecx, [edi + eax*8]
// 00539752  8d14df               lea edx, [edi + ebx*8]
// 00539755  894e0c               mov dword ptr [esi + 0xc], ecx
// 00539758  895608               mov dword ptr [esi + 8], edx
// 0053975b  897e04               mov dword ptr [esi + 4], edi
// 0053975e  e9ee000000           jmp 0x539851
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Insert_n@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEXV?$_Vector_iterator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@2@IABV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
