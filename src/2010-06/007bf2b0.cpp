// roc 2010-06 007bf2b0  unit: CXTPImageManagerResource::CBitmapDC  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bf2b0
//
// 007bf2b0  51                   push ecx
// 007bf2b1  57                   push edi
// 007bf2b2  0fb77c240c           movzx edi, word ptr [esp + 0xc]
// 007bf2b7  85ff                 test edi, edi
// 007bf2b9  7507                 jne 0x7bf2c2
// 007bf2bb  33c0                 xor eax, eax
// 007bf2bd  5f                   pop edi
// 007bf2be  59                   pop ecx
// 007bf2bf  c21000               ret 0x10
// 007bf2c2  56                   push esi
// 007bf2c3  68f1000000           push 0xf1
// 007bf2c8  57                   push edi
// 007bf2c9  e85090feff           call 0x7a831e
// 007bf2ce  68f1000000           push 0xf1
// 007bf2d3  8bf0                 mov esi, eax
// 007bf2d5  57                   push edi
// 007bf2d6  56                   push esi
// 007bf2d7  ff155ca39e00         call dword ptr [0x9ea35c]
// 007bf2dd  85c0                 test eax, eax
// 007bf2df  7506                 jne 0x7bf2e7
// 007bf2e1  5e                   pop esi
// 007bf2e2  5f                   pop edi
// 007bf2e3  59                   pop ecx
// 007bf2e4  c21000               ret 0x10
// 007bf2e7  55                   push ebp
// 007bf2e8  50                   push eax
// 007bf2e9  56                   push esi
// 007bf2ea  ff1560a39e00         call dword ptr [0x9ea360]
// 007bf2f0  8be8                 mov ebp, eax
// 007bf2f2  896c240c             mov dword ptr [esp + 0xc], ebp
// 007bf2f6  85ed                 test ebp, ebp
// 007bf2f8  740d                 je 0x7bf307
// 007bf2fa  55                   push ebp
// 007bf2fb  ff15eca29e00         call dword ptr [0x9ea2ec]
// 007bf301  8bf0                 mov esi, eax
// 007bf303  85f6                 test esi, esi
// 007bf305  7509                 jne 0x7bf310
// 007bf307  5d                   pop ebp
// 007bf308  5e                   pop esi
// 007bf309  33c0                 xor eax, eax
// 007bf30b  5f                   pop edi
// 007bf30c  59                   pop ecx
// 007bf30d  c21000               ret 0x10
// 007bf310  0fb74606             movzx eax, word ptr [esi + 6]
// 007bf314  33c9                 xor ecx, ecx
// 007bf316  ba04000000           mov edx, 4
// 007bf31b  f7e2                 mul edx
// 007bf31d  0f90c1               seto cl
// 007bf320  53                   push ebx
// 007bf321  f7d9                 neg ecx
// 007bf323  0bc8                 or ecx, eax
// 007bf325  51                   push ecx
// 007bf326  e85789feff           call 0x7a7c82
// 007bf32b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007bf32f  8b542424             mov edx, dword ptr [esp + 0x24]
// 007bf333  8903                 mov dword ptr [ebx], eax
// 007bf335  33c0                 xor eax, eax
// 007bf337  83c404               add esp, 4
// 007bf33a  c70200000000         mov dword ptr [edx], 0
// 007bf340  33ff                 xor edi, edi
// 007bf342  663b4606             cmp ax, word ptr [esi + 6]
// 007bf346  7332                 jae 0x7bf37a
// 007bf348  8bc6                 mov eax, esi
// 007bf34a  e8a1e0ffff           call 0x7bd3f0
// 007bf34f  89442418             mov dword ptr [esp + 0x18], eax
// 007bf353  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007bf357  0fb70c79             movzx ecx, word ptr [ecx + edi*2]
// 007bf35b  6685c9               test cx, cx
// 007bf35e  7411                 je 0x7bf371
// 007bf360  8b2b                 mov ebp, dword ptr [ebx]
// 007bf362  0fb7c1               movzx eax, cx
// 007bf365  8b0a                 mov ecx, dword ptr [edx]
// 007bf367  89448d00             mov dword ptr [ebp + ecx*4], eax
// 007bf36b  ff02                 inc dword ptr [edx]
// 007bf36d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007bf371  0fb74606             movzx eax, word ptr [esi + 6]
// 007bf375  47                   inc edi
// 007bf376  3bf8                 cmp edi, eax
// 007bf378  7cd9                 jl 0x7bf353
// 007bf37a  0fb74602             movzx eax, word ptr [esi + 2]
// 007bf37e  0fb74e04             movzx ecx, word ptr [esi + 4]
// 007bf382  8b542424             mov edx, dword ptr [esp + 0x24]
// 007bf386  55                   push ebp
// 007bf387  8902                 mov dword ptr [edx], eax
// 007bf389  894a04               mov dword ptr [edx + 4], ecx
// 007bf38c  ff15f0a29e00         call dword ptr [0x9ea2f0]
// 007bf392  5b                   pop ebx
// 007bf393  5d                   pop ebp
// 007bf394  5e                   pop esi
// 007bf395  b801000000           mov eax, 1
// 007bf39a  5f                   pop edi
// 007bf39b  59                   pop ecx
// 007bf39c  c21000               ret 0x10
// copied from an identical function in another client (function ?LoadToolbar@CXTPImageManager@@ABEHIAAPAIAAHAAVCSize@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp