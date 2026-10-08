// roc 2007-03 0047ba00  unit: seg_00470000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047ba00
//
// 0047ba00  56                   push esi
// 0047ba01  8bf1                 mov esi, ecx
// 0047ba03  8b4604               mov eax, dword ptr [esi + 4]
// 0047ba06  3b4608               cmp eax, dword ptr [esi + 8]
// 0047ba09  8b0e                 mov ecx, dword ptr [esi]
// 0047ba0b  7d17                 jge 0x47ba24
// 0047ba0d  8d0481               lea eax, [ecx + eax*4]
// 0047ba10  85c0                 test eax, eax
// 0047ba12  7408                 je 0x47ba1c
// 0047ba14  8b542408             mov edx, dword ptr [esp + 8]
// 0047ba18  8b0a                 mov ecx, dword ptr [edx]
// 0047ba1a  8908                 mov dword ptr [eax], ecx
// 0047ba1c  83460401             add dword ptr [esi + 4], 1
// 0047ba20  5e                   pop esi
// 0047ba21  c20400               ret 4
// 0047ba24  57                   push edi
// 0047ba25  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047ba29  3bf9                 cmp edi, ecx
// 0047ba2b  721e                 jb 0x47ba4b
// 0047ba2d  8d1481               lea edx, [ecx + eax*4]
// 0047ba30  3bfa                 cmp edi, edx
// 0047ba32  7317                 jae 0x47ba4b
// 0047ba34  8b07                 mov eax, dword ptr [edi]
// 0047ba36  8d4c240c             lea ecx, [esp + 0xc]
// 0047ba3a  51                   push ecx
// 0047ba3b  8bce                 mov ecx, esi
// 0047ba3d  89442410             mov dword ptr [esp + 0x10], eax
// 0047ba41  e8baffffff           call 0x47ba00
// 0047ba46  5f                   pop edi
// 0047ba47  5e                   pop esi
// 0047ba48  c20400               ret 4
// 0047ba4b  6a00                 push 0
// 0047ba4d  83c001               add eax, 1
// 0047ba50  50                   push eax
// 0047ba51  8bce                 mov ecx, esi
// 0047ba53  e848fbffff           call 0x47b5a0
// 0047ba58  8b0f                 mov ecx, dword ptr [edi]
// 0047ba5a  8b5604               mov edx, dword ptr [esi + 4]
// 0047ba5d  8b06                 mov eax, dword ptr [esi]
// 0047ba5f  5f                   pop edi
// 0047ba60  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0047ba64  5e                   pop esi
// 0047ba65  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
