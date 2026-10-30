// roc 2012-06 00677f40  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00677f40
//
// 00677f40  55                   push ebp
// 00677f41  8bec                 mov ebp, esp
// 00677f43  83ec10               sub esp, 0x10
// 00677f46  837d0800             cmp dword ptr [ebp + 8], 0
// 00677f4a  7709                 ja 0x677f55
// 00677f4c  c7450800000000       mov dword ptr [ebp + 8], 0
// 00677f53  eb36                 jmp 0x677f8b
// 00677f55  83c8ff               or eax, 0xffffffff
// 00677f58  33d2                 xor edx, edx
// 00677f5a  f77508               div dword ptr [ebp + 8]
// 00677f5d  83f804               cmp eax, 4
// 00677f60  7329                 jae 0x677f8b
// 00677f62  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 00677f69  8d45f0               lea eax, [ebp - 0x10]
// 00677f6c  50                   push eax
// 00677f6d  8d4df4               lea ecx, [ebp - 0xc]
// 00677f70  ff15d029b200         call dword ptr [0xb229d0]
// 00677f76  c745f4942eb400       mov dword ptr [ebp - 0xc], 0xb42e94
// 00677f7d  685861cd00           push 0xcd6158
// 00677f82  8d4df4               lea ecx, [ebp - 0xc]
// 00677f85  51                   push ecx
// 00677f86  e8b9b13000           call 0x983144
// 00677f8b  8b5508               mov edx, dword ptr [ebp + 8]
// 00677f8e  c1e202               shl edx, 2
// 00677f91  52                   push edx
// 00677f92  e883a13000           call 0x98211a
// 00677f97  83c404               add esp, 4
// 00677f9a  8be5                 mov esp, ebp
// 00677f9c  5d                   pop ebp
// 00677f9d  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@PAVTechnique@Ogre@@@std@@YAPAPAVTechnique@Ogre@@IPAPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp