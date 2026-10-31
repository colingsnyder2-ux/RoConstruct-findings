// roc 2009-06 00406950  unit: VCApp::?$CComObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406950
//
// 00406950  55                   push ebp
// 00406951  8bec                 mov ebp, esp
// 00406953  6aff                 push -1
// 00406955  68d3cc8400           push 0x84ccd3
// 0040695a  64a100000000         mov eax, dword ptr fs:[0]
// 00406960  50                   push eax
// 00406961  64892500000000       mov dword ptr fs:[0], esp
// 00406968  83ec1c               sub esp, 0x1c
// 0040696b  53                   push ebx
// 0040696c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040696f  8b03                 mov eax, dword ptr [ebx]
// 00406971  8b500c               mov edx, dword ptr [eax + 0xc]
// 00406974  56                   push esi
// 00406975  57                   push edi
// 00406976  8bf9                 mov edi, ecx
// 00406978  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040697b  8d4de0               lea ecx, [ebp - 0x20]
// 0040697e  51                   push ecx
// 0040697f  53                   push ebx
// 00406980  897ddc               mov dword ptr [ebp - 0x24], edi
// 00406983  ffd2                 call edx
// 00406985  33c9                 xor ecx, ecx
// 00406987  3bc1                 cmp eax, ecx
// 00406989  0f8c3b010000         jl 0x406aca
// 0040698f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00406992  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00406996  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00406999  895718               mov dword ptr [edi + 0x18], edx
// 0040699c  894f14               mov dword ptr [edi + 0x14], ecx
// 0040699f  3bd1                 cmp edx, ecx
// 004069a1  7468                 je 0x406a0b
// 004069a3  8bfa                 mov edi, edx
// 004069a5  8bc7                 mov eax, edi
// 004069a7  ba0c000000           mov edx, 0xc
// 004069ac  f7e2                 mul edx
// 004069ae  894dfc               mov dword ptr [ebp - 4], ecx
// 004069b1  0f90c1               seto cl
// 004069b4  f7d9                 neg ecx
// 004069b6  0bc8                 or ecx, eax
// 004069b8  33c0                 xor eax, eax
// 004069ba  83c104               add ecx, 4
// 004069bd  0f92c0               setb al
// 004069c0  f7d8                 neg eax
// 004069c2  0bc1                 or eax, ecx
// 004069c4  50                   push eax
// 004069c5  e850233100           call 0x718d1a
// 004069ca  83c404               add esp, 4
// 004069cd  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004069d0  c645fc01             mov byte ptr [ebp - 4], 1
// 004069d4  85c0                 test eax, eax
// 004069d6  741a                 je 0x4069f2
// 004069d8  6810244000           push 0x402410
// 004069dd  6860684000           push 0x406860
// 004069e2  57                   push edi
// 004069e3  8d7004               lea esi, [eax + 4]
// 004069e6  6a0c                 push 0xc
// 004069e8  56                   push esi
// 004069e9  8938                 mov dword ptr [eax], edi
// 004069eb  e890323100           call 0x719c80
// 004069f0  eb02                 jmp 0x4069f4
// 004069f2  33f6                 xor esi, esi
// 004069f4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004069f7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004069fe  85f6                 test esi, esi
// 00406a00  0f84f1000000         je 0x406af7
// 00406a06  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00406a09  33c9                 xor ecx, ecx
// 00406a0b  394f18               cmp dword ptr [edi + 0x18], ecx
// 00406a0e  894de8               mov dword ptr [ebp - 0x18], ecx
// 00406a11  0f8ea1000000         jle 0x406ab8
// 00406a17  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 00406a1a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406a1d  8b0b                 mov ecx, dword ptr [ebx]
// 00406a1f  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00406a22  8d55ec               lea edx, [ebp - 0x14]
// 00406a25  52                   push edx
// 00406a26  50                   push eax
// 00406a27  53                   push ebx
// 00406a28  ffd1                 call ecx
// 00406a2a  85c0                 test eax, eax
// 00406a2c  7c77                 jl 0x406aa5
// 00406a2e  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406a35  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00406a38  8b13                 mov edx, dword ptr [ebx]
// 00406a3a  6a00                 push 0
// 00406a3c  6a00                 push 0
// 00406a3e  6a00                 push 0
// 00406a40  8d4508               lea eax, [ebp + 8]
// 00406a43  50                   push eax
// 00406a44  8b01                 mov eax, dword ptr [ecx]
// 00406a46  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00406a49  50                   push eax
// 00406a4a  53                   push ebx
// 00406a4b  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00406a52  ffd1                 call ecx
// 00406a54  85c0                 test eax, eax
// 00406a56  7c30                 jl 0x406a88
// 00406a58  8b7d08               mov edi, dword ptr [ebp + 8]
// 00406a5b  8b06                 mov eax, dword ptr [esi]
// 00406a5d  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406a64  3bc7                 cmp eax, edi
// 00406a66  7409                 je 0x406a71
// 00406a68  50                   push eax
// 00406a69  ff153cea8900         call dword ptr [0x89ea3c]
// 00406a6f  893e                 mov dword ptr [esi], edi
// 00406a71  8b06                 mov eax, dword ptr [esi]
// 00406a73  50                   push eax
// 00406a74  ff1550ea8900         call dword ptr [0x89ea50]
// 00406a7a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00406a7d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00406a80  894604               mov dword ptr [esi + 4], eax
// 00406a83  8b02                 mov eax, dword ptr [edx]
// 00406a85  894608               mov dword ptr [esi + 8], eax
// 00406a88  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00406a8b  8b0b                 mov ecx, dword ptr [ebx]
// 00406a8d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00406a90  52                   push edx
// 00406a91  53                   push ebx
// 00406a92  ffd0                 call eax
// 00406a94  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00406a97  51                   push ecx
// 00406a98  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00406a9f  ff153cea8900         call dword ptr [0x89ea3c]
// 00406aa5  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406aa8  40                   inc eax
// 00406aa9  83c60c               add esi, 0xc
// 00406aac  3b4718               cmp eax, dword ptr [edi + 0x18]
// 00406aaf  8945e8               mov dword ptr [ebp - 0x18], eax
// 00406ab2  0f8c62ffffff         jl 0x406a1a
// 00406ab8  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00406abb  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00406abe  895714               mov dword ptr [edi + 0x14], edx
// 00406ac1  8b03                 mov eax, dword ptr [ebx]
// 00406ac3  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00406ac6  51                   push ecx
// 00406ac7  53                   push ebx
// 00406ac8  ffd2                 call edx
// 00406aca  33c0                 xor eax, eax
// 00406acc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406acf  64890d00000000       mov dword ptr fs:[0], ecx
// 00406ad6  5f                   pop edi
// 00406ad7  5e                   pop esi
// 00406ad8  5b                   pop ebx
// 00406ad9  8be5                 mov esp, ebp
// 00406adb  5d                   pop ebp
// 00406adc  c20400               ret 4
// 00406adf  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00406ae2  e82d223100           call 0x718d14
// 00406ae7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00406aee  b8f46a4000           mov eax, 0x406af4
// 00406af3  c3                   ret 
// 00406af4  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00406af7  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00406afa  8b0b                 mov ecx, dword ptr [ebx]
// 00406afc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00406aff  52                   push edx
// 00406b00  53                   push ebx
// 00406b01  ffd0                 call eax
// 00406b03  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406b06  5f                   pop edi
// 00406b07  5e                   pop esi
// 00406b08  b80e000780           mov eax, 0x8007000e
// 00406b0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00406b14  5b                   pop ebx
// 00406b15  8be5                 mov esp, ebp
// 00406b17  5d                   pop ebp
// 00406b18  c20400               ret 4
// copied from an identical function in another client (function ?LoadNameCache@CComTypeInfoHolder@ATL@@QAEJPAUITypeInfo@@@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp