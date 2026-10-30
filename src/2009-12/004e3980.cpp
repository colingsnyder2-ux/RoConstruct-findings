// roc 2009-12 004e3980  unit: RBX::Mesh  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e3980
//
// 004e3980  55                   push ebp
// 004e3981  8bec                 mov ebp, esp
// 004e3983  6aff                 push -1
// 004e3985  68fb789600           push 0x9678fb
// 004e398a  64a100000000         mov eax, dword ptr fs:[0]
// 004e3990  50                   push eax
// 004e3991  64892500000000       mov dword ptr fs:[0], esp
// 004e3998  81ec90000000         sub esp, 0x90
// 004e399e  898d64ffffff         mov dword ptr [ebp - 0x9c], ecx
// 004e39a4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004e39ab  8b8d64ffffff         mov ecx, dword ptr [ebp - 0x9c]
// 004e39b1  e80a2f0000           call 0x4e68c0
// 004e39b6  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004e39bd  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 004e39c3  8b08                 mov ecx, dword ptr [eax]
// 004e39c5  898d68ffffff         mov dword ptr [ebp - 0x98], ecx
// 004e39cb  8b9568ffffff         mov edx, dword ptr [ebp - 0x98]
// 004e39d1  52                   push edx
// 004e39d2  e883fe3000           call 0x7f385a
// 004e39d7  83c404               add esp, 4
// 004e39da  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004e39dd  64890d00000000       mov dword ptr fs:[0], ecx
// 004e39e4  8be5                 mov esp, ebp
// 004e39e6  5d                   pop ebp
// 004e39e7  c3                   ret 
// copied from an identical function in another client (function ??1?$map@GPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp