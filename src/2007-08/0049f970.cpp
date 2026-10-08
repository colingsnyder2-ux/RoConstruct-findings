// roc 2007-08 0049f970  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049f970
//
// 0049f970  53                   push ebx
// 0049f971  56                   push esi
// 0049f972  8bd1                 mov edx, ecx
// 0049f974  8b7208               mov esi, dword ptr [edx + 8]
// 0049f977  8bce                 mov ecx, esi
// 0049f979  83e107               and ecx, 7
// 0049f97c  bb80000000           mov ebx, 0x80
// 0049f981  57                   push edi
// 0049f982  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 0049f985  8bc6                 mov eax, esi
// 0049f987  d3fb                 sar ebx, cl
// 0049f989  c1f803               sar eax, 3
// 0049f98c  841c38               test byte ptr [eax + edi], bl
// 0049f98f  5f                   pop edi
// 0049f990  0f95c0               setne al
// 0049f993  83c601               add esi, 1
// 0049f996  897208               mov dword ptr [edx + 8], esi
// 0049f999  5e                   pop esi
// 0049f99a  5b                   pop ebx
// 0049f99b  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?ReadBit@BitStream@RakNet@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
