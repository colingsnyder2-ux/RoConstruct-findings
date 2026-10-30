// roc 2009-06 005da1d0  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da1d0
//
// 005da1d0  64a100000000         mov eax, dword ptr fs:[0]
// 005da1d6  8b542404             mov edx, dword ptr [esp + 4]
// 005da1da  6aff                 push -1
// 005da1dc  68b2db8500           push 0x85dbb2
// 005da1e1  50                   push eax
// 005da1e2  64892500000000       mov dword ptr fs:[0], esp
// 005da1e9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005da1ec  83ec44               sub esp, 0x44
// 005da1ef  56                   push esi
// 005da1f0  be24499204           mov esi, 0x4924924
// 005da1f5  2bf0                 sub esi, eax
// 005da1f7  3bf2                 cmp esi, edx
// 005da1f9  5e                   pop esi
// 005da1fa  7358                 jae 0x5da254
// 005da1fc  68d00b8b00           push 0x8b0bd0
// 005da201  8d4c2404             lea ecx, [esp + 4]
// 005da205  ff15b4e48900         call dword ptr [0x89e4b4]
// 005da20b  8d4c241c             lea ecx, [esp + 0x1c]
// 005da20f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005da217  ff15b8e98900         call dword ptr [0x89e9b8]
// 005da21d  8d0424               lea eax, [esp]
// 005da220  50                   push eax
// 005da221  8d4c242c             lea ecx, [esp + 0x2c]
// 005da225  c644245001           mov byte ptr [esp + 0x50], 1
// 005da22a  c744242044c98a00     mov dword ptr [esp + 0x20], 0x8ac944
// 005da232  ff15b8e48900         call dword ptr [0x89e4b8]
// 005da238  6834929700           push 0x979234
// 005da23d  8d4c2420             lea ecx, [esp + 0x20]
// 005da241  51                   push ecx
// 005da242  c644245400           mov byte ptr [esp + 0x54], 0
// 005da247  c744242450c98a00     mov dword ptr [esp + 0x24], 0x8ac950
// 005da24f  e8f6f71300           call 0x719a4a
// 005da254  03c2                 add eax, edx
// 005da256  894118               mov dword ptr [ecx + 0x18], eax
// 005da259  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da25d  64890d00000000       mov dword ptr fs:[0], ecx
// 005da264  83c450               add esp, 0x50
// 005da267  c20400               ret 4
// copied from an identical function in another client (function ?_Incsize@?$list@UProfileHistory@Profiler@Ogre@@V?$allocator@UProfileHistory@Profiler@Ogre@@@std@@@std@@IAEXI@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.9-dll OgreProfiler.cpp