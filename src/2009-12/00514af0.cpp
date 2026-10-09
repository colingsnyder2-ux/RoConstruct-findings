// roc 2009-12 00514af0  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00514af0
//
// 00514af0  6aff                 push -1
// 00514af2  68583d9500           push 0x953d58
// 00514af7  64a100000000         mov eax, dword ptr fs:[0]
// 00514afd  50                   push eax
// 00514afe  64892500000000       mov dword ptr fs:[0], esp
// 00514b05  51                   push ecx
// 00514b06  56                   push esi
// 00514b07  57                   push edi
// 00514b08  8bf9                 mov edi, ecx
// 00514b0a  897c2408             mov dword ptr [esp + 8], edi
// 00514b0e  8b770c               mov esi, dword ptr [edi + 0xc]
// 00514b11  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00514b19  85f6                 test esi, esi
// 00514b1b  742a                 je 0x514b47
// 00514b1d  8d4604               lea eax, [esi + 4]
// 00514b20  83c9ff               or ecx, 0xffffffff
// 00514b23  f00fc108             lock xadd dword ptr [eax], ecx
// 00514b27  751e                 jne 0x514b47
// 00514b29  8b16                 mov edx, dword ptr [esi]
// 00514b2b  8b4204               mov eax, dword ptr [edx + 4]
// 00514b2e  8bce                 mov ecx, esi
// 00514b30  ffd0                 call eax
// 00514b32  8d4e08               lea ecx, [esi + 8]
// 00514b35  83caff               or edx, 0xffffffff
// 00514b38  f00fc111             lock xadd dword ptr [ecx], edx
// 00514b3c  7509                 jne 0x514b47
// 00514b3e  8b06                 mov eax, dword ptr [esi]
// 00514b40  8b5008               mov edx, dword ptr [eax + 8]
// 00514b43  8bce                 mov ecx, esi
// 00514b45  ffd2                 call edx
// 00514b47  8b7704               mov esi, dword ptr [edi + 4]
// 00514b4a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00514b52  85f6                 test esi, esi
// 00514b54  742a                 je 0x514b80
// 00514b56  8d4604               lea eax, [esi + 4]
// 00514b59  83c9ff               or ecx, 0xffffffff
// 00514b5c  f00fc108             lock xadd dword ptr [eax], ecx
// 00514b60  751e                 jne 0x514b80
// 00514b62  8b16                 mov edx, dword ptr [esi]
// 00514b64  8b4204               mov eax, dword ptr [edx + 4]
// 00514b67  8bce                 mov ecx, esi
// 00514b69  ffd0                 call eax
// 00514b6b  8d4e08               lea ecx, [esi + 8]
// 00514b6e  83caff               or edx, 0xffffffff
// 00514b71  f00fc111             lock xadd dword ptr [ecx], edx
// 00514b75  7509                 jne 0x514b80
// 00514b77  8b06                 mov eax, dword ptr [esi]
// 00514b79  8b5008               mov edx, dword ptr [eax + 8]
// 00514b7c  8bce                 mov ecx, esi
// 00514b7e  ffd2                 call edx
// 00514b80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514b84  5f                   pop edi
// 00514b85  5e                   pop esi
// 00514b86  64890d00000000       mov dword ptr fs:[0], ecx
// 00514b8d  83c410               add esp, 0x10
// 00514b90  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
