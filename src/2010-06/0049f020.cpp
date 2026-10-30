// roc 2010-06 0049f020  unit: G3D::VertexAndPixelShader  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049f020
//
// 0049f020  55                   push ebp
// 0049f021  8bec                 mov ebp, esp
// 0049f023  6aff                 push -1
// 0049f025  68eb779800           push 0x9877eb
// 0049f02a  64a100000000         mov eax, dword ptr fs:[0]
// 0049f030  50                   push eax
// 0049f031  64892500000000       mov dword ptr fs:[0], esp
// 0049f038  81ec90000000         sub esp, 0x90
// 0049f03e  898d64ffffff         mov dword ptr [ebp - 0x9c], ecx
// 0049f044  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049f04b  8b8d64ffffff         mov ecx, dword ptr [ebp - 0x9c]
// 0049f051  e8ea020000           call 0x49f340
// 0049f056  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0049f05d  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 0049f063  8b08                 mov ecx, dword ptr [eax]
// 0049f065  898d68ffffff         mov dword ptr [ebp - 0x98], ecx
// 0049f06b  8b9568ffffff         mov edx, dword ptr [ebp - 0x98]
// 0049f071  52                   push edx
// 0049f072  e823893000           call 0x7a799a
// 0049f077  83c404               add esp, 4
// 0049f07a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049f07d  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f084  8be5                 mov esp, ebp
// 0049f086  5d                   pop ebp
// 0049f087  c3                   ret 
// copied from an identical function in another client (function ??1?$map@GPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp