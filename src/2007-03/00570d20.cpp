// roc 2007-03 00570d20  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570d20
//
// 00570d20  64a100000000         mov eax, dword ptr fs:[0]
// 00570d26  6aff                 push -1
// 00570d28  6892617500           push 0x756192
// 00570d2d  50                   push eax
// 00570d2e  64892500000000       mov dword ptr fs:[0], esp
// 00570d35  83ec10               sub esp, 0x10
// 00570d38  56                   push esi
// 00570d39  8bf1                 mov esi, ecx
// 00570d3b  6aff                 push -1
// 00570d3d  6810b87a00           push 0x7ab810
// 00570d42  c70664617800         mov dword ptr [esi], 0x786164
// 00570d48  e893cbfbff           call 0x52d8e0
// 00570d4d  83c408               add esp, 8
// 00570d50  894604               mov dword ptr [esi + 4], eax
// 00570d53  33c0                 xor eax, eax
// 00570d55  89460c               mov dword ptr [esi + 0xc], eax
// 00570d58  894610               mov dword ptr [esi + 0x10], eax
// 00570d5b  894614               mov dword ptr [esi + 0x14], eax
// 00570d5e  89461c               mov dword ptr [esi + 0x1c], eax
// 00570d61  894620               mov dword ptr [esi + 0x20], eax
// 00570d64  894624               mov dword ptr [esi + 0x24], eax
// 00570d67  894628               mov dword ptr [esi + 0x28], eax
// 00570d6a  894630               mov dword ptr [esi + 0x30], eax
// 00570d6d  894634               mov dword ptr [esi + 0x34], eax
// 00570d70  894638               mov dword ptr [esi + 0x38], eax
// 00570d73  894640               mov dword ptr [esi + 0x40], eax
// 00570d76  894644               mov dword ptr [esi + 0x44], eax
// 00570d79  894648               mov dword ptr [esi + 0x48], eax
// 00570d7c  89464c               mov dword ptr [esi + 0x4c], eax
// 00570d7f  894654               mov dword ptr [esi + 0x54], eax
// 00570d82  894658               mov dword ptr [esi + 0x58], eax
// 00570d85  89465c               mov dword ptr [esi + 0x5c], eax
// 00570d88  894664               mov dword ptr [esi + 0x64], eax
// 00570d8b  894668               mov dword ptr [esi + 0x68], eax
// 00570d8e  89466c               mov dword ptr [esi + 0x6c], eax
// 00570d91  894670               mov dword ptr [esi + 0x70], eax
// 00570d94  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570d98  c7060cb87a00         mov dword ptr [esi], 0x7ab80c
// 00570d9e  894678               mov dword ptr [esi + 0x78], eax
// 00570da1  89467c               mov dword ptr [esi + 0x7c], eax
// 00570da4  898680000000         mov dword ptr [esi + 0x80], eax
// 00570daa  898684000000         mov dword ptr [esi + 0x84], eax
// 00570db0  8bc6                 mov eax, esi
// 00570db2  5e                   pop esi
// 00570db3  64890d00000000       mov dword ptr fs:[0], ecx
// 00570dba  83c41c               add esp, 0x1c
// 00570dbd  c3                   ret 
// library openrbx-client/App\reflection\reflection_object.cpp (function ??0ClassDescriptor@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
