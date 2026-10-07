// roc 2008-06 00444680  unit: RBX::MergeBinder  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444680
//
// 00444680  6aff                 push -1
// 00444682  68880d7c00           push 0x7c0d88
// 00444687  64a100000000         mov eax, dword ptr fs:[0]
// 0044468d  50                   push eax
// 0044468e  64892500000000       mov dword ptr fs:[0], esp
// 00444695  83ec08               sub esp, 8
// 00444698  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044469c  56                   push esi
// 0044469d  57                   push edi
// 0044469e  8bf1                 mov esi, ecx
// 004446a0  89742408             mov dword ptr [esp + 8], esi
// 004446a4  50                   push eax
// 004446a5  51                   push ecx
// 004446a6  8bc4                 mov eax, esp
// 004446a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004446b0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004446b8  89642414             mov dword ptr [esp + 0x14], esp
// 004446bc  c70000000000         mov dword ptr [eax], 0
// 004446c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004446c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 004446ca  51                   push ecx
// 004446cb  52                   push edx
// 004446cc  c644242801           mov byte ptr [esp + 0x28], 1
// 004446d1  e89a73fcff           call 0x40ba70
// 004446d6  50                   push eax
// 004446d7  8bce                 mov ecx, esi
// 004446d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004446de  e8ad5bfcff           call 0x40a290
// 004446e3  6a18                 push 0x18
// 004446e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004446ea  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 004446f0  e82bc22500           call 0x6a0920
// 004446f5  83c404               add esp, 4
// 004446f8  85c0                 test eax, eax
// 004446fa  741e                 je 0x44471a
// 004446fc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00444700  33c9                 xor ecx, ecx
// 00444702  33d2                 xor edx, edx
// 00444704  897808               mov dword ptr [eax + 8], edi
// 00444707  c70098588100         mov dword ptr [eax], 0x815898
// 0044470d  897004               mov dword ptr [eax + 4], esi
// 00444710  894810               mov dword ptr [eax + 0x10], ecx
// 00444713  895014               mov dword ptr [eax + 0x14], edx
// 00444716  8bf8                 mov edi, eax
// 00444718  eb02                 jmp 0x44471c
// 0044471a  33ff                 xor edi, edi
// 0044471c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0044471f  3bf8                 cmp edi, eax
// 00444721  740d                 je 0x444730
// 00444723  85c0                 test eax, eax
// 00444725  7409                 je 0x444730
// 00444727  50                   push eax
// 00444728  e84dbf2500           call 0x6a067a
// 0044472d  83c404               add esp, 4
// 00444730  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00444734  897e18               mov dword ptr [esi + 0x18], edi
// 00444737  5f                   pop edi
// 00444738  8bc6                 mov eax, esi
// 0044473a  64890d00000000       mov dword ptr fs:[0], ecx
// 00444741  5e                   pop esi
// 00444742  83c414               add esp, 0x14
// 00444745  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
