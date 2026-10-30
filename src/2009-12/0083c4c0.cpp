// roc 2009-12 0083c4c0  unit: CXTPAccessible  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c4c0
//
// 0083c4c0  56                   push esi
// 0083c4c1  57                   push edi
// 0083c4c2  8bf9                 mov edi, ecx
// 0083c4c4  837f4000             cmp dword ptr [edi + 0x40], 0
// 0083c4c8  750d                 jne 0x83c4d7
// 0083c4ca  68e4839f00           push 0x9f83e4
// 0083c4cf  8d4f38               lea ecx, [edi + 0x38]
// 0083c4d2  e8f9feffff           call 0x83c3d0
// 0083c4d7  837f0c00             cmp dword ptr [edi + 0xc], 0
// 0083c4db  8d770c               lea esi, [edi + 0xc]
// 0083c4de  7510                 jne 0x83c4f0
// 0083c4e0  6a00                 push 0
// 0083c4e2  68f0839f00           push 0x9f83f0
// 0083c4e7  56                   push esi
// 0083c4e8  8d4f38               lea ecx, [edi + 0x38]
// 0083c4eb  e800f4ffff           call 0x83b8f0
// 0083c4f0  8b36                 mov esi, dword ptr [esi]
// 0083c4f2  85f6                 test esi, esi
// 0083c4f4  7416                 je 0x83c50c
// 0083c4f6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083c4fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083c4fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0083c502  50                   push eax
// 0083c503  51                   push ecx
// 0083c504  52                   push edx
// 0083c505  ffd6                 call esi
// 0083c507  5f                   pop edi
// 0083c508  5e                   pop esi
// 0083c509  c20c00               ret 0xc
// 0083c50c  5f                   pop edi
// 0083c50d  b805400080           mov eax, 0x80004005
// 0083c512  5e                   pop esi
// 0083c513  c20c00               ret 0xc
// copied from an identical function in another client (function ?LresultFromObject@CXTPAccessible@@IAEJABU_GUID@@IPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp