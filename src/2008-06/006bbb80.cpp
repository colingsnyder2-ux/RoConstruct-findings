// from server: 100% by colin
// roc 2008-06 006bbb80  unit: CXTPImageManagerResource::CBitmapDC  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bbb80
//
// 006bbb80  51                   push ecx
// 006bbb81  57                   push edi
// 006bbb82  0fb77c240c           movzx edi, word ptr [esp + 0xc]
// 006bbb87  85ff                 test edi, edi
// 006bbb89  7507                 jne 0x6bbb92
// 006bbb8b  33c0                 xor eax, eax
// 006bbb8d  5f                   pop edi
// 006bbb8e  59                   pop ecx
// 006bbb8f  c21000               ret 0x10
// 006bbb92  56                   push esi
// 006bbb93  68f1000000           push 0xf1
// 006bbb98  57                   push edi
// 006bbb99  e88e53feff           call 0x6a0f2c
// 006bbb9e  68f1000000           push 0xf1
// 006bbba3  8bf0                 mov esi, eax
// 006bbba5  57                   push edi
// 006bbba6  56                   push esi
// 006bbba7  ff1590218000         call dword ptr [0x802190]
// 006bbbad  85c0                 test eax, eax
// 006bbbaf  7506                 jne 0x6bbbb7
// 006bbbb1  5e                   pop esi
// 006bbbb2  5f                   pop edi
// 006bbbb3  59                   pop ecx
// 006bbbb4  c21000               ret 0x10
// 006bbbb7  55                   push ebp
// 006bbbb8  50                   push eax
// 006bbbb9  56                   push esi
// 006bbbba  ff15a8218000         call dword ptr [0x8021a8]
// 006bbbc0  8be8                 mov ebp, eax
// 006bbbc2  896c240c             mov dword ptr [esp + 0xc], ebp
// 006bbbc6  85ed                 test ebp, ebp
// 006bbbc8  740d                 je 0x6bbbd7
// 006bbbca  55                   push ebp
// 006bbbcb  ff1510228000         call dword ptr [0x802210]
// 006bbbd1  8bf0                 mov esi, eax
// 006bbbd3  85f6                 test esi, esi
// 006bbbd5  7509                 jne 0x6bbbe0
// 006bbbd7  5d                   pop ebp
// 006bbbd8  5e                   pop esi
// 006bbbd9  33c0                 xor eax, eax
// 006bbbdb  5f                   pop edi
// 006bbbdc  59                   pop ecx
// 006bbbdd  c21000               ret 0x10
// 006bbbe0  0fb74606             movzx eax, word ptr [esi + 6]
// 006bbbe4  33c9                 xor ecx, ecx
// 006bbbe6  ba04000000           mov edx, 4
// 006bbbeb  f7e2                 mul edx
// 006bbbed  0f90c1               seto cl
// 006bbbf0  53                   push ebx
// 006bbbf1  f7d9                 neg ecx
// 006bbbf3  0bc8                 or ecx, eax
// 006bbbf5  51                   push ecx
// 006bbbf6  e85b4dfeff           call 0x6a0956
// 006bbbfb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006bbbff  8b542424             mov edx, dword ptr [esp + 0x24]
// 006bbc03  8903                 mov dword ptr [ebx], eax
// 006bbc05  33c0                 xor eax, eax
// 006bbc07  83c404               add esp, 4
// 006bbc0a  c70200000000         mov dword ptr [edx], 0
// 006bbc10  33ff                 xor edi, edi
// 006bbc12  663b4606             cmp ax, word ptr [esi + 6]
// 006bbc16  7332                 jae 0x6bbc4a
// 006bbc18  8bc6                 mov eax, esi
// 006bbc1a  e861dfffff           call 0x6b9b80
// 006bbc1f  89442418             mov dword ptr [esp + 0x18], eax
// 006bbc23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006bbc27  0fb70c79             movzx ecx, word ptr [ecx + edi*2]
// 006bbc2b  6685c9               test cx, cx
// 006bbc2e  7411                 je 0x6bbc41
// 006bbc30  8b2b                 mov ebp, dword ptr [ebx]
// 006bbc32  0fb7c1               movzx eax, cx
// 006bbc35  8b0a                 mov ecx, dword ptr [edx]
// 006bbc37  89448d00             mov dword ptr [ebp + ecx*4], eax
// 006bbc3b  ff02                 inc dword ptr [edx]
// 006bbc3d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006bbc41  0fb74606             movzx eax, word ptr [esi + 6]
// 006bbc45  47                   inc edi
// 006bbc46  3bf8                 cmp edi, eax
// 006bbc48  7cd9                 jl 0x6bbc23
// 006bbc4a  0fb74602             movzx eax, word ptr [esi + 2]
// 006bbc4e  0fb74e04             movzx ecx, word ptr [esi + 4]
// 006bbc52  8b542424             mov edx, dword ptr [esp + 0x24]
// 006bbc56  55                   push ebp
// 006bbc57  8902                 mov dword ptr [edx], eax
// 006bbc59  894a04               mov dword ptr [edx + 4], ecx
// 006bbc5c  ff150c228000         call dword ptr [0x80220c]
// 006bbc62  5b                   pop ebx
// 006bbc63  5d                   pop ebp
// 006bbc64  5e                   pop esi
// 006bbc65  b801000000           mov eax, 1
// 006bbc6a  5f                   pop edi
// 006bbc6b  59                   pop ecx
// 006bbc6c  c21000               ret 0x10

// from server: 75% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp
