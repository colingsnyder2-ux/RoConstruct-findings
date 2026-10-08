// roc 2009-12 00696050  unit: RBX::Workspace  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696050
//
// 00696050  56                   push esi
// 00696051  8bf1                 mov esi, ecx
// 00696053  8b4608               mov eax, dword ptr [esi + 8]
// 00696056  57                   push edi
// 00696057  8b3e                 mov edi, dword ptr [esi]
// 00696059  03c0                 add eax, eax
// 0069605b  03c0                 add eax, eax
// 0069605d  6a10                 push 0x10
// 0069605f  50                   push eax
// 00696060  e85b42f5ff           call 0x5ea2c0
// 00696065  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00696069  8906                 mov dword ptr [esi], eax
// 0069606b  8b7608               mov esi, dword ptr [esi + 8]
// 0069606e  83c408               add esp, 8
// 00696071  3bce                 cmp ecx, esi
// 00696073  7d02                 jge 0x696077
// 00696075  8bf1                 mov esi, ecx
// 00696077  8d14b0               lea edx, [eax + esi*4]
// 0069607a  8bcf                 mov ecx, edi
// 0069607c  3bc2                 cmp eax, edx
// 0069607e  7312                 jae 0x696092
// 00696080  85c0                 test eax, eax
// 00696082  7404                 je 0x696088
// 00696084  8b31                 mov esi, dword ptr [ecx]
// 00696086  8930                 mov dword ptr [eax], esi
// 00696088  83c004               add eax, 4
// 0069608b  83c104               add ecx, 4
// 0069608e  3bc2                 cmp eax, edx
// 00696090  72ee                 jb 0x696080
// 00696092  57                   push edi
// 00696093  e84843f5ff           call 0x5ea3e0
// 00696098  83c404               add esp, 4
// 0069609b  5f                   pop edi
// 0069609c  5e                   pop esi
// 0069609d  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@I@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
