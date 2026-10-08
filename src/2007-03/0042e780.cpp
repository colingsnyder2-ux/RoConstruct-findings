// roc 2007-03 0042e780  unit: seg_00420000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e780
//
// 0042e780  56                   push esi
// 0042e781  8bf1                 mov esi, ecx
// 0042e783  e8b8ea1300           call 0x56d240
// 0042e788  6a08                 push 8
// 0042e78a  8906                 mov dword ptr [esi], eax
// 0042e78c  e877f91e00           call 0x61e108
// 0042e791  83c404               add esp, 4
// 0042e794  85c0                 test eax, eax
// 0042e796  7418                 je 0x42e7b0
// 0042e798  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042e79c  c7003c987800         mov dword ptr [eax], 0x78983c
// 0042e7a2  8a11                 mov dl, byte ptr [ecx]
// 0042e7a4  885004               mov byte ptr [eax + 4], dl
// 0042e7a7  894604               mov dword ptr [esi + 4], eax
// 0042e7aa  8bc6                 mov eax, esi
// 0042e7ac  5e                   pop esi
// 0042e7ad  c20400               ret 4
// 0042e7b0  33c0                 xor eax, eax
// 0042e7b2  894604               mov dword ptr [esi + 4], eax
// 0042e7b5  8bc6                 mov eax, esi
// 0042e7b7  5e                   pop esi
// 0042e7b8  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ??$?0_N@Value@Reflection@RBX@@QAE@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
