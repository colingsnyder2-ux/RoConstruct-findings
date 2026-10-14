// roc 2009-06 00573650  unit: G3D::GCamera  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573650
//
// 00573650  8b442404             mov eax, dword ptr [esp + 4]
// 00573654  53                   push ebx
// 00573655  55                   push ebp
// 00573656  56                   push esi
// 00573657  8bf1                 mov esi, ecx
// 00573659  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057365c  894604               mov dword ptr [esi + 4], eax
// 0057365f  f605282aa40001       test byte ptr [0xa42a28], 1
// 00573666  7514                 jne 0x57367c
// 00573668  830d282aa40001       or dword ptr [0xa42a28], 1
// 0057366f  bd0a000000           mov ebp, 0xa
// 00573674  892d242aa400         mov dword ptr [0xa42a24], ebp
// 0057367a  eb06                 jmp 0x573682
// 0057367c  8b2d242aa400         mov ebp, dword ptr [0xa42a24]
// 00573682  8b4e08               mov ecx, dword ptr [esi + 8]
// 00573685  57                   push edi
// 00573686  8b7e04               mov edi, dword ptr [esi + 4]
// 00573689  3bf9                 cmp edi, ecx
// 0057368b  7e65                 jle 0x5736f2
// 0057368d  85c9                 test ecx, ecx
// 0057368f  7506                 jne 0x573697
// 00573691  894608               mov dword ptr [esi + 8], eax
// 00573694  53                   push ebx
// 00573695  eb7f                 jmp 0x573716
// 00573697  3bfd                 cmp edi, ebp
// 00573699  7d06                 jge 0x5736a1
// 0057369b  896e08               mov dword ptr [esi + 8], ebp
// 0057369e  53                   push ebx
// 0057369f  eb75                 jmp 0x573716
// 005736a1  d90548e88b00         fld dword ptr [0x8be848]
// 005736a7  8bc1                 mov eax, ecx
// 005736a9  c1e004               shl eax, 4
// 005736ac  3d801a0600           cmp eax, 0x61a80
// 005736b1  760a                 jbe 0x5736bd
// 005736b3  ddd8                 fstp st(0)
// 005736b5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 005736bb  eb0f                 jmp 0x5736cc
// 005736bd  3d00fa0000           cmp eax, 0xfa00
// 005736c2  7608                 jbe 0x5736cc
// 005736c4  ddd8                 fstp st(0)
// 005736c6  d90544d08b00         fld dword ptr [0x8bd044]
// 005736cc  8be9                 mov ebp, ecx
// 005736ce  896c2418             mov dword ptr [esp + 0x18], ebp
// 005736d2  da4c2418             fimul dword ptr [esp + 0x18]
// 005736d6  e8e5671a00           call 0x719ec0
// 005736db  2bc5                 sub eax, ebp
// 005736dd  03c7                 add eax, edi
// 005736df  894608               mov dword ptr [esi + 8], eax
// 005736e2  8b0d242aa400         mov ecx, dword ptr [0xa42a24]
// 005736e8  3bc1                 cmp eax, ecx
// 005736ea  7d03                 jge 0x5736ef
// 005736ec  894e08               mov dword ptr [esi + 8], ecx
// 005736ef  53                   push ebx
// 005736f0  eb24                 jmp 0x573716
// 005736f2  b856555555           mov eax, 0x55555556
// 005736f7  f7e9                 imul ecx
// 005736f9  8bc2                 mov eax, edx
// 005736fb  c1e81f               shr eax, 0x1f
// 005736fe  03c2                 add eax, edx
// 00573700  3bf8                 cmp edi, eax
// 00573702  7f19                 jg 0x57371d
// 00573704  807c241800           cmp byte ptr [esp + 0x18], 0
// 00573709  7412                 je 0x57371d
// 0057370b  3bfd                 cmp edi, ebp
// 0057370d  7e0e                 jle 0x57371d
// 0057370f  3bfb                 cmp edi, ebx
// 00573711  7c02                 jl 0x573715
// 00573713  8bfb                 mov edi, ebx
// 00573715  57                   push edi
// 00573716  8bce                 mov ecx, esi
// 00573718  e823f8ffff           call 0x572f40
// 0057371d  3b5e04               cmp ebx, dword ptr [esi + 4]
// 00573720  8bcb                 mov ecx, ebx
// 00573722  5f                   pop edi
// 00573723  7d23                 jge 0x573748
// 00573725  d9ee                 fldz 
// 00573727  c1e304               shl ebx, 4
// 0057372a  8bd3                 mov edx, ebx
// 0057372c  8b06                 mov eax, dword ptr [esi]
// 0057372e  03c2                 add eax, edx
// 00573730  740b                 je 0x57373d
// 00573732  d9500c               fst dword ptr [eax + 0xc]
// 00573735  d95008               fst dword ptr [eax + 8]
// 00573738  d95004               fst dword ptr [eax + 4]
// 0057373b  d910                 fst dword ptr [eax]
// 0057373d  41                   inc ecx
// 0057373e  83c210               add edx, 0x10
// 00573741  3b4e04               cmp ecx, dword ptr [esi + 4]
// 00573744  7ce6                 jl 0x57372c
// 00573746  ddd8                 fstp st(0)
// 00573748  5e                   pop esi
// 00573749  5d                   pop ebp
// 0057374a  5b                   pop ebx
// 0057374b  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?resize@?$Array@VVector4@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
