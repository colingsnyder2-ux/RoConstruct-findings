// roc 2009-06 004e1290  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e1290
//
// 004e1290  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e1294  8b542404             mov edx, dword ptr [esp + 4]
// 004e1298  56                   push esi
// 004e1299  57                   push edi
// 004e129a  8bf1                 mov esi, ecx
// 004e129c  50                   push eax
// 004e129d  8d4c241c             lea ecx, [esp + 0x1c]
// 004e12a1  51                   push ecx
// 004e12a2  52                   push edx
// 004e12a3  8bce                 mov ecx, esi
// 004e12a5  e8a64e0100           call 0x4f6150
// 004e12aa  807c241800           cmp byte ptr [esp + 0x18], 0
// 004e12af  8bf8                 mov edi, eax
// 004e12b1  7408                 je 0x4e12bb
// 004e12b3  83c8ff               or eax, 0xffffffff
// 004e12b6  5f                   pop edi
// 004e12b7  5e                   pop esi
// 004e12b8  c21000               ret 0x10
// 004e12bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e12bf  8b11                 mov edx, dword ptr [ecx]
// 004e12c1  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e12c4  721d                 jb 0x4e12e3
// 004e12c6  83ec08               sub esp, 8
// 004e12c9  8bc4                 mov eax, esp
// 004e12cb  8910                 mov dword ptr [eax], edx
// 004e12cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e12d0  894804               mov dword ptr [eax + 4], ecx
// 004e12d3  8bce                 mov ecx, esi
// 004e12d5  e866fcffff           call 0x4e0f40
// 004e12da  8b4604               mov eax, dword ptr [esi + 4]
// 004e12dd  48                   dec eax
// 004e12de  5f                   pop edi
// 004e12df  5e                   pop esi
// 004e12e0  c21000               ret 0x10
// 004e12e3  57                   push edi
// 004e12e4  83ec08               sub esp, 8
// 004e12e7  8bc4                 mov eax, esp
// 004e12e9  8910                 mov dword ptr [eax], edx
// 004e12eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e12ee  894804               mov dword ptr [eax + 4], ecx
// 004e12f1  8bce                 mov ecx, esi
// 004e12f3  e8e8fcffff           call 0x4e0fe0
// 004e12f8  8bc7                 mov eax, edi
// 004e12fa  5f                   pop edi
// 004e12fb  5e                   pop esi
// 004e12fc  c21000               ret 0x10
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$OrderedList@PADUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@$1?NodeComparisonFunc@23@SAHABQADABU123@@Z@DataStructures@@QAEIABQADABUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@_NP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
