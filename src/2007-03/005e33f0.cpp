// roc 2007-03 005e33f0  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e33f0
//
// 005e33f0  6aff                 push -1
// 005e33f2  6820937500           push 0x759320
// 005e33f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e33fd  50                   push eax
// 005e33fe  64892500000000       mov dword ptr fs:[0], esp
// 005e3405  83ec14               sub esp, 0x14
// 005e3408  53                   push ebx
// 005e3409  55                   push ebp
// 005e340a  56                   push esi
// 005e340b  8bf1                 mov esi, ecx
// 005e340d  57                   push edi
// 005e340e  89742410             mov dword ptr [esp + 0x10], esi
// 005e3412  e8696afaff           call 0x589e80
// 005e3417  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e341b  51                   push ecx
// 005e341c  50                   push eax
// 005e341d  8bce                 mov ecx, esi
// 005e341f  e80ccff8ff           call 0x570330
// 005e3424  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e3428  6aff                 push -1
// 005e342a  52                   push edx
// 005e342b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e3433  c706d8eb7b00         mov dword ptr [esi], 0x7bebd8
// 005e3439  e8a2a4f4ff           call 0x52d8e0
// 005e343e  83c408               add esp, 8
// 005e3441  89442414             mov dword ptr [esp + 0x14], eax
// 005e3445  e8a69cf8ff           call 0x56d0f0
// 005e344a  8d4c241c             lea ecx, [esp + 0x1c]
// 005e344e  89442418             mov dword ptr [esp + 0x18], eax
// 005e3452  e8f999f8ff           call 0x56ce50
// 005e3457  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e345a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e345d  8d7e18               lea edi, [esi + 0x18]
// 005e3460  8d442414             lea eax, [esp + 0x14]
// 005e3464  50                   push eax
// 005e3465  51                   push ecx
// 005e3466  55                   push ebp
// 005e3467  8bcf                 mov ecx, edi
// 005e3469  c644243801           mov byte ptr [esp + 0x38], 1
// 005e346e  e82d2ee3ff           call 0x4162a0
// 005e3473  6a01                 push 1
// 005e3475  8bcf                 mov ecx, edi
// 005e3477  8bd8                 mov ebx, eax
// 005e3479  e80222e3ff           call 0x415680
// 005e347e  895d04               mov dword ptr [ebp + 4], ebx
// 005e3481  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3484  8918                 mov dword ptr [eax], ebx
// 005e3486  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e348a  85c9                 test ecx, ecx
// 005e348c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3491  7408                 je 0x5e349b
// 005e3493  8b11                 mov edx, dword ptr [ecx]
// 005e3495  8b02                 mov eax, dword ptr [edx]
// 005e3497  6a01                 push 1
// 005e3499  ffd0                 call eax
// 005e349b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e349f  5f                   pop edi
// 005e34a0  8bc6                 mov eax, esi
// 005e34a2  5e                   pop esi
// 005e34a3  5d                   pop ebp
// 005e34a4  5b                   pop ebx
// 005e34a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e34ac  83c420               add esp, 0x20
// 005e34af  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
