// roc 2007-08 0042d8e0  unit: boost::any::_N::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d8e0
//
// 0042d8e0  56                   push esi
// 0042d8e1  8bf1                 mov esi, ecx
// 0042d8e3  e858ff1300           call 0x56d840
// 0042d8e8  6a08                 push 8
// 0042d8ea  8906                 mov dword ptr [esi], eax
// 0042d8ec  e805262000           call 0x62fef6
// 0042d8f1  83c404               add esp, 4
// 0042d8f4  85c0                 test eax, eax
// 0042d8f6  7418                 je 0x42d910
// 0042d8f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042d8fc  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 0042d902  8a11                 mov dl, byte ptr [ecx]
// 0042d904  885004               mov byte ptr [eax + 4], dl
// 0042d907  894604               mov dword ptr [esi + 4], eax
// 0042d90a  8bc6                 mov eax, esi
// 0042d90c  5e                   pop esi
// 0042d90d  c20400               ret 4
// 0042d910  33c0                 xor eax, eax
// 0042d912  894604               mov dword ptr [esi + 4], eax
// 0042d915  8bc6                 mov eax, esi
// 0042d917  5e                   pop esi
// 0042d918  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ??$?0_N@Value@Reflection@RBX@@QAE@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
