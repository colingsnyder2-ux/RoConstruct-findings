// from server: 100% by auto
// roc 2008-06 005261f0  unit: G3D::Line  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005261f0
//
// 005261f0  83ec24               sub esp, 0x24
// 005261f3  53                   push ebx
// 005261f4  56                   push esi
// 005261f5  57                   push edi
// 005261f6  8bf1                 mov esi, ecx
// 005261f8  e8c3dbfeff           call 0x513dc0
// 005261fd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00526201  50                   push eax
// 00526202  8bcb                 mov ecx, ebx
// 00526204  e817d0feff           call 0x513220
// 00526209  56                   push esi
// 0052620a  8d4c2410             lea ecx, [esp + 0x10]
// 0052620e  e88dd8feff           call 0x513aa0
// 00526213  8bf0                 mov esi, eax
// 00526215  8bfb                 mov edi, ebx
// 00526217  b909000000           mov ecx, 9
// 0052621c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052621e  5f                   pop edi
// 0052621f  5e                   pop esi
// 00526220  8bc3                 mov eax, ebx
// 00526222  5b                   pop ebx
// 00526223  83c424               add esp, 0x24
// 00526226  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
