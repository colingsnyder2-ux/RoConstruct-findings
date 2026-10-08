// from server: 100% by auto
// roc 2010-06 0056dee0  unit: G3D::LineSegment  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056dee0
//
// 0056dee0  83ec24               sub esp, 0x24
// 0056dee3  53                   push ebx
// 0056dee4  56                   push esi
// 0056dee5  57                   push edi
// 0056dee6  8bf1                 mov esi, ecx
// 0056dee8  e8c393feff           call 0x5572b0
// 0056deed  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0056def1  50                   push eax
// 0056def2  8bcb                 mov ecx, ebx
// 0056def4  e87781feff           call 0x556070
// 0056def9  56                   push esi
// 0056defa  8d4c2410             lea ecx, [esp + 0x10]
// 0056defe  e89d8ffeff           call 0x556ea0
// 0056df03  8bf0                 mov esi, eax
// 0056df05  8bfb                 mov edi, ebx
// 0056df07  b909000000           mov ecx, 9
// 0056df0c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0056df0e  5f                   pop edi
// 0056df0f  5e                   pop esi
// 0056df10  8bc3                 mov eax, ebx
// 0056df12  5b                   pop ebx
// 0056df13  83c424               add esp, 0x24
// 0056df16  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
