// roc 2009-12 0054fae0  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054fae0
//
// 0054fae0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054fae4  8b542404             mov edx, dword ptr [esp + 4]
// 0054fae8  56                   push esi
// 0054fae9  57                   push edi
// 0054faea  8bf1                 mov esi, ecx
// 0054faec  50                   push eax
// 0054faed  8d4c241c             lea ecx, [esp + 0x1c]
// 0054faf1  51                   push ecx
// 0054faf2  52                   push edx
// 0054faf3  8bce                 mov ecx, esi
// 0054faf5  e806fcffff           call 0x54f700
// 0054fafa  807c241800           cmp byte ptr [esp + 0x18], 0
// 0054faff  8bf8                 mov edi, eax
// 0054fb01  7408                 je 0x54fb0b
// 0054fb03  83c8ff               or eax, 0xffffffff
// 0054fb06  5f                   pop edi
// 0054fb07  5e                   pop esi
// 0054fb08  c21000               ret 0x10
// 0054fb0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054fb0f  8b11                 mov edx, dword ptr [ecx]
// 0054fb11  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054fb14  721d                 jb 0x54fb33
// 0054fb16  83ec08               sub esp, 8
// 0054fb19  8bc4                 mov eax, esp
// 0054fb1b  8910                 mov dword ptr [eax], edx
// 0054fb1d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0054fb20  894804               mov dword ptr [eax + 4], ecx
// 0054fb23  8bce                 mov ecx, esi
// 0054fb25  e866fcffff           call 0x54f790
// 0054fb2a  8b4604               mov eax, dword ptr [esi + 4]
// 0054fb2d  48                   dec eax
// 0054fb2e  5f                   pop edi
// 0054fb2f  5e                   pop esi
// 0054fb30  c21000               ret 0x10
// 0054fb33  57                   push edi
// 0054fb34  83ec08               sub esp, 8
// 0054fb37  8bc4                 mov eax, esp
// 0054fb39  8910                 mov dword ptr [eax], edx
// 0054fb3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0054fb3e  894804               mov dword ptr [eax + 4], ecx
// 0054fb41  8bce                 mov ecx, esi
// 0054fb43  e8e8fcffff           call 0x54f830
// 0054fb48  8bc7                 mov eax, edi
// 0054fb4a  5f                   pop edi
// 0054fb4b  5e                   pop esi
// 0054fb4c  c21000               ret 0x10
// library rbxgs-raknet/LightweightDatabaseServer.cpp (function ?Insert@?$OrderedList@PADUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@DataStructures@@$1?NodeComparisonFunc@23@SAHABQADABU123@@Z@DataStructures@@QAEIABQADABUMapNode@?$Map@PADPAUDatabaseTable@LightweightDatabaseServer@@$1?DatabaseTableComp@2@SAHABQAD0@Z@2@_NP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp
