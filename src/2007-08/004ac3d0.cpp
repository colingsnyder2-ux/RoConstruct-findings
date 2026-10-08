// roc 2007-08 004ac3d0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ac3d0
//
// 004ac3d0  51                   push ecx
// 004ac3d1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ac3d5  33d2                 xor edx, edx
// 004ac3d7  3bc2                 cmp eax, edx
// 004ac3d9  891424               mov dword ptr [esp], edx
// 004ac3dc  7423                 je 0x4ac401
// 004ac3de  56                   push esi
// 004ac3df  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ac3e3  52                   push edx
// 004ac3e4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ac3e8  52                   push edx
// 004ac3e9  56                   push esi
// 004ac3ea  50                   push eax
// 004ac3eb  e880b6ffff           call 0x4a7a70
// 004ac3f0  8bc8                 mov ecx, eax
// 004ac3f2  83c110               add ecx, 0x10
// 004ac3f5  e8967bfeff           call 0x493f90
// 004ac3fa  8bc6                 mov eax, esi
// 004ac3fc  5e                   pop esi
// 004ac3fd  59                   pop ecx
// 004ac3fe  c20c00               ret 0xc
// 004ac401  8b442408             mov eax, dword ptr [esp + 8]
// 004ac405  895004               mov dword ptr [eax + 4], edx
// 004ac408  895008               mov dword ptr [eax + 8], edx
// 004ac40b  88500c               mov byte ptr [eax + 0xc], dl
// 004ac40e  59                   pop ecx
// 004ac40f  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@QAE?AVconnection@signals@boost@@PAVSignalSource@23@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
