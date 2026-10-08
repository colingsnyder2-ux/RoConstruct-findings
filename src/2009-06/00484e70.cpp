// from server: 100% by auto
// roc 2009-06 00484e70  unit: RBX::MeshGen  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484e70
//
// 00484e70  56                   push esi
// 00484e71  8bf1                 mov esi, ecx
// 00484e73  8b4608               mov eax, dword ptr [esi + 8]
// 00484e76  57                   push edi
// 00484e77  8b3e                 mov edi, dword ptr [esi]
// 00484e79  03c0                 add eax, eax
// 00484e7b  6a10                 push 0x10
// 00484e7d  50                   push eax
// 00484e7e  e8ed620e00           call 0x56b170
// 00484e83  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00484e87  8906                 mov dword ptr [esi], eax
// 00484e89  8b7608               mov esi, dword ptr [esi + 8]
// 00484e8c  83c408               add esp, 8
// 00484e8f  3bce                 cmp ecx, esi
// 00484e91  7d02                 jge 0x484e95
// 00484e93  8bf1                 mov esi, ecx
// 00484e95  8d1470               lea edx, [eax + esi*2]
// 00484e98  8bcf                 mov ecx, edi
// 00484e9a  3bc2                 cmp eax, edx
// 00484e9c  7316                 jae 0x484eb4
// 00484e9e  8bff                 mov edi, edi
// 00484ea0  85c0                 test eax, eax
// 00484ea2  7406                 je 0x484eaa
// 00484ea4  668b31               mov si, word ptr [ecx]
// 00484ea7  668930               mov word ptr [eax], si
// 00484eaa  83c002               add eax, 2
// 00484ead  83c102               add ecx, 2
// 00484eb0  3bc2                 cmp eax, edx
// 00484eb2  72ec                 jb 0x484ea0
// 00484eb4  57                   push edi
// 00484eb5  e8d6630e00           call 0x56b290
// 00484eba  83c404               add esp, 4
// 00484ebd  5f                   pop edi
// 00484ebe  5e                   pop esi
// 00484ebf  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
