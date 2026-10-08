// roc 2008-06 00579360  unit: RBX::VDataModel::?$BoundFuncDesc  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579360
//
// 00579360  6aff                 push -1
// 00579362  689ee37c00           push 0x7ce39e
// 00579367  64a100000000         mov eax, dword ptr fs:[0]
// 0057936d  50                   push eax
// 0057936e  64892500000000       mov dword ptr fs:[0], esp
// 00579375  51                   push ecx
// 00579376  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057937a  56                   push esi
// 0057937b  8bf1                 mov esi, ecx
// 0057937d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579381  50                   push eax
// 00579382  51                   push ecx
// 00579383  8974240c             mov dword ptr [esp + 0xc], esi
// 00579387  e834f5ffff           call 0x5788c0
// 0057938c  50                   push eax
// 0057938d  8bce                 mov ecx, esi
// 0057938f  e8fcc30100           call 0x595790
// 00579394  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579398  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057939c  8d4e40               lea ecx, [esi + 0x40]
// 0057939f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005793a7  c70674008300         mov dword ptr [esi], 0x830074
// 005793ad  895638               mov dword ptr [esi + 0x38], edx
// 005793b0  89463c               mov dword ptr [esi + 0x3c], eax
// 005793b3  e808b70100           call 0x594ac0
// 005793b8  c644241001           mov byte ptr [esp + 0x10], 1
// 005793bd  e86e38ffff           call 0x56cc30
// 005793c2  6a08                 push 8
// 005793c4  894648               mov dword ptr [esi + 0x48], eax
// 005793c7  e854751200           call 0x6a0920
// 005793cc  83c404               add esp, 4
// 005793cf  85c0                 test eax, eax
// 005793d1  740f                 je 0x5793e2
// 005793d3  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 005793d7  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 005793dd  884804               mov byte ptr [eax + 4], cl
// 005793e0  eb02                 jmp 0x5793e4
// 005793e2  33c0                 xor eax, eax
// 005793e4  89464c               mov dword ptr [esi + 0x4c], eax
// 005793e7  8b542428             mov edx, dword ptr [esp + 0x28]
// 005793eb  8b442424             mov eax, dword ptr [esp + 0x24]
// 005793ef  52                   push edx
// 005793f0  50                   push eax
// 005793f1  8bce                 mov ecx, esi
// 005793f3  c644241802           mov byte ptr [esp + 0x18], 2
// 005793f8  e803c0ffff           call 0x575400
// 005793fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00579401  8bc6                 mov eax, esi
// 00579403  5e                   pop esi
// 00579404  64890d00000000       mov dword ptr fs:[0], ecx
// 0057940b  83c410               add esp, 0x10
// 0057940e  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
