// roc 2011-06 004ec950  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec950
//
// 004ec950  53                   push ebx
// 004ec951  56                   push esi
// 004ec952  8bd1                 mov edx, ecx
// 004ec954  8b7208               mov esi, dword ptr [edx + 8]
// 004ec957  8bce                 mov ecx, esi
// 004ec959  83e107               and ecx, 7
// 004ec95c  bb80000000           mov ebx, 0x80
// 004ec961  57                   push edi
// 004ec962  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 004ec965  8bc6                 mov eax, esi
// 004ec967  d3fb                 sar ebx, cl
// 004ec969  c1e803               shr eax, 3
// 004ec96c  841c38               test byte ptr [eax + edi], bl
// 004ec96f  5f                   pop edi
// 004ec970  0f95c0               setne al
// 004ec973  46                   inc esi
// 004ec974  897208               mov dword ptr [edx + 8], esi
// 004ec977  5e                   pop esi
// 004ec978  5b                   pop ebx
// 004ec979  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
