// roc 2007-08 005aa3a0  unit: RBX::World  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa3a0
//
// 005aa3a0  56                   push esi
// 005aa3a1  57                   push edi
// 005aa3a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005aa3a6  8b07                 mov eax, dword ptr [edi]
// 005aa3a8  8b5018               mov edx, dword ptr [eax + 0x18]
// 005aa3ab  8bf1                 mov esi, ecx
// 005aa3ad  8bcf                 mov ecx, edi
// 005aa3af  897c240c             mov dword ptr [esp + 0xc], edi
// 005aa3b3  ffd2                 call edx
// 005aa3b5  84c0                 test al, al
// 005aa3b7  740d                 je 0x5aa3c6
// 005aa3b9  8d44240c             lea eax, [esp + 0xc]
// 005aa3bd  50                   push eax
// 005aa3be  8d4e64               lea ecx, [esi + 0x64]
// 005aa3c1  e86ab70500           call 0x605b30
// 005aa3c6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005aa3c9  8b11                 mov edx, dword ptr [ecx]
// 005aa3cb  8b4214               mov eax, dword ptr [edx + 0x14]
// 005aa3ce  57                   push edi
// 005aa3cf  ffd0                 call eax
// 005aa3d1  834670ff             add dword ptr [esi + 0x70], -1
// 005aa3d5  5f                   pop edi
// 005aa3d6  5e                   pop esi
// 005aa3d7  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?removeJoint@World@RBX@@QAEXPAVJoint@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
