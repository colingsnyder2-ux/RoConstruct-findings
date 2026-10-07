// roc 2012-06 004eb3f0  unit: Ogre::RbxSceneNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004eb3f0
//
// 004eb3f0  51                   push ecx
// 004eb3f1  56                   push esi
// 004eb3f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004eb3f6  83c158               add ecx, 0x58
// 004eb3f9  51                   push ecx
// 004eb3fa  8bce                 mov ecx, esi
// 004eb3fc  c744240800000000     mov dword ptr [esp + 8], 0
// 004eb404  ff153835b200         call dword ptr [0xb23538]
// 004eb40a  8bc6                 mov eax, esi
// 004eb40c  5e                   pop esi
// 004eb40d  59                   pop ecx
// 004eb40e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
