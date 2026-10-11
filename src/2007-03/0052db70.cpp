// roc 2007-03 0052db70  unit: seg_00520000  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052db70
//
// 0052db70  6aff                 push -1
// 0052db72  68e82c7500           push 0x752ce8
// 0052db77  64a100000000         mov eax, dword ptr fs:[0]
// 0052db7d  50                   push eax
// 0052db7e  64892500000000       mov dword ptr fs:[0], esp
// 0052db85  83ec10               sub esp, 0x10
// 0052db88  53                   push ebx
// 0052db89  55                   push ebp
// 0052db8a  56                   push esi
// 0052db8b  57                   push edi
// 0052db8c  6824b18b00           push 0x8bb124
// 0052db91  6860d65200           push 0x52d660
// 0052db96  e8b58c1f00           call 0x726850
// 0052db9b  83c408               add esp, 8
// 0052db9e  e85dfaffff           call 0x52d600
// 0052dba3  8bf0                 mov esi, eax
// 0052dba5  8bce                 mov ecx, esi
// 0052dba7  89742418             mov dword ptr [esp + 0x18], esi
// 0052dbab  e8d08e1f00           call 0x726a80
// 0052dbb0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0052dbb5  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052dbb9  50                   push eax
// 0052dbba  8d4c2414             lea ecx, [esp + 0x14]
// 0052dbbe  51                   push ecx
// 0052dbbf  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0052dbc7  e884fcffff           call 0x52d850
// 0052dbcc  8bc8                 mov ecx, eax
// 0052dbce  e8dd250600           call 0x5901b0
// 0052dbd3  e878fcffff           call 0x52d850
// 0052dbd8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052dbdc  85ff                 test edi, edi
// 0052dbde  8b5804               mov ebx, dword ptr [eax + 4]
// 0052dbe1  7404                 je 0x52dbe7
// 0052dbe3  3bf8                 cmp edi, eax
// 0052dbe5  7406                 je 0x52dbed
// 0052dbe7  ff1544e97700         call dword ptr [0x77e944]
// 0052dbed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052dbf1  3beb                 cmp ebp, ebx
// 0052dbf3  741a                 je 0x52dc0f
// 0052dbf5  85ff                 test edi, edi
// 0052dbf7  7506                 jne 0x52dbff
// 0052dbf9  ff1544e97700         call dword ptr [0x77e944]
// 0052dbff  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0052dc02  7506                 jne 0x52dc0a
// 0052dc04  ff1544e97700         call dword ptr [0x77e944]
// 0052dc0a  8b7d28               mov edi, dword ptr [ebp + 0x28]
// 0052dc0d  eb07                 jmp 0x52dc16
// 0052dc0f  e8bcfeffff           call 0x52dad0
// 0052dc14  8bf8                 mov edi, eax
// 0052dc16  8bce                 mov ecx, esi
// 0052dc18  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0052dc20  e87b8e1f00           call 0x726aa0
// 0052dc25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052dc29  8bc7                 mov eax, edi
// 0052dc2b  5f                   pop edi
// 0052dc2c  5e                   pop esi
// 0052dc2d  5d                   pop ebp
// 0052dc2e  5b                   pop ebx
// 0052dc2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052dc36  83c41c               add esp, 0x1c
// 0052dc39  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?lookup@Name@RBX@@SAABV12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
