// roc 2007-03 006966f0  unit: seg_00690000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006966f0
//
// 006966f0  8b542408             mov edx, dword ptr [esp + 8]
// 006966f4  8bc1                 mov eax, ecx
// 006966f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006966fa  c700e40e7d00         mov dword ptr [eax], 0x7d0ee4
// 00696700  894804               mov dword ptr [eax + 4], ecx
// 00696703  895008               mov dword ptr [eax + 8], edx
// 00696706  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0SignalInstance@Reflection@RBX@@IAE@PAVSignalSource@12@ABVSignalDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
