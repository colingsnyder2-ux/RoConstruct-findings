// roc 2009-12 00925440  unit: seg_00920000  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00925440
//
// 00925440  55                   push ebp
// 00925441  8bec                 mov ebp, esp
// 00925443  6aff                 push -1
// 00925445  68807c9600           push 0x967c80
// 0092544a  64a100000000         mov eax, dword ptr fs:[0]
// 00925450  50                   push eax
// 00925451  64892500000000       mov dword ptr fs:[0], esp
// 00925458  51                   push ecx
// 00925459  83ec44               sub esp, 0x44
// 0092545c  53                   push ebx
// 0092545d  56                   push esi
// 0092545e  57                   push edi
// 0092545f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00925462  894db8               mov dword ptr [ebp - 0x48], ecx
// 00925465  6a01                 push 1
// 00925467  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0092546a  83c108               add ecx, 8
// 0092546d  e85ec1ffff           call 0x9215d0
// 00925472  8945e8               mov dword ptr [ebp - 0x18], eax
// 00925475  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0092547c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00925483  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00925486  8945d0               mov dword ptr [ebp - 0x30], eax
// 00925489  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0092548c  894dcc               mov dword ptr [ebp - 0x34], ecx
// 0092548f  837dcc00             cmp dword ptr [ebp - 0x34], 0
// 00925493  7410                 je 0x9254a5
// 00925495  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 00925498  8b4508               mov eax, dword ptr [ebp + 8]
// 0092549b  8902                 mov dword ptr [edx], eax
// 0092549d  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 009254a0  894db4               mov dword ptr [ebp - 0x4c], ecx
// 009254a3  eb07                 jmp 0x9254ac
// 009254a5  c745b400000000       mov dword ptr [ebp - 0x4c], 0
// 009254ac  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 009254af  83c201               add edx, 1
// 009254b2  8955ec               mov dword ptr [ebp - 0x14], edx
// 009254b5  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 009254b8  83c004               add eax, 4
// 009254bb  8945c8               mov dword ptr [ebp - 0x38], eax
// 009254be  8b4dc8               mov ecx, dword ptr [ebp - 0x38]
// 009254c1  894dc4               mov dword ptr [ebp - 0x3c], ecx
// 009254c4  837dc400             cmp dword ptr [ebp - 0x3c], 0
// 009254c8  7410                 je 0x9254da
// 009254ca  8b55c4               mov edx, dword ptr [ebp - 0x3c]
// 009254cd  8b450c               mov eax, dword ptr [ebp + 0xc]
// 009254d0  8902                 mov dword ptr [edx], eax
// 009254d2  8b4dc4               mov ecx, dword ptr [ebp - 0x3c]
// 009254d5  894db0               mov dword ptr [ebp - 0x50], ecx
// 009254d8  eb07                 jmp 0x9254e1
// 009254da  c745b000000000       mov dword ptr [ebp - 0x50], 0
// 009254e1  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 009254e4  83c201               add edx, 1
// 009254e7  8955ec               mov dword ptr [ebp - 0x14], edx
// 009254ea  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 009254ed  83c008               add eax, 8
// 009254f0  8945c0               mov dword ptr [ebp - 0x40], eax
// 009254f3  8b4dc0               mov ecx, dword ptr [ebp - 0x40]
// 009254f6  894dbc               mov dword ptr [ebp - 0x44], ecx
// 009254f9  837dbc00             cmp dword ptr [ebp - 0x44], 0
// 009254fd  7412                 je 0x925511
// 009254ff  8b55bc               mov edx, dword ptr [ebp - 0x44]
// 00925502  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00925505  8b08                 mov ecx, dword ptr [eax]
// 00925507  890a                 mov dword ptr [edx], ecx
// 00925509  8b55bc               mov edx, dword ptr [ebp - 0x44]
// 0092550c  8955ac               mov dword ptr [ebp - 0x54], edx
// 0092550f  eb07                 jmp 0x925518
// 00925511  c745ac00000000       mov dword ptr [ebp - 0x54], 0
// 00925518  eb22                 jmp 0x92553c
// 0092551a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0092551d  50                   push eax
// 0092551e  e837e3ecff           call 0x7f385a
// 00925523  83c404               add esp, 4
// 00925526  6a00                 push 0
// 00925528  6a00                 push 0
// 0092552a  e849f3ecff           call 0x7f4878
// 0092552f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00925536  b843559200           mov eax, 0x925543
// 0092553b  c3                   ret 
// 0092553c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00925543  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00925546  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00925549  64890d00000000       mov dword ptr fs:[0], ecx
// 00925550  5f                   pop edi
// 00925551  5e                   pop esi
// 00925552  5b                   pop ebx
// 00925553  8be5                 mov esp, ebp
// 00925555  5d                   pop ebp
// 00925556  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Buynode@?$list@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@PAVAnimationState@Ogre@@V?$allocator@PAVAnimationState@Ogre@@@std@@@2@PAU342@0ABQAVAnimationState@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll OgreAnimationState.cpp