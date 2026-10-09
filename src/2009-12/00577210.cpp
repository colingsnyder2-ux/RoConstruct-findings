// roc 2009-12 00577210  unit: RBX::ViewRbxGfx  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577210
//
// 00577210  6aff                 push -1
// 00577212  68598c9300           push 0x938c59
// 00577217  64a100000000         mov eax, dword ptr fs:[0]
// 0057721d  50                   push eax
// 0057721e  64892500000000       mov dword ptr fs:[0], esp
// 00577225  51                   push ecx
// 00577226  56                   push esi
// 00577227  8bf1                 mov esi, ecx
// 00577229  89742404             mov dword ptr [esp + 4], esi
// 0057722d  ff15e8b69800         call dword ptr [0x98b6e8]
// 00577233  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057723b  e830b20b00           call 0x632470
// 00577240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577244  89461c               mov dword ptr [esi + 0x1c], eax
// 00577247  8bc6                 mov eax, esi
// 00577249  5e                   pop esi
// 0057724a  64890d00000000       mov dword ptr fs:[0], ecx
// 00577251  83c410               add esp, 0x10
// 00577254  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
