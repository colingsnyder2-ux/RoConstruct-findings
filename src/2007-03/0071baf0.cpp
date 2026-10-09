// roc 2007-03 0071baf0  unit: seg_00710000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071baf0
//
// 0071baf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071baf4  85c0                 test eax, eax
// 0071baf6  56                   push esi
// 0071baf7  8bf1                 mov esi, ecx
// 0071baf9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071bafd  7557                 jne 0x71bb56
// 0071baff  8b5658               mov edx, dword ptr [esi + 0x58]
// 0071bb02  837a0800             cmp dword ptr [edx + 8], 0
// 0071bb06  744e                 je 0x71bb56
// 0071bb08  83f904               cmp ecx, 4
// 0071bb0b  7405                 je 0x71bb12
// 0071bb0d  83f905               cmp ecx, 5
// 0071bb10  7544                 jne 0x71bb56
// 0071bb12  8b4620               mov eax, dword ptr [esi + 0x20]
// 0071bb15  53                   push ebx
// 0071bb16  8b1d50ee7700         mov ebx, dword ptr [0x77ee50]
// 0071bb1c  57                   push edi
// 0071bb1d  6a00                 push 0
// 0071bb1f  6a01                 push 1
// 0071bb21  6833100000           push 0x1033
// 0071bb26  50                   push eax
// 0071bb27  ffd3                 call ebx
// 0071bb29  6a01                 push 1
// 0071bb2b  8bce                 mov ecx, esi
// 0071bb2d  8bf8                 mov edi, eax
// 0071bb2f  e894f20100           call 0x73adc8
// 0071bb34  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071bb37  8bc8                 mov ecx, eax
// 0071bb39  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071bb3d  2bc1                 sub eax, ecx
// 0071bb3f  c1ef10               shr edi, 0x10
// 0071bb42  0fafc7               imul eax, edi
// 0071bb45  50                   push eax
// 0071bb46  6a00                 push 0
// 0071bb48  6814100000           push 0x1014
// 0071bb4d  52                   push edx
// 0071bb4e  ffd3                 call ebx
// 0071bb50  5f                   pop edi
// 0071bb51  5b                   pop ebx
// 0071bb52  5e                   pop esi
// 0071bb53  c20c00               ret 0xc
// 0071bb56  50                   push eax
// 0071bb57  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071bb5b  50                   push eax
// 0071bb5c  51                   push ecx
// 0071bb5d  8bce                 mov ecx, esi
// 0071bb5f  e80c160000           call 0x71d170
// 0071bb64  5e                   pop esi
// 0071bb65  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectListView.cpp (function ?OnVScroll@CXTPSkinObjectListView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectListView.cpp
