// roc 2009-12 0064caf0  unit: G3D::Vector3::W4Axis::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064caf0
//
// 0064caf0  56                   push esi
// 0064caf1  6a08                 push 8
// 0064caf3  8bf1                 mov esi, ecx
// 0064caf5  e8666d1a00           call 0x7f3860
// 0064cafa  83c404               add esp, 4
// 0064cafd  85c0                 test eax, eax
// 0064caff  7411                 je 0x64cb12
// 0064cb01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064cb05  c700eccd9c00         mov dword ptr [eax], 0x9ccdec
// 0064cb0b  8b11                 mov edx, dword ptr [ecx]
// 0064cb0d  895004               mov dword ptr [eax + 4], edx
// 0064cb10  eb02                 jmp 0x64cb14
// 0064cb12  33c0                 xor eax, eax
// 0064cb14  8d542408             lea edx, [esp + 8]
// 0064cb18  8bc8                 mov ecx, eax
// 0064cb1a  3bd6                 cmp edx, esi
// 0064cb1c  7404                 je 0x64cb22
// 0064cb1e  8b0e                 mov ecx, dword ptr [esi]
// 0064cb20  8906                 mov dword ptr [esi], eax
// 0064cb22  85c9                 test ecx, ecx
// 0064cb24  7408                 je 0x64cb2e
// 0064cb26  8b01                 mov eax, dword ptr [ecx]
// 0064cb28  8b10                 mov edx, dword ptr [eax]
// 0064cb2a  6a01                 push 1
// 0064cb2c  ffd2                 call edx
// 0064cb2e  8bc6                 mov eax, esi
// 0064cb30  5e                   pop esi
// 0064cb31  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
