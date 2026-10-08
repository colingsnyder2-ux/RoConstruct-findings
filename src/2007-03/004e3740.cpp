// roc 2007-03 004e3740  unit: seg_004e0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3740
//
// 004e3740  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e3744  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e3748  3bc8                 cmp ecx, eax
// 004e374a  7411                 je 0x4e375d
// 004e374c  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e3750  8b12                 mov edx, dword ptr [edx]
// 004e3752  3911                 cmp dword ptr [ecx], edx
// 004e3754  7407                 je 0x4e375d
// 004e3756  83c104               add ecx, 4
// 004e3759  3bc8                 cmp ecx, eax
// 004e375b  75f5                 jne 0x4e3752
// 004e375d  8b442404             mov eax, dword ptr [esp + 4]
// 004e3761  8b542408             mov edx, dword ptr [esp + 8]
// 004e3765  8910                 mov dword ptr [eax], edx
// 004e3767  894804               mov dword ptr [eax + 4], ecx
// 004e376a  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ??$find@V?$_Vector_iterator@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@PAVEnumDescriptor@Reflection@RBX@@@std@@YA?AV?$_Vector_iterator@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@0@V10@0ABQAVEnumDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
