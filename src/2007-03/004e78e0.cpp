// roc 2007-03 004e78e0  unit: seg_004e0000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e78e0
//
// 004e78e0  56                   push esi
// 004e78e1  8bf1                 mov esi, ecx
// 004e78e3  8b4608               mov eax, dword ptr [esi + 8]
// 004e78e6  57                   push edi
// 004e78e7  8b3e                 mov edi, dword ptr [esi]
// 004e78e9  c1e004               shl eax, 4
// 004e78ec  6a10                 push 0x10
// 004e78ee  50                   push eax
// 004e78ef  e8dcc20000           call 0x4f3bd0
// 004e78f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e78f8  8906                 mov dword ptr [esi], eax
// 004e78fa  8b7608               mov esi, dword ptr [esi + 8]
// 004e78fd  83c408               add esp, 8
// 004e7900  3bce                 cmp ecx, esi
// 004e7902  7c02                 jl 0x4e7906
// 004e7904  8bce                 mov ecx, esi
// 004e7906  c1e104               shl ecx, 4
// 004e7909  03c8                 add ecx, eax
// 004e790b  3bc1                 cmp eax, ecx
// 004e790d  8bd7                 mov edx, edi
// 004e790f  7324                 jae 0x4e7935
// 004e7911  85c0                 test eax, eax
// 004e7913  7416                 je 0x4e792b
// 004e7915  8b32                 mov esi, dword ptr [edx]
// 004e7917  8930                 mov dword ptr [eax], esi
// 004e7919  8b7204               mov esi, dword ptr [edx + 4]
// 004e791c  897004               mov dword ptr [eax + 4], esi
// 004e791f  8b7208               mov esi, dword ptr [edx + 8]
// 004e7922  897008               mov dword ptr [eax + 8], esi
// 004e7925  8b720c               mov esi, dword ptr [edx + 0xc]
// 004e7928  89700c               mov dword ptr [eax + 0xc], esi
// 004e792b  83c010               add eax, 0x10
// 004e792e  83c210               add edx, 0x10
// 004e7931  3bc1                 cmp eax, ecx
// 004e7933  72dc                 jb 0x4e7911
// 004e7935  57                   push edi
// 004e7936  e845ba0000           call 0x4f3380
// 004e793b  83c404               add esp, 4
// 004e793e  5f                   pop edi
// 004e793f  5e                   pop esi
// 004e7940  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Discovery.cpp (function ?realloc@?$Array@VNetAddress@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Discovery.cpp
