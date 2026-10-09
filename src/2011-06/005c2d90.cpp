// roc 2011-06 005c2d90  unit: RBX::GuiObject::W4TweenEasingDirection::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c2d90
//
// 005c2d90  56                   push esi
// 005c2d91  6a08                 push 8
// 005c2d93  8bf1                 mov esi, ecx
// 005c2d95  e8c4722400           call 0x80a05e
// 005c2d9a  83c404               add esp, 4
// 005c2d9d  85c0                 test eax, eax
// 005c2d9f  7411                 je 0x5c2db2
// 005c2da1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c2da5  c70090eba800         mov dword ptr [eax], 0xa8eb90
// 005c2dab  8b11                 mov edx, dword ptr [ecx]
// 005c2dad  895004               mov dword ptr [eax + 4], edx
// 005c2db0  eb02                 jmp 0x5c2db4
// 005c2db2  33c0                 xor eax, eax
// 005c2db4  8d542408             lea edx, [esp + 8]
// 005c2db8  8bc8                 mov ecx, eax
// 005c2dba  3bd6                 cmp edx, esi
// 005c2dbc  7404                 je 0x5c2dc2
// 005c2dbe  8b0e                 mov ecx, dword ptr [esi]
// 005c2dc0  8906                 mov dword ptr [esi], eax
// 005c2dc2  85c9                 test ecx, ecx
// 005c2dc4  7408                 je 0x5c2dce
// 005c2dc6  8b01                 mov eax, dword ptr [ecx]
// 005c2dc8  8b10                 mov edx, dword ptr [eax]
// 005c2dca  6a01                 push 1
// 005c2dcc  ffd2                 call edx
// 005c2dce  8bc6                 mov eax, esi
// 005c2dd0  5e                   pop esi
// 005c2dd1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
