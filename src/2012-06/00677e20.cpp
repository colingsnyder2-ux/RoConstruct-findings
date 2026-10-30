// roc 2012-06 00677e20  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00677e20
//
// 00677e20  55                   push ebp
// 00677e21  8bec                 mov ebp, esp
// 00677e23  6aff                 push -1
// 00677e25  684269aa00           push 0xaa6942
// 00677e2a  64a100000000         mov eax, dword ptr fs:[0]
// 00677e30  50                   push eax
// 00677e31  64892500000000       mov dword ptr fs:[0], esp
// 00677e38  83ec44               sub esp, 0x44
// 00677e3b  683061b400           push 0xb46130
// 00677e40  8d4db0               lea ecx, [ebp - 0x50]
// 00677e43  ff154826b200         call dword ptr [0xb22648]
// 00677e49  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00677e50  8d4dcc               lea ecx, [ebp - 0x34]
// 00677e53  ff15dc29b200         call dword ptr [0xb229dc]
// 00677e59  c645fc01             mov byte ptr [ebp - 4], 1
// 00677e5d  c745cca02eb400       mov dword ptr [ebp - 0x34], 0xb42ea0
// 00677e64  8d45b0               lea eax, [ebp - 0x50]
// 00677e67  50                   push eax
// 00677e68  8d4dd8               lea ecx, [ebp - 0x28]
// 00677e6b  ff154426b200         call dword ptr [0xb22644]
// 00677e71  c645fc00             mov byte ptr [ebp - 4], 0
// 00677e75  c745ccac2eb400       mov dword ptr [ebp - 0x34], 0xb42eac
// 00677e7c  680462cd00           push 0xcd6204
// 00677e81  8d4dcc               lea ecx, [ebp - 0x34]
// 00677e84  51                   push ecx
// 00677e85  e8bab23000           call 0x983144
// 00677e8a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00677e91  8d4db0               lea ecx, [ebp - 0x50]
// 00677e94  ff153c26b200         call dword ptr [0xb2263c]
// 00677e9a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00677e9d  64890d00000000       mov dword ptr fs:[0], ecx
// 00677ea4  8be5                 mov esp, ebp
// 00677ea6  5d                   pop ebp
// 00677ea7  c3                   ret 
// copied from an identical function in another client (function ?_Xlen@?$vector@VParameterDef@Ogre@@V?$allocator@VParameterDef@Ogre@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp