// roc 2008-06 0047f860  unit: G3D::Win32Window  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f860
//
// 0047f860  56                   push esi
// 0047f861  8bf1                 mov esi, ecx
// 0047f863  57                   push edi
// 0047f864  c70604f18100         mov dword ptr [esi], 0x81f104
// 0047f86a  33ff                 xor edi, edi
// 0047f86c  3935f4ef9600         cmp dword ptr [0x96eff4], esi
// 0047f872  7506                 jne 0x47f87a
// 0047f874  893df4ef9600         mov dword ptr [0x96eff4], edi
// 0047f87a  8b4604               mov eax, dword ptr [esi + 4]
// 0047f87d  50                   push eax
// 0047f87e  e89d840800           call 0x507d20
// 0047f883  83c404               add esp, 4
// 0047f886  897e04               mov dword ptr [esi + 4], edi
// 0047f889  897e08               mov dword ptr [esi + 8], edi
// 0047f88c  897e0c               mov dword ptr [esi + 0xc], edi
// 0047f88f  5f                   pop edi
// 0047f890  5e                   pop esi
// 0047f891  c3                   ret 
// library g3d-6.09/GLG3Dcpp\SDLWindow.cpp (function ??1GWindow@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/SDLWindow.cpp
