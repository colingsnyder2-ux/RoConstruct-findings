// roc 2007-03 00688500  unit: seg_00680000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00688500
//
// 00688500  56                   push esi
// 00688501  8bf1                 mov esi, ecx
// 00688503  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0068850a  7437                 je 0x688543
// 0068850c  e84ff7ffff           call 0x687c60
// 00688511  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00688515  8d50fc               lea edx, [eax - 4]
// 00688518  3bca                 cmp ecx, edx
// 0068851a  7e27                 jle 0x688543
// 0068851c  83c002               add eax, 2
// 0068851f  3bc8                 cmp ecx, eax
// 00688521  7f20                 jg 0x688543
// 00688523  8b4620               mov eax, dword ptr [esi + 0x20]
// 00688526  6a00                 push 0
// 00688528  6a00                 push 0
// 0068852a  688b010000           push 0x18b
// 0068852f  50                   push eax
// 00688530  ff1550ee7700         call dword ptr [0x77ee50]
// 00688536  85c0                 test eax, eax
// 00688538  7e09                 jle 0x688543
// 0068853a  b800010000           mov eax, 0x100
// 0068853f  5e                   pop esi
// 00688540  c20800               ret 8
// 00688543  83c8ff               or eax, 0xffffffff
// 00688546  5e                   pop esi
// 00688547  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
