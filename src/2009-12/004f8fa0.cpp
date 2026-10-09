// roc 2009-12 004f8fa0  unit: RBX::VBrickColor::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f8fa0
//
// 004f8fa0  56                   push esi
// 004f8fa1  6a08                 push 8
// 004f8fa3  8bf1                 mov esi, ecx
// 004f8fa5  e8b6a82f00           call 0x7f3860
// 004f8faa  83c404               add esp, 4
// 004f8fad  85c0                 test eax, eax
// 004f8faf  7411                 je 0x4f8fc2
// 004f8fb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f8fb5  c700b4a19b00         mov dword ptr [eax], 0x9ba1b4
// 004f8fbb  8b11                 mov edx, dword ptr [ecx]
// 004f8fbd  895004               mov dword ptr [eax + 4], edx
// 004f8fc0  eb02                 jmp 0x4f8fc4
// 004f8fc2  33c0                 xor eax, eax
// 004f8fc4  8d542408             lea edx, [esp + 8]
// 004f8fc8  8bc8                 mov ecx, eax
// 004f8fca  3bd6                 cmp edx, esi
// 004f8fcc  7404                 je 0x4f8fd2
// 004f8fce  8b0e                 mov ecx, dword ptr [esi]
// 004f8fd0  8906                 mov dword ptr [esi], eax
// 004f8fd2  85c9                 test ecx, ecx
// 004f8fd4  7408                 je 0x4f8fde
// 004f8fd6  8b01                 mov eax, dword ptr [ecx]
// 004f8fd8  8b10                 mov edx, dword ptr [eax]
// 004f8fda  6a01                 push 1
// 004f8fdc  ffd2                 call edx
// 004f8fde  8bc6                 mov eax, esi
// 004f8fe0  5e                   pop esi
// 004f8fe1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
