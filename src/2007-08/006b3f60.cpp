// roc 2007-08 006b3f60  unit: CXTPControlGallery  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3f60
//
// 006b3f60  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006b3f66  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006b3f6c  83ec10               sub esp, 0x10
// 006b3f6f  56                   push esi
// 006b3f70  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b3f74  8906                 mov dword ptr [esi], eax
// 006b3f76  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006b3f7c  895604               mov dword ptr [esi + 4], edx
// 006b3f7f  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 006b3f85  894608               mov dword ptr [esi + 8], eax
// 006b3f88  8b01                 mov eax, dword ptr [ecx]
// 006b3f8a  8b8048010000         mov eax, dword ptr [eax + 0x148]
// 006b3f90  89560c               mov dword ptr [esi + 0xc], edx
// 006b3f93  8d542404             lea edx, [esp + 4]
// 006b3f97  52                   push edx
// 006b3f98  ffd0                 call eax
// 006b3f9a  8b08                 mov ecx, dword ptr [eax]
// 006b3f9c  8b5004               mov edx, dword ptr [eax + 4]
// 006b3f9f  010e                 add dword ptr [esi], ecx
// 006b3fa1  015604               add dword ptr [esi + 4], edx
// 006b3fa4  8b4808               mov ecx, dword ptr [eax + 8]
// 006b3fa7  8b500c               mov edx, dword ptr [eax + 0xc]
// 006b3faa  294e08               sub dword ptr [esi + 8], ecx
// 006b3fad  29560c               sub dword ptr [esi + 0xc], edx
// 006b3fb0  8bc6                 mov eax, esi
// 006b3fb2  5e                   pop esi
// 006b3fb3  83c410               add esp, 0x10
// 006b3fb6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemsRect@CXTPControlGallery@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
