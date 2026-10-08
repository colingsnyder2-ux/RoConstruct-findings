// roc 2007-03 00584d90  unit: seg_00580000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584d90
//
// 00584d90  53                   push ebx
// 00584d91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00584d95  807b1900             cmp byte ptr [ebx + 0x19], 0
// 00584d99  55                   push ebp
// 00584d9a  56                   push esi
// 00584d9b  8be9                 mov ebp, ecx
// 00584d9d  8bf3                 mov esi, ebx
// 00584d9f  7551                 jne 0x584df2
// 00584da1  57                   push edi
// 00584da2  8b4608               mov eax, dword ptr [esi + 8]
// 00584da5  50                   push eax
// 00584da6  8bcd                 mov ecx, ebp
// 00584da8  e8e3ffffff           call 0x584d90
// 00584dad  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 00584db0  85ff                 test edi, edi
// 00584db2  8b36                 mov esi, dword ptr [esi]
// 00584db4  742a                 je 0x584de0
// 00584db6  8d4f04               lea ecx, [edi + 4]
// 00584db9  83caff               or edx, 0xffffffff
// 00584dbc  f00fc111             lock xadd dword ptr [ecx], edx
// 00584dc0  751e                 jne 0x584de0
// 00584dc2  8b07                 mov eax, dword ptr [edi]
// 00584dc4  8b5004               mov edx, dword ptr [eax + 4]
// 00584dc7  8bcf                 mov ecx, edi
// 00584dc9  ffd2                 call edx
// 00584dcb  8d4708               lea eax, [edi + 8]
// 00584dce  83c9ff               or ecx, 0xffffffff
// 00584dd1  f00fc108             lock xadd dword ptr [eax], ecx
// 00584dd5  7509                 jne 0x584de0
// 00584dd7  8b17                 mov edx, dword ptr [edi]
// 00584dd9  8b4208               mov eax, dword ptr [edx + 8]
// 00584ddc  8bcf                 mov ecx, edi
// 00584dde  ffd0                 call eax
// 00584de0  53                   push ebx
// 00584de1  e80a930900           call 0x61e0f0
// 00584de6  83c404               add esp, 4
// 00584de9  807e1900             cmp byte ptr [esi + 0x19], 0
// 00584ded  8bde                 mov ebx, esi
// 00584def  74b1                 je 0x584da2
// 00584df1  5f                   pop edi
// 00584df2  5e                   pop esi
// 00584df3  5d                   pop ebp
// 00584df4  5b                   pop ebx
// 00584df5  c20400               ret 4
// library rbxgs/reflection\signal.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
