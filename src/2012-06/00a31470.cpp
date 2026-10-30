// roc 2012-06 00a31470  unit: CXTRegistryManager  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31470
//
// 00a31470  6aff                 push -1
// 00a31472  680155ae00           push 0xae5501
// 00a31477  64a100000000         mov eax, dword ptr fs:[0]
// 00a3147d  50                   push eax
// 00a3147e  51                   push ecx
// 00a3147f  53                   push ebx
// 00a31480  55                   push ebp
// 00a31481  56                   push esi
// 00a31482  57                   push edi
// 00a31483  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a31488  33c4                 xor eax, esp
// 00a3148a  50                   push eax
// 00a3148b  8d442418             lea eax, [esp + 0x18]
// 00a3148f  64a300000000         mov dword ptr fs:[0], eax
// 00a31495  8bf1                 mov esi, ecx
// 00a31497  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a3149b  85ff                 test edi, edi
// 00a3149d  0f84cd000000         je 0xa31570
// 00a314a3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a314a7  85db                 test ebx, ebx
// 00a314a9  0f84c1000000         je 0xa31570
// 00a314af  c70700000000         mov dword ptr [edi], 0
// 00a314b5  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a314ba  c70300000000         mov dword ptr [ebx], 0
// 00a314c0  ff156046b200         call dword ptr [0xb24660]
// 00a314c6  84c0                 test al, al
// 00a314c8  0f84c8000000         je 0xa31596
// 00a314ce  8bce                 mov ecx, esi
// 00a314d0  e89bfaffff           call 0xa30f70
// 00a314d5  85c0                 test eax, eax
// 00a314d7  0f8493000000         je 0xa31570
// 00a314dd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a314e1  8b06                 mov eax, dword ptr [esi]
// 00a314e3  8b5008               mov edx, dword ptr [eax + 8]
// 00a314e6  6819000200           push 0x20019
// 00a314eb  51                   push ecx
// 00a314ec  8bce                 mov ecx, esi
// 00a314ee  ffd2                 call edx
// 00a314f0  8be8                 mov ebp, eax
// 00a314f2  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a314f6  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00a314fe  85ed                 test ebp, ebp
// 00a31500  746e                 je 0xa31570
// 00a31502  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a31506  8d442430             lea eax, [esp + 0x30]
// 00a3150a  50                   push eax
// 00a3150b  6a00                 push 0
// 00a3150d  8d4c241c             lea ecx, [esp + 0x1c]
// 00a31511  51                   push ecx
// 00a31512  6a00                 push 0
// 00a31514  53                   push ebx
// 00a31515  55                   push ebp
// 00a31516  ff151c20b200         call dword ptr [0xb2201c]
// 00a3151c  894610               mov dword ptr [esi + 0x10], eax
// 00a3151f  85c0                 test eax, eax
// 00a31521  7546                 jne 0xa31569
// 00a31523  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a31527  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a3152b  50                   push eax
// 00a3152c  8902                 mov dword ptr [edx], eax
// 00a3152e  e8bd0ef5ff           call 0x9823f0
// 00a31533  83c404               add esp, 4
// 00a31536  8d4c2430             lea ecx, [esp + 0x30]
// 00a3153a  51                   push ecx
// 00a3153b  50                   push eax
// 00a3153c  8d54241c             lea edx, [esp + 0x1c]
// 00a31540  52                   push edx
// 00a31541  6a00                 push 0
// 00a31543  53                   push ebx
// 00a31544  55                   push ebp
// 00a31545  8907                 mov dword ptr [edi], eax
// 00a31547  ff151c20b200         call dword ptr [0xb2201c]
// 00a3154d  894610               mov dword ptr [esi + 0x10], eax
// 00a31550  85c0                 test eax, eax
// 00a31552  7434                 je 0xa31588
// 00a31554  8b07                 mov eax, dword ptr [edi]
// 00a31556  85c0                 test eax, eax
// 00a31558  740f                 je 0xa31569
// 00a3155a  50                   push eax
// 00a3155b  e85a0ef5ff           call 0x9823ba
// 00a31560  83c404               add esp, 4
// 00a31563  c70700000000         mov dword ptr [edi], 0
// 00a31569  55                   push ebp
// 00a3156a  ff150420b200         call dword ptr [0xb22004]
// 00a31570  33c0                 xor eax, eax
// 00a31572  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a31576  64890d00000000       mov dword ptr fs:[0], ecx
// 00a3157d  59                   pop ecx
// 00a3157e  5f                   pop edi
// 00a3157f  5e                   pop esi
// 00a31580  5d                   pop ebp
// 00a31581  5b                   pop ebx
// 00a31582  83c410               add esp, 0x10
// 00a31585  c21000               ret 0x10
// 00a31588  55                   push ebp
// 00a31589  ff150420b200         call dword ptr [0xb22004]
// 00a3158f  b801000000           mov eax, 1
// 00a31594  ebdc                 jmp 0xa31572
// 00a31596  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a3159a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a3159e  6a00                 push 0
// 00a315a0  50                   push eax
// 00a315a1  51                   push ecx
// 00a315a2  8d542440             lea edx, [esp + 0x40]
// 00a315a6  52                   push edx
// 00a315a7  8bce                 mov ecx, esi
// 00a315a9  e812fcffff           call 0xa311c0
// 00a315ae  8d4c2434             lea ecx, [esp + 0x34]
// 00a315b2  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00a315ba  ff156046b200         call dword ptr [0xb24660]
// 00a315c0  8d4c2434             lea ecx, [esp + 0x34]
// 00a315c4  84c0                 test al, al
// 00a315c6  7408                 je 0xa315d0
// 00a315c8  ff15d047b200         call dword ptr [0xb247d0]
// 00a315ce  eba0                 jmp 0xa31570
// 00a315d0  ff155846b200         call dword ptr [0xb24658]
// 00a315d6  8be8                 mov ebp, eax
// 00a315d8  99                   cdq 
// 00a315d9  2bc2                 sub eax, edx
// 00a315db  d1f8                 sar eax, 1
// 00a315dd  50                   push eax
// 00a315de  8903                 mov dword ptr [ebx], eax
// 00a315e0  e80b0ef5ff           call 0x9823f0
// 00a315e5  83c404               add esp, 4
// 00a315e8  33f6                 xor esi, esi
// 00a315ea  8907                 mov dword ptr [edi], eax
// 00a315ec  85ed                 test ebp, ebp
// 00a315ee  7e35                 jle 0xa31625
// 00a315f0  8d4601               lea eax, [esi + 1]
// 00a315f3  50                   push eax
// 00a315f4  8d4c2438             lea ecx, [esp + 0x38]
// 00a315f8  ff15e844b200         call dword ptr [0xb244e8]
// 00a315fe  8ad8                 mov bl, al
// 00a31600  fecb                 dec bl
// 00a31602  c0e304               shl bl, 4
// 00a31605  56                   push esi
// 00a31606  8d4c2438             lea ecx, [esp + 0x38]
// 00a3160a  80eb41               sub bl, 0x41
// 00a3160d  ff15e844b200         call dword ptr [0xb244e8]
// 00a31613  8b17                 mov edx, dword ptr [edi]
// 00a31615  8bce                 mov ecx, esi
// 00a31617  02c3                 add al, bl
// 00a31619  d1e9                 shr ecx, 1
// 00a3161b  83c602               add esi, 2
// 00a3161e  3bf5                 cmp esi, ebp
// 00a31620  880411               mov byte ptr [ecx + edx], al
// 00a31623  7ccb                 jl 0xa315f0
// 00a31625  8d4c2434             lea ecx, [esp + 0x34]
// 00a31629  ff15d047b200         call dword ptr [0xb247d0]
// 00a3162f  b801000000           mov eax, 1
// 00a31634  e939ffffff           jmp 0xa31572
// copied from an identical function in another client (function ?GetProfileBinary@CXTRegistryManager@@QAEHPBD0PAPAEPAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTRegistryManager.cpp