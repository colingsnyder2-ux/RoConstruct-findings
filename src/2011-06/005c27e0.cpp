// roc 2011-06 005c27e0  unit: RBX::GuiObject::W4TweenEasingStyle::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c27e0
//
// 005c27e0  56                   push esi
// 005c27e1  6a08                 push 8
// 005c27e3  8bf1                 mov esi, ecx
// 005c27e5  e874782400           call 0x80a05e
// 005c27ea  83c404               add esp, 4
// 005c27ed  85c0                 test eax, eax
// 005c27ef  7411                 je 0x5c2802
// 005c27f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c27f5  c70030eba800         mov dword ptr [eax], 0xa8eb30
// 005c27fb  8b11                 mov edx, dword ptr [ecx]
// 005c27fd  895004               mov dword ptr [eax + 4], edx
// 005c2800  eb02                 jmp 0x5c2804
// 005c2802  33c0                 xor eax, eax
// 005c2804  8d542408             lea edx, [esp + 8]
// 005c2808  8bc8                 mov ecx, eax
// 005c280a  3bd6                 cmp edx, esi
// 005c280c  7404                 je 0x5c2812
// 005c280e  8b0e                 mov ecx, dword ptr [esi]
// 005c2810  8906                 mov dword ptr [esi], eax
// 005c2812  85c9                 test ecx, ecx
// 005c2814  7408                 je 0x5c281e
// 005c2816  8b01                 mov eax, dword ptr [ecx]
// 005c2818  8b10                 mov edx, dword ptr [eax]
// 005c281a  6a01                 push 1
// 005c281c  ffd2                 call edx
// 005c281e  8bc6                 mov eax, esi
// 005c2820  5e                   pop esi
// 005c2821  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
