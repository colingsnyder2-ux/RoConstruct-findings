// roc 2011-06 0053e960  unit: G3D::MemoryManager  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053e960
//
// 0053e960  6aff                 push -1
// 0053e962  68ecea9d00           push 0x9deaec
// 0053e967  64a100000000         mov eax, dword ptr fs:[0]
// 0053e96d  50                   push eax
// 0053e96e  64892500000000       mov dword ptr fs:[0], esp
// 0053e975  51                   push ecx
// 0053e976  56                   push esi
// 0053e977  8bf1                 mov esi, ecx
// 0053e979  89742404             mov dword ptr [esp + 4], esi
// 0053e97d  8d4e34               lea ecx, [esi + 0x34]
// 0053e980  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053e988  ff15d004a400         call dword ptr [0xa404d0]
// 0053e98e  8d4e18               lea ecx, [esi + 0x18]
// 0053e991  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053e999  ff15d004a400         call dword ptr [0xa404d0]
// 0053e99f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053e9a3  5e                   pop esi
// 0053e9a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e9ab  83c410               add esp, 0x10
// 0053e9ae  c3                   ret 
// copied from an identical function in another client (function ??1gzip_params@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp