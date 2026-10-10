// roc 2008-06 006b3e90  unit: CXTPPaintManager  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b3e90
//
// 006b3e90  8b442418             mov eax, dword ptr [esp + 0x18]
// 006b3e94  8b5050               mov edx, dword ptr [eax + 0x50]
// 006b3e97  53                   push ebx
// 006b3e98  55                   push ebp
// 006b3e99  56                   push esi
// 006b3e9a  57                   push edi
// 006b3e9b  3982bc000000         cmp dword ptr [edx + 0xbc], eax
// 006b3ea1  7413                 je 0x6b3eb6
// 006b3ea3  83787c00             cmp dword ptr [eax + 0x7c], 0
// 006b3ea7  750d                 jne 0x6b3eb6
// 006b3ea9  f7402800020000       test dword ptr [eax + 0x28], 0x200
// 006b3eb0  0f8489000000         je 0x6b3f3f
// 006b3eb6  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 006b3ebc  29542420             sub dword ptr [esp + 0x20], edx
// 006b3ec0  8b5828               mov ebx, dword ptr [eax + 0x28]
// 006b3ec3  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 006b3ec9  29542424             sub dword ptr [esp + 0x24], edx
// 006b3ecd  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b3ed1  03b1e0000000         add esi, dword ptr [ecx + 0xe0]
// 006b3ed7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006b3edb  03b9e4000000         add edi, dword ptr [ecx + 0xe4]
// 006b3ee1  8b11                 mov edx, dword ptr [ecx]
// 006b3ee3  8b6850               mov ebp, dword ptr [eax + 0x50]
// 006b3ee6  33d2                 xor edx, edx
// 006b3ee8  6a01                 push 1
// 006b3eea  81e300020000         and ebx, 0x200
// 006b3ef0  81fb00020000         cmp ebx, 0x200
// 006b3ef6  0f94c2               sete dl
// 006b3ef9  6a01                 push 1
// 006b3efb  6a00                 push 0
// 006b3efd  89742424             mov dword ptr [esp + 0x24], esi
// 006b3f01  897c2428             mov dword ptr [esp + 0x28], edi
// 006b3f05  52                   push edx
// 006b3f06  8b507c               mov edx, dword ptr [eax + 0x7c]
// 006b3f09  6a01                 push 1
// 006b3f0b  52                   push edx
// 006b3f0c  33d2                 xor edx, edx
// 006b3f0e  3985bc000000         cmp dword ptr [ebp + 0xbc], eax
// 006b3f14  0f94c2               sete dl
// 006b3f17  52                   push edx
// 006b3f18  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b3f1c  83ec10               sub esp, 0x10
// 006b3f1f  8bc4                 mov eax, esp
// 006b3f21  8930                 mov dword ptr [eax], esi
// 006b3f23  897804               mov dword ptr [eax + 4], edi
// 006b3f26  895008               mov dword ptr [eax + 8], edx
// 006b3f29  8b542450             mov edx, dword ptr [esp + 0x50]
// 006b3f2d  89500c               mov dword ptr [eax + 0xc], edx
// 006b3f30  8b442440             mov eax, dword ptr [esp + 0x40]
// 006b3f34  8b11                 mov edx, dword ptr [ecx]
// 006b3f36  50                   push eax
// 006b3f37  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 006b3f3d  ffd0                 call eax
// 006b3f3f  5f                   pop edi
// 006b3f40  5e                   pop esi
// 006b3f41  5d                   pop ebp
// 006b3f42  5b                   pop ebx
// 006b3f43  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?DrawStatusBarButtonFace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
