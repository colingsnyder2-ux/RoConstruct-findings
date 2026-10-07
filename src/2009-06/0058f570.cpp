// roc 2009-06 0058f570  unit: seg_00580000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058f570
//
// 0058f570  56                   push esi
// 0058f571  8b742408             mov esi, dword ptr [esp + 8]
// 0058f575  85f6                 test esi, esi
// 0058f577  0f84bc000000         je 0x58f639
// 0058f57d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058f580  85c0                 test eax, eax
// 0058f582  0f84b1000000         je 0x58f639
// 0058f588  57                   push edi
// 0058f589  8b7804               mov edi, dword ptr [eax + 4]
// 0058f58c  83ff2a               cmp edi, 0x2a
// 0058f58f  7429                 je 0x58f5ba
// 0058f591  83ff45               cmp edi, 0x45
// 0058f594  7424                 je 0x58f5ba
// 0058f596  83ff49               cmp edi, 0x49
// 0058f599  741f                 je 0x58f5ba
// 0058f59b  83ff5b               cmp edi, 0x5b
// 0058f59e  741a                 je 0x58f5ba
// 0058f5a0  83ff67               cmp edi, 0x67
// 0058f5a3  7415                 je 0x58f5ba
// 0058f5a5  83ff71               cmp edi, 0x71
// 0058f5a8  7410                 je 0x58f5ba
// 0058f5aa  81ff9a020000         cmp edi, 0x29a
// 0058f5b0  7408                 je 0x58f5ba
// 0058f5b2  5f                   pop edi
// 0058f5b3  b8feffffff           mov eax, 0xfffffffe
// 0058f5b8  5e                   pop esi
// 0058f5b9  c3                   ret 
// 0058f5ba  8b4008               mov eax, dword ptr [eax + 8]
// 0058f5bd  85c0                 test eax, eax
// 0058f5bf  740d                 je 0x58f5ce
// 0058f5c1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f5c4  50                   push eax
// 0058f5c5  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058f5c8  50                   push eax
// 0058f5c9  ffd1                 call ecx
// 0058f5cb  83c408               add esp, 8
// 0058f5ce  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0058f5d1  8b4244               mov eax, dword ptr [edx + 0x44]
// 0058f5d4  85c0                 test eax, eax
// 0058f5d6  740d                 je 0x58f5e5
// 0058f5d8  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f5db  50                   push eax
// 0058f5dc  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058f5df  50                   push eax
// 0058f5e0  ffd1                 call ecx
// 0058f5e2  83c408               add esp, 8
// 0058f5e5  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0058f5e8  8b4240               mov eax, dword ptr [edx + 0x40]
// 0058f5eb  85c0                 test eax, eax
// 0058f5ed  740d                 je 0x58f5fc
// 0058f5ef  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f5f2  50                   push eax
// 0058f5f3  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058f5f6  50                   push eax
// 0058f5f7  ffd1                 call ecx
// 0058f5f9  83c408               add esp, 8
// 0058f5fc  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0058f5ff  8b4238               mov eax, dword ptr [edx + 0x38]
// 0058f602  85c0                 test eax, eax
// 0058f604  740d                 je 0x58f613
// 0058f606  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f609  50                   push eax
// 0058f60a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058f60d  50                   push eax
// 0058f60e  ffd1                 call ecx
// 0058f610  83c408               add esp, 8
// 0058f613  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0058f616  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058f619  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0058f61c  52                   push edx
// 0058f61d  50                   push eax
// 0058f61e  ffd1                 call ecx
// 0058f620  83c408               add esp, 8
// 0058f623  33c0                 xor eax, eax
// 0058f625  83ff71               cmp edi, 0x71
// 0058f628  0f95c0               setne al
// 0058f62b  5f                   pop edi
// 0058f62c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0058f633  5e                   pop esi
// 0058f634  48                   dec eax
// 0058f635  83e0fd               and eax, 0xfffffffd
// 0058f638  c3                   ret 
// 0058f639  b8feffffff           mov eax, 0xfffffffe
// 0058f63e  5e                   pop esi
// 0058f63f  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
