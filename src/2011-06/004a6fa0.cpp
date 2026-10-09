// roc 2011-06 004a6fa0  unit: RBX::VBrickColor::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6fa0
//
// 004a6fa0  56                   push esi
// 004a6fa1  6a08                 push 8
// 004a6fa3  8bf1                 mov esi, ecx
// 004a6fa5  e8b4303600           call 0x80a05e
// 004a6faa  83c404               add esp, 4
// 004a6fad  85c0                 test eax, eax
// 004a6faf  7411                 je 0x4a6fc2
// 004a6fb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6fb5  c700b06ea700         mov dword ptr [eax], 0xa76eb0
// 004a6fbb  8b11                 mov edx, dword ptr [ecx]
// 004a6fbd  895004               mov dword ptr [eax + 4], edx
// 004a6fc0  eb02                 jmp 0x4a6fc4
// 004a6fc2  33c0                 xor eax, eax
// 004a6fc4  8d542408             lea edx, [esp + 8]
// 004a6fc8  8bc8                 mov ecx, eax
// 004a6fca  3bd6                 cmp edx, esi
// 004a6fcc  7404                 je 0x4a6fd2
// 004a6fce  8b0e                 mov ecx, dword ptr [esi]
// 004a6fd0  8906                 mov dword ptr [esi], eax
// 004a6fd2  85c9                 test ecx, ecx
// 004a6fd4  7408                 je 0x4a6fde
// 004a6fd6  8b01                 mov eax, dword ptr [ecx]
// 004a6fd8  8b10                 mov edx, dword ptr [eax]
// 004a6fda  6a01                 push 1
// 004a6fdc  ffd2                 call edx
// 004a6fde  8bc6                 mov eax, esi
// 004a6fe0  5e                   pop esi
// 004a6fe1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
