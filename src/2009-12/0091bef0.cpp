// roc 2009-12 0091bef0  unit: RBX::AggregatingSceneManager  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091bef0
//
// 0091bef0  55                   push ebp
// 0091bef1  8bec                 mov ebp, esp
// 0091bef3  6aff                 push -1
// 0091bef5  68fb789600           push 0x9678fb
// 0091befa  64a100000000         mov eax, dword ptr fs:[0]
// 0091bf00  50                   push eax
// 0091bf01  64892500000000       mov dword ptr fs:[0], esp
// 0091bf08  81ec90000000         sub esp, 0x90
// 0091bf0e  898d64ffffff         mov dword ptr [ebp - 0x9c], ecx
// 0091bf14  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0091bf1b  8b8d64ffffff         mov ecx, dword ptr [ebp - 0x9c]
// 0091bf21  e86a190000           call 0x91d890
// 0091bf26  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0091bf2d  8b8564ffffff         mov eax, dword ptr [ebp - 0x9c]
// 0091bf33  8b08                 mov ecx, dword ptr [eax]
// 0091bf35  898d68ffffff         mov dword ptr [ebp - 0x98], ecx
// 0091bf3b  8b9568ffffff         mov edx, dword ptr [ebp - 0x98]
// 0091bf41  52                   push edx
// 0091bf42  e81379edff           call 0x7f385a
// 0091bf47  83c404               add esp, 4
// 0091bf4a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0091bf4d  64890d00000000       mov dword ptr fs:[0], ecx
// 0091bf54  8be5                 mov esp, ebp
// 0091bf56  5d                   pop ebp
// 0091bf57  c3                   ret 
// copied from an identical function in another client (function ??1?$map@GPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@U?$less@G@2@V?$allocator@U?$pair@$$CBGPAV?$map@GPAVTechnique@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVTechnique@Ogre@@@std@@@4@@std@@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp