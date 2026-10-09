// roc 2012-06 0096bb90  unit: RBX::ContactStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0096bb90
//
// 0096bb90  56                   push esi
// 0096bb91  8bf1                 mov esi, ecx
// 0096bb93  8b4e08               mov ecx, dword ptr [esi + 8]
// 0096bb96  c706e88fc000         mov dword ptr [esi], 0xc08fe8
// 0096bb9c  85c9                 test ecx, ecx
// 0096bb9e  7408                 je 0x96bba8
// 0096bba0  8b01                 mov eax, dword ptr [ecx]
// 0096bba2  8b10                 mov edx, dword ptr [eax]
// 0096bba4  6a01                 push 1
// 0096bba6  ffd2                 call edx
// 0096bba8  f644240801           test byte ptr [esp + 8], 1
// 0096bbad  7409                 je 0x96bbb8
// 0096bbaf  56                   push esi
// 0096bbb0  e85f650100           call 0x982114
// 0096bbb5  83c404               add esp, 4
// 0096bbb8  8bc6                 mov eax, esi
// 0096bbba  5e                   pop esi
// 0096bbbb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
