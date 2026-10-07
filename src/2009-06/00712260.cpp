// roc 2009-06 00712260  unit: W4_D3DFORMAT::?$EnumDesc  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00712260
//
// 00712260  6aff                 push -1
// 00712262  6898428700           push 0x874298
// 00712267  64a100000000         mov eax, dword ptr fs:[0]
// 0071226d  50                   push eax
// 0071226e  51                   push ecx
// 0071226f  56                   push esi
// 00712270  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00712275  33c4                 xor eax, esp
// 00712277  50                   push eax
// 00712278  8d44240c             lea eax, [esp + 0xc]
// 0071227c  64a300000000         mov dword ptr fs:[0], eax
// 00712282  8bf1                 mov esi, ecx
// 00712284  6a04                 push 4
// 00712286  e8ad670000           call 0x718a38
// 0071228b  33c9                 xor ecx, ecx
// 0071228d  83c404               add esp, 4
// 00712290  3bc1                 cmp eax, ecx
// 00712292  7404                 je 0x712298
// 00712294  8930                 mov dword ptr [eax], esi
// 00712296  eb02                 jmp 0x71229a
// 00712298  33c0                 xor eax, eax
// 0071229a  8906                 mov dword ptr [esi], eax
// 0071229c  894e0c               mov dword ptr [esi + 0xc], ecx
// 0071229f  894e10               mov dword ptr [esi + 0x10], ecx
// 007122a2  894e14               mov dword ptr [esi + 0x14], ecx
// 007122a5  8bc6                 mov eax, esi
// 007122a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007122ab  64890d00000000       mov dword ptr fs:[0], ecx
// 007122b2  59                   pop ecx
// 007122b3  5e                   pop esi
// 007122b4  83c410               add esp, 0x10
// 007122b7  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??0?$vector@PAVKeyFrame@Ogre@@V?$allocator@PAVKeyFrame@Ogre@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
