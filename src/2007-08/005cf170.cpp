// roc 2007-08 005cf170  unit: RBX::IStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf170
//
// 005cf170  56                   push esi
// 005cf171  8bf1                 mov esi, ecx
// 005cf173  8b4e08               mov ecx, dword ptr [esi + 8]
// 005cf176  85c9                 test ecx, ecx
// 005cf178  c70614a67b00         mov dword ptr [esi], 0x7ba614
// 005cf17e  7408                 je 0x5cf188
// 005cf180  8b01                 mov eax, dword ptr [ecx]
// 005cf182  8b10                 mov edx, dword ptr [eax]
// 005cf184  6a01                 push 1
// 005cf186  ffd2                 call edx
// 005cf188  f644240801           test byte ptr [esp + 8], 1
// 005cf18d  7409                 je 0x5cf198
// 005cf18f  56                   push esi
// 005cf190  e8cd0a0600           call 0x62fc62
// 005cf195  83c404               add esp, 4
// 005cf198  8bc6                 mov eax, esi
// 005cf19a  5e                   pop esi
// 005cf19b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
