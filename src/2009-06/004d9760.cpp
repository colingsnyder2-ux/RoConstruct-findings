// roc 2009-06 004d9760  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9760
//
// 004d9760  53                   push ebx
// 004d9761  56                   push esi
// 004d9762  8bd1                 mov edx, ecx
// 004d9764  8b7208               mov esi, dword ptr [edx + 8]
// 004d9767  8bce                 mov ecx, esi
// 004d9769  83e107               and ecx, 7
// 004d976c  bb80000000           mov ebx, 0x80
// 004d9771  57                   push edi
// 004d9772  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 004d9775  8bc6                 mov eax, esi
// 004d9777  d3fb                 sar ebx, cl
// 004d9779  c1e803               shr eax, 3
// 004d977c  841c38               test byte ptr [eax + edi], bl
// 004d977f  5f                   pop edi
// 004d9780  0f95c0               setne al
// 004d9783  46                   inc esi
// 004d9784  897208               mov dword ptr [edx + 8], esi
// 004d9787  5e                   pop esi
// 004d9788  5b                   pop ebx
// 004d9789  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
