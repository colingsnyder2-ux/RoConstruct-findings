// roc 2012-06 00667c70  unit: seg_00660000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667c70
//
// 00667c70  83ec10               sub esp, 0x10
// 00667c73  56                   push esi
// 00667c74  8b742418             mov esi, dword ptr [esp + 0x18]
// 00667c78  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 00667c7e  89442404             mov dword ptr [esp + 4], eax
// 00667c82  33c0                 xor eax, eax
// 00667c84  3986e4000000         cmp dword ptr [esi + 0xe4], eax
// 00667c8a  8944240c             mov dword ptr [esp + 0xc], eax
// 00667c8e  89442410             mov dword ptr [esp + 0x10], eax
// 00667c92  89442408             mov dword ptr [esp + 8], eax
// 00667c96  0f8eaf000000         jle 0x667d4b
// 00667c9c  53                   push ebx
// 00667c9d  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00667ca3  55                   push ebp
// 00667ca4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00667ca8  57                   push edi
// 00667ca9  8da42400000000       lea esp, [esp]
// 00667cb0  8b542424             mov edx, dword ptr [esp + 0x24]
// 00667cb4  8b02                 mov eax, dword ptr [edx]
// 00667cb6  8b7814               mov edi, dword ptr [eax + 0x14]
// 00667cb9  807c3c1800           cmp byte ptr [esp + edi + 0x18], 0
// 00667cbe  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00667cc1  8d5c3c18             lea ebx, [esp + edi + 0x18]
// 00667cc5  752e                 jne 0x667cf5
// 00667cc7  837cbe5800           cmp dword ptr [esi + edi*4 + 0x58], 0
// 00667ccc  750d                 jne 0x667cdb
// 00667cce  56                   push esi
// 00667ccf  e8bcb7feff           call 0x653490
// 00667cd4  83c404               add esp, 4
// 00667cd7  8944be58             mov dword ptr [esi + edi*4 + 0x58], eax
// 00667cdb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00667cdf  8b4cb84c             mov ecx, dword ptr [eax + edi*4 + 0x4c]
// 00667ce3  8b54be58             mov edx, dword ptr [esi + edi*4 + 0x58]
// 00667ce7  51                   push ecx
// 00667ce8  52                   push edx
// 00667ce9  56                   push esi
// 00667cea  e841fdffff           call 0x667a30
// 00667cef  83c40c               add esp, 0xc
// 00667cf2  c60301               mov byte ptr [ebx], 1
// 00667cf5  807c2c1c00           cmp byte ptr [esp + ebp + 0x1c], 0
// 00667cfa  8d7c2c1c             lea edi, [esp + ebp + 0x1c]
// 00667cfe  752e                 jne 0x667d2e
// 00667d00  837cae6800           cmp dword ptr [esi + ebp*4 + 0x68], 0
// 00667d05  750d                 jne 0x667d14
// 00667d07  56                   push esi
// 00667d08  e883b7feff           call 0x653490
// 00667d0d  83c404               add esp, 4
// 00667d10  8944ae68             mov dword ptr [esi + ebp*4 + 0x68], eax
// 00667d14  8b442410             mov eax, dword ptr [esp + 0x10]
// 00667d18  8b4ca85c             mov ecx, dword ptr [eax + ebp*4 + 0x5c]
// 00667d1c  8b54ae68             mov edx, dword ptr [esi + ebp*4 + 0x68]
// 00667d20  51                   push ecx
// 00667d21  52                   push edx
// 00667d22  56                   push esi
// 00667d23  e808fdffff           call 0x667a30
// 00667d28  83c40c               add esp, 0xc
// 00667d2b  c60701               mov byte ptr [edi], 1
// 00667d2e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00667d32  8344242404           add dword ptr [esp + 0x24], 4
// 00667d37  40                   inc eax
// 00667d38  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00667d3e  89442414             mov dword ptr [esp + 0x14], eax
// 00667d42  0f8c68ffffff         jl 0x667cb0
// 00667d48  5f                   pop edi
// 00667d49  5d                   pop ebp
// 00667d4a  5b                   pop ebx
// 00667d4b  5e                   pop esi
// 00667d4c  83c410               add esp, 0x10
// 00667d4f  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_gather)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
