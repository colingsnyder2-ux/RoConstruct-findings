// roc 2007-03 006056b0  unit: seg_00600000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006056b0
//
// 006056b0  6aff                 push -1
// 006056b2  6820937500           push 0x759320
// 006056b7  64a100000000         mov eax, dword ptr fs:[0]
// 006056bd  50                   push eax
// 006056be  64892500000000       mov dword ptr fs:[0], esp
// 006056c5  83ec14               sub esp, 0x14
// 006056c8  53                   push ebx
// 006056c9  55                   push ebp
// 006056ca  56                   push esi
// 006056cb  8bf1                 mov esi, ecx
// 006056cd  57                   push edi
// 006056ce  89742410             mov dword ptr [esp + 0x10], esi
// 006056d2  e859c4fcff           call 0x5d1b30
// 006056d7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006056db  51                   push ecx
// 006056dc  50                   push eax
// 006056dd  8bce                 mov ecx, esi
// 006056df  e84cacf6ff           call 0x570330
// 006056e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 006056e8  6aff                 push -1
// 006056ea  52                   push edx
// 006056eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006056f3  c7065c107c00         mov dword ptr [esi], 0x7c105c
// 006056f9  e8e281f2ff           call 0x52d8e0
// 006056fe  83c408               add esp, 8
// 00605701  89442414             mov dword ptr [esp + 0x14], eax
// 00605705  e8f67cf6ff           call 0x56d400
// 0060570a  8d4c241c             lea ecx, [esp + 0x1c]
// 0060570e  89442418             mov dword ptr [esp + 0x18], eax
// 00605712  e83977f6ff           call 0x56ce50
// 00605717  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0060571a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0060571d  8d7e18               lea edi, [esi + 0x18]
// 00605720  8d442414             lea eax, [esp + 0x14]
// 00605724  50                   push eax
// 00605725  51                   push ecx
// 00605726  55                   push ebp
// 00605727  8bcf                 mov ecx, edi
// 00605729  c644243801           mov byte ptr [esp + 0x38], 1
// 0060572e  e86d0be1ff           call 0x4162a0
// 00605733  6a01                 push 1
// 00605735  8bcf                 mov ecx, edi
// 00605737  8bd8                 mov ebx, eax
// 00605739  e842ffe0ff           call 0x415680
// 0060573e  895d04               mov dword ptr [ebp + 4], ebx
// 00605741  8b4304               mov eax, dword ptr [ebx + 4]
// 00605744  8918                 mov dword ptr [eax], ebx
// 00605746  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060574a  85c9                 test ecx, ecx
// 0060574c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00605751  7408                 je 0x60575b
// 00605753  8b11                 mov edx, dword ptr [ecx]
// 00605755  8b02                 mov eax, dword ptr [edx]
// 00605757  6a01                 push 1
// 00605759  ffd0                 call eax
// 0060575b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060575f  5f                   pop edi
// 00605760  8bc6                 mov eax, esi
// 00605762  5e                   pop esi
// 00605763  5d                   pop ebp
// 00605764  5b                   pop ebx
// 00605765  64890d00000000       mov dword ptr fs:[0], ecx
// 0060576c  83c420               add esp, 0x20
// 0060576f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
