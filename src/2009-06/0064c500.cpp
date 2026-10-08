// roc 2009-06 0064c500  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c500
//
// 0064c500  64a100000000         mov eax, dword ptr fs:[0]
// 0064c506  6aff                 push -1
// 0064c508  6838938500           push 0x859338
// 0064c50d  50                   push eax
// 0064c50e  64892500000000       mov dword ptr fs:[0], esp
// 0064c515  56                   push esi
// 0064c516  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064c51a  8d542418             lea edx, [esp + 0x18]
// 0064c51e  8901                 mov dword ptr [ecx], eax
// 0064c520  52                   push edx
// 0064c521  83c104               add ecx, 4
// 0064c524  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064c52c  e8cf5fdbff           call 0x402500
// 0064c531  8b742418             mov esi, dword ptr [esp + 0x18]
// 0064c535  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0064c53d  85f6                 test esi, esi
// 0064c53f  742a                 je 0x64c56b
// 0064c541  8d4604               lea eax, [esi + 4]
// 0064c544  83c9ff               or ecx, 0xffffffff
// 0064c547  f00fc108             lock xadd dword ptr [eax], ecx
// 0064c54b  751e                 jne 0x64c56b
// 0064c54d  8b16                 mov edx, dword ptr [esi]
// 0064c54f  8b4204               mov eax, dword ptr [edx + 4]
// 0064c552  8bce                 mov ecx, esi
// 0064c554  ffd0                 call eax
// 0064c556  8d4e08               lea ecx, [esi + 8]
// 0064c559  83caff               or edx, 0xffffffff
// 0064c55c  f00fc111             lock xadd dword ptr [ecx], edx
// 0064c560  7509                 jne 0x64c56b
// 0064c562  8b06                 mov eax, dword ptr [esi]
// 0064c564  8b5008               mov edx, dword ptr [eax + 8]
// 0064c567  8bce                 mov ecx, esi
// 0064c569  ffd2                 call edx
// 0064c56b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064c56f  64890d00000000       mov dword ptr fs:[0], ecx
// 0064c576  5e                   pop esi
// 0064c577  83c40c               add esp, 0xc
// 0064c57a  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
