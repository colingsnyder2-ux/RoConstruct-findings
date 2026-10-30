// roc 2009-12 0084a610  unit: CXTPControlSelector  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a610
//
// 0084a610  56                   push esi
// 0084a611  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084a615  57                   push edi
// 0084a616  85f6                 test esi, esi
// 0084a618  7d06                 jge 0x84a620
// 0084a61a  81c6ff000000         add esi, 0xff
// 0084a620  81feff000000         cmp esi, 0xff
// 0084a626  7e06                 jle 0x84a62e
// 0084a628  81eeff000000         sub esi, 0xff
// 0084a62e  8d0476               lea eax, [esi + esi*2]
// 0084a631  03c0                 add eax, eax
// 0084a633  3dff000000           cmp eax, 0xff
// 0084a638  7d2a                 jge 0x84a664
// 0084a63a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084a63e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a642  2bcf                 sub ecx, edi
// 0084a644  b881808080           mov eax, 0x80808081
// 0084a649  f7e9                 imul ecx
// 0084a64b  03d1                 add edx, ecx
// 0084a64d  c1fa07               sar edx, 7
// 0084a650  8bca                 mov ecx, edx
// 0084a652  c1e91f               shr ecx, 0x1f
// 0084a655  03ca                 add ecx, edx
// 0084a657  8bc1                 mov eax, ecx
// 0084a659  0fafc6               imul eax, esi
// 0084a65c  8d1440               lea edx, [eax + eax*2]
// 0084a65f  8d0c57               lea ecx, [edi + edx*2]
// 0084a662  eb4e                 jmp 0x84a6b2
// 0084a664  8d0436               lea eax, [esi + esi]
// 0084a667  3dff000000           cmp eax, 0xff
// 0084a66c  7d06                 jge 0x84a674
// 0084a66e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a672  eb3e                 jmp 0x84a6b2
// 0084a674  8d0c76               lea ecx, [esi + esi*2]
// 0084a677  81f9fe010000         cmp ecx, 0x1fe
// 0084a67d  7d2f                 jge 0x84a6ae
// 0084a67f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084a683  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084a687  2bcf                 sub ecx, edi
// 0084a689  b881808080           mov eax, 0x80808081
// 0084a68e  f7e9                 imul ecx
// 0084a690  03d1                 add edx, ecx
// 0084a692  c1fa07               sar edx, 7
// 0084a695  8bc2                 mov eax, edx
// 0084a697  c1e81f               shr eax, 0x1f
// 0084a69a  b9aa000000           mov ecx, 0xaa
// 0084a69f  03c2                 add eax, edx
// 0084a6a1  2bce                 sub ecx, esi
// 0084a6a3  0fafc1               imul eax, ecx
// 0084a6a6  8d1440               lea edx, [eax + eax*2]
// 0084a6a9  8d0c57               lea ecx, [edi + edx*2]
// 0084a6ac  eb04                 jmp 0x84a6b2
// 0084a6ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084a6b2  b881808080           mov eax, 0x80808081
// 0084a6b7  f7e9                 imul ecx
// 0084a6b9  03d1                 add edx, ecx
// 0084a6bb  c1fa07               sar edx, 7
// 0084a6be  8bc2                 mov eax, edx
// 0084a6c0  c1e81f               shr eax, 0x1f
// 0084a6c3  5f                   pop edi
// 0084a6c4  03c2                 add eax, edx
// 0084a6c6  5e                   pop esi
// 0084a6c7  c3                   ret 
// copied from an identical function in another client (function ?HueToRGB@CXTPDrawHelpers@@SAHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp