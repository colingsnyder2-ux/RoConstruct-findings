// roc 2007-03 006f3dd0  unit: seg_006f0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f3dd0
//
// 006f3dd0  6aff                 push -1
// 006f3dd2  686ea67600           push 0x76a66e
// 006f3dd7  64a100000000         mov eax, dword ptr fs:[0]
// 006f3ddd  50                   push eax
// 006f3dde  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006f3de3  33c4                 xor eax, esp
// 006f3de5  50                   push eax
// 006f3de6  8d442404             lea eax, [esp + 4]
// 006f3dea  64a300000000         mov dword ptr fs:[0], eax
// 006f3df0  b801000000           mov eax, 1
// 006f3df5  840590278c00         test byte ptr [0x8c2790], al
// 006f3dfb  7525                 jne 0x6f3e22
// 006f3dfd  090590278c00         or dword ptr [0x8c2790], eax
// 006f3e03  b948278c00           mov ecx, 0x8c2748
// 006f3e08  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006f3e10  e84bf8ffff           call 0x6f3660
// 006f3e15  68a0c17700           push 0x77c1a0
// 006f3e1a  e894b3f2ff           call 0x61f1b3
// 006f3e1f  83c404               add esp, 4
// 006f3e22  b848278c00           mov eax, 0x8c2748
// 006f3e27  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f3e2b  64890d00000000       mov dword ptr fs:[0], ecx
// 006f3e32  59                   pop ecx
// 006f3e33  83c40c               add esp, 0xc
// 006f3e36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
