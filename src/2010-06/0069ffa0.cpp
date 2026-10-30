// roc 2010-06 0069ffa0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069ffa0
//
// 0069ffa0  6aff                 push -1
// 0069ffa2  686c269a00           push 0x9a266c
// 0069ffa7  64a100000000         mov eax, dword ptr fs:[0]
// 0069ffad  50                   push eax
// 0069ffae  64892500000000       mov dword ptr fs:[0], esp
// 0069ffb5  51                   push ecx
// 0069ffb6  56                   push esi
// 0069ffb7  8bf1                 mov esi, ecx
// 0069ffb9  89742404             mov dword ptr [esp + 4], esi
// 0069ffbd  8d4e34               lea ecx, [esi + 0x34]
// 0069ffc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0069ffc8  ff1500a49e00         call dword ptr [0x9ea400]
// 0069ffce  8d4e18               lea ecx, [esi + 0x18]
// 0069ffd1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0069ffd9  ff1500a49e00         call dword ptr [0x9ea400]
// 0069ffdf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069ffe3  5e                   pop esi
// 0069ffe4  64890d00000000       mov dword ptr fs:[0], ecx
// 0069ffeb  83c410               add esp, 0x10
// 0069ffee  c3                   ret 
// copied from an identical function in another client (function ??1gzip_params@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp