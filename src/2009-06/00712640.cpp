// roc 2009-06 00712640  unit: W4_D3DFORMAT::?$EnumDesc  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00712640
//
// 00712640  6aff                 push -1
// 00712642  6898428700           push 0x874298
// 00712647  64a100000000         mov eax, dword ptr fs:[0]
// 0071264d  50                   push eax
// 0071264e  51                   push ecx
// 0071264f  56                   push esi
// 00712650  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00712655  33c4                 xor eax, esp
// 00712657  50                   push eax
// 00712658  8d44240c             lea eax, [esp + 0xc]
// 0071265c  64a300000000         mov dword ptr fs:[0], eax
// 00712662  8bf1                 mov esi, ecx
// 00712664  89742408             mov dword ptr [esp + 8], esi
// 00712668  6a04                 push 4
// 0071266a  e8c9630000           call 0x718a38
// 0071266f  83c404               add esp, 4
// 00712672  85c0                 test eax, eax
// 00712674  7404                 je 0x71267a
// 00712676  8930                 mov dword ptr [eax], esi
// 00712678  eb02                 jmp 0x71267c
// 0071267a  33c0                 xor eax, eax
// 0071267c  8906                 mov dword ptr [esi], eax
// 0071267e  8bce                 mov ecx, esi
// 00712680  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00712688  e813d9d2ff           call 0x43ffa0
// 0071268d  894618               mov dword ptr [esi + 0x18], eax
// 00712690  c6401501             mov byte ptr [eax + 0x15], 1
// 00712694  8b4618               mov eax, dword ptr [esi + 0x18]
// 00712697  894004               mov dword ptr [eax + 4], eax
// 0071269a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0071269d  8900                 mov dword ptr [eax], eax
// 0071269f  8b4618               mov eax, dword ptr [esi + 0x18]
// 007126a2  894008               mov dword ptr [eax + 8], eax
// 007126a5  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 007126ac  8bc6                 mov eax, esi
// 007126ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007126b2  64890d00000000       mov dword ptr fs:[0], ecx
// 007126b9  59                   pop ecx
// 007126ba  5e                   pop esi
// 007126bb  83c410               add esp, 0x10
// 007126be  c20800               ret 8
// library ogre-1.7.0/OgreInstancedGeometry.cpp (function ??0?$_Tree@V?$_Tmap_traits@GPAVInstancedObject@InstancedGeometry@Ogre@@U?$less@G@std@@V?$allocator@U?$pair@$$CBGPAVInstancedObject@InstancedGeometry@Ogre@@@std@@@5@$0A@@std@@@std@@QAE@ABU?$less@G@1@ABV?$allocator@U?$pair@$$CBGPAVInstancedObject@InstancedGeometry@Ogre@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreInstancedGeometry.cpp
