// roc 2012-06 00710050  unit: RBX::Tool  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00710050
//
// 00710050  6aff                 push -1
// 00710052  68e852ad00           push 0xad52e8
// 00710057  64a100000000         mov eax, dword ptr fs:[0]
// 0071005d  50                   push eax
// 0071005e  64892500000000       mov dword ptr fs:[0], esp
// 00710065  51                   push ecx
// 00710066  56                   push esi
// 00710067  8bc1                 mov eax, ecx
// 00710069  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0071006d  83ec08               sub esp, 8
// 00710070  8bcc                 mov ecx, esp
// 00710072  8911                 mov dword ptr [ecx], edx
// 00710074  8b542428             mov edx, dword ptr [esp + 0x28]
// 00710078  895104               mov dword ptr [ecx + 4], edx
// 0071007b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071007f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00710087  8964240c             mov dword ptr [esp + 0xc], esp
// 0071008b  85c9                 test ecx, ecx
// 0071008d  740c                 je 0x71009b
// 0071008f  83c104               add ecx, 4
// 00710092  ba01000000           mov edx, 1
// 00710097  f00fc111             lock xadd dword ptr [ecx], edx
// 0071009b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071009f  8b11                 mov edx, dword ptr [ecx]
// 007100a1  8b4804               mov ecx, dword ptr [eax + 4]
// 007100a4  03ca                 add ecx, edx
// 007100a6  8b10                 mov edx, dword ptr [eax]
// 007100a8  ffd2                 call edx
// 007100aa  8b742420             mov esi, dword ptr [esp + 0x20]
// 007100ae  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007100b6  85f6                 test esi, esi
// 007100b8  742a                 je 0x7100e4
// 007100ba  8d4604               lea eax, [esi + 4]
// 007100bd  83c9ff               or ecx, 0xffffffff
// 007100c0  f00fc108             lock xadd dword ptr [eax], ecx
// 007100c4  751e                 jne 0x7100e4
// 007100c6  8b16                 mov edx, dword ptr [esi]
// 007100c8  8b4204               mov eax, dword ptr [edx + 4]
// 007100cb  8bce                 mov ecx, esi
// 007100cd  ffd0                 call eax
// 007100cf  8d4e08               lea ecx, [esi + 8]
// 007100d2  83caff               or edx, 0xffffffff
// 007100d5  f00fc111             lock xadd dword ptr [ecx], edx
// 007100d9  7509                 jne 0x7100e4
// 007100db  8b06                 mov eax, dword ptr [esi]
// 007100dd  8b5008               mov edx, dword ptr [eax + 8]
// 007100e0  8bce                 mov ecx, esi
// 007100e2  ffd2                 call edx
// 007100e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007100e8  64890d00000000       mov dword ptr fs:[0], ecx
// 007100ef  5e                   pop esi
// 007100f0  83c410               add esp, 0x10
// 007100f3  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
