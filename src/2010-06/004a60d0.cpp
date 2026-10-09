// roc 2010-06 004a60d0  unit: RBX::VBrickColor::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a60d0
//
// 004a60d0  56                   push esi
// 004a60d1  6a08                 push 8
// 004a60d3  8bf1                 mov esi, ecx
// 004a60d5  e8c6183000           call 0x7a79a0
// 004a60da  83c404               add esp, 4
// 004a60dd  85c0                 test eax, eax
// 004a60df  7411                 je 0x4a60f2
// 004a60e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a60e5  c700cc7ea100         mov dword ptr [eax], 0xa17ecc
// 004a60eb  8b11                 mov edx, dword ptr [ecx]
// 004a60ed  895004               mov dword ptr [eax + 4], edx
// 004a60f0  eb02                 jmp 0x4a60f4
// 004a60f2  33c0                 xor eax, eax
// 004a60f4  8d542408             lea edx, [esp + 8]
// 004a60f8  8bc8                 mov ecx, eax
// 004a60fa  3bd6                 cmp edx, esi
// 004a60fc  7404                 je 0x4a6102
// 004a60fe  8b0e                 mov ecx, dword ptr [esi]
// 004a6100  8906                 mov dword ptr [esi], eax
// 004a6102  85c9                 test ecx, ecx
// 004a6104  7408                 je 0x4a610e
// 004a6106  8b01                 mov eax, dword ptr [ecx]
// 004a6108  8b10                 mov edx, dword ptr [eax]
// 004a610a  6a01                 push 1
// 004a610c  ffd2                 call edx
// 004a610e  8bc6                 mov eax, esi
// 004a6110  5e                   pop esi
// 004a6111  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
