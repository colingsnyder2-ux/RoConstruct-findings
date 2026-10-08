// from server: 100% by auto
// roc 2009-06 00675da0  unit: RBX::TimerService  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00675da0
//
// 00675da0  56                   push esi
// 00675da1  8bf1                 mov esi, ecx
// 00675da3  8b4608               mov eax, dword ptr [esi + 8]
// 00675da6  57                   push edi
// 00675da7  8b3e                 mov edi, dword ptr [esi]
// 00675da9  03c0                 add eax, eax
// 00675dab  03c0                 add eax, eax
// 00675dad  6a10                 push 0x10
// 00675daf  50                   push eax
// 00675db0  e8bb53efff           call 0x56b170
// 00675db5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00675db9  8906                 mov dword ptr [esi], eax
// 00675dbb  8b7608               mov esi, dword ptr [esi + 8]
// 00675dbe  83c408               add esp, 8
// 00675dc1  3bce                 cmp ecx, esi
// 00675dc3  7d02                 jge 0x675dc7
// 00675dc5  8bf1                 mov esi, ecx
// 00675dc7  8d14b0               lea edx, [eax + esi*4]
// 00675dca  8bcf                 mov ecx, edi
// 00675dcc  3bc2                 cmp eax, edx
// 00675dce  7312                 jae 0x675de2
// 00675dd0  85c0                 test eax, eax
// 00675dd2  7404                 je 0x675dd8
// 00675dd4  8b31                 mov esi, dword ptr [ecx]
// 00675dd6  8930                 mov dword ptr [eax], esi
// 00675dd8  83c004               add eax, 4
// 00675ddb  83c104               add ecx, 4
// 00675dde  3bc2                 cmp eax, edx
// 00675de0  72ee                 jb 0x675dd0
// 00675de2  57                   push edi
// 00675de3  e8a854efff           call 0x56b290
// 00675de8  83c404               add esp, 4
// 00675deb  5f                   pop edi
// 00675dec  5e                   pop esi
// 00675ded  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@PBX@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
