// roc 2009-12 0084a6d0  unit: CXTPControlSelector  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a6d0
//
// 0084a6d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084a6d4  53                   push ebx
// 0084a6d5  55                   push ebp
// 0084a6d6  56                   push esi
// 0084a6d7  0fb6f1               movzx esi, cl
// 0084a6da  69f6ff000000         imul esi, esi, 0xff
// 0084a6e0  b83bc71a89           mov eax, 0x891ac73b
// 0084a6e5  f7ee                 imul esi
// 0084a6e7  03d6                 add edx, esi
// 0084a6e9  8bc1                 mov eax, ecx
// 0084a6eb  c1e808               shr eax, 8
// 0084a6ee  0fb6f0               movzx esi, al
// 0084a6f1  69f6ff000000         imul esi, esi, 0xff
// 0084a6f7  c1fa07               sar edx, 7
// 0084a6fa  8bda                 mov ebx, edx
// 0084a6fc  c1eb1f               shr ebx, 0x1f
// 0084a6ff  03da                 add ebx, edx
// 0084a701  b889888888           mov eax, 0x88888889
// 0084a706  f7ee                 imul esi
// 0084a708  c1e910               shr ecx, 0x10
// 0084a70b  0fb6c9               movzx ecx, cl
// 0084a70e  03d6                 add edx, esi
// 0084a710  69c9ff000000         imul ecx, ecx, 0xff
// 0084a716  c1fa07               sar edx, 7
// 0084a719  8bf2                 mov esi, edx
// 0084a71b  c1ee1f               shr esi, 0x1f
// 0084a71e  03f2                 add esi, edx
// 0084a720  b889888888           mov eax, 0x88888889
// 0084a725  f7e9                 imul ecx
// 0084a727  03d1                 add edx, ecx
// 0084a729  c1fa07               sar edx, 7
// 0084a72c  8bca                 mov ecx, edx
// 0084a72e  c1e91f               shr ecx, 0x1f
// 0084a731  03ca                 add ecx, edx
// 0084a733  85f6                 test esi, esi
// 0084a735  7508                 jne 0x84a73f
// 0084a737  8bc1                 mov eax, ecx
// 0084a739  8bd1                 mov edx, ecx
// 0084a73b  8be9                 mov ebp, ecx
// 0084a73d  eb6b                 jmp 0x84a7aa
// 0084a73f  83f97f               cmp ecx, 0x7f
// 0084a742  57                   push edi
// 0084a743  7f0b                 jg 0x84a750
// 0084a745  8dbeff000000         lea edi, [esi + 0xff]
// 0084a74b  0faff9               imul edi, ecx
// 0084a74e  eb24                 jmp 0x84a774
// 0084a750  8bf9                 mov edi, ecx
// 0084a752  0faffe               imul edi, esi
// 0084a755  b881808080           mov eax, 0x80808081
// 0084a75a  f7ef                 imul edi
// 0084a75c  03d7                 add edx, edi
// 0084a75e  c1fa07               sar edx, 7
// 0084a761  8bc2                 mov eax, edx
// 0084a763  c1e81f               shr eax, 0x1f
// 0084a766  03c2                 add eax, edx
// 0084a768  8bf9                 mov edi, ecx
// 0084a76a  2bf8                 sub edi, eax
// 0084a76c  03fe                 add edi, esi
// 0084a76e  69ffff000000         imul edi, edi, 0xff
// 0084a774  69c9fe010000         imul ecx, ecx, 0x1fe
// 0084a77a  2bcf                 sub ecx, edi
// 0084a77c  8bf1                 mov esi, ecx
// 0084a77e  8d4b55               lea ecx, [ebx + 0x55]
// 0084a781  51                   push ecx
// 0084a782  57                   push edi
// 0084a783  56                   push esi
// 0084a784  e887feffff           call 0x84a610
// 0084a789  53                   push ebx
// 0084a78a  57                   push edi
// 0084a78b  56                   push esi
// 0084a78c  8be8                 mov ebp, eax
// 0084a78e  e87dfeffff           call 0x84a610
// 0084a793  83c3ab               add ebx, -0x55
// 0084a796  53                   push ebx
// 0084a797  57                   push edi
// 0084a798  56                   push esi
// 0084a799  89442438             mov dword ptr [esp + 0x38], eax
// 0084a79d  e86efeffff           call 0x84a610
// 0084a7a2  8b542438             mov edx, dword ptr [esp + 0x38]
// 0084a7a6  83c424               add esp, 0x24
// 0084a7a9  5f                   pop edi
// 0084a7aa  81fdff000000         cmp ebp, 0xff
// 0084a7b0  8bcd                 mov ecx, ebp
// 0084a7b2  7c05                 jl 0x84a7b9
// 0084a7b4  b9ff000000           mov ecx, 0xff
// 0084a7b9  81faff000000         cmp edx, 0xff
// 0084a7bf  5e                   pop esi
// 0084a7c0  5d                   pop ebp
// 0084a7c1  5b                   pop ebx
// 0084a7c2  7c05                 jl 0x84a7c9
// 0084a7c4  baff000000           mov edx, 0xff
// 0084a7c9  3dff000000           cmp eax, 0xff
// 0084a7ce  7c05                 jl 0x84a7d5
// 0084a7d0  b8ff000000           mov eax, 0xff
// 0084a7d5  0fb6c0               movzx eax, al
// 0084a7d8  c1e008               shl eax, 8
// 0084a7db  0fb6d2               movzx edx, dl
// 0084a7de  0bc2                 or eax, edx
// 0084a7e0  0fb6c9               movzx ecx, cl
// 0084a7e3  c1e008               shl eax, 8
// 0084a7e6  0bc1                 or eax, ecx
// 0084a7e8  c3                   ret 
// copied from an identical function in another client (function ?HSLtoRGB@CXTPDrawHelpers@@SAKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp