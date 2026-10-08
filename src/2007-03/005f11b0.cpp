// roc 2007-03 005f11b0  unit: seg_005f0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f11b0
//
// 005f11b0  8b542404             mov edx, dword ptr [esp + 4]
// 005f11b4  8b4208               mov eax, dword ptr [edx + 8]
// 005f11b7  56                   push esi
// 005f11b8  8b30                 mov esi, dword ptr [eax]
// 005f11ba  897208               mov dword ptr [edx + 8], esi
// 005f11bd  8b30                 mov esi, dword ptr [eax]
// 005f11bf  807e1900             cmp byte ptr [esi + 0x19], 0
// 005f11c3  7503                 jne 0x5f11c8
// 005f11c5  895604               mov dword ptr [esi + 4], edx
// 005f11c8  8b7204               mov esi, dword ptr [edx + 4]
// 005f11cb  897004               mov dword ptr [eax + 4], esi
// 005f11ce  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f11d1  3b5104               cmp edx, dword ptr [ecx + 4]
// 005f11d4  5e                   pop esi
// 005f11d5  750b                 jne 0x5f11e2
// 005f11d7  894104               mov dword ptr [ecx + 4], eax
// 005f11da  8910                 mov dword ptr [eax], edx
// 005f11dc  894204               mov dword ptr [edx + 4], eax
// 005f11df  c20400               ret 4
// 005f11e2  8b4a04               mov ecx, dword ptr [edx + 4]
// 005f11e5  3b11                 cmp edx, dword ptr [ecx]
// 005f11e7  750a                 jne 0x5f11f3
// 005f11e9  8901                 mov dword ptr [ecx], eax
// 005f11eb  8910                 mov dword ptr [eax], edx
// 005f11ed  894204               mov dword ptr [edx + 4], eax
// 005f11f0  c20400               ret 4
// 005f11f3  894108               mov dword ptr [ecx + 8], eax
// 005f11f6  8910                 mov dword ptr [eax], edx
// 005f11f8  894204               mov dword ptr [edx + 4], eax
// 005f11fb  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
