// roc 2009-12 00921180  unit: seg_00920000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00921180
//
// 00921180  55                   push ebp
// 00921181  8bec                 mov ebp, esp
// 00921183  83ec14               sub esp, 0x14
// 00921186  894dec               mov dword ptr [ebp - 0x14], ecx
// 00921189  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0092118c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0092118f  894df4               mov dword ptr [ebp - 0xc], ecx
// 00921192  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00921195  8b02                 mov eax, dword ptr [edx]
// 00921197  8945fc               mov dword ptr [ebp - 4], eax
// 0092119a  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0092119d  8b5114               mov edx, dword ptr [ecx + 0x14]
// 009211a0  8955f0               mov dword ptr [ebp - 0x10], edx
// 009211a3  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 009211a6  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 009211a9  8b5114               mov edx, dword ptr [ecx + 0x14]
// 009211ac  8910                 mov dword ptr [eax], edx
// 009211ae  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 009211b1  8b4814               mov ecx, dword ptr [eax + 0x14]
// 009211b4  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 009211b7  8b4214               mov eax, dword ptr [edx + 0x14]
// 009211ba  894104               mov dword ptr [ecx + 4], eax
// 009211bd  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 009211c0  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 009211c7  eb06                 jmp 0x9211cf
// 009211c9  8b55f8               mov edx, dword ptr [ebp - 8]
// 009211cc  8955fc               mov dword ptr [ebp - 4], edx
// 009211cf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 009211d2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 009211d5  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 009211d8  7416                 je 0x9211f0
// 009211da  8b55fc               mov edx, dword ptr [ebp - 4]
// 009211dd  8b02                 mov eax, dword ptr [edx]
// 009211df  8945f8               mov dword ptr [ebp - 8], eax
// 009211e2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 009211e5  51                   push ecx
// 009211e6  e86f26edff           call 0x7f385a
// 009211eb  83c404               add esp, 4
// 009211ee  ebd9                 jmp 0x9211c9
// 009211f0  8be5                 mov esp, ebp
// 009211f2  5d                   pop ebp
// 009211f3  c3                   ret 
// copied from an identical function in another client (function ?clear@?$list@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp