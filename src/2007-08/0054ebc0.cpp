// roc 2007-08 0054ebc0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ebc0
//
// 0054ebc0  56                   push esi
// 0054ebc1  8bf1                 mov esi, ecx
// 0054ebc3  8b4610               mov eax, dword ptr [esi + 0x10]
// 0054ebc6  83780800             cmp dword ptr [eax + 8], 0
// 0054ebca  7515                 jne 0x54ebe1
// 0054ebcc  8b5608               mov edx, dword ptr [esi + 8]
// 0054ebcf  33c0                 xor eax, eax
// 0054ebd1  50                   push eax
// 0054ebd2  8b4204               mov eax, dword ptr [edx + 4]
// 0054ebd5  8d4c3008             lea ecx, [eax + esi + 8]
// 0054ebd9  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054ebdf  5e                   pop esi
// 0054ebe0  c3                   ret 
// 0054ebe1  8b4804               mov ecx, dword ptr [eax + 4]
// 0054ebe4  57                   push edi
// 0054ebe5  8b39                 mov edi, dword ptr [ecx]
// 0054ebe7  3bf9                 cmp edi, ecx
// 0054ebe9  7506                 jne 0x54ebf1
// 0054ebeb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054ebf1  8b4708               mov eax, dword ptr [edi + 8]
// 0054ebf4  8b5608               mov edx, dword ptr [esi + 8]
// 0054ebf7  5f                   pop edi
// 0054ebf8  50                   push eax
// 0054ebf9  8b4204               mov eax, dword ptr [edx + 4]
// 0054ebfc  8d4c3008             lea ecx, [eax + esi + 8]
// 0054ec00  ff15d8e47700         call dword ptr [0x77e4d8]
// 0054ec06  5e                   pop esi
// 0054ec07  c3                   ret 
// copied from an identical function in another client (function ?notify@?$filtering_stream_base@V?$chain@Uinput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@Upublic_@23@@detail@iostreams@boost@@EAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_1a066d61bcfa73c0.cpp