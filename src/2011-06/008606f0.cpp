// roc 2011-06 008606f0  unit: CXTPPropExchange  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008606f0
//
// 008606f0  6aff                 push -1
// 008606f2  685267a000           push 0xa06752
// 008606f7  64a100000000         mov eax, dword ptr fs:[0]
// 008606fd  50                   push eax
// 008606fe  51                   push ecx
// 008606ff  53                   push ebx
// 00860700  55                   push ebp
// 00860701  56                   push esi
// 00860702  57                   push edi
// 00860703  a12058c900           mov eax, dword ptr [0xc95820]
// 00860708  33c4                 xor eax, esp
// 0086070a  50                   push eax
// 0086070b  8d442418             lea eax, [esp + 0x18]
// 0086070f  64a300000000         mov dword ptr fs:[0], eax
// 00860715  8be9                 mov ebp, ecx
// 00860717  837d2800             cmp dword ptr [ebp + 0x28], 0
// 0086071b  8d4c2414             lea ecx, [esp + 0x14]
// 0086071f  0f858c000000         jne 0x8607b1
// 00860725  ff15b42da400         call dword ptr [0xa42db4]
// 0086072b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0086072f  8b07                 mov eax, dword ptr [edi]
// 00860731  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00860739  85c0                 test eax, eax
// 0086073b  7657                 jbe 0x860794
// 0086073d  8d440001             lea eax, [eax + eax + 1]
// 00860741  50                   push eax
// 00860742  e8f99bfaff           call 0x80a340
// 00860747  8bf0                 mov esi, eax
// 00860749  33c0                 xor eax, eax
// 0086074b  83c404               add esp, 4
// 0086074e  3907                 cmp dword ptr [edi], eax
// 00860750  7628                 jbe 0x86077a
// 00860752  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00860756  8b11                 mov edx, dword ptr [ecx]
// 00860758  0fb61410             movzx edx, byte ptr [eax + edx]
// 0086075c  80e20f               and dl, 0xf
// 0086075f  80c241               add dl, 0x41
// 00860762  881446               mov byte ptr [esi + eax*2], dl
// 00860765  8b11                 mov edx, dword ptr [ecx]
// 00860767  0fb61410             movzx edx, byte ptr [eax + edx]
// 0086076b  c0ea04               shr dl, 4
// 0086076e  80c241               add dl, 0x41
// 00860771  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 00860775  40                   inc eax
// 00860776  3b07                 cmp eax, dword ptr [edi]
// 00860778  72dc                 jb 0x860756
// 0086077a  8b07                 mov eax, dword ptr [edi]
// 0086077c  56                   push esi
// 0086077d  8d4c2418             lea ecx, [esp + 0x18]
// 00860781  c6044600             mov byte ptr [esi + eax*2], 0
// 00860785  ff15a42da400         call dword ptr [0xa42da4]
// 0086078b  56                   push esi
// 0086078c  e8739bfaff           call 0x80a304
// 00860791  83c404               add esp, 4
// 00860794  8b542428             mov edx, dword ptr [esp + 0x28]
// 00860798  68cabea500           push 0xa5beca
// 0086079d  8d4c2418             lea ecx, [esp + 0x18]
// 008607a1  51                   push ecx
// 008607a2  52                   push edx
// 008607a3  55                   push ebp
// 008607a4  e867f8ffff           call 0x860010
// 008607a9  83c410               add esp, 0x10
// 008607ac  e9d5000000           jmp 0x860886
// 008607b1  ff15b42da400         call dword ptr [0xa42db4]
// 008607b7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008607bb  8d442414             lea eax, [esp + 0x14]
// 008607bf  50                   push eax
// 008607c0  51                   push ecx
// 008607c1  55                   push ebp
// 008607c2  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008607ca  e811f8ffff           call 0x85ffe0
// 008607cf  83c40c               add esp, 0xc
// 008607d2  8d4c2414             lea ecx, [esp + 0x14]
// 008607d6  85c0                 test eax, eax
// 008607d8  745d                 je 0x860837
// 008607da  ff15a826a400         call dword ptr [0xa426a8]
// 008607e0  85c0                 test eax, eax
// 008607e2  0f8e9e000000         jle 0x860886
// 008607e8  8d4c2414             lea ecx, [esp + 0x14]
// 008607ec  ff15a826a400         call dword ptr [0xa426a8]
// 008607f2  8bf8                 mov edi, eax
// 008607f4  85ff                 test edi, edi
// 008607f6  743b                 je 0x860833
// 008607f8  8bd7                 mov edx, edi
// 008607fa  81e201000080         and edx, 0x80000001
// 00860800  7905                 jns 0x860807
// 00860802  4a                   dec edx
// 00860803  83cafe               or edx, 0xfffffffe
// 00860806  42                   inc edx
// 00860807  752a                 jne 0x860833
// 00860809  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0086080d  99                   cdq 
// 0086080e  2bc2                 sub eax, edx
// 00860810  8bf0                 mov esi, eax
// 00860812  d1fe                 sar esi, 1
// 00860814  837d0000             cmp dword ptr [ebp], 0
// 00860818  7527                 jne 0x860841
// 0086081a  56                   push esi
// 0086081b  ff15400aa400         call dword ptr [0xa40a40]
// 00860821  894500               mov dword ptr [ebp], eax
// 00860824  8b442434             mov eax, dword ptr [esp + 0x34]
// 00860828  83c404               add esp, 4
// 0086082b  8930                 mov dword ptr [eax], esi
// 0086082d  837d0000             cmp dword ptr [ebp], 0
// 00860831  7516                 jne 0x860849
// 00860833  8d4c2414             lea ecx, [esp + 0x14]
// 00860837  ff15082ea400         call dword ptr [0xa42e08]
// 0086083d  33c0                 xor eax, eax
// 0086083f  eb54                 jmp 0x860895
// 00860841  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00860845  3931                 cmp dword ptr [ecx], esi
// 00860847  72ea                 jb 0x860833
// 00860849  33f6                 xor esi, esi
// 0086084b  85ff                 test edi, edi
// 0086084d  7e37                 jle 0x860886
// 0086084f  90                   nop 
// 00860850  8d5601               lea edx, [esi + 1]
// 00860853  52                   push edx
// 00860854  8d4c2418             lea ecx, [esp + 0x18]
// 00860858  ff153c25a400         call dword ptr [0xa4253c]
// 0086085e  8ad8                 mov bl, al
// 00860860  fecb                 dec bl
// 00860862  c0e304               shl bl, 4
// 00860865  56                   push esi
// 00860866  8d4c2418             lea ecx, [esp + 0x18]
// 0086086a  80eb41               sub bl, 0x41
// 0086086d  ff153c25a400         call dword ptr [0xa4253c]
// 00860873  8b5500               mov edx, dword ptr [ebp]
// 00860876  8bce                 mov ecx, esi
// 00860878  02c3                 add al, bl
// 0086087a  d1e9                 shr ecx, 1
// 0086087c  83c602               add esi, 2
// 0086087f  3bf7                 cmp esi, edi
// 00860881  880411               mov byte ptr [ecx + edx], al
// 00860884  7cca                 jl 0x860850
// 00860886  8d4c2414             lea ecx, [esp + 0x14]
// 0086088a  ff15082ea400         call dword ptr [0xa42e08]
// 00860890  b801000000           mov eax, 1
// 00860895  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00860899  64890d00000000       mov dword ptr fs:[0], ecx
// 008608a0  59                   pop ecx
// 008608a1  5f                   pop edi
// 008608a2  5e                   pop esi
// 008608a3  5d                   pop ebp
// 008608a4  5b                   pop ebx
// 008608a5  83c410               add esp, 0x10
// 008608a8  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchange@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp