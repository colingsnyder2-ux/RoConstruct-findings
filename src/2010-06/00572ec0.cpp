// roc 2010-06 00572ec0  unit: seg_00570000  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00572ec0
//
// 00572ec0  56                   push esi
// 00572ec1  8b742408             mov esi, dword ptr [esp + 8]
// 00572ec5  85f6                 test esi, esi
// 00572ec7  0f84bc000000         je 0x572f89
// 00572ecd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00572ed0  85c0                 test eax, eax
// 00572ed2  0f84b1000000         je 0x572f89
// 00572ed8  57                   push edi
// 00572ed9  8b7804               mov edi, dword ptr [eax + 4]
// 00572edc  83ff2a               cmp edi, 0x2a
// 00572edf  7429                 je 0x572f0a
// 00572ee1  83ff45               cmp edi, 0x45
// 00572ee4  7424                 je 0x572f0a
// 00572ee6  83ff49               cmp edi, 0x49
// 00572ee9  741f                 je 0x572f0a
// 00572eeb  83ff5b               cmp edi, 0x5b
// 00572eee  741a                 je 0x572f0a
// 00572ef0  83ff67               cmp edi, 0x67
// 00572ef3  7415                 je 0x572f0a
// 00572ef5  83ff71               cmp edi, 0x71
// 00572ef8  7410                 je 0x572f0a
// 00572efa  81ff9a020000         cmp edi, 0x29a
// 00572f00  7408                 je 0x572f0a
// 00572f02  5f                   pop edi
// 00572f03  b8feffffff           mov eax, 0xfffffffe
// 00572f08  5e                   pop esi
// 00572f09  c3                   ret 
// 00572f0a  8b4008               mov eax, dword ptr [eax + 8]
// 00572f0d  85c0                 test eax, eax
// 00572f0f  740d                 je 0x572f1e
// 00572f11  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00572f14  50                   push eax
// 00572f15  8b4628               mov eax, dword ptr [esi + 0x28]
// 00572f18  50                   push eax
// 00572f19  ffd1                 call ecx
// 00572f1b  83c408               add esp, 8
// 00572f1e  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00572f21  8b4244               mov eax, dword ptr [edx + 0x44]
// 00572f24  85c0                 test eax, eax
// 00572f26  740d                 je 0x572f35
// 00572f28  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00572f2b  50                   push eax
// 00572f2c  8b4628               mov eax, dword ptr [esi + 0x28]
// 00572f2f  50                   push eax
// 00572f30  ffd1                 call ecx
// 00572f32  83c408               add esp, 8
// 00572f35  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00572f38  8b4240               mov eax, dword ptr [edx + 0x40]
// 00572f3b  85c0                 test eax, eax
// 00572f3d  740d                 je 0x572f4c
// 00572f3f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00572f42  50                   push eax
// 00572f43  8b4628               mov eax, dword ptr [esi + 0x28]
// 00572f46  50                   push eax
// 00572f47  ffd1                 call ecx
// 00572f49  83c408               add esp, 8
// 00572f4c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00572f4f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00572f52  85c0                 test eax, eax
// 00572f54  740d                 je 0x572f63
// 00572f56  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00572f59  50                   push eax
// 00572f5a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00572f5d  50                   push eax
// 00572f5e  ffd1                 call ecx
// 00572f60  83c408               add esp, 8
// 00572f63  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00572f66  8b4628               mov eax, dword ptr [esi + 0x28]
// 00572f69  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00572f6c  52                   push edx
// 00572f6d  50                   push eax
// 00572f6e  ffd1                 call ecx
// 00572f70  83c408               add esp, 8
// 00572f73  33c0                 xor eax, eax
// 00572f75  83ff71               cmp edi, 0x71
// 00572f78  0f95c0               setne al
// 00572f7b  5f                   pop edi
// 00572f7c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00572f83  5e                   pop esi
// 00572f84  48                   dec eax
// 00572f85  83e0fd               and eax, 0xfffffffd
// 00572f88  c3                   ret 
// 00572f89  b8feffffff           mov eax, 0xfffffffe
// 00572f8e  5e                   pop esi
// 00572f8f  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflateEnd)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
