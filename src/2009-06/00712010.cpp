// roc 2009-06 00712010  unit: W4_D3DFORMAT::?$EnumDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00712010
//
// 00712010  6aff                 push -1
// 00712012  6839428700           push 0x874239
// 00712017  64a100000000         mov eax, dword ptr fs:[0]
// 0071201d  50                   push eax
// 0071201e  83ec44               sub esp, 0x44
// 00712021  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00712026  33c4                 xor eax, esp
// 00712028  50                   push eax
// 00712029  8d442448             lea eax, [esp + 0x48]
// 0071202d  64a300000000         mov dword ptr fs:[0], eax
// 00712033  68a0ec8a00           push 0x8aeca0
// 00712038  8d4c2408             lea ecx, [esp + 8]
// 0071203c  ff15b4e48900         call dword ptr [0x89e4b4]
// 00712042  8d442404             lea eax, [esp + 4]
// 00712046  50                   push eax
// 00712047  8d4c2424             lea ecx, [esp + 0x24]
// 0071204b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00712053  e888f4ceff           call 0x4014e0
// 00712058  6834929700           push 0x979234
// 0071205d  8d4c2424             lea ecx, [esp + 0x24]
// 00712061  51                   push ecx
// 00712062  c744242850c98a00     mov dword ptr [esp + 0x28], 0x8ac950
// 0071206a  e8db790000           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?_Xlen@?$vector@IV?$allocator@I@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
