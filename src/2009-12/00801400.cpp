// roc 2009-12 00801400  unit: CXTPPaintManager  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801400
//
// 00801400  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00801405  0f84ce000000         je 0x8014d9
// 0080140b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0080140f  56                   push esi
// 00801410  7479                 je 0x80148b
// 00801412  8db138010000         lea esi, [ecx + 0x138]
// 00801418  8bce                 mov ecx, esi
// 0080141a  e8a1a70600           call 0x86bbc0
// 0080141f  85c0                 test eax, eax
// 00801421  7468                 je 0x80148b
// 00801423  33c9                 xor ecx, ecx
// 00801425  394c2430             cmp dword ptr [esp + 0x30], ecx
// 00801429  7507                 jne 0x801432
// 0080142b  b903000000           mov ecx, 3
// 00801430  eb10                 jmp 0x801442
// 00801432  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00801436  740a                 je 0x801442
// 00801438  33c9                 xor ecx, ecx
// 0080143a  394c2428             cmp dword ptr [esp + 0x28], ecx
// 0080143e  0f95c1               setne cl
// 00801441  41                   inc ecx
// 00801442  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00801446  83f801               cmp eax, 1
// 00801449  7505                 jne 0x801450
// 0080144b  83c104               add ecx, 4
// 0080144e  eb08                 jmp 0x801458
// 00801450  83f802               cmp eax, 2
// 00801453  7503                 jne 0x801458
// 00801455  83c108               add ecx, 8
// 00801458  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080145c  85c0                 test eax, eax
// 0080145e  7403                 je 0x801463
// 00801460  8b4004               mov eax, dword ptr [eax + 4]
// 00801463  6a00                 push 0
// 00801465  8d542414             lea edx, [esp + 0x14]
// 00801469  52                   push edx
// 0080146a  41                   inc ecx
// 0080146b  51                   push ecx
// 0080146c  6a02                 push 2
// 0080146e  50                   push eax
// 0080146f  8bce                 mov ecx, esi
// 00801471  e8caa30600           call 0x86b840
// 00801476  8b442408             mov eax, dword ptr [esp + 8]
// 0080147a  5e                   pop esi
// 0080147b  c7000d000000         mov dword ptr [eax], 0xd
// 00801481  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00801488  c22c00               ret 0x2c
// 0080148b  837c243000           cmp dword ptr [esp + 0x30], 0
// 00801490  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00801494  7409                 je 0x80149f
// 00801496  83f802               cmp eax, 2
// 00801499  7404                 je 0x80149f
// 0080149b  33c9                 xor ecx, ecx
// 0080149d  eb05                 jmp 0x8014a4
// 0080149f  b900010000           mov ecx, 0x100
// 008014a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008014a8  f7d8                 neg eax
// 008014aa  1bc0                 sbb eax, eax
// 008014ac  2500040000           and eax, 0x400
// 008014b1  f7da                 neg edx
// 008014b3  1bd2                 sbb edx, edx
// 008014b5  81e200020000         and edx, 0x200
// 008014bb  0bc2                 or eax, edx
// 008014bd  0bc1                 or eax, ecx
// 008014bf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008014c3  8b5104               mov edx, dword ptr [ecx + 4]
// 008014c6  83c804               or eax, 4
// 008014c9  50                   push eax
// 008014ca  6a04                 push 4
// 008014cc  8d442418             lea eax, [esp + 0x18]
// 008014d0  50                   push eax
// 008014d1  52                   push edx
// 008014d2  ff1568ca9800         call dword ptr [0x98ca68]
// 008014d8  5e                   pop esi
// 008014d9  8b442404             mov eax, dword ptr [esp + 4]
// 008014dd  c7000d000000         mov dword ptr [eax], 0xd
// 008014e3  c740040d000000       mov dword ptr [eax + 4], 0xd
// 008014ea  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlRadioButtonMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
