// from server: 100% by auto
// roc 2008-06 00518240  unit: G3D::TextInput::WrongSymbol  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518240
//
// 00518240  6aff                 push -1
// 00518242  6874c87c00           push 0x7cc874
// 00518247  64a100000000         mov eax, dword ptr fs:[0]
// 0051824d  50                   push eax
// 0051824e  64892500000000       mov dword ptr fs:[0], esp
// 00518255  51                   push ecx
// 00518256  56                   push esi
// 00518257  57                   push edi
// 00518258  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0051825c  8bf1                 mov esi, ecx
// 0051825e  57                   push edi
// 0051825f  8974240c             mov dword ptr [esp + 0xc], esi
// 00518263  e8d8f6ffff           call 0x517940
// 00518268  8d4744               lea eax, [edi + 0x44]
// 0051826b  50                   push eax
// 0051826c  8d4e44               lea ecx, [esi + 0x44]
// 0051826f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00518277  c706b88a8200         mov dword ptr [esi], 0x828ab8
// 0051827d  ff155c248000         call dword ptr [0x80245c]
// 00518283  83c760               add edi, 0x60
// 00518286  57                   push edi
// 00518287  8d4e60               lea ecx, [esi + 0x60]
// 0051828a  c644241801           mov byte ptr [esp + 0x18], 1
// 0051828f  ff155c248000         call dword ptr [0x80245c]
// 00518295  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00518299  5f                   pop edi
// 0051829a  8bc6                 mov eax, esi
// 0051829c  5e                   pop esi
// 0051829d  64890d00000000       mov dword ptr fs:[0], ecx
// 005182a4  83c410               add esp, 0x10
// 005182a7  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
