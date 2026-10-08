// roc 2007-03 005a51f0  unit: seg_005a0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a51f0
//
// 005a51f0  6aff                 push -1
// 005a51f2  6820937500           push 0x759320
// 005a51f7  64a100000000         mov eax, dword ptr fs:[0]
// 005a51fd  50                   push eax
// 005a51fe  64892500000000       mov dword ptr fs:[0], esp
// 005a5205  83ec14               sub esp, 0x14
// 005a5208  53                   push ebx
// 005a5209  55                   push ebp
// 005a520a  56                   push esi
// 005a520b  8bf1                 mov esi, ecx
// 005a520d  57                   push edi
// 005a520e  89742410             mov dword ptr [esp + 0x10], esi
// 005a5212  e8b931feff           call 0x5883d0
// 005a5217  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a521b  51                   push ecx
// 005a521c  50                   push eax
// 005a521d  8bce                 mov ecx, esi
// 005a521f  e80cb1fcff           call 0x570330
// 005a5224  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a5228  6aff                 push -1
// 005a522a  52                   push edx
// 005a522b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005a5233  c70690587b00         mov dword ptr [esi], 0x7b5890
// 005a5239  e8a286f8ff           call 0x52d8e0
// 005a523e  83c408               add esp, 8
// 005a5241  89442414             mov dword ptr [esp + 0x14], eax
// 005a5245  e8f67ffcff           call 0x56d240
// 005a524a  8d4c241c             lea ecx, [esp + 0x1c]
// 005a524e  89442418             mov dword ptr [esp + 0x18], eax
// 005a5252  e8f97bfcff           call 0x56ce50
// 005a5257  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005a525a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a525d  8d7e18               lea edi, [esi + 0x18]
// 005a5260  8d442414             lea eax, [esp + 0x14]
// 005a5264  50                   push eax
// 005a5265  51                   push ecx
// 005a5266  55                   push ebp
// 005a5267  8bcf                 mov ecx, edi
// 005a5269  c644243801           mov byte ptr [esp + 0x38], 1
// 005a526e  e82d10e7ff           call 0x4162a0
// 005a5273  6a01                 push 1
// 005a5275  8bcf                 mov ecx, edi
// 005a5277  8bd8                 mov ebx, eax
// 005a5279  e80204e7ff           call 0x415680
// 005a527e  895d04               mov dword ptr [ebp + 4], ebx
// 005a5281  8b4304               mov eax, dword ptr [ebx + 4]
// 005a5284  8918                 mov dword ptr [eax], ebx
// 005a5286  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a528a  85c9                 test ecx, ecx
// 005a528c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a5291  7408                 je 0x5a529b
// 005a5293  8b11                 mov edx, dword ptr [ecx]
// 005a5295  8b02                 mov eax, dword ptr [edx]
// 005a5297  6a01                 push 1
// 005a5299  ffd0                 call eax
// 005a529b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a529f  5f                   pop edi
// 005a52a0  8bc6                 mov eax, esi
// 005a52a2  5e                   pop esi
// 005a52a3  5d                   pop ebp
// 005a52a4  5b                   pop ebx
// 005a52a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005a52ac  83c420               add esp, 0x20
// 005a52af  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
