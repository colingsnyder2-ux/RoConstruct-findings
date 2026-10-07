// roc 2012-06 005676f0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005676f0
//
// 005676f0  53                   push ebx
// 005676f1  56                   push esi
// 005676f2  8bd1                 mov edx, ecx
// 005676f4  8b7208               mov esi, dword ptr [edx + 8]
// 005676f7  8bce                 mov ecx, esi
// 005676f9  83e107               and ecx, 7
// 005676fc  bb80000000           mov ebx, 0x80
// 00567701  57                   push edi
// 00567702  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 00567705  8bc6                 mov eax, esi
// 00567707  d3fb                 sar ebx, cl
// 00567709  c1e803               shr eax, 3
// 0056770c  841c38               test byte ptr [eax + edi], bl
// 0056770f  5f                   pop edi
// 00567710  0f95c0               setne al
// 00567713  46                   inc esi
// 00567714  897208               mov dword ptr [edx + 8], esi
// 00567717  5e                   pop esi
// 00567718  5b                   pop ebx
// 00567719  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
