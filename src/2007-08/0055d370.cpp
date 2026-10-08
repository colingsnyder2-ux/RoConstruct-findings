// roc 2007-08 0055d370  unit: RBX::DataModel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d370
//
// 0055d370  8b4104               mov eax, dword ptr [ecx + 4]
// 0055d373  56                   push esi
// 0055d374  8b7004               mov esi, dword ptr [eax + 4]
// 0055d377  807e1900             cmp byte ptr [esi + 0x19], 0
// 0055d37b  57                   push edi
// 0055d37c  8bf8                 mov edi, eax
// 0055d37e  7524                 jne 0x55d3a4
// 0055d380  53                   push ebx
// 0055d381  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055d385  53                   push ebx
// 0055d386  8d4e0c               lea ecx, [esi + 0xc]
// 0055d389  e882030300           call 0x58d710
// 0055d38e  84c0                 test al, al
// 0055d390  7405                 je 0x55d397
// 0055d392  8b7608               mov esi, dword ptr [esi + 8]
// 0055d395  eb04                 jmp 0x55d39b
// 0055d397  8bfe                 mov edi, esi
// 0055d399  8b36                 mov esi, dword ptr [esi]
// 0055d39b  807e1900             cmp byte ptr [esi + 0x19], 0
// 0055d39f  74e4                 je 0x55d385
// 0055d3a1  8bc7                 mov eax, edi
// 0055d3a3  5b                   pop ebx
// 0055d3a4  5f                   pop edi
// 0055d3a5  5e                   pop esi
// 0055d3a6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
