// roc 2007-03 005856f0  unit: seg_00580000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005856f0
//
// 005856f0  6aff                 push -1
// 005856f2  6848be7500           push 0x75be48
// 005856f7  64a100000000         mov eax, dword ptr fs:[0]
// 005856fd  50                   push eax
// 005856fe  64892500000000       mov dword ptr fs:[0], esp
// 00585705  83ec08               sub esp, 8
// 00585708  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058570c  56                   push esi
// 0058570d  57                   push edi
// 0058570e  8bf1                 mov esi, ecx
// 00585710  89742408             mov dword ptr [esp + 8], esi
// 00585714  50                   push eax
// 00585715  51                   push ecx
// 00585716  8bc4                 mov eax, esp
// 00585718  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00585720  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00585728  89642414             mov dword ptr [esp + 0x14], esp
// 0058572c  c70000000000         mov dword ptr [eax], 0
// 00585732  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585736  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058573a  51                   push ecx
// 0058573b  52                   push edx
// 0058573c  c644242801           mov byte ptr [esp + 0x28], 1
// 00585741  e8cafeffff           call 0x585610
// 00585746  50                   push eax
// 00585747  8bce                 mov ecx, esi
// 00585749  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0058574e  e86df1ebff           call 0x4448c0
// 00585753  8b442434             mov eax, dword ptr [esp + 0x34]
// 00585757  50                   push eax
// 00585758  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0058575d  e88e890900           call 0x61e0f0
// 00585762  6a18                 push 0x18
// 00585764  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 0058576a  e899890900           call 0x61e108
// 0058576f  83c408               add esp, 8
// 00585772  85c0                 test eax, eax
// 00585774  7422                 je 0x585798
// 00585776  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058577a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058577e  894808               mov dword ptr [eax + 8], ecx
// 00585781  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00585785  c700f4fa7a00         mov dword ptr [eax], 0x7afaf4
// 0058578b  897004               mov dword ptr [eax + 4], esi
// 0058578e  895010               mov dword ptr [eax + 0x10], edx
// 00585791  894814               mov dword ptr [eax + 0x14], ecx
// 00585794  8bf8                 mov edi, eax
// 00585796  eb02                 jmp 0x58579a
// 00585798  33ff                 xor edi, edi
// 0058579a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058579d  3bf8                 cmp edi, eax
// 0058579f  7409                 je 0x5857aa
// 005857a1  50                   push eax
// 005857a2  e849890900           call 0x61e0f0
// 005857a7  83c404               add esp, 4
// 005857aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005857ae  897e18               mov dword ptr [esi + 0x18], edi
// 005857b1  5f                   pop edi
// 005857b2  8bc6                 mov eax, esi
// 005857b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005857bb  5e                   pop esi
// 005857bc  83c414               add esp, 0x14
// 005857bf  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
