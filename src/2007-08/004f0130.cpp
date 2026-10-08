// roc 2007-08 004f0130  unit: RBX::Render::AggregatingSceneManager  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0130
//
// 004f0130  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0133  56                   push esi
// 004f0134  8db198000000         lea esi, [ecx + 0x98]
// 004f013a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f013d  33c0                 xor eax, eax
// 004f013f  85c9                 test ecx, ecx
// 004f0141  57                   push edi
// 004f0142  7e1a                 jle 0x4f015e
// 004f0144  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004f0148  8b3a                 mov edi, dword ptr [edx]
// 004f014a  8b16                 mov edx, dword ptr [esi]
// 004f014c  8d642400             lea esp, [esp]
// 004f0150  393a                 cmp dword ptr [edx], edi
// 004f0152  740d                 je 0x4f0161
// 004f0154  83c001               add eax, 1
// 004f0157  83c204               add edx, 4
// 004f015a  3bc1                 cmp eax, ecx
// 004f015c  7cf2                 jl 0x4f0150
// 004f015e  83c8ff               or eax, 0xffffffff
// 004f0161  8b0e                 mov ecx, dword ptr [esi]
// 004f0163  8b5604               mov edx, dword ptr [esi + 4]
// 004f0166  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 004f016a  52                   push edx
// 004f016b  8d0c81               lea ecx, [ecx + eax*4]
// 004f016e  e8fd4df8ff           call 0x474f70
// 004f0173  8b4604               mov eax, dword ptr [esi + 4]
// 004f0176  6a01                 push 1
// 004f0178  83e801               sub eax, 1
// 004f017b  50                   push eax
// 004f017c  8bce                 mov ecx, esi
// 004f017e  e8ddf6ffff           call 0x4ef860
// 004f0183  5f                   pop edi
// 004f0184  5e                   pop esi
// 004f0185  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?removeFromScene@SceneManager@Render@RBX@@IAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
