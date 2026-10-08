// roc 2007-03 00536f00  unit: seg_00530000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536f00
//
// 00536f00  56                   push esi
// 00536f01  6a10                 push 0x10
// 00536f03  8bf1                 mov esi, ecx
// 00536f05  e8fe710e00           call 0x61e108
// 00536f0a  83c404               add esp, 4
// 00536f0d  85c0                 test eax, eax
// 00536f0f  741a                 je 0x536f2b
// 00536f11  d94604               fld dword ptr [esi + 4]
// 00536f14  c700bc577a00         mov dword ptr [eax], 0x7a57bc
// 00536f1a  d95804               fstp dword ptr [eax + 4]
// 00536f1d  d94608               fld dword ptr [esi + 8]
// 00536f20  d95808               fstp dword ptr [eax + 8]
// 00536f23  d9460c               fld dword ptr [esi + 0xc]
// 00536f26  5e                   pop esi
// 00536f27  d9580c               fstp dword ptr [eax + 0xc]
// 00536f2a  c3                   ret 
// 00536f2b  33c0                 xor eax, eax
// 00536f2d  5e                   pop esi
// 00536f2e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@VVector3@G3D@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
