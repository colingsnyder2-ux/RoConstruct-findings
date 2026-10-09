// roc 2009-12 0076bc40  unit: RBX::VInstance::?$NonFactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0076bc40
//
// 0076bc40  6aff                 push -1
// 0076bc42  6858b39400           push 0x94b358
// 0076bc47  64a100000000         mov eax, dword ptr fs:[0]
// 0076bc4d  50                   push eax
// 0076bc4e  64892500000000       mov dword ptr fs:[0], esp
// 0076bc55  51                   push ecx
// 0076bc56  56                   push esi
// 0076bc57  8bf1                 mov esi, ecx
// 0076bc59  89742404             mov dword ptr [esp + 4], esi
// 0076bc5d  8d4e18               lea ecx, [esi + 0x18]
// 0076bc60  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0076bc68  e8330ed9ff           call 0x4fcaa0
// 0076bc6d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076bc71  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 0076bc77  5e                   pop esi
// 0076bc78  64890d00000000       mov dword ptr fs:[0], ecx
// 0076bc7f  83c410               add esp, 0x10
// 0076bc82  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1SignalDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
