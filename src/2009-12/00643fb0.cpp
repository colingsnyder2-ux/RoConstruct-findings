// roc 2009-12 00643fb0  unit: G3D::VVector2::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00643fb0
//
// 00643fb0  56                   push esi
// 00643fb1  6a08                 push 8
// 00643fb3  8bf1                 mov esi, ecx
// 00643fb5  e8a6f81a00           call 0x7f3860
// 00643fba  83c404               add esp, 4
// 00643fbd  85c0                 test eax, eax
// 00643fbf  7411                 je 0x643fd2
// 00643fc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00643fc5  c700d0c89c00         mov dword ptr [eax], 0x9cc8d0
// 00643fcb  8b11                 mov edx, dword ptr [ecx]
// 00643fcd  895004               mov dword ptr [eax + 4], edx
// 00643fd0  eb02                 jmp 0x643fd4
// 00643fd2  33c0                 xor eax, eax
// 00643fd4  8d542408             lea edx, [esp + 8]
// 00643fd8  8bc8                 mov ecx, eax
// 00643fda  3bd6                 cmp edx, esi
// 00643fdc  7404                 je 0x643fe2
// 00643fde  8b0e                 mov ecx, dword ptr [esi]
// 00643fe0  8906                 mov dword ptr [esi], eax
// 00643fe2  85c9                 test ecx, ecx
// 00643fe4  7408                 je 0x643fee
// 00643fe6  8b01                 mov eax, dword ptr [ecx]
// 00643fe8  8b10                 mov edx, dword ptr [eax]
// 00643fea  6a01                 push 1
// 00643fec  ffd2                 call edx
// 00643fee  8bc6                 mov eax, esi
// 00643ff0  5e                   pop esi
// 00643ff1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
