// roc 2012-06 00859130  unit: std::runtime_error  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859130
//
// 00859130  6aff                 push -1
// 00859132  687ce0ac00           push 0xace07c
// 00859137  64a100000000         mov eax, dword ptr fs:[0]
// 0085913d  50                   push eax
// 0085913e  64892500000000       mov dword ptr fs:[0], esp
// 00859145  51                   push ecx
// 00859146  56                   push esi
// 00859147  8bf1                 mov esi, ecx
// 00859149  89742404             mov dword ptr [esp + 4], esi
// 0085914d  8d4e34               lea ecx, [esi + 0x34]
// 00859150  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00859158  ff153c26b200         call dword ptr [0xb2263c]
// 0085915e  8d4e18               lea ecx, [esi + 0x18]
// 00859161  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00859169  ff153c26b200         call dword ptr [0xb2263c]
// 0085916f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00859173  5e                   pop esi
// 00859174  64890d00000000       mov dword ptr fs:[0], ecx
// 0085917b  83c410               add esp, 0x10
// 0085917e  c3                   ret 
// copied from an identical function in another client (function ??1gzip_params@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp