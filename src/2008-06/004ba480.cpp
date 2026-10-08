// roc 2008-06 004ba480  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba480
//
// 004ba480  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ba484  8b542404             mov edx, dword ptr [esp + 4]
// 004ba488  56                   push esi
// 004ba489  57                   push edi
// 004ba48a  8bf1                 mov esi, ecx
// 004ba48c  50                   push eax
// 004ba48d  8d4c241c             lea ecx, [esp + 0x1c]
// 004ba491  51                   push ecx
// 004ba492  52                   push edx
// 004ba493  8bce                 mov ecx, esi
// 004ba495  e8d6550100           call 0x4cfa70
// 004ba49a  807c241800           cmp byte ptr [esp + 0x18], 0
// 004ba49f  8bf8                 mov edi, eax
// 004ba4a1  7408                 je 0x4ba4ab
// 004ba4a3  83c8ff               or eax, 0xffffffff
// 004ba4a6  5f                   pop edi
// 004ba4a7  5e                   pop esi
// 004ba4a8  c21000               ret 0x10
// 004ba4ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ba4af  8b11                 mov edx, dword ptr [ecx]
// 004ba4b1  3b7e04               cmp edi, dword ptr [esi + 4]
// 004ba4b4  721d                 jb 0x4ba4d3
// 004ba4b6  83ec08               sub esp, 8
// 004ba4b9  8bc4                 mov eax, esp
// 004ba4bb  8910                 mov dword ptr [eax], edx
// 004ba4bd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ba4c0  894804               mov dword ptr [eax + 4], ecx
// 004ba4c3  8bce                 mov ecx, esi
// 004ba4c5  e896fdffff           call 0x4ba260
// 004ba4ca  8b4604               mov eax, dword ptr [esi + 4]
// 004ba4cd  48                   dec eax
// 004ba4ce  5f                   pop edi
// 004ba4cf  5e                   pop esi
// 004ba4d0  c21000               ret 0x10
// 004ba4d3  57                   push edi
// 004ba4d4  83ec08               sub esp, 8
// 004ba4d7  8bc4                 mov eax, esp
// 004ba4d9  8910                 mov dword ptr [eax], edx
// 004ba4db  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ba4de  894804               mov dword ptr [eax + 4], ecx
// 004ba4e1  8bce                 mov ecx, esi
// 004ba4e3  e818feffff           call 0x4ba300
// 004ba4e8  8bc7                 mov eax, edi
// 004ba4ea  5f                   pop edi
// 004ba4eb  5e                   pop esi
// 004ba4ec  c21000               ret 0x10
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$OrderedList@PADUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@$1?NodeComparisonFunc@23@SAHABQADABU123@@Z@DataStructures@@QAEIABQADABUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@_NP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
