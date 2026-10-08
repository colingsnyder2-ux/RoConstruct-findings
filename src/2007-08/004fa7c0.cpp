// roc 2007-08 004fa7c0  unit: RBX::Render::TextureProxy  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fa7c0
//
// 004fa7c0  51                   push ecx
// 004fa7c1  56                   push esi
// 004fa7c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004fa7c6  c70600000000         mov dword ptr [esi], 0
// 004fa7cc  8b4128               mov eax, dword ptr [ecx + 0x28]
// 004fa7cf  50                   push eax
// 004fa7d0  8bce                 mov ecx, esi
// 004fa7d2  c744240800000000     mov dword ptr [esp + 8], 0
// 004fa7da  e891a7f7ff           call 0x474f70
// 004fa7df  8bc6                 mov eax, esi
// 004fa7e1  5e                   pop esi
// 004fa7e2  59                   pop ecx
// 004fa7e3  c20400               ret 4
// library rbxgs-render/TextureProxy.cpp (function ?getIfResolved@TextureProxy@Render@RBX@@UBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render TextureProxy.cpp
