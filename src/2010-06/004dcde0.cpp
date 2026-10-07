// roc 2010-06 004dcde0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dcde0
//
// 004dcde0  56                   push esi
// 004dcde1  8bf1                 mov esi, ecx
// 004dcde3  8b4608               mov eax, dword ptr [esi + 8]
// 004dcde6  8d4801               lea ecx, [eax + 1]
// 004dcde9  3b0e                 cmp ecx, dword ptr [esi]
// 004dcdeb  7606                 jbe 0x4dcdf3
// 004dcded  32c0                 xor al, al
// 004dcdef  5e                   pop esi
// 004dcdf0  c20400               ret 4
// 004dcdf3  8bc8                 mov ecx, eax
// 004dcdf5  83e107               and ecx, 7
// 004dcdf8  ba80000000           mov edx, 0x80
// 004dcdfd  d3fa                 sar edx, cl
// 004dcdff  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dce02  c1e803               shr eax, 3
// 004dce05  841408               test byte ptr [eax + ecx], dl
// 004dce08  8b442408             mov eax, dword ptr [esp + 8]
// 004dce0c  0f95c2               setne dl
// 004dce0f  8810                 mov byte ptr [eax], dl
// 004dce11  b801000000           mov eax, 1
// 004dce16  014608               add dword ptr [esi + 8], eax
// 004dce19  5e                   pop esi
// 004dce1a  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$Read@_N@BitStream@RakNet@@QAE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
