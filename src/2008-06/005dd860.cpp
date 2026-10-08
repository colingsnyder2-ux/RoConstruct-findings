// roc 2008-06 005dd860  unit: RBX::Message  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd860
//
// 005dd860  8b542404             mov edx, dword ptr [esp + 4]
// 005dd864  d902                 fld dword ptr [edx]
// 005dd866  51                   push ecx
// 005dd867  d91c24               fstp dword ptr [esp]
// 005dd86a  e861ffffff           call 0x5dd7d0
// 005dd86f  83c404               add esp, 4
// 005dd872  84c0                 test al, al
// 005dd874  7529                 jne 0x5dd89f
// 005dd876  d94204               fld dword ptr [edx + 4]
// 005dd879  51                   push ecx
// 005dd87a  d91c24               fstp dword ptr [esp]
// 005dd87d  e84effffff           call 0x5dd7d0
// 005dd882  83c404               add esp, 4
// 005dd885  84c0                 test al, al
// 005dd887  7516                 jne 0x5dd89f
// 005dd889  d94208               fld dword ptr [edx + 8]
// 005dd88c  51                   push ecx
// 005dd88d  d91c24               fstp dword ptr [esp]
// 005dd890  e83bffffff           call 0x5dd7d0
// 005dd895  83c404               add esp, 4
// 005dd898  84c0                 test al, al
// 005dd89a  7503                 jne 0x5dd89f
// 005dd89c  33c0                 xor eax, eax
// 005dd89e  c3                   ret 
// 005dd89f  b801000000           mov eax, 1
// 005dd8a4  c3                   ret 
// library rbxgs/util\Math.cpp (function ?isNanInfDenormVector3@Math@RBX@@SA_NABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
