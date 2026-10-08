// roc 2010-06 004b2fb0  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b2fb0
//
// 004b2fb0  56                   push esi
// 004b2fb1  6a10                 push 0x10
// 004b2fb3  8bf1                 mov esi, ecx
// 004b2fb5  e8e6492f00           call 0x7a79a0
// 004b2fba  83c404               add esp, 4
// 004b2fbd  85c0                 test eax, eax
// 004b2fbf  740e                 je 0x4b2fcf
// 004b2fc1  c7009084a100         mov dword ptr [eax], 0xa18490
// 004b2fc7  dd4608               fld qword ptr [esi + 8]
// 004b2fca  dd5808               fstp qword ptr [eax + 8]
// 004b2fcd  5e                   pop esi
// 004b2fce  c3                   ret 
// 004b2fcf  33c0                 xor eax, eax
// 004b2fd1  5e                   pop esi
// 004b2fd2  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
