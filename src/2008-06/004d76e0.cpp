// roc 2008-06 004d76e0  unit: RBX::ViewNew::ViewRbxGfx  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d76e0
//
// 004d76e0  56                   push esi
// 004d76e1  8bf1                 mov esi, ecx
// 004d76e3  8b06                 mov eax, dword ptr [esi]
// 004d76e5  85c0                 test eax, eax
// 004d76e7  7429                 je 0x4d7712
// 004d76e9  83c004               add eax, 4
// 004d76ec  50                   push eax
// 004d76ed  ff15ac218000         call dword ptr [0x8021ac]
// 004d76f3  85c0                 test eax, eax
// 004d76f5  7515                 jne 0x4d770c
// 004d76f7  8b0e                 mov ecx, dword ptr [esi]
// 004d76f9  e89236f8ff           call 0x45ad90
// 004d76fe  8b0e                 mov ecx, dword ptr [esi]
// 004d7700  85c9                 test ecx, ecx
// 004d7702  7408                 je 0x4d770c
// 004d7704  8b01                 mov eax, dword ptr [ecx]
// 004d7706  8b10                 mov edx, dword ptr [eax]
// 004d7708  6a01                 push 1
// 004d770a  ffd2                 call edx
// 004d770c  c70600000000         mov dword ptr [esi], 0
// 004d7712  f644240801           test byte ptr [esp + 8], 1
// 004d7717  7409                 je 0x4d7722
// 004d7719  56                   push esi
// 004d771a  e85b8f1c00           call 0x6a067a
// 004d771f  83c404               add esp, 4
// 004d7722  8bc6                 mov eax, esi
// 004d7724  5e                   pop esi
// 004d7725  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??_G?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
