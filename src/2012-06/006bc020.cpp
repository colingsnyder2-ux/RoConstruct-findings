// roc 2012-06 006bc020  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006bc020
//
// 006bc020  55                   push ebp
// 006bc021  8bec                 mov ebp, esp
// 006bc023  6aff                 push -1
// 006bc025  686094ab00           push 0xab9460
// 006bc02a  64a100000000         mov eax, dword ptr fs:[0]
// 006bc030  50                   push eax
// 006bc031  64892500000000       mov dword ptr fs:[0], esp
// 006bc038  83ec08               sub esp, 8
// 006bc03b  53                   push ebx
// 006bc03c  56                   push esi
// 006bc03d  57                   push edi
// 006bc03e  8bf1                 mov esi, ecx
// 006bc040  8965f0               mov dword ptr [ebp - 0x10], esp
// 006bc043  8975ec               mov dword ptr [ebp - 0x14], esi
// 006bc046  e825ecd4ff           call 0x40ac70
// 006bc04b  894604               mov dword ptr [esi + 4], eax
// 006bc04e  c6404501             mov byte ptr [eax + 0x45], 1
// 006bc052  8b4604               mov eax, dword ptr [esi + 4]
// 006bc055  894004               mov dword ptr [eax + 4], eax
// 006bc058  8b4604               mov eax, dword ptr [esi + 4]
// 006bc05b  8900                 mov dword ptr [eax], eax
// 006bc05d  8b4604               mov eax, dword ptr [esi + 4]
// 006bc060  894008               mov dword ptr [eax + 8], eax
// 006bc063  8b4508               mov eax, dword ptr [ebp + 8]
// 006bc066  50                   push eax
// 006bc067  8bce                 mov ecx, esi
// 006bc069  c7460800000000       mov dword ptr [esi + 8], 0
// 006bc070  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006bc077  e8e4eeffff           call 0x6baf60
// 006bc07c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006bc07f  5f                   pop edi
// 006bc080  8bc6                 mov eax, esi
// 006bc082  5e                   pop esi
// 006bc083  64890d00000000       mov dword ptr fs:[0], ecx
// 006bc08a  5b                   pop ebx
// 006bc08b  8be5                 mov esp, ebp
// 006bc08d  5d                   pop ebp
// 006bc08e  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp
