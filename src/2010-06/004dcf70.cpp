// roc 2010-06 004dcf70  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dcf70
//
// 004dcf70  53                   push ebx
// 004dcf71  56                   push esi
// 004dcf72  8bd1                 mov edx, ecx
// 004dcf74  8b7208               mov esi, dword ptr [edx + 8]
// 004dcf77  8bce                 mov ecx, esi
// 004dcf79  83e107               and ecx, 7
// 004dcf7c  bb80000000           mov ebx, 0x80
// 004dcf81  57                   push edi
// 004dcf82  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 004dcf85  8bc6                 mov eax, esi
// 004dcf87  d3fb                 sar ebx, cl
// 004dcf89  c1e803               shr eax, 3
// 004dcf8c  841c38               test byte ptr [eax + edi], bl
// 004dcf8f  5f                   pop edi
// 004dcf90  0f95c0               setne al
// 004dcf93  46                   inc esi
// 004dcf94  897208               mov dword ptr [edx + 8], esi
// 004dcf97  5e                   pop esi
// 004dcf98  5b                   pop ebx
// 004dcf99  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
