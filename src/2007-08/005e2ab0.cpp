// roc 2007-08 005e2ab0  unit: seg_005e0000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2ab0
//
// 005e2ab0  83ec08               sub esp, 8
// 005e2ab3  53                   push ebx
// 005e2ab4  55                   push ebp
// 005e2ab5  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005e2abb  56                   push esi
// 005e2abc  8bf1                 mov esi, ecx
// 005e2abe  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e2ac1  85c0                 test eax, eax
// 005e2ac3  8b5e08               mov ebx, dword ptr [esi + 8]
// 005e2ac6  57                   push edi
// 005e2ac7  8d7e04               lea edi, [esi + 4]
// 005e2aca  7404                 je 0x5e2ad0
// 005e2acc  3bc7                 cmp eax, edi
// 005e2ace  7402                 je 0x5e2ad2
// 005e2ad0  ffd5                 call ebp
// 005e2ad2  395e14               cmp dword ptr [esi + 0x14], ebx
// 005e2ad5  7449                 je 0x5e2b20
// 005e2ad7  837e1000             cmp dword ptr [esi + 0x10], 0
// 005e2adb  7502                 jne 0x5e2adf
// 005e2add  ffd5                 call ebp
// 005e2adf  8b4610               mov eax, dword ptr [esi + 0x10]
// 005e2ae2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e2ae5  3b4804               cmp ecx, dword ptr [eax + 4]
// 005e2ae8  7502                 jne 0x5e2aec
// 005e2aea  ffd5                 call ebp
// 005e2aec  8b5614               mov edx, dword ptr [esi + 0x14]
// 005e2aef  8b420c               mov eax, dword ptr [edx + 0xc]
// 005e2af2  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005e2af6  7528                 jne 0x5e2b20
// 005e2af8  8bca                 mov ecx, edx
// 005e2afa  8b5610               mov edx, dword ptr [esi + 0x10]
// 005e2afd  51                   push ecx
// 005e2afe  52                   push edx
// 005e2aff  8d442418             lea eax, [esp + 0x18]
// 005e2b03  50                   push eax
// 005e2b04  8bcf                 mov ecx, edi
// 005e2b06  e86509fdff           call 0x5b3470
// 005e2b0b  8b08                 mov ecx, dword ptr [eax]
// 005e2b0d  894e10               mov dword ptr [esi + 0x10], ecx
// 005e2b10  8b5004               mov edx, dword ptr [eax + 4]
// 005e2b13  5f                   pop edi
// 005e2b14  895614               mov dword ptr [esi + 0x14], edx
// 005e2b17  5e                   pop esi
// 005e2b18  5d                   pop ebp
// 005e2b19  5b                   pop ebx
// 005e2b1a  83c408               add esp, 8
// 005e2b1d  c20400               ret 4
// 005e2b20  8d44241c             lea eax, [esp + 0x1c]
// 005e2b24  50                   push eax
// 005e2b25  8bcf                 mov ecx, edi
// 005e2b27  e804300200           call 0x605b30
// 005e2b2c  5f                   pop edi
// 005e2b2d  5e                   pop esi
// 005e2b2e  5d                   pop ebp
// 005e2b2f  5b                   pop ebx
// 005e2b30  83c408               add esp, 8
// 005e2b33  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?remove@IMovingManager@RBX@@IAEXPAVIMoving@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
