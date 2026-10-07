// roc 2009-06 004d95d0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d95d0
//
// 004d95d0  56                   push esi
// 004d95d1  8bf1                 mov esi, ecx
// 004d95d3  8b4608               mov eax, dword ptr [esi + 8]
// 004d95d6  8d4801               lea ecx, [eax + 1]
// 004d95d9  3b0e                 cmp ecx, dword ptr [esi]
// 004d95db  7606                 jbe 0x4d95e3
// 004d95dd  32c0                 xor al, al
// 004d95df  5e                   pop esi
// 004d95e0  c20400               ret 4
// 004d95e3  8bc8                 mov ecx, eax
// 004d95e5  83e107               and ecx, 7
// 004d95e8  ba80000000           mov edx, 0x80
// 004d95ed  d3fa                 sar edx, cl
// 004d95ef  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d95f2  c1e803               shr eax, 3
// 004d95f5  841408               test byte ptr [eax + ecx], dl
// 004d95f8  8b442408             mov eax, dword ptr [esp + 8]
// 004d95fc  0f95c2               setne dl
// 004d95ff  8810                 mov byte ptr [eax], dl
// 004d9601  b801000000           mov eax, 1
// 004d9606  014608               add dword ptr [esi + 8], eax
// 004d9609  5e                   pop esi
// 004d960a  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$Read@_N@BitStream@RakNet@@QAE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
