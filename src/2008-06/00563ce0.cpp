// roc 2008-06 00563ce0  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563ce0
//
// 00563ce0  56                   push esi
// 00563ce1  6a10                 push 0x10
// 00563ce3  8bf1                 mov esi, ecx
// 00563ce5  e836cc1300           call 0x6a0920
// 00563cea  83c404               add esp, 4
// 00563ced  85c0                 test eax, eax
// 00563cef  740e                 je 0x563cff
// 00563cf1  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 00563cf7  dd4608               fld qword ptr [esi + 8]
// 00563cfa  dd5808               fstp qword ptr [eax + 8]
// 00563cfd  5e                   pop esi
// 00563cfe  c3                   ret 
// 00563cff  33c0                 xor eax, eax
// 00563d01  5e                   pop esi
// 00563d02  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
