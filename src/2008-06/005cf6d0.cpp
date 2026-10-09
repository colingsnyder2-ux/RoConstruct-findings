// roc 2008-06 005cf6d0  unit: RBX::P8HopperBin::?$SetImpl  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf6d0
//
// 005cf6d0  6aff                 push -1
// 005cf6d2  6868817d00           push 0x7d8168
// 005cf6d7  64a100000000         mov eax, dword ptr fs:[0]
// 005cf6dd  50                   push eax
// 005cf6de  64892500000000       mov dword ptr fs:[0], esp
// 005cf6e5  51                   push ecx
// 005cf6e6  56                   push esi
// 005cf6e7  8bf1                 mov esi, ecx
// 005cf6e9  89742404             mov dword ptr [esp + 4], esi
// 005cf6ed  e8de42faff           call 0x5739d0
// 005cf6f2  8bce                 mov ecx, esi
// 005cf6f4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cf6fc  c706f4fa8200         mov dword ptr [esi], 0x82faf4
// 005cf702  c74610e4fa8200       mov dword ptr [esi + 0x10], 0x82fae4
// 005cf709  c74614dcfa8200       mov dword ptr [esi + 0x14], 0x82fadc
// 005cf710  c74620d4fa8200       mov dword ptr [esi + 0x20], 0x82fad4
// 005cf717  c74624c4fa8200       mov dword ptr [esi + 0x24], 0x82fac4
// 005cf71e  c74644b4fa8200       mov dword ptr [esi + 0x44], 0x82fab4
// 005cf725  c74664a4fa8200       mov dword ptr [esi + 0x64], 0x82faa4
// 005cf72c  c7868400000094fa8200 mov dword ptr [esi + 0x84], 0x82fa94
// 005cf736  c786a400000084fa8200 mov dword ptr [esi + 0xa4], 0x82fa84
// 005cf740  c786c400000074fa8200 mov dword ptr [esi + 0xc4], 0x82fa74
// 005cf74a  c786300100006cfa8200 mov dword ptr [esi + 0x130], 0x82fa6c
// 005cf754  e8d73dfaff           call 0x573530
// 005cf759  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf75d  8bc6                 mov eax, esi
// 005cf75f  5e                   pop esi
// 005cf760  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf767  83c410               add esp, 0x10
// 005cf76a  c3                   ret 
// library openrbx-client/App\v8datamodel\Hopper.cpp (function ??0TopMenuBar@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Hopper.cpp
