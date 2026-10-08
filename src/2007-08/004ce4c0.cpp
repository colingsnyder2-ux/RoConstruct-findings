// roc 2007-08 004ce4c0  unit: 0RBX::View  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce4c0
//
// 004ce4c0  51                   push ecx
// 004ce4c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ce4c5  33d2                 xor edx, edx
// 004ce4c7  3bc2                 cmp eax, edx
// 004ce4c9  891424               mov dword ptr [esp], edx
// 004ce4cc  7423                 je 0x4ce4f1
// 004ce4ce  56                   push esi
// 004ce4cf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ce4d3  52                   push edx
// 004ce4d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ce4d8  52                   push edx
// 004ce4d9  56                   push esi
// 004ce4da  50                   push eax
// 004ce4db  e89095fdff           call 0x4a7a70
// 004ce4e0  8bc8                 mov ecx, eax
// 004ce4e2  83c110               add ecx, 0x10
// 004ce4e5  e8a6faffff           call 0x4cdf90
// 004ce4ea  8bc6                 mov eax, esi
// 004ce4ec  5e                   pop esi
// 004ce4ed  59                   pop ecx
// 004ce4ee  c20c00               ret 0xc
// 004ce4f1  8b442408             mov eax, dword ptr [esp + 8]
// 004ce4f5  895004               mov dword ptr [eax + 4], edx
// 004ce4f8  895008               mov dword ptr [eax + 8], edx
// 004ce4fb  88500c               mov byte ptr [eax + 0xc], dl
// 004ce4fe  59                   pop ecx
// 004ce4ff  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@QAE?AVconnection@signals@boost@@PAVSignalSource@23@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
