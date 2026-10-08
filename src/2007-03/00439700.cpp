// roc 2007-03 00439700  unit: seg_00430000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439700
//
// 00439700  8b442404             mov eax, dword ptr [esp + 4]
// 00439704  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00439708  3bc1                 cmp eax, ecx
// 0043970a  7411                 je 0x43971d
// 0043970c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00439710  56                   push esi
// 00439711  8b32                 mov esi, dword ptr [edx]
// 00439713  8930                 mov dword ptr [eax], esi
// 00439715  83c004               add eax, 4
// 00439718  3bc1                 cmp eax, ecx
// 0043971a  75f5                 jne 0x439711
// 0043971c  5e                   pop esi
// 0043971d  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Fill@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@@std@@YAXPAPAVFunctionDescriptor@Reflection@RBX@@0ABQAV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
