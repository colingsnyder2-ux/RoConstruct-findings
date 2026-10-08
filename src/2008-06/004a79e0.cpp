// roc 2008-06 004a79e0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a79e0
//
// 004a79e0  53                   push ebx
// 004a79e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a79e5  57                   push edi
// 004a79e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a79ea  3bfb                 cmp edi, ebx
// 004a79ec  743b                 je 0x4a7a29
// 004a79ee  56                   push esi
// 004a79ef  90                   nop 
// 004a79f0  8b7708               mov esi, dword ptr [edi + 8]
// 004a79f3  85f6                 test esi, esi
// 004a79f5  742a                 je 0x4a7a21
// 004a79f7  8d4604               lea eax, [esi + 4]
// 004a79fa  83c9ff               or ecx, 0xffffffff
// 004a79fd  f00fc108             lock xadd dword ptr [eax], ecx
// 004a7a01  751e                 jne 0x4a7a21
// 004a7a03  8b16                 mov edx, dword ptr [esi]
// 004a7a05  8b4204               mov eax, dword ptr [edx + 4]
// 004a7a08  8bce                 mov ecx, esi
// 004a7a0a  ffd0                 call eax
// 004a7a0c  8d4e08               lea ecx, [esi + 8]
// 004a7a0f  83caff               or edx, 0xffffffff
// 004a7a12  f00fc111             lock xadd dword ptr [ecx], edx
// 004a7a16  7509                 jne 0x4a7a21
// 004a7a18  8b06                 mov eax, dword ptr [esi]
// 004a7a1a  8b5008               mov edx, dword ptr [eax + 8]
// 004a7a1d  8bce                 mov ecx, esi
// 004a7a1f  ffd2                 call edx
// 004a7a21  83c70c               add edi, 0xc
// 004a7a24  3bfb                 cmp edi, ebx
// 004a7a26  75c8                 jne 0x4a79f0
// 004a7a28  5e                   pop esi
// 004a7a29  5f                   pop edi
// 004a7a2a  5b                   pop ebx
// 004a7a2b  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
