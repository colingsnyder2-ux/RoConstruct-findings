// roc 2009-06 0043dd80  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043dd80
//
// 0043dd80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043dd84  56                   push esi
// 0043dd85  8b742408             mov esi, dword ptr [esp + 8]
// 0043dd89  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 0043dd8d  7479                 je 0x43de08
// 0043dd8f  53                   push ebx
// 0043dd90  55                   push ebp
// 0043dd91  57                   push edi
// 0043dd92  8d780c               lea edi, [eax + 0xc]
// 0043dd95  8b0e                 mov ecx, dword ptr [esi]
// 0043dd97  8908                 mov dword ptr [eax], ecx
// 0043dd99  8b5604               mov edx, dword ptr [esi + 4]
// 0043dd9c  8957f8               mov dword ptr [edi - 8], edx
// 0043dd9f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043dda2  894ffc               mov dword ptr [edi - 4], ecx
// 0043dda5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0043dda8  3b2f                 cmp ebp, dword ptr [edi]
// 0043ddaa  7446                 je 0x43ddf2
// 0043ddac  85ed                 test ebp, ebp
// 0043ddae  740c                 je 0x43ddbc
// 0043ddb0  8d5504               lea edx, [ebp + 4]
// 0043ddb3  b801000000           mov eax, 1
// 0043ddb8  f00fc102             lock xadd dword ptr [edx], eax
// 0043ddbc  8b1f                 mov ebx, dword ptr [edi]
// 0043ddbe  85db                 test ebx, ebx
// 0043ddc0  742a                 je 0x43ddec
// 0043ddc2  8d4b04               lea ecx, [ebx + 4]
// 0043ddc5  83caff               or edx, 0xffffffff
// 0043ddc8  f00fc111             lock xadd dword ptr [ecx], edx
// 0043ddcc  751e                 jne 0x43ddec
// 0043ddce  8b03                 mov eax, dword ptr [ebx]
// 0043ddd0  8b5004               mov edx, dword ptr [eax + 4]
// 0043ddd3  8bcb                 mov ecx, ebx
// 0043ddd5  ffd2                 call edx
// 0043ddd7  8d4308               lea eax, [ebx + 8]
// 0043ddda  83c9ff               or ecx, 0xffffffff
// 0043dddd  f00fc108             lock xadd dword ptr [eax], ecx
// 0043dde1  7509                 jne 0x43ddec
// 0043dde3  8b13                 mov edx, dword ptr [ebx]
// 0043dde5  8b4208               mov eax, dword ptr [edx + 8]
// 0043dde8  8bcb                 mov ecx, ebx
// 0043ddea  ffd0                 call eax
// 0043ddec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043ddf0  892f                 mov dword ptr [edi], ebp
// 0043ddf2  83c010               add eax, 0x10
// 0043ddf5  83c610               add esi, 0x10
// 0043ddf8  83c710               add edi, 0x10
// 0043ddfb  8944241c             mov dword ptr [esp + 0x1c], eax
// 0043ddff  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0043de03  7590                 jne 0x43dd95
// 0043de05  5f                   pop edi
// 0043de06  5d                   pop ebp
// 0043de07  5b                   pop ebx
// 0043de08  5e                   pop esi
// 0043de09  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Copy_opt@PAUIDREFItem@MergeBinder@RBX@@PAU123@Uforward_iterator_tag@std@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@PAU123@00Uforward_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
