// roc 2008-06 005f4470  unit: VWinHttpRequest_source::?$stream_buffer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4470
//
// 005f4470  6aff                 push -1
// 005f4472  6838757d00           push 0x7d7538
// 005f4477  64a100000000         mov eax, dword ptr fs:[0]
// 005f447d  50                   push eax
// 005f447e  64892500000000       mov dword ptr fs:[0], esp
// 005f4485  51                   push ecx
// 005f4486  56                   push esi
// 005f4487  8bf1                 mov esi, ecx
// 005f4489  8b4608               mov eax, dword ptr [esi + 8]
// 005f448c  c706dc0a8400         mov dword ptr [esi], 0x840adc
// 005f4492  8b4804               mov ecx, dword ptr [eax + 4]
// 005f4495  89742404             mov dword ptr [esp + 4], esi
// 005f4499  c7443108d40a8400     mov dword ptr [ecx + esi + 8], 0x840ad4
// 005f44a1  8b4604               mov eax, dword ptr [esi + 4]
// 005f44a4  8b00                 mov eax, dword ptr [eax]
// 005f44a6  f6402c01             test byte ptr [eax + 0x2c], 1
// 005f44aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f44b2  7410                 je 0x5f44c4
// 005f44b4  8b5608               mov edx, dword ptr [esi + 8]
// 005f44b7  8b4204               mov eax, dword ptr [edx + 4]
// 005f44ba  8b4c3030             mov ecx, dword ptr [eax + esi + 0x30]
// 005f44be  ff1570238000         call dword ptr [0x802370]
// 005f44c4  8bce                 mov ecx, esi
// 005f44c6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005f44ce  e8fdf2ffff           call 0x5f37d0
// 005f44d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f44d7  5e                   pop esi
// 005f44d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f44df  83c410               add esp, 0x10
// 005f44e2  c3                   ret 
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ??1?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
