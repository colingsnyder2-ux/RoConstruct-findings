// roc 2009-06 0042f870  unit: COutputView  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f870
//
// 0042f870  6aff                 push -1
// 0042f872  68b2db8500           push 0x85dbb2
// 0042f877  64a100000000         mov eax, dword ptr fs:[0]
// 0042f87d  50                   push eax
// 0042f87e  64892500000000       mov dword ptr fs:[0], esp
// 0042f885  83ec44               sub esp, 0x44
// 0042f888  6894f88a00           push 0x8af894
// 0042f88d  8d4c2404             lea ecx, [esp + 4]
// 0042f891  ff15b4e48900         call dword ptr [0x89e4b4]
// 0042f897  8d4c241c             lea ecx, [esp + 0x1c]
// 0042f89b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0042f8a3  ff15b8e98900         call dword ptr [0x89e9b8]
// 0042f8a9  8d0424               lea eax, [esp]
// 0042f8ac  50                   push eax
// 0042f8ad  8d4c242c             lea ecx, [esp + 0x2c]
// 0042f8b1  c644245001           mov byte ptr [esp + 0x50], 1
// 0042f8b6  c744242044c98a00     mov dword ptr [esp + 0x20], 0x8ac944
// 0042f8be  ff15b8e48900         call dword ptr [0x89e4b8]
// 0042f8c4  6834929700           push 0x979234
// 0042f8c9  8d4c2420             lea ecx, [esp + 0x20]
// 0042f8cd  51                   push ecx
// 0042f8ce  c644245400           mov byte ptr [esp + 0x54], 0
// 0042f8d3  c744242450c98a00     mov dword ptr [esp + 0x24], 0x8ac950
// 0042f8db  e86aa12e00           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
