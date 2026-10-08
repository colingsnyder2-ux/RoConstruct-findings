// roc 2011-06 004b36f0  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b36f0
//
// 004b36f0  56                   push esi
// 004b36f1  6a10                 push 0x10
// 004b36f3  8bf1                 mov esi, ecx
// 004b36f5  e864693500           call 0x80a05e
// 004b36fa  83c404               add esp, 4
// 004b36fd  85c0                 test eax, eax
// 004b36ff  740e                 je 0x4b370f
// 004b3701  c7000875a700         mov dword ptr [eax], 0xa77508
// 004b3707  dd4608               fld qword ptr [esi + 8]
// 004b370a  dd5808               fstp qword ptr [eax + 8]
// 004b370d  5e                   pop esi
// 004b370e  c3                   ret 
// 004b370f  33c0                 xor eax, eax
// 004b3711  5e                   pop esi
// 004b3712  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
