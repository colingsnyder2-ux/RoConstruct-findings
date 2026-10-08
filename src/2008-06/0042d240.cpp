// roc 2008-06 0042d240  unit: boost::any::H::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d240
//
// 0042d240  56                   push esi
// 0042d241  8bf1                 mov esi, ecx
// 0042d243  e8e8f91300           call 0x56cc30
// 0042d248  6a08                 push 8
// 0042d24a  8906                 mov dword ptr [esi], eax
// 0042d24c  e8cf362700           call 0x6a0920
// 0042d251  83c404               add esp, 4
// 0042d254  85c0                 test eax, eax
// 0042d256  7418                 je 0x42d270
// 0042d258  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042d25c  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0042d262  8a11                 mov dl, byte ptr [ecx]
// 0042d264  885004               mov byte ptr [eax + 4], dl
// 0042d267  894604               mov dword ptr [esi + 4], eax
// 0042d26a  8bc6                 mov eax, esi
// 0042d26c  5e                   pop esi
// 0042d26d  c20400               ret 4
// 0042d270  33c0                 xor eax, eax
// 0042d272  894604               mov dword ptr [esi + 4], eax
// 0042d275  8bc6                 mov eax, esi
// 0042d277  5e                   pop esi
// 0042d278  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ??$?0_N@Value@Reflection@RBX@@QAE@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
