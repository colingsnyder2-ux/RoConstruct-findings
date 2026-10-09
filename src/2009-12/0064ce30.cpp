// roc 2009-12 0064ce30  unit: RBX::Humanoid::W4Status::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064ce30
//
// 0064ce30  56                   push esi
// 0064ce31  6a08                 push 8
// 0064ce33  8bf1                 mov esi, ecx
// 0064ce35  e8266a1a00           call 0x7f3860
// 0064ce3a  83c404               add esp, 4
// 0064ce3d  85c0                 test eax, eax
// 0064ce3f  7411                 je 0x64ce52
// 0064ce41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064ce45  c7001cce9c00         mov dword ptr [eax], 0x9cce1c
// 0064ce4b  8b11                 mov edx, dword ptr [ecx]
// 0064ce4d  895004               mov dword ptr [eax + 4], edx
// 0064ce50  eb02                 jmp 0x64ce54
// 0064ce52  33c0                 xor eax, eax
// 0064ce54  8d542408             lea edx, [esp + 8]
// 0064ce58  8bc8                 mov ecx, eax
// 0064ce5a  3bd6                 cmp edx, esi
// 0064ce5c  7404                 je 0x64ce62
// 0064ce5e  8b0e                 mov ecx, dword ptr [esi]
// 0064ce60  8906                 mov dword ptr [esi], eax
// 0064ce62  85c9                 test ecx, ecx
// 0064ce64  7408                 je 0x64ce6e
// 0064ce66  8b01                 mov eax, dword ptr [ecx]
// 0064ce68  8b10                 mov edx, dword ptr [eax]
// 0064ce6a  6a01                 push 1
// 0064ce6c  ffd2                 call edx
// 0064ce6e  8bc6                 mov eax, esi
// 0064ce70  5e                   pop esi
// 0064ce71  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
