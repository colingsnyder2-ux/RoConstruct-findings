// roc 2009-12 0091bf60  unit: RBX::AggregatingSceneManager  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091bf60
//
// 0091bf60  55                   push ebp
// 0091bf61  8bec                 mov ebp, esp
// 0091bf63  6aff                 push -1
// 0091bf65  68fb789600           push 0x9678fb
// 0091bf6a  64a100000000         mov eax, dword ptr fs:[0]
// 0091bf70  50                   push eax
// 0091bf71  64892500000000       mov dword ptr fs:[0], esp
// 0091bf78  81ec90000000         sub esp, 0x90
// 0091bf7e  898d64ffffff         mov dword ptr [ebp - 0x9c], ecx
// 0091bf84  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091bf8b  8b8d64ffffff         mov ecx, dword ptr [ebp - 0x9c]
// 0091bf91  e81a210000           call 0x91e0b0
// 0091bf96  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0091bf9d  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 0091bfa3  8b08                 mov ecx, dword ptr [eax]
// 0091bfa5  898d68ffffff         mov dword ptr [ebp - 0x98], ecx
// 0091bfab  8b9568ffffff         mov edx, dword ptr [ebp - 0x98]
// 0091bfb1  52                   push edx
// 0091bfb2  e8a378edff           call 0x7f385a
// 0091bfb7  83c404               add esp, 4
// 0091bfba  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091bfbd  64890d00000000       mov dword ptr fs:[0], ecx
// 0091bfc4  8be5                 mov esp, ebp
// 0091bfc6  5d                   pop ebp
// 0091bfc7  c3                   ret 
// copied from an identical function in another client (function ??1?$map@GPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp