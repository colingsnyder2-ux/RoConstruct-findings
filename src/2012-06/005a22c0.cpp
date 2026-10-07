// roc 2012-06 005a22c0  unit: RBX::Network::ClientReplicator  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a22c0
//
// 005a22c0  8b542408             mov edx, dword ptr [esp + 8]
// 005a22c4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a22c8  85d2                 test edx, edx
// 005a22ca  0f8ec7000000         jle 0x5a2397
// 005a22d0  8b442404             mov eax, dword ptr [esp + 4]
// 005a22d4  85c0                 test eax, eax
// 005a22d6  0f84bb000000         je 0x5a2397
// 005a22dc  56                   push esi
// 005a22dd  8bf2                 mov esi, edx
// 005a22df  c1fa02               sar edx, 2
// 005a22e2  83e603               and esi, 3
// 005a22e5  85d2                 test edx, edx
// 005a22e7  7e2d                 jle 0x5a2316
// 005a22e9  53                   push ebx
// 005a22ea  57                   push edi
// 005a22eb  eb03                 jmp 0x5a22f0
// 005a22ed  8d4900               lea ecx, [ecx]
// 005a22f0  0fb738               movzx edi, word ptr [eax]
// 005a22f3  03cf                 add ecx, edi
// 005a22f5  0fb77802             movzx edi, word ptr [eax + 2]
// 005a22f9  8bd9                 mov ebx, ecx
// 005a22fb  c1e305               shl ebx, 5
// 005a22fe  33fb                 xor edi, ebx
// 005a2300  c1e70b               shl edi, 0xb
// 005a2303  33cf                 xor ecx, edi
// 005a2305  8bf9                 mov edi, ecx
// 005a2307  c1ef0b               shr edi, 0xb
// 005a230a  4a                   dec edx
// 005a230b  83c004               add eax, 4
// 005a230e  03cf                 add ecx, edi
// 005a2310  85d2                 test edx, edx
// 005a2312  7fdc                 jg 0x5a22f0
// 005a2314  5f                   pop edi
// 005a2315  5b                   pop ebx
// 005a2316  8bd6                 mov edx, esi
// 005a2318  83ea01               sub edx, 1
// 005a231b  5e                   pop esi
// 005a231c  743a                 je 0x5a2358
// 005a231e  83ea01               sub edx, 1
// 005a2321  7420                 je 0x5a2343
// 005a2323  83ea01               sub edx, 1
// 005a2326  7542                 jne 0x5a236a
// 005a2328  0fb710               movzx edx, word ptr [eax]
// 005a232b  0fbe4002             movsx eax, byte ptr [eax + 2]
// 005a232f  03c0                 add eax, eax
// 005a2331  03ca                 add ecx, edx
// 005a2333  03c0                 add eax, eax
// 005a2335  33c1                 xor eax, ecx
// 005a2337  c1e010               shl eax, 0x10
// 005a233a  33c8                 xor ecx, eax
// 005a233c  8bd1                 mov edx, ecx
// 005a233e  c1ea0b               shr edx, 0xb
// 005a2341  eb25                 jmp 0x5a2368
// 005a2343  0fb700               movzx eax, word ptr [eax]
// 005a2346  03c8                 add ecx, eax
// 005a2348  8bd1                 mov edx, ecx
// 005a234a  c1e20b               shl edx, 0xb
// 005a234d  33ca                 xor ecx, edx
// 005a234f  8bc1                 mov eax, ecx
// 005a2351  c1e811               shr eax, 0x11
// 005a2354  03c8                 add ecx, eax
// 005a2356  eb12                 jmp 0x5a236a
// 005a2358  0fbe10               movsx edx, byte ptr [eax]
// 005a235b  03ca                 add ecx, edx
// 005a235d  8bc1                 mov eax, ecx
// 005a235f  c1e00a               shl eax, 0xa
// 005a2362  33c8                 xor ecx, eax
// 005a2364  8bd1                 mov edx, ecx
// 005a2366  d1ea                 shr edx, 1
// 005a2368  03ca                 add ecx, edx
// 005a236a  8d04cd00000000       lea eax, [ecx*8]
// 005a2371  33c8                 xor ecx, eax
// 005a2373  8bd1                 mov edx, ecx
// 005a2375  c1ea05               shr edx, 5
// 005a2378  03ca                 add ecx, edx
// 005a237a  8bc1                 mov eax, ecx
// 005a237c  c1e004               shl eax, 4
// 005a237f  33c8                 xor ecx, eax
// 005a2381  8bd1                 mov edx, ecx
// 005a2383  c1ea11               shr edx, 0x11
// 005a2386  03ca                 add ecx, edx
// 005a2388  8bc1                 mov eax, ecx
// 005a238a  c1e019               shl eax, 0x19
// 005a238d  33c8                 xor ecx, eax
// 005a238f  8bc1                 mov eax, ecx
// 005a2391  c1e806               shr eax, 6
// 005a2394  03c1                 add eax, ecx
// 005a2396  c3                   ret 
// 005a2397  33c0                 xor eax, eax
// 005a2399  c3                   ret 
// library rbx2016-raknet/SuperFastHash.cpp (function ?SuperFastHashIncremental@@YAIPBDHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SuperFastHash.cpp
