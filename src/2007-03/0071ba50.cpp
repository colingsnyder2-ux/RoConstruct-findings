// roc 2007-03 0071ba50  unit: seg_00710000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071ba50
//
// 0071ba50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071ba54  85c0                 test eax, eax
// 0071ba56  56                   push esi
// 0071ba57  8bf1                 mov esi, ecx
// 0071ba59  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071ba5d  7571                 jne 0x71bad0
// 0071ba5f  8b5658               mov edx, dword ptr [esi + 0x58]
// 0071ba62  837a0800             cmp dword ptr [edx + 8], 0
// 0071ba66  7468                 je 0x71bad0
// 0071ba68  83f904               cmp ecx, 4
// 0071ba6b  7405                 je 0x71ba72
// 0071ba6d  83f905               cmp ecx, 5
// 0071ba70  755e                 jne 0x71bad0
// 0071ba72  53                   push ebx
// 0071ba73  57                   push edi
// 0071ba74  8bce                 mov ecx, esi
// 0071ba76  e849f10100           call 0x73abc4
// 0071ba7b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071ba7e  8b1d50ee7700         mov ebx, dword ptr [0x77ee50]
// 0071ba84  33c9                 xor ecx, ecx
// 0071ba86  83e001               and eax, 1
// 0071ba89  3c03                 cmp al, 3
// 0071ba8b  6a00                 push 0
// 0071ba8d  0f94c1               sete cl
// 0071ba90  6a01                 push 1
// 0071ba92  6833100000           push 0x1033
// 0071ba97  52                   push edx
// 0071ba98  8bf9                 mov edi, ecx
// 0071ba9a  ffd3                 call ebx
// 0071ba9c  85ff                 test edi, edi
// 0071ba9e  bf01000000           mov edi, 1
// 0071baa3  7403                 je 0x71baa8
// 0071baa5  0fb7f8               movzx edi, ax
// 0071baa8  6a00                 push 0
// 0071baaa  8bce                 mov ecx, esi
// 0071baac  e817f30100           call 0x73adc8
// 0071bab1  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071bab4  8bc8                 mov ecx, eax
// 0071bab6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071baba  2bc1                 sub eax, ecx
// 0071babc  0fafc7               imul eax, edi
// 0071babf  6a00                 push 0
// 0071bac1  50                   push eax
// 0071bac2  6814100000           push 0x1014
// 0071bac7  52                   push edx
// 0071bac8  ffd3                 call ebx
// 0071baca  5f                   pop edi
// 0071bacb  5b                   pop ebx
// 0071bacc  5e                   pop esi
// 0071bacd  c20c00               ret 0xc
// 0071bad0  50                   push eax
// 0071bad1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071bad5  50                   push eax
// 0071bad6  51                   push ecx
// 0071bad7  8bce                 mov ecx, esi
// 0071bad9  e892160000           call 0x71d170
// 0071bade  5e                   pop esi
// 0071badf  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectListView.cpp (function ?OnHScroll@CXTPSkinObjectListView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectListView.cpp
