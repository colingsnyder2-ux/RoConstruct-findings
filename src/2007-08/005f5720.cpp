// roc 2007-08 005f5720  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5720
//
// 005f5720  6aff                 push -1
// 005f5722  6890b87500           push 0x75b890
// 005f5727  64a100000000         mov eax, dword ptr fs:[0]
// 005f572d  50                   push eax
// 005f572e  64892500000000       mov dword ptr fs:[0], esp
// 005f5735  83ec14               sub esp, 0x14
// 005f5738  53                   push ebx
// 005f5739  55                   push ebp
// 005f573a  56                   push esi
// 005f573b  8bf1                 mov esi, ecx
// 005f573d  57                   push edi
// 005f573e  89742410             mov dword ptr [esp + 0x10], esi
// 005f5742  e869e3ffff           call 0x5f3ab0
// 005f5747  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f574b  51                   push ecx
// 005f574c  50                   push eax
// 005f574d  8bce                 mov ecx, esi
// 005f574f  e8bcacf7ff           call 0x570410
// 005f5754  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f5758  6aff                 push -1
// 005f575a  52                   push edx
// 005f575b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f5763  c706340f7c00         mov dword ptr [esi], 0x7c0f34
// 005f5769  e8d271f3ff           call 0x52c940
// 005f576e  83c408               add esp, 8
// 005f5771  89442414             mov dword ptr [esp + 0x14], eax
// 005f5775  e84685f7ff           call 0x56dcc0
// 005f577a  8d4c241c             lea ecx, [esp + 0x1c]
// 005f577e  89442418             mov dword ptr [esp + 0x18], eax
// 005f5782  e8397cf7ff           call 0x56d3c0
// 005f5787  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f578a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f578d  8d7e18               lea edi, [esi + 0x18]
// 005f5790  8d442414             lea eax, [esp + 0x14]
// 005f5794  50                   push eax
// 005f5795  51                   push ecx
// 005f5796  55                   push ebp
// 005f5797  8bcf                 mov ecx, edi
// 005f5799  c644243801           mov byte ptr [esp + 0x38], 1
// 005f579e  e89dfae1ff           call 0x415240
// 005f57a3  6a01                 push 1
// 005f57a5  8bcf                 mov ecx, edi
// 005f57a7  8bd8                 mov ebx, eax
// 005f57a9  e8c2eee1ff           call 0x414670
// 005f57ae  895d04               mov dword ptr [ebp + 4], ebx
// 005f57b1  8b4304               mov eax, dword ptr [ebx + 4]
// 005f57b4  8918                 mov dword ptr [eax], ebx
// 005f57b6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f57ba  85c9                 test ecx, ecx
// 005f57bc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f57c1  7408                 je 0x5f57cb
// 005f57c3  8b11                 mov edx, dword ptr [ecx]
// 005f57c5  8b02                 mov eax, dword ptr [edx]
// 005f57c7  6a01                 push 1
// 005f57c9  ffd0                 call eax
// 005f57cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f57cf  5f                   pop edi
// 005f57d0  8bc6                 mov eax, esi
// 005f57d2  5e                   pop esi
// 005f57d3  5d                   pop ebp
// 005f57d4  5b                   pop ebx
// 005f57d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f57dc  83c420               add esp, 0x20
// 005f57df  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
