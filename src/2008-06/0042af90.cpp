// roc 2008-06 0042af90  unit: EventHandler  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042af90
//
// 0042af90  51                   push ecx
// 0042af91  56                   push esi
// 0042af92  8bf1                 mov esi, ecx
// 0042af94  57                   push edi
// 0042af95  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042af99  8d4604               lea eax, [esi + 4]
// 0042af9c  50                   push eax
// 0042af9d  8d4f04               lea ecx, [edi + 4]
// 0042afa0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0042afa8  e8236bfeff           call 0x411ad0
// 0042afad  8b0e                 mov ecx, dword ptr [esi]
// 0042afaf  890f                 mov dword ptr [edi], ecx
// 0042afb1  8bc7                 mov eax, edi
// 0042afb3  5f                   pop edi
// 0042afb4  5e                   pop esi
// 0042afb5  59                   pop ecx
// 0042afb6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ?shared_from_this@?$enable_shared_from_this@VInstance@RBX@@@boost@@QAE?AV?$shared_ptr@VInstance@RBX@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
