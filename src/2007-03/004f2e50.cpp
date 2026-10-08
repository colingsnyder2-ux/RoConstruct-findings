// roc 2007-03 004f2e50  unit: seg_004f0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2e50
//
// 004f2e50  51                   push ecx
// 004f2e51  53                   push ebx
// 004f2e52  c744240400000000     mov dword ptr [esp + 4], 0
// 004f2e5a  50                   push eax
// 004f2e5b  53                   push ebx
// 004f2e5c  9c                   pushfd 
// 004f2e5d  9c                   pushfd 
// 004f2e5e  58                   pop eax
// 004f2e5f  8bd8                 mov ebx, eax
// 004f2e61  3500002000           xor eax, 0x200000
// 004f2e66  50                   push eax
// 004f2e67  9d                   popfd 
// 004f2e68  9c                   pushfd 
// 004f2e69  58                   pop eax
// 004f2e6a  9d                   popfd 
// 004f2e6b  33c3                 xor eax, ebx
// 004f2e6d  8944240c             mov dword ptr [esp + 0xc], eax
// 004f2e71  5b                   pop ebx
// 004f2e72  58                   pop eax
// 004f2e73  837c240400           cmp dword ptr [esp + 4], 0
// 004f2e78  5b                   pop ebx
// 004f2e79  0f95c0               setne al
// 004f2e7c  a26dad8b00           mov byte ptr [0x8bad6d], al
// 004f2e81  59                   pop ecx
// 004f2e82  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?checkForCPUID@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
