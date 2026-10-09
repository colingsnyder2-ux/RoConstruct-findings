// roc 2011-06 005a1660  unit: RBX::W4SoundType::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1660
//
// 005a1660  56                   push esi
// 005a1661  6a08                 push 8
// 005a1663  8bf1                 mov esi, ecx
// 005a1665  e8f4892600           call 0x80a05e
// 005a166a  83c404               add esp, 4
// 005a166d  85c0                 test eax, eax
// 005a166f  7411                 je 0x5a1682
// 005a1671  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a1675  c700b8c8a800         mov dword ptr [eax], 0xa8c8b8
// 005a167b  8b11                 mov edx, dword ptr [ecx]
// 005a167d  895004               mov dword ptr [eax + 4], edx
// 005a1680  eb02                 jmp 0x5a1684
// 005a1682  33c0                 xor eax, eax
// 005a1684  8d542408             lea edx, [esp + 8]
// 005a1688  8bc8                 mov ecx, eax
// 005a168a  3bd6                 cmp edx, esi
// 005a168c  7404                 je 0x5a1692
// 005a168e  8b0e                 mov ecx, dword ptr [esi]
// 005a1690  8906                 mov dword ptr [esi], eax
// 005a1692  85c9                 test ecx, ecx
// 005a1694  7408                 je 0x5a169e
// 005a1696  8b01                 mov eax, dword ptr [ecx]
// 005a1698  8b10                 mov edx, dword ptr [eax]
// 005a169a  6a01                 push 1
// 005a169c  ffd2                 call edx
// 005a169e  8bc6                 mov eax, esi
// 005a16a0  5e                   pop esi
// 005a16a1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
