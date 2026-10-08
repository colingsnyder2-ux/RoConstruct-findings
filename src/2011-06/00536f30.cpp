// roc 2011-06 00536f30  unit: CSHA1  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00536f30
//
// 00536f30  8b4104               mov eax, dword ptr [ecx + 4]
// 00536f33  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00536f36  56                   push esi
// 00536f37  57                   push edi
// 00536f38  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536f3c  8d3438               lea esi, [eax + edi]
// 00536f3f  3bf2                 cmp esi, edx
// 00536f41  720e                 jb 0x536f51
// 00536f43  8b09                 mov ecx, dword ptr [ecx]
// 00536f45  2bc2                 sub eax, edx
// 00536f47  03c7                 add eax, edi
// 00536f49  5f                   pop edi
// 00536f4a  8d04c1               lea eax, [ecx + eax*8]
// 00536f4d  5e                   pop esi
// 00536f4e  c20400               ret 4
// 00536f51  8b11                 mov edx, dword ptr [ecx]
// 00536f53  5f                   pop edi
// 00536f54  8d04f2               lea eax, [edx + esi*8]
// 00536f57  5e                   pop esi
// 00536f58  c20400               ret 4
// library rbxgs-raknet/ReliabilityLayer.cpp (function ??A?$Queue@_J@DataStructures@@QBEAA_JI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
