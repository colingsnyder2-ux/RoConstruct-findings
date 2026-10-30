// roc 2009-12 008961b0  unit: CXTPRibbonBar  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008961b0
//
// 008961b0  56                   push esi
// 008961b1  8bf1                 mov esi, ecx
// 008961b3  e818ebffff           call 0x894cd0
// 008961b8  85c0                 test eax, eax
// 008961ba  750a                 jne 0x8961c6
// 008961bc  398690020000         cmp dword ptr [esi + 0x290], eax
// 008961c2  7502                 jne 0x8961c6
// 008961c4  5e                   pop esi
// 008961c5  c3                   ret 
// 008961c6  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 008961cc  55                   push ebp
// 008961cd  85c0                 test eax, eax
// 008961cf  7405                 je 0x8961d6
// 008961d1  8b6840               mov ebp, dword ptr [eax + 0x40]
// 008961d4  eb02                 jmp 0x8961d8
// 008961d6  33ed                 xor ebp, ebp
// 008961d8  53                   push ebx
// 008961d9  e892eaffff           call 0x894c70
// 008961de  8b98c0050000         mov ebx, dword ptr [eax + 0x5c0]
// 008961e4  03dd                 add ebx, ebp
// 008961e6  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 008961ed  743d                 je 0x89622c
// 008961ef  8bce                 mov ecx, esi
// 008961f1  e82af4ffff           call 0x895620
// 008961f6  85c0                 test eax, eax
// 008961f8  7532                 jne 0x89622c
// 008961fa  57                   push edi
// 008961fb  e800ecffff           call 0x894e00
// 00896200  8bf8                 mov edi, eax
// 00896202  8b06                 mov eax, dword ptr [esi]
// 00896204  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 0089620a  ffd2                 call edx
// 0089620c  83e802               sub eax, 2
// 0089620f  3bf8                 cmp edi, eax
// 00896211  7f11                 jg 0x896224
// 00896213  8b06                 mov eax, dword ptr [esi]
// 00896215  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 0089621b  8bce                 mov ecx, esi
// 0089621d  ffd2                 call edx
// 0089621f  8bf8                 mov edi, eax
// 00896221  83ef02               sub edi, 2
// 00896224  8d042f               lea eax, [edi + ebp]
// 00896227  3bd8                 cmp ebx, eax
// 00896229  5f                   pop edi
// 0089622a  7c02                 jl 0x89622e
// 0089622c  8bc3                 mov eax, ebx
// 0089622e  5b                   pop ebx
// 0089622f  5d                   pop ebp
// 00896230  5e                   pop esi
// 00896231  c3                   ret 
// copied from an identical function in another client (function ?GetCaptionHeight@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp