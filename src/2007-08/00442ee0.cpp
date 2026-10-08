// roc 2007-08 00442ee0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442ee0
//
// 00442ee0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00442ee4  56                   push esi
// 00442ee5  8b742408             mov esi, dword ptr [esp + 8]
// 00442ee9  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 00442eed  7479                 je 0x442f68
// 00442eef  53                   push ebx
// 00442ef0  55                   push ebp
// 00442ef1  57                   push edi
// 00442ef2  8d780c               lea edi, [eax + 0xc]
// 00442ef5  8b0e                 mov ecx, dword ptr [esi]
// 00442ef7  8908                 mov dword ptr [eax], ecx
// 00442ef9  8b5604               mov edx, dword ptr [esi + 4]
// 00442efc  8957f8               mov dword ptr [edi - 8], edx
// 00442eff  8b4e08               mov ecx, dword ptr [esi + 8]
// 00442f02  894ffc               mov dword ptr [edi - 4], ecx
// 00442f05  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00442f08  3b2f                 cmp ebp, dword ptr [edi]
// 00442f0a  7446                 je 0x442f52
// 00442f0c  85ed                 test ebp, ebp
// 00442f0e  740c                 je 0x442f1c
// 00442f10  8d5504               lea edx, [ebp + 4]
// 00442f13  b801000000           mov eax, 1
// 00442f18  f00fc102             lock xadd dword ptr [edx], eax
// 00442f1c  8b1f                 mov ebx, dword ptr [edi]
// 00442f1e  85db                 test ebx, ebx
// 00442f20  742a                 je 0x442f4c
// 00442f22  8d4b04               lea ecx, [ebx + 4]
// 00442f25  83caff               or edx, 0xffffffff
// 00442f28  f00fc111             lock xadd dword ptr [ecx], edx
// 00442f2c  751e                 jne 0x442f4c
// 00442f2e  8b03                 mov eax, dword ptr [ebx]
// 00442f30  8b5004               mov edx, dword ptr [eax + 4]
// 00442f33  8bcb                 mov ecx, ebx
// 00442f35  ffd2                 call edx
// 00442f37  8d4308               lea eax, [ebx + 8]
// 00442f3a  83c9ff               or ecx, 0xffffffff
// 00442f3d  f00fc108             lock xadd dword ptr [eax], ecx
// 00442f41  7509                 jne 0x442f4c
// 00442f43  8b13                 mov edx, dword ptr [ebx]
// 00442f45  8b4208               mov eax, dword ptr [edx + 8]
// 00442f48  8bcb                 mov ecx, ebx
// 00442f4a  ffd0                 call eax
// 00442f4c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00442f50  892f                 mov dword ptr [edi], ebp
// 00442f52  83c010               add eax, 0x10
// 00442f55  83c610               add esi, 0x10
// 00442f58  83c710               add edi, 0x10
// 00442f5b  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00442f5f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00442f63  7590                 jne 0x442ef5
// 00442f65  5f                   pop edi
// 00442f66  5d                   pop ebp
// 00442f67  5b                   pop ebx
// 00442f68  5e                   pop esi
// 00442f69  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
