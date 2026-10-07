// roc 2009-06 00560bc0  unit: RBX::WedgeBuilder  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560bc0
//
// 00560bc0  56                   push esi
// 00560bc1  8bf1                 mov esi, ecx
// 00560bc3  8b06                 mov eax, dword ptr [esi]
// 00560bc5  85c0                 test eax, eax
// 00560bc7  7429                 je 0x560bf2
// 00560bc9  83c004               add eax, 4
// 00560bcc  50                   push eax
// 00560bcd  ff15a4e18900         call dword ptr [0x89e1a4]
// 00560bd3  85c0                 test eax, eax
// 00560bd5  7515                 jne 0x560bec
// 00560bd7  8b0e                 mov ecx, dword ptr [esi]
// 00560bd9  e8a241eeff           call 0x444d80
// 00560bde  8b0e                 mov ecx, dword ptr [esi]
// 00560be0  85c9                 test ecx, ecx
// 00560be2  7408                 je 0x560bec
// 00560be4  8b01                 mov eax, dword ptr [ecx]
// 00560be6  8b10                 mov edx, dword ptr [eax]
// 00560be8  6a01                 push 1
// 00560bea  ffd2                 call edx
// 00560bec  c70600000000         mov dword ptr [esi], 0
// 00560bf2  f644240801           test byte ptr [esp + 8], 1
// 00560bf7  7409                 je 0x560c02
// 00560bf9  56                   push esi
// 00560bfa  e8337e1b00           call 0x718a32
// 00560bff  83c404               add esp, 4
// 00560c02  8bc6                 mov eax, esi
// 00560c04  5e                   pop esi
// 00560c05  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ??_G?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
