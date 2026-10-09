// roc 2012-06 00954c00  unit: RBX::MechToAssemblyStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00954c00
//
// 00954c00  56                   push esi
// 00954c01  8bf1                 mov esi, ecx
// 00954c03  8b4e08               mov ecx, dword ptr [esi + 8]
// 00954c06  c706e825c000         mov dword ptr [esi], 0xc025e8
// 00954c0c  85c9                 test ecx, ecx
// 00954c0e  7408                 je 0x954c18
// 00954c10  8b01                 mov eax, dword ptr [ecx]
// 00954c12  8b10                 mov edx, dword ptr [eax]
// 00954c14  6a01                 push 1
// 00954c16  ffd2                 call edx
// 00954c18  f644240801           test byte ptr [esp + 8], 1
// 00954c1d  7409                 je 0x954c28
// 00954c1f  56                   push esi
// 00954c20  e8efd40200           call 0x982114
// 00954c25  83c404               add esp, 4
// 00954c28  8bc6                 mov eax, esi
// 00954c2a  5e                   pop esi
// 00954c2b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
