// roc 2009-06 006cdcc0  unit: RBX::AxisMoveTool  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cdcc0
//
// 006cdcc0  64a100000000         mov eax, dword ptr fs:[0]
// 006cdcc6  6aff                 push -1
// 006cdcc8  68c00f8700           push 0x870fc0
// 006cdccd  50                   push eax
// 006cdcce  64892500000000       mov dword ptr fs:[0], esp
// 006cdcd5  83ec18               sub esp, 0x18
// 006cdcd8  56                   push esi
// 006cdcd9  57                   push edi
// 006cdcda  6a04                 push 4
// 006cdcdc  8bf9                 mov edi, ecx
// 006cdcde  e855ad0400           call 0x718a38
// 006cdce3  33f6                 xor esi, esi
// 006cdce5  83c404               add esp, 4
// 006cdce8  3bc6                 cmp eax, esi
// 006cdcea  7408                 je 0x6cdcf4
// 006cdcec  8d4c2408             lea ecx, [esp + 8]
// 006cdcf0  8908                 mov dword ptr [eax], ecx
// 006cdcf2  eb02                 jmp 0x6cdcf6
// 006cdcf4  33c0                 xor eax, eax
// 006cdcf6  89442408             mov dword ptr [esp + 8], eax
// 006cdcfa  89742414             mov dword ptr [esp + 0x14], esi
// 006cdcfe  89742418             mov dword ptr [esp + 0x18], esi
// 006cdd02  8974241c             mov dword ptr [esp + 0x1c], esi
// 006cdd06  8d542430             lea edx, [esp + 0x30]
// 006cdd0a  52                   push edx
// 006cdd0b  8d4c240c             lea ecx, [esp + 0xc]
// 006cdd0f  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 006cdd17  e85460d6ff           call 0x433d70
// 006cdd1c  8d442408             lea eax, [esp + 8]
// 006cdd20  50                   push eax
// 006cdd21  8bcf                 mov ecx, edi
// 006cdd23  e858feffff           call 0x6cdb80
// 006cdd28  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cdd2c  3bc6                 cmp eax, esi
// 006cdd2e  7409                 je 0x6cdd39
// 006cdd30  50                   push eax
// 006cdd31  e8fcac0400           call 0x718a32
// 006cdd36  83c404               add esp, 4
// 006cdd39  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006cdd3d  51                   push ecx
// 006cdd3e  89742418             mov dword ptr [esp + 0x18], esi
// 006cdd42  8974241c             mov dword ptr [esp + 0x1c], esi
// 006cdd46  89742420             mov dword ptr [esp + 0x20], esi
// 006cdd4a  e8e3ac0400           call 0x718a32
// 006cdd4f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006cdd53  83c404               add esp, 4
// 006cdd56  5f                   pop edi
// 006cdd57  5e                   pop esi
// 006cdd58  64890d00000000       mov dword ptr fs:[0], ecx
// 006cdd5f  83c424               add esp, 0x24
// 006cdd62  c20400               ret 4
// library rbxgs/v8datamodel\ICameraOwner.cpp (function ?setCameraIgnoreParts@ICameraOwner@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICameraOwner.cpp
