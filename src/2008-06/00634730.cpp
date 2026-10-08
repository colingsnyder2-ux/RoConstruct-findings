// roc 2008-06 00634730  unit: RBX::VBrickColor::V?$Value::?$DescribedCreatable  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634730
//
// 00634730  6aff                 push -1
// 00634732  6810a07d00           push 0x7da010
// 00634737  64a100000000         mov eax, dword ptr fs:[0]
// 0063473d  50                   push eax
// 0063473e  64892500000000       mov dword ptr fs:[0], esp
// 00634745  83ec08               sub esp, 8
// 00634748  56                   push esi
// 00634749  8bf1                 mov esi, ecx
// 0063474b  57                   push edi
// 0063474c  89742408             mov dword ptr [esp + 8], esi
// 00634750  8d7e10               lea edi, [esi + 0x10]
// 00634753  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063475b  897c240c             mov dword ptr [esp + 0xc], edi
// 0063475f  8d4f08               lea ecx, [edi + 8]
// 00634762  c644241801           mov byte ptr [esp + 0x18], 1
// 00634767  e87409f6ff           call 0x5950e0
// 0063476c  8bcf                 mov ecx, edi
// 0063476e  c644241800           mov byte ptr [esp + 0x18], 0
// 00634773  e8e8befcff           call 0x600660
// 00634778  8bce                 mov ecx, esi
// 0063477a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00634782  e8696df3ff           call 0x56b4f0
// 00634787  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063478b  5f                   pop edi
// 0063478c  5e                   pop esi
// 0063478d  64890d00000000       mov dword ptr fs:[0], ecx
// 00634794  83c414               add esp, 0x14
// 00634797  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
