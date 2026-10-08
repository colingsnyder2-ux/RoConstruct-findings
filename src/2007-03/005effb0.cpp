// roc 2007-03 005effb0  unit: seg_005e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005effb0
//
// 005effb0  56                   push esi
// 005effb1  8bf1                 mov esi, ecx
// 005effb3  8b4604               mov eax, dword ptr [esi + 4]
// 005effb6  3b4608               cmp eax, dword ptr [esi + 8]
// 005effb9  8b0e                 mov ecx, dword ptr [esi]
// 005effbb  7d17                 jge 0x5effd4
// 005effbd  8d0481               lea eax, [ecx + eax*4]
// 005effc0  85c0                 test eax, eax
// 005effc2  7408                 je 0x5effcc
// 005effc4  8b542408             mov edx, dword ptr [esp + 8]
// 005effc8  8b0a                 mov ecx, dword ptr [edx]
// 005effca  8908                 mov dword ptr [eax], ecx
// 005effcc  83460401             add dword ptr [esi + 4], 1
// 005effd0  5e                   pop esi
// 005effd1  c20400               ret 4
// 005effd4  57                   push edi
// 005effd5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005effd9  3bf9                 cmp edi, ecx
// 005effdb  721e                 jb 0x5efffb
// 005effdd  8d1481               lea edx, [ecx + eax*4]
// 005effe0  3bfa                 cmp edi, edx
// 005effe2  7317                 jae 0x5efffb
// 005effe4  8b07                 mov eax, dword ptr [edi]
// 005effe6  8d4c240c             lea ecx, [esp + 0xc]
// 005effea  51                   push ecx
// 005effeb  8bce                 mov ecx, esi
// 005effed  89442410             mov dword ptr [esp + 0x10], eax
// 005efff1  e8baffffff           call 0x5effb0
// 005efff6  5f                   pop edi
// 005efff7  5e                   pop esi
// 005efff8  c20400               ret 4
// 005efffb  6a00                 push 0
// 005efffd  83c001               add eax, 1
// 005f0000  50                   push eax
// 005f0001  8bce                 mov ecx, esi
// 005f0003  e8a8feffff           call 0x5efeb0
// 005f0008  8b0f                 mov ecx, dword ptr [edi]
// 005f000a  8b5604               mov edx, dword ptr [esi + 4]
// 005f000d  8b06                 mov eax, dword ptr [esi]
// 005f000f  5f                   pop edi
// 005f0010  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005f0014  5e                   pop esi
// 005f0015  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
