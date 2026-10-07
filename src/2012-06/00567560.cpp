// roc 2012-06 00567560  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567560
//
// 00567560  56                   push esi
// 00567561  8bf1                 mov esi, ecx
// 00567563  8b4608               mov eax, dword ptr [esi + 8]
// 00567566  8d4801               lea ecx, [eax + 1]
// 00567569  3b0e                 cmp ecx, dword ptr [esi]
// 0056756b  7606                 jbe 0x567573
// 0056756d  32c0                 xor al, al
// 0056756f  5e                   pop esi
// 00567570  c20400               ret 4
// 00567573  8bc8                 mov ecx, eax
// 00567575  83e107               and ecx, 7
// 00567578  ba80000000           mov edx, 0x80
// 0056757d  d3fa                 sar edx, cl
// 0056757f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00567582  c1e803               shr eax, 3
// 00567585  841408               test byte ptr [eax + ecx], dl
// 00567588  8b442408             mov eax, dword ptr [esp + 8]
// 0056758c  0f95c2               setne dl
// 0056758f  8810                 mov byte ptr [eax], dl
// 00567591  b801000000           mov eax, 1
// 00567596  014608               add dword ptr [esi + 8], eax
// 00567599  5e                   pop esi
// 0056759a  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$Read@_N@BitStream@RakNet@@QAE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
