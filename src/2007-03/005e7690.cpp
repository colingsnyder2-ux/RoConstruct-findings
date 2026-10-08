// roc 2007-03 005e7690  unit: seg_005e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7690
//
// 005e7690  56                   push esi
// 005e7691  8bf1                 mov esi, ecx
// 005e7693  8b4604               mov eax, dword ptr [esi + 4]
// 005e7696  3b4608               cmp eax, dword ptr [esi + 8]
// 005e7699  8b0e                 mov ecx, dword ptr [esi]
// 005e769b  7d17                 jge 0x5e76b4
// 005e769d  8d0481               lea eax, [ecx + eax*4]
// 005e76a0  85c0                 test eax, eax
// 005e76a2  7408                 je 0x5e76ac
// 005e76a4  8b542408             mov edx, dword ptr [esp + 8]
// 005e76a8  8b0a                 mov ecx, dword ptr [edx]
// 005e76aa  8908                 mov dword ptr [eax], ecx
// 005e76ac  83460401             add dword ptr [esi + 4], 1
// 005e76b0  5e                   pop esi
// 005e76b1  c20400               ret 4
// 005e76b4  57                   push edi
// 005e76b5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e76b9  3bf9                 cmp edi, ecx
// 005e76bb  721e                 jb 0x5e76db
// 005e76bd  8d1481               lea edx, [ecx + eax*4]
// 005e76c0  3bfa                 cmp edi, edx
// 005e76c2  7317                 jae 0x5e76db
// 005e76c4  8b07                 mov eax, dword ptr [edi]
// 005e76c6  8d4c240c             lea ecx, [esp + 0xc]
// 005e76ca  51                   push ecx
// 005e76cb  8bce                 mov ecx, esi
// 005e76cd  89442410             mov dword ptr [esp + 0x10], eax
// 005e76d1  e8baffffff           call 0x5e7690
// 005e76d6  5f                   pop edi
// 005e76d7  5e                   pop esi
// 005e76d8  c20400               ret 4
// 005e76db  6a00                 push 0
// 005e76dd  83c001               add eax, 1
// 005e76e0  50                   push eax
// 005e76e1  8bce                 mov ecx, esi
// 005e76e3  e8a8feffff           call 0x5e7590
// 005e76e8  8b0f                 mov ecx, dword ptr [edi]
// 005e76ea  8b5604               mov edx, dword ptr [esi + 4]
// 005e76ed  8b06                 mov eax, dword ptr [esi]
// 005e76ef  5f                   pop edi
// 005e76f0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005e76f4  5e                   pop esi
// 005e76f5  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
