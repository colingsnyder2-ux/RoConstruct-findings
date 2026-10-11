// roc 2007-08 0052cbd0  unit: seg_00520000  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cbd0
//
// 0052cbd0  6aff                 push -1
// 0052cbd2  68e8047500           push 0x7504e8
// 0052cbd7  64a100000000         mov eax, dword ptr fs:[0]
// 0052cbdd  50                   push eax
// 0052cbde  64892500000000       mov dword ptr fs:[0], esp
// 0052cbe5  83ec10               sub esp, 0x10
// 0052cbe8  53                   push ebx
// 0052cbe9  55                   push ebp
// 0052cbea  56                   push esi
// 0052cbeb  57                   push edi
// 0052cbec  68540c8c00           push 0x8c0c54
// 0052cbf1  6830c75200           push 0x52c730
// 0052cbf6  e825891f00           call 0x725520
// 0052cbfb  83c408               add esp, 8
// 0052cbfe  e8cdfaffff           call 0x52c6d0
// 0052cc03  8bf0                 mov esi, eax
// 0052cc05  8bce                 mov ecx, esi
// 0052cc07  89742418             mov dword ptr [esp + 0x18], esi
// 0052cc0b  e8408b1f00           call 0x725750
// 0052cc10  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0052cc15  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052cc19  50                   push eax
// 0052cc1a  8d4c2414             lea ecx, [esp + 0x14]
// 0052cc1e  51                   push ecx
// 0052cc1f  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0052cc27  e884fcffff           call 0x52c8b0
// 0052cc2c  8bc8                 mov ecx, eax
// 0052cc2e  e83df10800           call 0x5bbd70
// 0052cc33  e878fcffff           call 0x52c8b0
// 0052cc38  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052cc3c  85ff                 test edi, edi
// 0052cc3e  8b5804               mov ebx, dword ptr [eax + 4]
// 0052cc41  7404                 je 0x52cc47
// 0052cc43  3bf8                 cmp edi, eax
// 0052cc45  7406                 je 0x52cc4d
// 0052cc47  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052cc4d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052cc51  3beb                 cmp ebp, ebx
// 0052cc53  741a                 je 0x52cc6f
// 0052cc55  85ff                 test edi, edi
// 0052cc57  7506                 jne 0x52cc5f
// 0052cc59  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052cc5f  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0052cc62  7506                 jne 0x52cc6a
// 0052cc64  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052cc6a  8b7d28               mov edi, dword ptr [ebp + 0x28]
// 0052cc6d  eb07                 jmp 0x52cc76
// 0052cc6f  e8bcfeffff           call 0x52cb30
// 0052cc74  8bf8                 mov edi, eax
// 0052cc76  8bce                 mov ecx, esi
// 0052cc78  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0052cc80  e8eb8a1f00           call 0x725770
// 0052cc85  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052cc89  8bc7                 mov eax, edi
// 0052cc8b  5f                   pop edi
// 0052cc8c  5e                   pop esi
// 0052cc8d  5d                   pop ebp
// 0052cc8e  5b                   pop ebx
// 0052cc8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052cc96  83c41c               add esp, 0x1c
// 0052cc99  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?lookup@Name@RBX@@SAABV12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
