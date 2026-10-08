// roc 2007-03 005e6fe0  unit: seg_005e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6fe0
//
// 005e6fe0  8b442408             mov eax, dword ptr [esp + 8]
// 005e6fe4  56                   push esi
// 005e6fe5  8bf1                 mov esi, ecx
// 005e6fe7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e6feb  50                   push eax
// 005e6fec  51                   push ecx
// 005e6fed  8bce                 mov ecx, esi
// 005e6fef  e84c690000           call 0x5ed940
// 005e6ff4  c7069cf87b00         mov dword ptr [esi], 0x7bf89c
// 005e6ffa  8bc6                 mov eax, esi
// 005e6ffc  5e                   pop esi
// 005e6ffd  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
