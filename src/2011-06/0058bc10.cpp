// roc 2011-06 0058bc10  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bc10
//
// 0058bc10  55                   push ebp
// 0058bc11  8bec                 mov ebp, esp
// 0058bc13  83ec10               sub esp, 0x10
// 0058bc16  837d0800             cmp dword ptr [ebp + 8], 0
// 0058bc1a  7709                 ja 0x58bc25
// 0058bc1c  c7450800000000       mov dword ptr [ebp + 8], 0
// 0058bc23  eb36                 jmp 0x58bc5b
// 0058bc25  83c8ff               or eax, 0xffffffff
// 0058bc28  33d2                 xor edx, edx
// 0058bc2a  f77508               div dword ptr [ebp + 8]
// 0058bc2d  83f804               cmp eax, 4
// 0058bc30  7329                 jae 0x58bc5b
// 0058bc32  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 0058bc39  8d45f0               lea eax, [ebp - 0x10]
// 0058bc3c  50                   push eax
// 0058bc3d  8d4df4               lea ecx, [ebp - 0xc]
// 0058bc40  ff156c0aa400         call dword ptr [0xa40a6c]
// 0058bc46  c745f4b4b5a500       mov dword ptr [ebp - 0xc], 0xa5b5b4
// 0058bc4d  68c472b800           push 0xb872c4
// 0058bc52  8d4df4               lea ecx, [ebp - 0xc]
// 0058bc55  51                   push ecx
// 0058bc56  e851f42700           call 0x80b0ac
// 0058bc5b  8b5508               mov edx, dword ptr [ebp + 8]
// 0058bc5e  c1e202               shl edx, 2
// 0058bc61  52                   push edx
// 0058bc62  e8f7e32700           call 0x80a05e
// 0058bc67  83c404               add esp, 4
// 0058bc6a  8be5                 mov esp, ebp
// 0058bc6c  5d                   pop ebp
// 0058bc6d  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@PAVTechnique@Ogre@@@std@@YAPAPAVTechnique@Ogre@@IPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp