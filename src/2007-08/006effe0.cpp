// roc 2007-08 006effe0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006effe0
//
// 006effe0  6aff                 push -1
// 006effe2  683e887600           push 0x76883e
// 006effe7  64a100000000         mov eax, dword ptr fs:[0]
// 006effed  50                   push eax
// 006effee  a188518b00           mov eax, dword ptr [0x8b5188]
// 006efff3  33c4                 xor eax, esp
// 006efff5  50                   push eax
// 006efff6  8d442404             lea eax, [esp + 4]
// 006efffa  64a300000000         mov dword ptr fs:[0], eax
// 006f0000  b801000000           mov eax, 1
// 006f0005  840544968c00         test byte ptr [0x8c9644], al
// 006f000b  7525                 jne 0x6f0032
// 006f000d  090544968c00         or dword ptr [0x8c9644], eax
// 006f0013  b920968c00           mov ecx, 0x8c9620
// 006f0018  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006f0020  e8dbfeffff           call 0x6eff00
// 006f0025  6800cd7700           push 0x77cd00
// 006f002a  e8f40cf4ff           call 0x630d23
// 006f002f  83c404               add esp, 4
// 006f0032  b820968c00           mov eax, 0x8c9620
// 006f0037  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f003b  64890d00000000       mov dword ptr fs:[0], ecx
// 006f0042  59                   pop ecx
// 006f0043  83c40c               add esp, 0xc
// 006f0046  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
