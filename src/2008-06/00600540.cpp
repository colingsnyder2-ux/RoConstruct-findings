// roc 2008-06 00600540  unit: RBX::VTool::?$BoundPropGetSet  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600540
//
// 00600540  6aff                 push -1
// 00600542  6868817d00           push 0x7d8168
// 00600547  64a100000000         mov eax, dword ptr fs:[0]
// 0060054d  50                   push eax
// 0060054e  64892500000000       mov dword ptr fs:[0], esp
// 00600555  51                   push ecx
// 00600556  56                   push esi
// 00600557  8bf1                 mov esi, ecx
// 00600559  89742404             mov dword ptr [esp + 4], esi
// 0060055d  e86e34f7ff           call 0x5739d0
// 00600562  8bce                 mov ecx, esi
// 00600564  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060056c  c706e4fb8200         mov dword ptr [esi], 0x82fbe4
// 00600572  c74610d4fb8200       mov dword ptr [esi + 0x10], 0x82fbd4
// 00600579  c74614ccfb8200       mov dword ptr [esi + 0x14], 0x82fbcc
// 00600580  c74620c4fb8200       mov dword ptr [esi + 0x20], 0x82fbc4
// 00600587  c74624b4fb8200       mov dword ptr [esi + 0x24], 0x82fbb4
// 0060058e  c74644a4fb8200       mov dword ptr [esi + 0x44], 0x82fba4
// 00600595  c7466494fb8200       mov dword ptr [esi + 0x64], 0x82fb94
// 0060059c  c7868400000084fb8200 mov dword ptr [esi + 0x84], 0x82fb84
// 006005a6  c786a400000074fb8200 mov dword ptr [esi + 0xa4], 0x82fb74
// 006005b0  c786c400000064fb8200 mov dword ptr [esi + 0xc4], 0x82fb64
// 006005ba  c786300100005cfb8200 mov dword ptr [esi + 0x130], 0x82fb5c
// 006005c4  e8a72ff7ff           call 0x573570
// 006005c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006005cd  8bc6                 mov eax, esi
// 006005cf  5e                   pop esi
// 006005d0  64890d00000000       mov dword ptr fs:[0], ecx
// 006005d7  83c410               add esp, 0x10
// 006005da  c3                   ret 
// library openrbx-client/App\v8datamodel\Hopper.cpp (function ??0TopMenuBar@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Hopper.cpp
