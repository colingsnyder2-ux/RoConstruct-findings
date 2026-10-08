// roc 2009-12 007bae40  unit: RBX::MovingAssemblyStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bae40
//
// 007bae40  56                   push esi
// 007bae41  8bf1                 mov esi, ecx
// 007bae43  8b4608               mov eax, dword ptr [esi + 8]
// 007bae46  8d0440               lea eax, [eax + eax*2]
// 007bae49  57                   push edi
// 007bae4a  8b3e                 mov edi, dword ptr [esi]
// 007bae4c  03c0                 add eax, eax
// 007bae4e  03c0                 add eax, eax
// 007bae50  6a10                 push 0x10
// 007bae52  50                   push eax
// 007bae53  e868f4e2ff           call 0x5ea2c0
// 007bae58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007bae5c  8906                 mov dword ptr [esi], eax
// 007bae5e  8b7608               mov esi, dword ptr [esi + 8]
// 007bae61  83c408               add esp, 8
// 007bae64  3bce                 cmp ecx, esi
// 007bae66  7c02                 jl 0x7bae6a
// 007bae68  8bce                 mov ecx, esi
// 007bae6a  8d0c49               lea ecx, [ecx + ecx*2]
// 007bae6d  8d1488               lea edx, [eax + ecx*4]
// 007bae70  8bcf                 mov ecx, edi
// 007bae72  3bc2                 cmp eax, edx
// 007bae74  731e                 jae 0x7bae94
// 007bae76  85c0                 test eax, eax
// 007bae78  7410                 je 0x7bae8a
// 007bae7a  8b31                 mov esi, dword ptr [ecx]
// 007bae7c  8930                 mov dword ptr [eax], esi
// 007bae7e  8b7104               mov esi, dword ptr [ecx + 4]
// 007bae81  897004               mov dword ptr [eax + 4], esi
// 007bae84  8b7108               mov esi, dword ptr [ecx + 8]
// 007bae87  897008               mov dword ptr [eax + 8], esi
// 007bae8a  83c00c               add eax, 0xc
// 007bae8d  83c10c               add ecx, 0xc
// 007bae90  3bc2                 cmp eax, edx
// 007bae92  72e2                 jb 0x7bae76
// 007bae94  57                   push edi
// 007bae95  e846f5e2ff           call 0x5ea3e0
// 007bae9a  83c404               add esp, 4
// 007bae9d  5f                   pop edi
// 007bae9e  5e                   pop esi
// 007bae9f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
