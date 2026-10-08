// roc 2009-06 004bea80  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bea80
//
// 004bea80  56                   push esi
// 004bea81  6a10                 push 0x10
// 004bea83  8bf1                 mov esi, ecx
// 004bea85  e8ae9f2500           call 0x718a38
// 004bea8a  83c404               add esp, 4
// 004bea8d  85c0                 test eax, eax
// 004bea8f  740e                 je 0x4bea9f
// 004bea91  c70084498c00         mov dword ptr [eax], 0x8c4984
// 004bea97  dd4608               fld qword ptr [esi + 8]
// 004bea9a  dd5808               fstp qword ptr [eax + 8]
// 004bea9d  5e                   pop esi
// 004bea9e  c3                   ret 
// 004bea9f  33c0                 xor eax, eax
// 004beaa1  5e                   pop esi
// 004beaa2  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
