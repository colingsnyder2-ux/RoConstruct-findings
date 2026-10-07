// roc 2008-06 0063d8e0  unit: RBX::VSparkles::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d8e0
//
// 0063d8e0  6aff                 push -1
// 0063d8e2  68880d7c00           push 0x7c0d88
// 0063d8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0063d8ed  50                   push eax
// 0063d8ee  64892500000000       mov dword ptr fs:[0], esp
// 0063d8f5  83ec08               sub esp, 8
// 0063d8f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063d8fc  56                   push esi
// 0063d8fd  57                   push edi
// 0063d8fe  8bf1                 mov esi, ecx
// 0063d900  89742408             mov dword ptr [esp + 8], esi
// 0063d904  50                   push eax
// 0063d905  51                   push ecx
// 0063d906  8bc4                 mov eax, esp
// 0063d908  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063d910  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0063d918  89642414             mov dword ptr [esp + 0x14], esp
// 0063d91c  c70000000000         mov dword ptr [eax], 0
// 0063d922  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0063d926  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063d92a  51                   push ecx
// 0063d92b  52                   push edx
// 0063d92c  c644242801           mov byte ptr [esp + 0x28], 1
// 0063d931  e84a2ef8ff           call 0x5c0780
// 0063d936  50                   push eax
// 0063d937  8bce                 mov ecx, esi
// 0063d939  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063d93e  e84dc9dcff           call 0x40a290
// 0063d943  6a18                 push 0x18
// 0063d945  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063d94a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 0063d950  e8cb2f0600           call 0x6a0920
// 0063d955  83c404               add esp, 4
// 0063d958  85c0                 test eax, eax
// 0063d95a  741e                 je 0x63d97a
// 0063d95c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0063d960  33c9                 xor ecx, ecx
// 0063d962  33d2                 xor edx, edx
// 0063d964  897808               mov dword ptr [eax + 8], edi
// 0063d967  c700c0a08400         mov dword ptr [eax], 0x84a0c0
// 0063d96d  897004               mov dword ptr [eax + 4], esi
// 0063d970  894810               mov dword ptr [eax + 0x10], ecx
// 0063d973  895014               mov dword ptr [eax + 0x14], edx
// 0063d976  8bf8                 mov edi, eax
// 0063d978  eb02                 jmp 0x63d97c
// 0063d97a  33ff                 xor edi, edi
// 0063d97c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0063d97f  3bf8                 cmp edi, eax
// 0063d981  740d                 je 0x63d990
// 0063d983  85c0                 test eax, eax
// 0063d985  7409                 je 0x63d990
// 0063d987  50                   push eax
// 0063d988  e8ed2c0600           call 0x6a067a
// 0063d98d  83c404               add esp, 4
// 0063d990  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063d994  897e18               mov dword ptr [esi + 0x18], edi
// 0063d997  5f                   pop edi
// 0063d998  8bc6                 mov eax, esi
// 0063d99a  64890d00000000       mov dword ptr fs:[0], ecx
// 0063d9a1  5e                   pop esi
// 0063d9a2  83c414               add esp, 0x14
// 0063d9a5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
