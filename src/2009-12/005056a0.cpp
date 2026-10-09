// roc 2009-12 005056a0  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005056a0
//
// 005056a0  56                   push esi
// 005056a1  6a10                 push 0x10
// 005056a3  8bf1                 mov esi, ecx
// 005056a5  e8b6e12e00           call 0x7f3860
// 005056aa  83c404               add esp, 4
// 005056ad  85c0                 test eax, eax
// 005056af  740e                 je 0x5056bf
// 005056b1  c70088a79b00         mov dword ptr [eax], 0x9ba788
// 005056b7  dd4608               fld qword ptr [esi + 8]
// 005056ba  dd5808               fstp qword ptr [eax + 8]
// 005056bd  5e                   pop esi
// 005056be  c3                   ret 
// 005056bf  33c0                 xor eax, eax
// 005056c1  5e                   pop esi
// 005056c2  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
