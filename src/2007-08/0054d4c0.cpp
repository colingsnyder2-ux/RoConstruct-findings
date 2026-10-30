// roc 2007-08 0054d4c0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054d4c0
//
// 0054d4c0  6aff                 push -1
// 0054d4c2  6808277500           push 0x752708
// 0054d4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0054d4cd  50                   push eax
// 0054d4ce  64892500000000       mov dword ptr fs:[0], esp
// 0054d4d5  51                   push ecx
// 0054d4d6  56                   push esi
// 0054d4d7  8bf1                 mov esi, ecx
// 0054d4d9  8b4608               mov eax, dword ptr [esi + 8]
// 0054d4dc  c706d87a7a00         mov dword ptr [esi], 0x7a7ad8
// 0054d4e2  8b4804               mov ecx, dword ptr [eax + 4]
// 0054d4e5  89742404             mov dword ptr [esp + 4], esi
// 0054d4e9  c7443108d07a7a00     mov dword ptr [ecx + esi + 8], 0x7a7ad0
// 0054d4f1  8b4604               mov eax, dword ptr [esi + 4]
// 0054d4f4  8b00                 mov eax, dword ptr [eax]
// 0054d4f6  f6401c01             test byte ptr [eax + 0x1c], 1
// 0054d4fa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054d502  7410                 je 0x54d514
// 0054d504  8b5608               mov edx, dword ptr [esi + 8]
// 0054d507  8b4204               mov eax, dword ptr [edx + 4]
// 0054d50a  8b4c3030             mov ecx, dword ptr [eax + esi + 0x30]
// 0054d50e  ff1504e67700         call dword ptr [0x77e604]
// 0054d514  8bce                 mov ecx, esi
// 0054d516  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054d51e  e82df1ffff           call 0x54c650
// 0054d523  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054d527  5e                   pop esi
// 0054d528  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d52f  83c410               add esp, 0x10
// 0054d532  c3                   ret 
// copied from an identical function in another client (function ??1?$filtering_stream@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Upublic_@23@@iostreams@boost@@UAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp