// roc 2009-12 005fa640  unit: G3D::LineSegment  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fa640
//
// 005fa640  6aff                 push -1
// 005fa642  6872009400           push 0x940072
// 005fa647  64a100000000         mov eax, dword ptr fs:[0]
// 005fa64d  50                   push eax
// 005fa64e  64892500000000       mov dword ptr fs:[0], esp
// 005fa655  83ec38               sub esp, 0x38
// 005fa658  8b442450             mov eax, dword ptr [esp + 0x50]
// 005fa65c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005fa660  56                   push esi
// 005fa661  50                   push eax
// 005fa662  51                   push ecx
// 005fa663  8d542428             lea edx, [esp + 0x28]
// 005fa667  52                   push edx
// 005fa668  e8b3f1ffff           call 0x5f9820
// 005fa66d  83c40c               add esp, 0xc
// 005fa670  8d4c2404             lea ecx, [esp + 4]
// 005fa674  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005fa67c  ff15e8b69800         call dword ptr [0x98b6e8]
// 005fa682  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005fa686  8d442404             lea eax, [esp + 4]
// 005fa68a  50                   push eax
// 005fa68b  8d4c2424             lea ecx, [esp + 0x24]
// 005fa68f  51                   push ecx
// 005fa690  8bce                 mov ecx, esi
// 005fa692  c644244c01           mov byte ptr [esp + 0x4c], 1
// 005fa697  e834f7ffff           call 0x5f9dd0
// 005fa69c  8d542404             lea edx, [esp + 4]
// 005fa6a0  52                   push edx
// 005fa6a1  8bce                 mov ecx, esi
// 005fa6a3  e848fcffff           call 0x5fa2f0
// 005fa6a8  8d4c2404             lea ecx, [esp + 4]
// 005fa6ac  c644244400           mov byte ptr [esp + 0x44], 0
// 005fa6b1  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fa6b7  8d4c2420             lea ecx, [esp + 0x20]
// 005fa6bb  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005fa6c3  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fa6c9  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005fa6cd  5e                   pop esi
// 005fa6ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005fa6d5  83c444               add esp, 0x44
// 005fa6d8  c3                   ret 
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?vprintf@TextOutput@G3D@@QAAXPBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
