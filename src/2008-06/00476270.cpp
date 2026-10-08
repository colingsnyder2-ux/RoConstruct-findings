// from server: 100% by auto
// roc 2008-06 00476270  unit: G3D::VARArea  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476270
//
// 00476270  55                   push ebp
// 00476271  33ed                 xor ebp, ebp
// 00476273  392dd8ef9600         cmp dword ptr [0x96efd8], ebp
// 00476279  0f8eb6000000         jle 0x476335
// 0047627f  53                   push ebx
// 00476280  56                   push esi
// 00476281  57                   push edi
// 00476282  a1d4ef9600           mov eax, dword ptr [0x96efd4]
// 00476287  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0047628a  8b4804               mov ecx, dword ptr [eax + 4]
// 0047628d  83c004               add eax, 4
// 00476290  83f901               cmp ecx, 1
// 00476293  0f858c000000         jne 0x476325
// 00476299  a1d4ef9600           mov eax, dword ptr [0x96efd4]
// 0047629e  8b15d8ef9600         mov edx, dword ptr [0x96efd8]
// 004762a4  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 004762a8  8d3ca8               lea edi, [eax + ebp*4]
// 004762ab  8b07                 mov eax, dword ptr [edi]
// 004762ad  3bd8                 cmp ebx, eax
// 004762af  745e                 je 0x47630f
// 004762b1  85c0                 test eax, eax
// 004762b3  744a                 je 0x4762ff
// 004762b5  83c004               add eax, 4
// 004762b8  50                   push eax
// 004762b9  ff15ac218000         call dword ptr [0x8021ac]
// 004762bf  85c0                 test eax, eax
// 004762c1  7536                 jne 0x4762f9
// 004762c3  8b07                 mov eax, dword ptr [edi]
// 004762c5  8b7008               mov esi, dword ptr [eax + 8]
// 004762c8  85f6                 test esi, esi
// 004762ca  741f                 je 0x4762eb
// 004762cc  8d642400             lea esp, [esp]
// 004762d0  8b0e                 mov ecx, dword ptr [esi]
// 004762d2  8b11                 mov edx, dword ptr [ecx]
// 004762d4  8b4204               mov eax, dword ptr [edx + 4]
// 004762d7  ffd0                 call eax
// 004762d9  8bc6                 mov eax, esi
// 004762db  8b7604               mov esi, dword ptr [esi + 4]
// 004762de  50                   push eax
// 004762df  e896a32200           call 0x6a067a
// 004762e4  83c404               add esp, 4
// 004762e7  85f6                 test esi, esi
// 004762e9  75e5                 jne 0x4762d0
// 004762eb  8b0f                 mov ecx, dword ptr [edi]
// 004762ed  85c9                 test ecx, ecx
// 004762ef  7408                 je 0x4762f9
// 004762f1  8b11                 mov edx, dword ptr [ecx]
// 004762f3  8b02                 mov eax, dword ptr [edx]
// 004762f5  6a01                 push 1
// 004762f7  ffd0                 call eax
// 004762f9  c70700000000         mov dword ptr [edi], 0
// 004762ff  85db                 test ebx, ebx
// 00476301  740c                 je 0x47630f
// 00476303  891f                 mov dword ptr [edi], ebx
// 00476305  83c304               add ebx, 4
// 00476308  53                   push ebx
// 00476309  ff15b0218000         call dword ptr [0x8021b0]
// 0047630f  8b0dd8ef9600         mov ecx, dword ptr [0x96efd8]
// 00476315  49                   dec ecx
// 00476316  6a01                 push 1
// 00476318  51                   push ecx
// 00476319  b9d4ef9600           mov ecx, 0x96efd4
// 0047631e  e88dfcffff           call 0x475fb0
// 00476323  eb01                 jmp 0x476326
// 00476325  45                   inc ebp
// 00476326  3b2dd8ef9600         cmp ebp, dword ptr [0x96efd8]
// 0047632c  0f8c50ffffff         jl 0x476282
// 00476332  5f                   pop edi
// 00476333  5e                   pop esi
// 00476334  5b                   pop ebx
// 00476335  5d                   pop ebp
// 00476336  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
