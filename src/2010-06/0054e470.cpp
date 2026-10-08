// from server: 100% by auto
// roc 2010-06 0054e470  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e470
//
// 0054e470  64a100000000         mov eax, dword ptr fs:[0]
// 0054e476  6aff                 push -1
// 0054e478  68ce099900           push 0x9909ce
// 0054e47d  50                   push eax
// 0054e47e  64892500000000       mov dword ptr fs:[0], esp
// 0054e485  e816faffff           call 0x54dea0
// 0054e48a  b801000000           mov eax, 1
// 0054e48f  8405c89ec000         test byte ptr [0xc09ec8], al
// 0054e495  752b                 jne 0x54e4c2
// 0054e497  0905c89ec000         or dword ptr [0xc09ec8], eax
// 0054e49d  684896c000           push 0xc09648
// 0054e4a2  b9ac9ec000           mov ecx, 0xc09eac
// 0054e4a7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054e4af  ff1510a49e00         call dword ptr [0x9ea410]
// 0054e4b5  68c0e09d00           push 0x9de0c0
// 0054e4ba  e8a4a52500           call 0x7a8a63
// 0054e4bf  83c404               add esp, 4
// 0054e4c2  8b0c24               mov ecx, dword ptr [esp]
// 0054e4c5  b8ac9ec000           mov eax, 0xc09eac
// 0054e4ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e4d1  83c40c               add esp, 0xc
// 0054e4d4  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?operatingSystem@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
