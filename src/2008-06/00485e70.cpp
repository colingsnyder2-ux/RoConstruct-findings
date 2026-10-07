// roc 2008-06 00485e70  unit: G3D::Shader  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485e70
//
// 00485e70  6aff                 push -1
// 00485e72  68496b7c00           push 0x7c6b49
// 00485e77  64a100000000         mov eax, dword ptr fs:[0]
// 00485e7d  50                   push eax
// 00485e7e  64892500000000       mov dword ptr fs:[0], esp
// 00485e85  51                   push ecx
// 00485e86  56                   push esi
// 00485e87  8bf1                 mov esi, ecx
// 00485e89  89742404             mov dword ptr [esp + 4], esi
// 00485e8d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00485e90  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00485e98  85c0                 test eax, eax
// 00485e9a  742c                 je 0x485ec8
// 00485e9c  83c004               add eax, 4
// 00485e9f  50                   push eax
// 00485ea0  ff15ac218000         call dword ptr [0x8021ac]
// 00485ea6  85c0                 test eax, eax
// 00485ea8  7517                 jne 0x485ec1
// 00485eaa  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00485ead  e8de4efdff           call 0x45ad90
// 00485eb2  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00485eb5  85c9                 test ecx, ecx
// 00485eb7  7408                 je 0x485ec1
// 00485eb9  8b01                 mov eax, dword ptr [ecx]
// 00485ebb  8b10                 mov edx, dword ptr [eax]
// 00485ebd  6a01                 push 1
// 00485ebf  ffd2                 call edx
// 00485ec1  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 00485ec8  8bce                 mov ecx, esi
// 00485eca  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00485ed2  ff1568248000         call dword ptr [0x802468]
// 00485ed8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00485edc  5e                   pop esi
// 00485edd  64890d00000000       mov dword ptr fs:[0], ecx
// 00485ee4  83c410               add esp, 0x10
// 00485ee7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??1Entry@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
