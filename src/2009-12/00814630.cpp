// roc 2009-12 00814630  unit: MyXTPCommandBars  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814630
//
// 00814630  56                   push esi
// 00814631  8b742408             mov esi, dword ptr [esp + 8]
// 00814635  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0081463b  57                   push edi
// 0081463c  8bf9                 mov edi, ecx
// 0081463e  8b17                 mov edx, dword ptr [edi]
// 00814640  50                   push eax
// 00814641  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00814644  ffd0                 call eax
// 00814646  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00814649  83794800             cmp dword ptr [ecx + 0x48], 0
// 0081464d  7477                 je 0x8146c6
// 0081464f  85c0                 test eax, eax
// 00814651  7573                 jne 0x8146c6
// 00814653  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00814659  83f902               cmp ecx, 2
// 0081465c  740a                 je 0x814668
// 0081465e  83f903               cmp ecx, 3
// 00814661  7405                 je 0x814668
// 00814663  83f904               cmp ecx, 4
// 00814666  755e                 jne 0x8146c6
// 00814668  8b16                 mov edx, dword ptr [esi]
// 0081466a  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00814670  55                   push ebp
// 00814671  8bce                 mov ecx, esi
// 00814673  ffd0                 call eax
// 00814675  8be8                 mov ebp, eax
// 00814677  85ed                 test ebp, ebp
// 00814679  740f                 je 0x81468a
// 0081467b  8bcd                 mov ecx, ebp
// 0081467d  e8ce0bffff           call 0x805250
// 00814682  89442410             mov dword ptr [esp + 0x10], eax
// 00814686  85c0                 test eax, eax
// 00814688  7508                 jne 0x814692
// 0081468a  5d                   pop ebp
// 0081468b  5f                   pop edi
// 0081468c  33c0                 xor eax, eax
// 0081468e  5e                   pop esi
// 0081468f  c20400               ret 4
// 00814692  53                   push ebx
// 00814693  33db                 xor ebx, ebx
// 00814695  85c0                 test eax, eax
// 00814697  7e26                 jle 0x8146bf
// 00814699  8da42400000000       lea esp, [esp]
// 008146a0  8b37                 mov esi, dword ptr [edi]
// 008146a2  53                   push ebx
// 008146a3  8bcd                 mov ecx, ebp
// 008146a5  83c660               add esi, 0x60
// 008146a8  e8b30bffff           call 0x805260
// 008146ad  8b16                 mov edx, dword ptr [esi]
// 008146af  50                   push eax
// 008146b0  8bcf                 mov ecx, edi
// 008146b2  ffd2                 call edx
// 008146b4  85c0                 test eax, eax
// 008146b6  7413                 je 0x8146cb
// 008146b8  43                   inc ebx
// 008146b9  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 008146bd  7ce1                 jl 0x8146a0
// 008146bf  5b                   pop ebx
// 008146c0  b801000000           mov eax, 1
// 008146c5  5d                   pop ebp
// 008146c6  5f                   pop edi
// 008146c7  5e                   pop esi
// 008146c8  c20400               ret 4
// 008146cb  5b                   pop ebx
// 008146cc  5d                   pop ebp
// 008146cd  5f                   pop edi
// 008146ce  33c0                 xor eax, eax
// 008146d0  5e                   pop esi
// 008146d1  c20400               ret 4
// copied from an identical function in another client (function ?IsControlHidden@CXTPCommandBars@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp