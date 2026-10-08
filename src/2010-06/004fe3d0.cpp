// roc 2010-06 004fe3d0  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fe3d0
//
// 004fe3d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fe3d4  8b542404             mov edx, dword ptr [esp + 4]
// 004fe3d8  56                   push esi
// 004fe3d9  57                   push edi
// 004fe3da  8bf1                 mov esi, ecx
// 004fe3dc  50                   push eax
// 004fe3dd  8d4c241c             lea ecx, [esp + 0x1c]
// 004fe3e1  51                   push ecx
// 004fe3e2  52                   push edx
// 004fe3e3  8bce                 mov ecx, esi
// 004fe3e5  e806fcffff           call 0x4fdff0
// 004fe3ea  807c241800           cmp byte ptr [esp + 0x18], 0
// 004fe3ef  8bf8                 mov edi, eax
// 004fe3f1  7408                 je 0x4fe3fb
// 004fe3f3  83c8ff               or eax, 0xffffffff
// 004fe3f6  5f                   pop edi
// 004fe3f7  5e                   pop esi
// 004fe3f8  c21000               ret 0x10
// 004fe3fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fe3ff  8b11                 mov edx, dword ptr [ecx]
// 004fe401  3b7e04               cmp edi, dword ptr [esi + 4]
// 004fe404  721d                 jb 0x4fe423
// 004fe406  83ec08               sub esp, 8
// 004fe409  8bc4                 mov eax, esp
// 004fe40b  8910                 mov dword ptr [eax], edx
// 004fe40d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fe410  894804               mov dword ptr [eax + 4], ecx
// 004fe413  8bce                 mov ecx, esi
// 004fe415  e866fcffff           call 0x4fe080
// 004fe41a  8b4604               mov eax, dword ptr [esi + 4]
// 004fe41d  48                   dec eax
// 004fe41e  5f                   pop edi
// 004fe41f  5e                   pop esi
// 004fe420  c21000               ret 0x10
// 004fe423  57                   push edi
// 004fe424  83ec08               sub esp, 8
// 004fe427  8bc4                 mov eax, esp
// 004fe429  8910                 mov dword ptr [eax], edx
// 004fe42b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fe42e  894804               mov dword ptr [eax + 4], ecx
// 004fe431  8bce                 mov ecx, esi
// 004fe433  e8e8fcffff           call 0x4fe120
// 004fe438  8bc7                 mov eax, edi
// 004fe43a  5f                   pop edi
// 004fe43b  5e                   pop esi
// 004fe43c  c21000               ret 0x10
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$OrderedList@PADUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@$1?NodeComparisonFunc@23@SAHABQADABU123@@Z@DataStructures@@QAEIABQADABUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@_NP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
