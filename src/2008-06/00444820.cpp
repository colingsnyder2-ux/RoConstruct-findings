// roc 2008-06 00444820  unit: RBX::MergeBinder  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444820
//
// 00444820  6aff                 push -1
// 00444822  68880d7c00           push 0x7c0d88
// 00444827  64a100000000         mov eax, dword ptr fs:[0]
// 0044482d  50                   push eax
// 0044482e  64892500000000       mov dword ptr fs:[0], esp
// 00444835  83ec08               sub esp, 8
// 00444838  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044483c  56                   push esi
// 0044483d  57                   push edi
// 0044483e  8bf1                 mov esi, ecx
// 00444840  89742408             mov dword ptr [esp + 8], esi
// 00444844  50                   push eax
// 00444845  51                   push ecx
// 00444846  8bc4                 mov eax, esp
// 00444848  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00444850  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00444858  89642414             mov dword ptr [esp + 0x14], esp
// 0044485c  c70000000000         mov dword ptr [eax], 0
// 00444862  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00444866  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044486a  51                   push ecx
// 0044486b  52                   push edx
// 0044486c  c644242801           mov byte ptr [esp + 0x28], 1
// 00444871  e86a72fcff           call 0x40bae0
// 00444876  50                   push eax
// 00444877  8bce                 mov ecx, esi
// 00444879  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0044487e  e81deaffff           call 0x4432a0
// 00444883  6a18                 push 0x18
// 00444885  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0044488a  c70688598100         mov dword ptr [esi], 0x815988
// 00444890  e88bc02500           call 0x6a0920
// 00444895  83c404               add esp, 4
// 00444898  85c0                 test eax, eax
// 0044489a  741e                 je 0x4448ba
// 0044489c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004448a0  33c9                 xor ecx, ecx
// 004448a2  33d2                 xor edx, edx
// 004448a4  897808               mov dword ptr [eax + 8], edi
// 004448a7  c700c0588100         mov dword ptr [eax], 0x8158c0
// 004448ad  897004               mov dword ptr [eax + 4], esi
// 004448b0  894810               mov dword ptr [eax + 0x10], ecx
// 004448b3  895014               mov dword ptr [eax + 0x14], edx
// 004448b6  8bf8                 mov edi, eax
// 004448b8  eb02                 jmp 0x4448bc
// 004448ba  33ff                 xor edi, edi
// 004448bc  8b4618               mov eax, dword ptr [esi + 0x18]
// 004448bf  3bf8                 cmp edi, eax
// 004448c1  740d                 je 0x4448d0
// 004448c3  85c0                 test eax, eax
// 004448c5  7409                 je 0x4448d0
// 004448c7  50                   push eax
// 004448c8  e8adbd2500           call 0x6a067a
// 004448cd  83c404               add esp, 4
// 004448d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004448d4  897e18               mov dword ptr [esi + 0x18], edi
// 004448d7  5f                   pop edi
// 004448d8  8bc6                 mov eax, esi
// 004448da  64890d00000000       mov dword ptr fs:[0], ecx
// 004448e1  5e                   pop esi
// 004448e2  83c414               add esp, 0x14
// 004448e5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
