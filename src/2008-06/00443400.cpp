// roc 2008-06 00443400  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443400
//
// 00443400  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00443404  56                   push esi
// 00443405  8b742408             mov esi, dword ptr [esp + 8]
// 00443409  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0044340d  7479                 je 0x443488
// 0044340f  53                   push ebx
// 00443410  55                   push ebp
// 00443411  57                   push edi
// 00443412  8d780c               lea edi, [eax + 0xc]
// 00443415  8b0e                 mov ecx, dword ptr [esi]
// 00443417  8908                 mov dword ptr [eax], ecx
// 00443419  8b5604               mov edx, dword ptr [esi + 4]
// 0044341c  8957f8               mov dword ptr [edi - 8], edx
// 0044341f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00443422  894ffc               mov dword ptr [edi - 4], ecx
// 00443425  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00443428  3b2f                 cmp ebp, dword ptr [edi]
// 0044342a  7446                 je 0x443472
// 0044342c  85ed                 test ebp, ebp
// 0044342e  740c                 je 0x44343c
// 00443430  8d5504               lea edx, [ebp + 4]
// 00443433  b801000000           mov eax, 1
// 00443438  f00fc102             lock xadd dword ptr [edx], eax
// 0044343c  8b1f                 mov ebx, dword ptr [edi]
// 0044343e  85db                 test ebx, ebx
// 00443440  742a                 je 0x44346c
// 00443442  8d4b04               lea ecx, [ebx + 4]
// 00443445  83caff               or edx, 0xffffffff
// 00443448  f00fc111             lock xadd dword ptr [ecx], edx
// 0044344c  751e                 jne 0x44346c
// 0044344e  8b03                 mov eax, dword ptr [ebx]
// 00443450  8b5004               mov edx, dword ptr [eax + 4]
// 00443453  8bcb                 mov ecx, ebx
// 00443455  ffd2                 call edx
// 00443457  8d4308               lea eax, [ebx + 8]
// 0044345a  83c9ff               or ecx, 0xffffffff
// 0044345d  f00fc108             lock xadd dword ptr [eax], ecx
// 00443461  7509                 jne 0x44346c
// 00443463  8b13                 mov edx, dword ptr [ebx]
// 00443465  8b4208               mov eax, dword ptr [edx + 8]
// 00443468  8bcb                 mov ecx, ebx
// 0044346a  ffd0                 call eax
// 0044346c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00443470  892f                 mov dword ptr [edi], ebp
// 00443472  83c010               add eax, 0x10
// 00443475  83c610               add esi, 0x10
// 00443478  83c710               add edi, 0x10
// 0044347b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044347f  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00443483  7590                 jne 0x443415
// 00443485  5f                   pop edi
// 00443486  5d                   pop ebp
// 00443487  5b                   pop ebx
// 00443488  5e                   pop esi
// 00443489  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
