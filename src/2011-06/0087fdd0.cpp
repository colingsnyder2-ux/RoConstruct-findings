// roc 2011-06 0087fdd0  unit: CXTPResourceManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fdd0
//
// 0087fdd0  0fb7442404           movzx eax, word ptr [esp + 4]
// 0087fdd5  56                   push esi
// 0087fdd6  50                   push eax
// 0087fdd7  8bf1                 mov esi, ecx
// 0087fdd9  e862fcffff           call 0x87fa40
// 0087fdde  83c404               add esp, 4
// 0087fde1  89460c               mov dword ptr [esi + 0xc], eax
// 0087fde4  85c0                 test eax, eax
// 0087fde6  7510                 jne 0x87fdf8
// 0087fde8  6809040000           push 0x409
// 0087fded  e84efcffff           call 0x87fa40
// 0087fdf2  83c404               add esp, 4
// 0087fdf5  89460c               mov dword ptr [esi + 0xc], eax
// 0087fdf8  5e                   pop esi
// 0087fdf9  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?SetResourceLanguage@CXTPResourceManager@@QAEXG@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
