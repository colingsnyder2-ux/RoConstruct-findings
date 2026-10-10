// roc 2008-06 006a2ea0  unit: MyXTPCommandBars  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2ea0
//
// 006a2ea0  56                   push esi
// 006a2ea1  8b742408             mov esi, dword ptr [esp + 8]
// 006a2ea5  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 006a2eab  57                   push edi
// 006a2eac  8bf9                 mov edi, ecx
// 006a2eae  8b17                 mov edx, dword ptr [edi]
// 006a2eb0  50                   push eax
// 006a2eb1  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006a2eb4  ffd0                 call eax
// 006a2eb6  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 006a2eb9  83794800             cmp dword ptr [ecx + 0x48], 0
// 006a2ebd  7477                 je 0x6a2f36
// 006a2ebf  85c0                 test eax, eax
// 006a2ec1  7573                 jne 0x6a2f36
// 006a2ec3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a2ec9  83f902               cmp ecx, 2
// 006a2ecc  740a                 je 0x6a2ed8
// 006a2ece  83f903               cmp ecx, 3
// 006a2ed1  7405                 je 0x6a2ed8
// 006a2ed3  83f904               cmp ecx, 4
// 006a2ed6  755e                 jne 0x6a2f36
// 006a2ed8  8b16                 mov edx, dword ptr [esi]
// 006a2eda  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006a2ee0  55                   push ebp
// 006a2ee1  8bce                 mov ecx, esi
// 006a2ee3  ffd0                 call eax
// 006a2ee5  8be8                 mov ebp, eax
// 006a2ee7  85ed                 test ebp, ebp
// 006a2ee9  740f                 je 0x6a2efa
// 006a2eeb  8bcd                 mov ecx, ebp
// 006a2eed  e8ae2c0100           call 0x6b5ba0
// 006a2ef2  89442410             mov dword ptr [esp + 0x10], eax
// 006a2ef6  85c0                 test eax, eax
// 006a2ef8  7508                 jne 0x6a2f02
// 006a2efa  5d                   pop ebp
// 006a2efb  5f                   pop edi
// 006a2efc  33c0                 xor eax, eax
// 006a2efe  5e                   pop esi
// 006a2eff  c20400               ret 4
// 006a2f02  53                   push ebx
// 006a2f03  33db                 xor ebx, ebx
// 006a2f05  85c0                 test eax, eax
// 006a2f07  7e26                 jle 0x6a2f2f
// 006a2f09  8da42400000000       lea esp, [esp]
// 006a2f10  8b37                 mov esi, dword ptr [edi]
// 006a2f12  53                   push ebx
// 006a2f13  8bcd                 mov ecx, ebp
// 006a2f15  83c660               add esi, 0x60
// 006a2f18  e8932c0100           call 0x6b5bb0
// 006a2f1d  8b16                 mov edx, dword ptr [esi]
// 006a2f1f  50                   push eax
// 006a2f20  8bcf                 mov ecx, edi
// 006a2f22  ffd2                 call edx
// 006a2f24  85c0                 test eax, eax
// 006a2f26  7413                 je 0x6a2f3b
// 006a2f28  43                   inc ebx
// 006a2f29  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 006a2f2d  7ce1                 jl 0x6a2f10
// 006a2f2f  5b                   pop ebx
// 006a2f30  b801000000           mov eax, 1
// 006a2f35  5d                   pop ebp
// 006a2f36  5f                   pop edi
// 006a2f37  5e                   pop esi
// 006a2f38  c20400               ret 4
// 006a2f3b  5b                   pop ebx
// 006a2f3c  5d                   pop ebp
// 006a2f3d  5f                   pop edi
// 006a2f3e  33c0                 xor eax, eax
// 006a2f40  5e                   pop esi
// 006a2f41  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?IsControlHidden@CXTPCommandBars@@UAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
