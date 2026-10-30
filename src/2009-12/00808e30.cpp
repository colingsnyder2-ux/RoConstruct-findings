// roc 2009-12 00808e30  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00808e30
//
// 00808e30  8b442404             mov eax, dword ptr [esp + 4]
// 00808e34  83ec3c               sub esp, 0x3c
// 00808e37  56                   push esi
// 00808e38  6a00                 push 0
// 00808e3a  6880000000           push 0x80
// 00808e3f  6a03                 push 3
// 00808e41  6a00                 push 0
// 00808e43  6a00                 push 0
// 00808e45  6800000080           push 0x80000000
// 00808e4a  50                   push eax
// 00808e4b  ff1574b29800         call dword ptr [0x98b274]
// 00808e51  8bf0                 mov esi, eax
// 00808e53  83feff               cmp esi, -1
// 00808e56  7507                 jne 0x808e5f
// 00808e58  33c0                 xor eax, eax
// 00808e5a  5e                   pop esi
// 00808e5b  83c43c               add esp, 0x3c
// 00808e5e  c3                   ret 
// 00808e5f  57                   push edi
// 00808e60  8b3d18b39800         mov edi, dword ptr [0x98b318]
// 00808e66  6a00                 push 0
// 00808e68  8d4c240c             lea ecx, [esp + 0xc]
// 00808e6c  51                   push ecx
// 00808e6d  6a0e                 push 0xe
// 00808e6f  8d542418             lea edx, [esp + 0x18]
// 00808e73  52                   push edx
// 00808e74  56                   push esi
// 00808e75  ffd7                 call edi
// 00808e77  85c0                 test eax, eax
// 00808e79  743f                 je 0x808eba
// 00808e7b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 00808e80  7538                 jne 0x808eba
// 00808e82  6a00                 push 0
// 00808e84  8d44240c             lea eax, [esp + 0xc]
// 00808e88  50                   push eax
// 00808e89  6a28                 push 0x28
// 00808e8b  8d4c2428             lea ecx, [esp + 0x28]
// 00808e8f  51                   push ecx
// 00808e90  56                   push esi
// 00808e91  ffd7                 call edi
// 00808e93  85c0                 test eax, eax
// 00808e95  7423                 je 0x808eba
// 00808e97  837c240828           cmp dword ptr [esp + 8], 0x28
// 00808e9c  751c                 jne 0x808eba
// 00808e9e  33d2                 xor edx, edx
// 00808ea0  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 00808ea6  56                   push esi
// 00808ea7  0f94c2               sete dl
// 00808eaa  8bfa                 mov edi, edx
// 00808eac  ff155cb29800         call dword ptr [0x98b25c]
// 00808eb2  8bc7                 mov eax, edi
// 00808eb4  5f                   pop edi
// 00808eb5  5e                   pop esi
// 00808eb6  83c43c               add esp, 0x3c
// 00808eb9  c3                   ret 
// 00808eba  56                   push esi
// 00808ebb  ff155cb29800         call dword ptr [0x98b25c]
// 00808ec1  5f                   pop edi
// 00808ec2  33c0                 xor eax, eax
// 00808ec4  5e                   pop esi
// 00808ec5  83c43c               add esp, 0x3c
// 00808ec8  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
