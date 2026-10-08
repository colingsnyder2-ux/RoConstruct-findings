// roc 2007-08 00603300  unit: RBX::JointStage  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603300
//
// 00603300  6aff                 push -1
// 00603302  68fec07500           push 0x75c0fe
// 00603307  64a100000000         mov eax, dword ptr fs:[0]
// 0060330d  50                   push eax
// 0060330e  64892500000000       mov dword ptr fs:[0], esp
// 00603315  83ec08               sub esp, 8
// 00603318  56                   push esi
// 00603319  57                   push edi
// 0060331a  8bf1                 mov esi, ecx
// 0060331c  68c0000000           push 0xc0
// 00603321  8974240c             mov dword ptr [esp + 0xc], esi
// 00603325  e8cccb0200           call 0x62fef6
// 0060332a  83c404               add esp, 4
// 0060332d  8944240c             mov dword ptr [esp + 0xc], eax
// 00603331  85c0                 test eax, eax
// 00603333  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00603337  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060333f  740b                 je 0x60334c
// 00603341  57                   push edi
// 00603342  56                   push esi
// 00603343  8bc8                 mov ecx, eax
// 00603345  e8e6300000           call 0x606430
// 0060334a  eb02                 jmp 0x60334e
// 0060334c  33c0                 xor eax, eax
// 0060334e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00603352  894e04               mov dword ptr [esi + 4], ecx
// 00603355  894608               mov dword ptr [esi + 8], eax
// 00603358  897e0c               mov dword ptr [esi + 0xc], edi
// 0060335b  8d7e10               lea edi, [esi + 0x10]
// 0060335e  8bcf                 mov ecx, edi
// 00603360  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00603368  c706e42b7c00         mov dword ptr [esi], 0x7c2be4
// 0060336e  e83d60faff           call 0x5a93b0
// 00603373  894704               mov dword ptr [edi + 4], eax
// 00603376  c6401101             mov byte ptr [eax + 0x11], 1
// 0060337a  8b4704               mov eax, dword ptr [edi + 4]
// 0060337d  894004               mov dword ptr [eax + 4], eax
// 00603380  8b4704               mov eax, dword ptr [edi + 4]
// 00603383  8900                 mov dword ptr [eax], eax
// 00603385  8b4704               mov eax, dword ptr [edi + 4]
// 00603388  894008               mov dword ptr [eax + 8], eax
// 0060338b  c7470800000000       mov dword ptr [edi + 8], 0
// 00603392  8d7e1c               lea edi, [esi + 0x1c]
// 00603395  8bcf                 mov ecx, edi
// 00603397  c644241802           mov byte ptr [esp + 0x18], 2
// 0060339c  e80f02f8ff           call 0x5835b0
// 006033a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006033a5  894704               mov dword ptr [edi + 4], eax
// 006033a8  c6401501             mov byte ptr [eax + 0x15], 1
// 006033ac  8b4704               mov eax, dword ptr [edi + 4]
// 006033af  894004               mov dword ptr [eax + 4], eax
// 006033b2  8b4704               mov eax, dword ptr [edi + 4]
// 006033b5  8900                 mov dword ptr [eax], eax
// 006033b7  8b4704               mov eax, dword ptr [edi + 4]
// 006033ba  894008               mov dword ptr [eax + 8], eax
// 006033bd  c7470800000000       mov dword ptr [edi + 8], 0
// 006033c4  5f                   pop edi
// 006033c5  8bc6                 mov eax, esi
// 006033c7  5e                   pop esi
// 006033c8  64890d00000000       mov dword ptr fs:[0], ecx
// 006033cf  83c414               add esp, 0x14
// 006033d2  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ??0JointStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
