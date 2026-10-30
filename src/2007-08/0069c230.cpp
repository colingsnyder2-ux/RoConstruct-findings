// from server: 100% by auto
// roc 2007-08 0069c230  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c230
//
// 0069c230  56                   push esi
// 0069c231  8bf1                 mov esi, ecx
// 0069c233  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0069c23a  7437                 je 0x69c273
// 0069c23c  e83ff7ffff           call 0x69b980
// 0069c241  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069c245  8d50fc               lea edx, [eax - 4]
// 0069c248  3bca                 cmp ecx, edx
// 0069c24a  7e27                 jle 0x69c273
// 0069c24c  83c002               add eax, 2
// 0069c24f  3bc8                 cmp ecx, eax
// 0069c251  7f20                 jg 0x69c273
// 0069c253  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069c256  6a00                 push 0
// 0069c258  6a00                 push 0
// 0069c25a  688b010000           push 0x18b
// 0069c25f  50                   push eax
// 0069c260  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0069c266  85c0                 test eax, eax
// 0069c268  7e09                 jle 0x69c273
// 0069c26a  b800010000           mov eax, 0x100
// 0069c26f  5e                   pop esi
// 0069c270  c20800               ret 8
// 0069c273  83c8ff               or eax, 0xffffffff
// 0069c276  5e                   pop esi
// 0069c277  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
