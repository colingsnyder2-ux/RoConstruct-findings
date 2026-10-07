// roc 2008-06 00444750  unit: RBX::MergeBinder  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444750
//
// 00444750  6aff                 push -1
// 00444752  68880d7c00           push 0x7c0d88
// 00444757  64a100000000         mov eax, dword ptr fs:[0]
// 0044475d  50                   push eax
// 0044475e  64892500000000       mov dword ptr fs:[0], esp
// 00444765  83ec08               sub esp, 8
// 00444768  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044476c  56                   push esi
// 0044476d  57                   push edi
// 0044476e  8bf1                 mov esi, ecx
// 00444770  89742408             mov dword ptr [esp + 8], esi
// 00444774  50                   push eax
// 00444775  51                   push ecx
// 00444776  8bc4                 mov eax, esp
// 00444778  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00444780  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00444788  89642414             mov dword ptr [esp + 0x14], esp
// 0044478c  c70000000000         mov dword ptr [eax], 0
// 00444792  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00444796  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044479a  51                   push ecx
// 0044479b  52                   push edx
// 0044479c  c644242801           mov byte ptr [esp + 0x28], 1
// 004447a1  e8ca72fcff           call 0x40ba70
// 004447a6  50                   push eax
// 004447a7  8bce                 mov ecx, esi
// 004447a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004447ae  e87deaffff           call 0x443230
// 004447b3  6a18                 push 0x18
// 004447b5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004447ba  c70654598100         mov dword ptr [esi], 0x815954
// 004447c0  e85bc12500           call 0x6a0920
// 004447c5  83c404               add esp, 4
// 004447c8  85c0                 test eax, eax
// 004447ca  741e                 je 0x4447ea
// 004447cc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004447d0  33c9                 xor ecx, ecx
// 004447d2  33d2                 xor edx, edx
// 004447d4  897808               mov dword ptr [eax + 8], edi
// 004447d7  c700ac588100         mov dword ptr [eax], 0x8158ac
// 004447dd  897004               mov dword ptr [eax + 4], esi
// 004447e0  894810               mov dword ptr [eax + 0x10], ecx
// 004447e3  895014               mov dword ptr [eax + 0x14], edx
// 004447e6  8bf8                 mov edi, eax
// 004447e8  eb02                 jmp 0x4447ec
// 004447ea  33ff                 xor edi, edi
// 004447ec  8b4618               mov eax, dword ptr [esi + 0x18]
// 004447ef  3bf8                 cmp edi, eax
// 004447f1  740d                 je 0x444800
// 004447f3  85c0                 test eax, eax
// 004447f5  7409                 je 0x444800
// 004447f7  50                   push eax
// 004447f8  e87dbe2500           call 0x6a067a
// 004447fd  83c404               add esp, 4
// 00444800  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00444804  897e18               mov dword ptr [esi + 0x18], edi
// 00444807  5f                   pop edi
// 00444808  8bc6                 mov eax, esi
// 0044480a  64890d00000000       mov dword ptr fs:[0], ecx
// 00444811  5e                   pop esi
// 00444812  83c414               add esp, 0x14
// 00444815  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
