// roc 2012-06 00997710  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997710
//
// 00997710  8b442404             mov eax, dword ptr [esp + 4]
// 00997714  83ec3c               sub esp, 0x3c
// 00997717  56                   push esi
// 00997718  6a00                 push 0
// 0099771a  6880000000           push 0x80
// 0099771f  6a03                 push 3
// 00997721  6a00                 push 0
// 00997723  6a00                 push 0
// 00997725  6800000080           push 0x80000000
// 0099772a  50                   push eax
// 0099772b  ff15bc22b200         call dword ptr [0xb222bc]
// 00997731  8bf0                 mov esi, eax
// 00997733  83feff               cmp esi, -1
// 00997736  7507                 jne 0x99773f
// 00997738  33c0                 xor eax, eax
// 0099773a  5e                   pop esi
// 0099773b  83c43c               add esp, 0x3c
// 0099773e  c3                   ret 
// 0099773f  57                   push edi
// 00997740  8b3d4c23b200         mov edi, dword ptr [0xb2234c]
// 00997746  6a00                 push 0
// 00997748  8d4c240c             lea ecx, [esp + 0xc]
// 0099774c  51                   push ecx
// 0099774d  6a0e                 push 0xe
// 0099774f  8d542418             lea edx, [esp + 0x18]
// 00997753  52                   push edx
// 00997754  56                   push esi
// 00997755  ffd7                 call edi
// 00997757  85c0                 test eax, eax
// 00997759  743f                 je 0x99779a
// 0099775b  837c24080e           cmp dword ptr [esp + 8], 0xe
// 00997760  7538                 jne 0x99779a
// 00997762  6a00                 push 0
// 00997764  8d44240c             lea eax, [esp + 0xc]
// 00997768  50                   push eax
// 00997769  6a28                 push 0x28
// 0099776b  8d4c2428             lea ecx, [esp + 0x28]
// 0099776f  51                   push ecx
// 00997770  56                   push esi
// 00997771  ffd7                 call edi
// 00997773  85c0                 test eax, eax
// 00997775  7423                 je 0x99779a
// 00997777  837c240828           cmp dword ptr [esp + 8], 0x28
// 0099777c  751c                 jne 0x99779a
// 0099777e  33d2                 xor edx, edx
// 00997780  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 00997786  56                   push esi
// 00997787  0f94c2               sete dl
// 0099778a  8bfa                 mov edi, edx
// 0099778c  ff15e821b200         call dword ptr [0xb221e8]
// 00997792  8bc7                 mov eax, edi
// 00997794  5f                   pop edi
// 00997795  5e                   pop esi
// 00997796  83c43c               add esp, 0x3c
// 00997799  c3                   ret 
// 0099779a  56                   push esi
// 0099779b  ff15e821b200         call dword ptr [0xb221e8]
// 009977a1  5f                   pop edi
// 009977a2  33c0                 xor eax, eax
// 009977a4  5e                   pop esi
// 009977a5  83c43c               add esp, 0x3c
// 009977a8  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
