// from server: 100% by auto
// roc 2012-06 0063fb20  unit: G3D::Sphere  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063fb20
//
// 0063fb20  83ec24               sub esp, 0x24
// 0063fb23  53                   push ebx
// 0063fb24  56                   push esi
// 0063fb25  57                   push edi
// 0063fb26  8bf1                 mov esi, ecx
// 0063fb28  e853dbfeff           call 0x62d680
// 0063fb2d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0063fb31  50                   push eax
// 0063fb32  8bcb                 mov ecx, ebx
// 0063fb34  e817c7feff           call 0x62c250
// 0063fb39  56                   push esi
// 0063fb3a  8d4c2410             lea ecx, [esp + 0x10]
// 0063fb3e  e8edd6feff           call 0x62d230
// 0063fb43  8bf0                 mov esi, eax
// 0063fb45  8bfb                 mov edi, ebx
// 0063fb47  b909000000           mov ecx, 9
// 0063fb4c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0063fb4e  5f                   pop edi
// 0063fb4f  5e                   pop esi
// 0063fb50  8bc3                 mov eax, ebx
// 0063fb52  5b                   pop ebx
// 0063fb53  83c424               add esp, 0x24
// 0063fb56  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
