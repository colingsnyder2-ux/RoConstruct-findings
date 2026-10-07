// roc 2012-06 0096cb40  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096cb40
//
// 0096cb40  6aff                 push -1
// 0096cb42  687ea9ad00           push 0xada97e
// 0096cb47  64a100000000         mov eax, dword ptr fs:[0]
// 0096cb4d  50                   push eax
// 0096cb4e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0096cb53  33c4                 xor eax, esp
// 0096cb55  50                   push eax
// 0096cb56  8d442404             lea eax, [esp + 4]
// 0096cb5a  64a300000000         mov dword ptr fs:[0], eax
// 0096cb60  b801000000           mov eax, 1
// 0096cb65  84056473e500         test byte ptr [0xe57364], al
// 0096cb6b  7525                 jne 0x96cb92
// 0096cb6d  09056473e500         or dword ptr [0xe57364], eax
// 0096cb73  b9b872e500           mov ecx, 0xe572b8
// 0096cb78  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0096cb80  e84b190000           call 0x96e4d0
// 0096cb85  687014b200           push 0xb21470
// 0096cb8a  e866660100           call 0x9831f5
// 0096cb8f  83c404               add esp, 4
// 0096cb92  b8b872e500           mov eax, 0xe572b8
// 0096cb97  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0096cb9b  64890d00000000       mov dword ptr fs:[0], ecx
// 0096cba2  59                   pop ecx
// 0096cba3  83c40c               add esp, 0xc
// 0096cba6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
