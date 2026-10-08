// roc 2009-12 0049a700  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?L::FileLoader  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049a700
//
// 0049a700  56                   push esi
// 0049a701  8bf1                 mov esi, ecx
// 0049a703  8b4608               mov eax, dword ptr [esi + 8]
// 0049a706  57                   push edi
// 0049a707  8b3e                 mov edi, dword ptr [esi]
// 0049a709  03c0                 add eax, eax
// 0049a70b  6a10                 push 0x10
// 0049a70d  50                   push eax
// 0049a70e  e8adfb1400           call 0x5ea2c0
// 0049a713  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049a717  8906                 mov dword ptr [esi], eax
// 0049a719  8b7608               mov esi, dword ptr [esi + 8]
// 0049a71c  83c408               add esp, 8
// 0049a71f  3bce                 cmp ecx, esi
// 0049a721  7d02                 jge 0x49a725
// 0049a723  8bf1                 mov esi, ecx
// 0049a725  8d1470               lea edx, [eax + esi*2]
// 0049a728  8bcf                 mov ecx, edi
// 0049a72a  3bc2                 cmp eax, edx
// 0049a72c  7316                 jae 0x49a744
// 0049a72e  8bff                 mov edi, edi
// 0049a730  85c0                 test eax, eax
// 0049a732  7406                 je 0x49a73a
// 0049a734  668b31               mov si, word ptr [ecx]
// 0049a737  668930               mov word ptr [eax], si
// 0049a73a  83c002               add eax, 2
// 0049a73d  83c102               add ecx, 2
// 0049a740  3bc2                 cmp eax, edx
// 0049a742  72ec                 jb 0x49a730
// 0049a744  57                   push edi
// 0049a745  e896fc1400           call 0x5ea3e0
// 0049a74a  83c404               add esp, 4
// 0049a74d  5f                   pop edi
// 0049a74e  5e                   pop esi
// 0049a74f  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
