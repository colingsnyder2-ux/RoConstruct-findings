// from server: 100% by auto
// roc 2009-06 00570af0  unit: G3D::Log  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00570af0
//
// 00570af0  8b442404             mov eax, dword ptr [esp + 4]
// 00570af4  56                   push esi
// 00570af5  8bf1                 mov esi, ecx
// 00570af7  50                   push eax
// 00570af8  c706a0fc8b00         mov dword ptr [esi], 0x8bfca0
// 00570afe  c7460400000000       mov dword ptr [esi + 4], 0
// 00570b05  e886ffffff           call 0x570a90
// 00570b0a  8bc6                 mov eax, esi
// 00570b0c  5e                   pop esi
// 00570b0d  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
