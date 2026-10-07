// roc 2011-06 005348b0  unit: seg_00530000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005348b0
//
// 005348b0  8b542408             mov edx, dword ptr [esp + 8]
// 005348b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005348b8  85d2                 test edx, edx
// 005348ba  0f8ec7000000         jle 0x534987
// 005348c0  8b442404             mov eax, dword ptr [esp + 4]
// 005348c4  85c0                 test eax, eax
// 005348c6  0f84bb000000         je 0x534987
// 005348cc  56                   push esi
// 005348cd  8bf2                 mov esi, edx
// 005348cf  c1fa02               sar edx, 2
// 005348d2  83e603               and esi, 3
// 005348d5  85d2                 test edx, edx
// 005348d7  7e2d                 jle 0x534906
// 005348d9  53                   push ebx
// 005348da  57                   push edi
// 005348db  eb03                 jmp 0x5348e0
// 005348dd  8d4900               lea ecx, [ecx]
// 005348e0  0fb738               movzx edi, word ptr [eax]
// 005348e3  03cf                 add ecx, edi
// 005348e5  0fb77802             movzx edi, word ptr [eax + 2]
// 005348e9  8bd9                 mov ebx, ecx
// 005348eb  c1e305               shl ebx, 5
// 005348ee  33fb                 xor edi, ebx
// 005348f0  c1e70b               shl edi, 0xb
// 005348f3  33cf                 xor ecx, edi
// 005348f5  8bf9                 mov edi, ecx
// 005348f7  c1ef0b               shr edi, 0xb
// 005348fa  4a                   dec edx
// 005348fb  83c004               add eax, 4
// 005348fe  03cf                 add ecx, edi
// 00534900  85d2                 test edx, edx
// 00534902  7fdc                 jg 0x5348e0
// 00534904  5f                   pop edi
// 00534905  5b                   pop ebx
// 00534906  8bd6                 mov edx, esi
// 00534908  83ea01               sub edx, 1
// 0053490b  5e                   pop esi
// 0053490c  743a                 je 0x534948
// 0053490e  83ea01               sub edx, 1
// 00534911  7420                 je 0x534933
// 00534913  83ea01               sub edx, 1
// 00534916  7542                 jne 0x53495a
// 00534918  0fb710               movzx edx, word ptr [eax]
// 0053491b  0fbe4002             movsx eax, byte ptr [eax + 2]
// 0053491f  03c0                 add eax, eax
// 00534921  03ca                 add ecx, edx
// 00534923  03c0                 add eax, eax
// 00534925  33c1                 xor eax, ecx
// 00534927  c1e010               shl eax, 0x10
// 0053492a  33c8                 xor ecx, eax
// 0053492c  8bd1                 mov edx, ecx
// 0053492e  c1ea0b               shr edx, 0xb
// 00534931  eb25                 jmp 0x534958
// 00534933  0fb700               movzx eax, word ptr [eax]
// 00534936  03c8                 add ecx, eax
// 00534938  8bd1                 mov edx, ecx
// 0053493a  c1e20b               shl edx, 0xb
// 0053493d  33ca                 xor ecx, edx
// 0053493f  8bc1                 mov eax, ecx
// 00534941  c1e811               shr eax, 0x11
// 00534944  03c8                 add ecx, eax
// 00534946  eb12                 jmp 0x53495a
// 00534948  0fbe10               movsx edx, byte ptr [eax]
// 0053494b  03ca                 add ecx, edx
// 0053494d  8bc1                 mov eax, ecx
// 0053494f  c1e00a               shl eax, 0xa
// 00534952  33c8                 xor ecx, eax
// 00534954  8bd1                 mov edx, ecx
// 00534956  d1ea                 shr edx, 1
// 00534958  03ca                 add ecx, edx
// 0053495a  8d04cd00000000       lea eax, [ecx*8]
// 00534961  33c8                 xor ecx, eax
// 00534963  8bd1                 mov edx, ecx
// 00534965  c1ea05               shr edx, 5
// 00534968  03ca                 add ecx, edx
// 0053496a  8bc1                 mov eax, ecx
// 0053496c  c1e004               shl eax, 4
// 0053496f  33c8                 xor ecx, eax
// 00534971  8bd1                 mov edx, ecx
// 00534973  c1ea11               shr edx, 0x11
// 00534976  03ca                 add ecx, edx
// 00534978  8bc1                 mov eax, ecx
// 0053497a  c1e019               shl eax, 0x19
// 0053497d  33c8                 xor ecx, eax
// 0053497f  8bc1                 mov eax, ecx
// 00534981  c1e806               shr eax, 6
// 00534984  03c1                 add eax, ecx
// 00534986  c3                   ret 
// 00534987  33c0                 xor eax, eax
// 00534989  c3                   ret 
// library rbx2016-raknet/SuperFastHash.cpp (function ?SuperFastHashIncremental@@YAIPBDHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SuperFastHash.cpp
