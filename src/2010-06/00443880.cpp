// roc 2010-06 00443880  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443880
//
// 00443880  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443884  56                   push esi
// 00443885  8b742408             mov esi, dword ptr [esp + 8]
// 00443889  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0044388d  7479                 je 0x443908
// 0044388f  53                   push ebx
// 00443890  55                   push ebp
// 00443891  57                   push edi
// 00443892  8d780c               lea edi, [eax + 0xc]
// 00443895  8b0e                 mov ecx, dword ptr [esi]
// 00443897  8908                 mov dword ptr [eax], ecx
// 00443899  8b5604               mov edx, dword ptr [esi + 4]
// 0044389c  8957f8               mov dword ptr [edi - 8], edx
// 0044389f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004438a2  894ffc               mov dword ptr [edi - 4], ecx
// 004438a5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004438a8  3b2f                 cmp ebp, dword ptr [edi]
// 004438aa  7446                 je 0x4438f2
// 004438ac  85ed                 test ebp, ebp
// 004438ae  740c                 je 0x4438bc
// 004438b0  8d5504               lea edx, [ebp + 4]
// 004438b3  b801000000           mov eax, 1
// 004438b8  f00fc102             lock xadd dword ptr [edx], eax
// 004438bc  8b1f                 mov ebx, dword ptr [edi]
// 004438be  85db                 test ebx, ebx
// 004438c0  742a                 je 0x4438ec
// 004438c2  8d4b04               lea ecx, [ebx + 4]
// 004438c5  83caff               or edx, 0xffffffff
// 004438c8  f00fc111             lock xadd dword ptr [ecx], edx
// 004438cc  751e                 jne 0x4438ec
// 004438ce  8b03                 mov eax, dword ptr [ebx]
// 004438d0  8b5004               mov edx, dword ptr [eax + 4]
// 004438d3  8bcb                 mov ecx, ebx
// 004438d5  ffd2                 call edx
// 004438d7  8d4308               lea eax, [ebx + 8]
// 004438da  83c9ff               or ecx, 0xffffffff
// 004438dd  f00fc108             lock xadd dword ptr [eax], ecx
// 004438e1  7509                 jne 0x4438ec
// 004438e3  8b13                 mov edx, dword ptr [ebx]
// 004438e5  8b4208               mov eax, dword ptr [edx + 8]
// 004438e8  8bcb                 mov ecx, ebx
// 004438ea  ffd0                 call eax
// 004438ec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004438f0  892f                 mov dword ptr [edi], ebp
// 004438f2  83c010               add eax, 0x10
// 004438f5  83c610               add esi, 0x10
// 004438f8  83c710               add edi, 0x10
// 004438fb  8944241c             mov dword ptr [esp + 0x1c], eax
// 004438ff  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00443903  7590                 jne 0x443895
// 00443905  5f                   pop edi
// 00443906  5d                   pop ebp
// 00443907  5b                   pop ebx
// 00443908  5e                   pop esi
// 00443909  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
