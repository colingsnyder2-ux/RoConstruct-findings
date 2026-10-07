// roc 2008-06 00491a50  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491a50
//
// 00491a50  6aff                 push -1
// 00491a52  68880d7c00           push 0x7c0d88
// 00491a57  64a100000000         mov eax, dword ptr fs:[0]
// 00491a5d  50                   push eax
// 00491a5e  64892500000000       mov dword ptr fs:[0], esp
// 00491a65  83ec08               sub esp, 8
// 00491a68  8b442424             mov eax, dword ptr [esp + 0x24]
// 00491a6c  56                   push esi
// 00491a6d  57                   push edi
// 00491a6e  8bf1                 mov esi, ecx
// 00491a70  89742408             mov dword ptr [esp + 8], esi
// 00491a74  50                   push eax
// 00491a75  51                   push ecx
// 00491a76  8bc4                 mov eax, esp
// 00491a78  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00491a80  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00491a88  89642414             mov dword ptr [esp + 0x14], esp
// 00491a8c  c70000000000         mov dword ptr [eax], 0
// 00491a92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00491a96  8b542428             mov edx, dword ptr [esp + 0x28]
// 00491a9a  51                   push ecx
// 00491a9b  52                   push edx
// 00491a9c  c644242801           mov byte ptr [esp + 0x28], 1
// 00491aa1  e8baf8ffff           call 0x491360
// 00491aa6  50                   push eax
// 00491aa7  8bce                 mov ecx, esi
// 00491aa9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00491aae  e8dd87f7ff           call 0x40a290
// 00491ab3  6a18                 push 0x18
// 00491ab5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00491aba  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 00491ac0  e85bee2000           call 0x6a0920
// 00491ac5  83c404               add esp, 4
// 00491ac8  85c0                 test eax, eax
// 00491aca  741e                 je 0x491aea
// 00491acc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00491ad0  33c9                 xor ecx, ecx
// 00491ad2  33d2                 xor edx, edx
// 00491ad4  897808               mov dword ptr [eax + 8], edi
// 00491ad7  c70010168200         mov dword ptr [eax], 0x821610
// 00491add  897004               mov dword ptr [eax + 4], esi
// 00491ae0  894810               mov dword ptr [eax + 0x10], ecx
// 00491ae3  895014               mov dword ptr [eax + 0x14], edx
// 00491ae6  8bf8                 mov edi, eax
// 00491ae8  eb02                 jmp 0x491aec
// 00491aea  33ff                 xor edi, edi
// 00491aec  8b4618               mov eax, dword ptr [esi + 0x18]
// 00491aef  3bf8                 cmp edi, eax
// 00491af1  740d                 je 0x491b00
// 00491af3  85c0                 test eax, eax
// 00491af5  7409                 je 0x491b00
// 00491af7  50                   push eax
// 00491af8  e87deb2000           call 0x6a067a
// 00491afd  83c404               add esp, 4
// 00491b00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00491b04  897e18               mov dword ptr [esi + 0x18], edi
// 00491b07  5f                   pop edi
// 00491b08  8bc6                 mov eax, esi
// 00491b0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00491b11  5e                   pop esi
// 00491b12  83c414               add esp, 0x14
// 00491b15  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
