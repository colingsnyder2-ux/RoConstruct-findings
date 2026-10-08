// roc 2008-06 0057c270  unit: RBX::VInstance::?$SignalDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c270
//
// 0057c270  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0057c273  56                   push esi
// 0057c274  8b7004               mov esi, dword ptr [eax + 4]
// 0057c277  807e1900             cmp byte ptr [esi + 0x19], 0
// 0057c27b  57                   push edi
// 0057c27c  8bf8                 mov edi, eax
// 0057c27e  7524                 jne 0x57c2a4
// 0057c280  53                   push ebx
// 0057c281  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057c285  53                   push ebx
// 0057c286  8d4e0c               lea ecx, [esi + 0xc]
// 0057c289  e8528b0100           call 0x594de0
// 0057c28e  84c0                 test al, al
// 0057c290  7405                 je 0x57c297
// 0057c292  8b7608               mov esi, dword ptr [esi + 8]
// 0057c295  eb04                 jmp 0x57c29b
// 0057c297  8bfe                 mov edi, esi
// 0057c299  8b36                 mov esi, dword ptr [esi]
// 0057c29b  807e1900             cmp byte ptr [esi + 0x19], 0
// 0057c29f  74e4                 je 0x57c285
// 0057c2a1  8bc7                 mov eax, edi
// 0057c2a3  5b                   pop ebx
// 0057c2a4  5f                   pop edi
// 0057c2a5  5e                   pop esi
// 0057c2a6  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@2@ABVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
