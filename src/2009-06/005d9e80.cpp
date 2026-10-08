// roc 2009-06 005d9e80  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d9e80
//
// 005d9e80  6aff                 push -1
// 005d9e82  68f89c8500           push 0x859cf8
// 005d9e87  64a100000000         mov eax, dword ptr fs:[0]
// 005d9e8d  50                   push eax
// 005d9e8e  64892500000000       mov dword ptr fs:[0], esp
// 005d9e95  51                   push ecx
// 005d9e96  56                   push esi
// 005d9e97  57                   push edi
// 005d9e98  8bf9                 mov edi, ecx
// 005d9e9a  897c2408             mov dword ptr [esp + 8], edi
// 005d9e9e  8b770c               mov esi, dword ptr [edi + 0xc]
// 005d9ea1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d9ea9  85f6                 test esi, esi
// 005d9eab  742a                 je 0x5d9ed7
// 005d9ead  8d4604               lea eax, [esi + 4]
// 005d9eb0  83c9ff               or ecx, 0xffffffff
// 005d9eb3  f00fc108             lock xadd dword ptr [eax], ecx
// 005d9eb7  751e                 jne 0x5d9ed7
// 005d9eb9  8b16                 mov edx, dword ptr [esi]
// 005d9ebb  8b4204               mov eax, dword ptr [edx + 4]
// 005d9ebe  8bce                 mov ecx, esi
// 005d9ec0  ffd0                 call eax
// 005d9ec2  8d4e08               lea ecx, [esi + 8]
// 005d9ec5  83caff               or edx, 0xffffffff
// 005d9ec8  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9ecc  7509                 jne 0x5d9ed7
// 005d9ece  8b06                 mov eax, dword ptr [esi]
// 005d9ed0  8b5008               mov edx, dword ptr [eax + 8]
// 005d9ed3  8bce                 mov ecx, esi
// 005d9ed5  ffd2                 call edx
// 005d9ed7  8b7704               mov esi, dword ptr [edi + 4]
// 005d9eda  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d9ee2  85f6                 test esi, esi
// 005d9ee4  742a                 je 0x5d9f10
// 005d9ee6  8d4604               lea eax, [esi + 4]
// 005d9ee9  83c9ff               or ecx, 0xffffffff
// 005d9eec  f00fc108             lock xadd dword ptr [eax], ecx
// 005d9ef0  751e                 jne 0x5d9f10
// 005d9ef2  8b16                 mov edx, dword ptr [esi]
// 005d9ef4  8b4204               mov eax, dword ptr [edx + 4]
// 005d9ef7  8bce                 mov ecx, esi
// 005d9ef9  ffd0                 call eax
// 005d9efb  8d4e08               lea ecx, [esi + 8]
// 005d9efe  83caff               or edx, 0xffffffff
// 005d9f01  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9f05  7509                 jne 0x5d9f10
// 005d9f07  8b06                 mov eax, dword ptr [esi]
// 005d9f09  8b5008               mov edx, dword ptr [eax + 8]
// 005d9f0c  8bce                 mov ecx, esi
// 005d9f0e  ffd2                 call edx
// 005d9f10  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d9f14  5f                   pop edi
// 005d9f15  5e                   pop esi
// 005d9f16  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9f1d  83c410               add esp, 0x10
// 005d9f20  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
