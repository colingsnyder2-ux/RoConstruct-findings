// roc 2007-03 00470f60  unit: seg_00470000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470f60
//
// 00470f60  56                   push esi
// 00470f61  8bf1                 mov esi, ecx
// 00470f63  8b4604               mov eax, dword ptr [esi + 4]
// 00470f66  3b4608               cmp eax, dword ptr [esi + 8]
// 00470f69  8b0e                 mov ecx, dword ptr [esi]
// 00470f6b  7d17                 jge 0x470f84
// 00470f6d  8d0481               lea eax, [ecx + eax*4]
// 00470f70  85c0                 test eax, eax
// 00470f72  7408                 je 0x470f7c
// 00470f74  8b542408             mov edx, dword ptr [esp + 8]
// 00470f78  8b0a                 mov ecx, dword ptr [edx]
// 00470f7a  8908                 mov dword ptr [eax], ecx
// 00470f7c  83460401             add dword ptr [esi + 4], 1
// 00470f80  5e                   pop esi
// 00470f81  c20400               ret 4
// 00470f84  57                   push edi
// 00470f85  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00470f89  3bf9                 cmp edi, ecx
// 00470f8b  721e                 jb 0x470fab
// 00470f8d  8d1481               lea edx, [ecx + eax*4]
// 00470f90  3bfa                 cmp edi, edx
// 00470f92  7317                 jae 0x470fab
// 00470f94  8b07                 mov eax, dword ptr [edi]
// 00470f96  8d4c240c             lea ecx, [esp + 0xc]
// 00470f9a  51                   push ecx
// 00470f9b  8bce                 mov ecx, esi
// 00470f9d  89442410             mov dword ptr [esp + 0x10], eax
// 00470fa1  e8baffffff           call 0x470f60
// 00470fa6  5f                   pop edi
// 00470fa7  5e                   pop esi
// 00470fa8  c20400               ret 4
// 00470fab  6a00                 push 0
// 00470fad  83c001               add eax, 1
// 00470fb0  50                   push eax
// 00470fb1  8bce                 mov ecx, esi
// 00470fb3  e828f9ffff           call 0x4708e0
// 00470fb8  8b0f                 mov ecx, dword ptr [edi]
// 00470fba  8b5604               mov edx, dword ptr [esi + 4]
// 00470fbd  8b06                 mov eax, dword ptr [esi]
// 00470fbf  5f                   pop edi
// 00470fc0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00470fc4  5e                   pop esi
// 00470fc5  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
