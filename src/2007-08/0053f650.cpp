// roc 2007-08 0053f650  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f650
//
// 0053f650  6aff                 push -1
// 0053f652  6893137500           push 0x751393
// 0053f657  64a100000000         mov eax, dword ptr fs:[0]
// 0053f65d  50                   push eax
// 0053f65e  64892500000000       mov dword ptr fs:[0], esp
// 0053f665  83ec08               sub esp, 8
// 0053f668  56                   push esi
// 0053f669  57                   push edi
// 0053f66a  8bf9                 mov edi, ecx
// 0053f66c  6a10                 push 0x10
// 0053f66e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053f676  e87b080f00           call 0x62fef6
// 0053f67b  83c404               add esp, 4
// 0053f67e  89442408             mov dword ptr [esp + 8], eax
// 0053f682  85c0                 test eax, eax
// 0053f684  8b742428             mov esi, dword ptr [esp + 0x28]
// 0053f688  c644241801           mov byte ptr [esp + 0x18], 1
// 0053f68d  7430                 je 0x53f6bf
// 0053f68f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053f693  83ec08               sub esp, 8
// 0053f696  85f6                 test esi, esi
// 0053f698  8bcc                 mov ecx, esp
// 0053f69a  8911                 mov dword ptr [ecx], edx
// 0053f69c  89642414             mov dword ptr [esp + 0x14], esp
// 0053f6a0  897104               mov dword ptr [ecx + 4], esi
// 0053f6a3  740c                 je 0x53f6b1
// 0053f6a5  8d4e04               lea ecx, [esi + 4]
// 0053f6a8  ba01000000           mov edx, 1
// 0053f6ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f6b1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053f6b5  51                   push ecx
// 0053f6b6  8bc8                 mov ecx, eax
// 0053f6b8  e8b3f8ffff           call 0x53ef70
// 0053f6bd  eb02                 jmp 0x53f6c1
// 0053f6bf  33c0                 xor eax, eax
// 0053f6c1  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0053f6c4  85c9                 test ecx, ecx
// 0053f6c6  7505                 jne 0x53f6cd
// 0053f6c8  894718               mov dword ptr [edi + 0x18], eax
// 0053f6cb  eb02                 jmp 0x53f6cf
// 0053f6cd  8901                 mov dword ptr [ecx], eax
// 0053f6cf  85f6                 test esi, esi
// 0053f6d1  89471c               mov dword ptr [edi + 0x1c], eax
// 0053f6d4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0053f6dc  742a                 je 0x53f708
// 0053f6de  8d5604               lea edx, [esi + 4]
// 0053f6e1  83c8ff               or eax, 0xffffffff
// 0053f6e4  f00fc102             lock xadd dword ptr [edx], eax
// 0053f6e8  751e                 jne 0x53f708
// 0053f6ea  8b16                 mov edx, dword ptr [esi]
// 0053f6ec  8b4204               mov eax, dword ptr [edx + 4]
// 0053f6ef  8bce                 mov ecx, esi
// 0053f6f1  ffd0                 call eax
// 0053f6f3  8d4e08               lea ecx, [esi + 8]
// 0053f6f6  83caff               or edx, 0xffffffff
// 0053f6f9  f00fc111             lock xadd dword ptr [ecx], edx
// 0053f6fd  7509                 jne 0x53f708
// 0053f6ff  8b06                 mov eax, dword ptr [esi]
// 0053f701  8b5008               mov edx, dword ptr [eax + 8]
// 0053f704  8bce                 mov ecx, esi
// 0053f706  ffd2                 call edx
// 0053f708  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053f70c  5f                   pop edi
// 0053f70d  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f714  5e                   pop esi
// 0053f715  83c414               add esp, 0x14
// 0053f718  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??$addAttribute@VInstanceHandle@RBX@@@XmlElement@@QAEXABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
