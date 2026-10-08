// roc 2007-03 0049be60  unit: seg_00490000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049be60
//
// 0049be60  8b542404             mov edx, dword ptr [esp + 4]
// 0049be64  8b02                 mov eax, dword ptr [edx]
// 0049be66  56                   push esi
// 0049be67  8b7008               mov esi, dword ptr [eax + 8]
// 0049be6a  8932                 mov dword ptr [edx], esi
// 0049be6c  8b7008               mov esi, dword ptr [eax + 8]
// 0049be6f  807e1900             cmp byte ptr [esi + 0x19], 0
// 0049be73  7503                 jne 0x49be78
// 0049be75  895604               mov dword ptr [esi + 4], edx
// 0049be78  8b7204               mov esi, dword ptr [edx + 4]
// 0049be7b  897004               mov dword ptr [eax + 4], esi
// 0049be7e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049be81  3b5104               cmp edx, dword ptr [ecx + 4]
// 0049be84  5e                   pop esi
// 0049be85  750c                 jne 0x49be93
// 0049be87  894104               mov dword ptr [ecx + 4], eax
// 0049be8a  895008               mov dword ptr [eax + 8], edx
// 0049be8d  894204               mov dword ptr [edx + 4], eax
// 0049be90  c20400               ret 4
// 0049be93  8b4a04               mov ecx, dword ptr [edx + 4]
// 0049be96  3b5108               cmp edx, dword ptr [ecx + 8]
// 0049be99  750c                 jne 0x49bea7
// 0049be9b  894108               mov dword ptr [ecx + 8], eax
// 0049be9e  895008               mov dword ptr [eax + 8], edx
// 0049bea1  894204               mov dword ptr [edx + 4], eax
// 0049bea4  c20400               ret 4
// 0049bea7  8901                 mov dword ptr [ecx], eax
// 0049bea9  895008               mov dword ptr [eax + 8], edx
// 0049beac  894204               mov dword ptr [edx + 4], eax
// 0049beaf  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
