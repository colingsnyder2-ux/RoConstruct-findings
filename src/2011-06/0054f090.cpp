// from server: 100% by auto
// roc 2011-06 0054f090  unit: G3D::_internal::DialogTemplate  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054f090
//
// 0054f090  6aff                 push -1
// 0054f092  68d9bc9d00           push 0x9dbcd9
// 0054f097  64a100000000         mov eax, dword ptr fs:[0]
// 0054f09d  50                   push eax
// 0054f09e  64892500000000       mov dword ptr fs:[0], esp
// 0054f0a5  83ec1c               sub esp, 0x1c
// 0054f0a8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054f0ac  50                   push eax
// 0054f0ad  8d4c2404             lea ecx, [esp + 4]
// 0054f0b1  ff15c404a400         call dword ptr [0xa404c4]
// 0054f0b7  8d0c24               lea ecx, [esp]
// 0054f0ba  51                   push ecx
// 0054f0bb  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0054f0c3  e898c4feff           call 0x53b560
// 0054f0c8  8bc8                 mov ecx, eax
// 0054f0ca  e8d1c5feff           call 0x53b6a0
// 0054f0cf  8d0c24               lea ecx, [esp]
// 0054f0d2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0054f0da  ff15d004a400         call dword ptr [0xa404d0]
// 0054f0e0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054f0e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f0eb  83c428               add esp, 0x28
// 0054f0ee  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?png_warning@G3D@@YAXPAUpng_struct_def@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
