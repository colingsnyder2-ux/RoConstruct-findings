// roc 2010-06 004e34d0  unit: RBX::Network::IdSerializer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e34d0
//
// 004e34d0  53                   push ebx
// 004e34d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004e34d5  57                   push edi
// 004e34d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e34da  3bfb                 cmp edi, ebx
// 004e34dc  743b                 je 0x4e3519
// 004e34de  56                   push esi
// 004e34df  90                   nop 
// 004e34e0  8b7708               mov esi, dword ptr [edi + 8]
// 004e34e3  85f6                 test esi, esi
// 004e34e5  742a                 je 0x4e3511
// 004e34e7  8d4604               lea eax, [esi + 4]
// 004e34ea  83c9ff               or ecx, 0xffffffff
// 004e34ed  f00fc108             lock xadd dword ptr [eax], ecx
// 004e34f1  751e                 jne 0x4e3511
// 004e34f3  8b16                 mov edx, dword ptr [esi]
// 004e34f5  8b4204               mov eax, dword ptr [edx + 4]
// 004e34f8  8bce                 mov ecx, esi
// 004e34fa  ffd0                 call eax
// 004e34fc  8d4e08               lea ecx, [esi + 8]
// 004e34ff  83caff               or edx, 0xffffffff
// 004e3502  f00fc111             lock xadd dword ptr [ecx], edx
// 004e3506  7509                 jne 0x4e3511
// 004e3508  8b06                 mov eax, dword ptr [esi]
// 004e350a  8b5008               mov edx, dword ptr [eax + 8]
// 004e350d  8bce                 mov ecx, esi
// 004e350f  ffd2                 call edx
// 004e3511  83c70c               add edi, 0xc
// 004e3514  3bfb                 cmp edi, ebx
// 004e3516  75c8                 jne 0x4e34e0
// 004e3518  5e                   pop esi
// 004e3519  5f                   pop edi
// 004e351a  5b                   pop ebx
// 004e351b  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
