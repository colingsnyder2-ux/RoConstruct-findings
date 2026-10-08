// roc 2007-08 0056d580  unit: boost::any::N::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d580
//
// 0056d580  56                   push esi
// 0056d581  6a10                 push 0x10
// 0056d583  8bf1                 mov esi, ecx
// 0056d585  e86c290c00           call 0x62fef6
// 0056d58a  83c404               add esp, 4
// 0056d58d  85c0                 test eax, eax
// 0056d58f  740e                 je 0x56d59f
// 0056d591  c700b49f7a00         mov dword ptr [eax], 0x7a9fb4
// 0056d597  dd4608               fld qword ptr [esi + 8]
// 0056d59a  dd5808               fstp qword ptr [eax + 8]
// 0056d59d  5e                   pop esi
// 0056d59e  c3                   ret 
// 0056d59f  33c0                 xor eax, eax
// 0056d5a1  5e                   pop esi
// 0056d5a2  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?clone@?$holder@N@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
