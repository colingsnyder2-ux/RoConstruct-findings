// roc 2009-12 004eb800  unit: seg_004e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004eb800
//
// 004eb800  55                   push ebp
// 004eb801  8bec                 mov ebp, esp
// 004eb803  6aff                 push -1
// 004eb805  68fb789600           push 0x9678fb
// 004eb80a  64a100000000         mov eax, dword ptr fs:[0]
// 004eb810  50                   push eax
// 004eb811  64892500000000       mov dword ptr fs:[0], esp
// 004eb818  81ec90000000         sub esp, 0x90
// 004eb81e  898d64ffffff         mov dword ptr [ebp - 0x9c], ecx
// 004eb824  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004eb82b  8b8d64ffffff         mov ecx, dword ptr [ebp - 0x9c]
// 004eb831  e8ea020000           call 0x4ebb20
// 004eb836  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004eb83d  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 004eb843  8b08                 mov ecx, dword ptr [eax]
// 004eb845  898d68ffffff         mov dword ptr [ebp - 0x98], ecx
// 004eb84b  8b9568ffffff         mov edx, dword ptr [ebp - 0x98]
// 004eb851  52                   push edx
// 004eb852  e803803000           call 0x7f385a
// 004eb857  83c404               add esp, 4
// 004eb85a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004eb85d  64890d00000000       mov dword ptr fs:[0], ecx
// 004eb864  8be5                 mov esp, ebp
// 004eb866  5d                   pop ebp
// 004eb867  c3                   ret 
// copied from an identical function in another client (function ??1?$map@GPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp