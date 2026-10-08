// from server: 100% by auto
// roc 2010-06 00559ac0  unit: G3D::BinaryInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00559ac0
//
// 00559ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00559ac4  50                   push eax
// 00559ac5  e8f6feffff           call 0x5599c0
// 00559aca  33c9                 xor ecx, ecx
// 00559acc  84c0                 test al, al
// 00559ace  0f94c1               sete cl
// 00559ad1  8ac1                 mov al, cl
// 00559ad3  c20400               ret 4
// library g3d-6.09/G3Dcpp\GLight.cpp (function ??9GLight@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GLight.cpp
