// roc 2011-06 009467c0  unit: Ogre::RbxSceneNode  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009467c0
//
// 009467c0  51                   push ecx
// 009467c1  56                   push esi
// 009467c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009467c6  83c158               add ecx, 0x58
// 009467c9  51                   push ecx
// 009467ca  8bce                 mov ecx, esi
// 009467cc  c744240800000000     mov dword ptr [esp + 8], 0
// 009467d4  ff158414a400         call dword ptr [0xa41484]
// 009467da  8bc6                 mov eax, esi
// 009467dc  5e                   pop esi
// 009467dd  59                   pop ecx
// 009467de  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
