// roc 2007-03 00513a90  unit: seg_00510000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513a90
//
// 00513a90  8b442404             mov eax, dword ptr [esp + 4]
// 00513a94  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00513a97  83f905               cmp ecx, 5
// 00513a9a  7743                 ja 0x513adf
// 00513a9c  ff248df43a5100       jmp dword ptr [ecx*4 + 0x513af4]
// 00513aa3  6a01                 push 1
// 00513aa5  50                   push eax
// 00513aa6  e8f5fcffff           call 0x5137a0
// 00513aab  83c408               add esp, 8
// 00513aae  c3                   ret 
// 00513aaf  6a03                 push 3
// 00513ab1  50                   push eax
// 00513ab2  e8e9fcffff           call 0x5137a0
// 00513ab7  83c408               add esp, 8
// 00513aba  c3                   ret 
// 00513abb  6a04                 push 4
// 00513abd  50                   push eax
// 00513abe  e8ddfcffff           call 0x5137a0
// 00513ac3  83c408               add esp, 8
// 00513ac6  c3                   ret 
// 00513ac7  6a05                 push 5
// 00513ac9  50                   push eax
// 00513aca  e8d1fcffff           call 0x5137a0
// 00513acf  83c408               add esp, 8
// 00513ad2  c3                   ret 
// 00513ad3  6a00                 push 0
// 00513ad5  50                   push eax
// 00513ad6  e8c5fcffff           call 0x5137a0
// 00513adb  83c408               add esp, 8
// 00513ade  c3                   ret 
// 00513adf  8b08                 mov ecx, dword ptr [eax]
// 00513ae1  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 00513ae8  8b10                 mov edx, dword ptr [eax]
// 00513aea  89442404             mov dword ptr [esp + 4], eax
// 00513aee  8b02                 mov eax, dword ptr [edx]
// 00513af0  ffe0                 jmp eax
// 00513af2  8bff                 mov edi, edi
// 00513af4  d33a                 sar dword ptr [edx], cl
// 00513af6  51                   push ecx
// 00513af7  00a33a5100af         add byte ptr [ebx - 0x50ffaec6], ah
// 00513afd  3a5100               cmp dl, byte ptr [ecx]
// 00513b00  af                   scasd eax, dword ptr es:[edi]
// 00513b01  3a5100               cmp dl, byte ptr [ecx]
// 00513b04  bb3a5100c7           mov ebx, 0xc700513a
// 00513b09  3a5100               cmp dl, byte ptr [ecx]
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
