// roc 2007-03 00468dd0  unit: seg_00460000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00468dd0
//
// 00468dd0  8b542408             mov edx, dword ptr [esp + 8]
// 00468dd4  8bc1                 mov eax, ecx
// 00468dd6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00468dda  c7007c547900         mov dword ptr [eax], 0x79547c
// 00468de0  894804               mov dword ptr [eax + 4], ecx
// 00468de3  895008               mov dword ptr [eax + 8], edx
// 00468de6  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0SignalInstance@Reflection@RBX@@IAE@PAVSignalSource@12@ABVSignalDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
