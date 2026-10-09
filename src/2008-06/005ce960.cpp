// roc 2008-06 005ce960  unit: RBX::Camera  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce960
//
// 005ce960  56                   push esi
// 005ce961  8bf1                 mov esi, ecx
// 005ce963  8b06                 mov eax, dword ptr [esi]
// 005ce965  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce968  57                   push edi
// 005ce969  6811010000           push 0x111
// 005ce96e  ffd2                 call edx
// 005ce970  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ce974  8807                 mov byte ptr [edi], al
// 005ce976  8b06                 mov eax, dword ptr [esi]
// 005ce978  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce97b  6812010000           push 0x112
// 005ce980  8bce                 mov ecx, esi
// 005ce982  ffd2                 call edx
// 005ce984  884701               mov byte ptr [edi + 1], al
// 005ce987  8b06                 mov eax, dword ptr [esi]
// 005ce989  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce98c  6814010000           push 0x114
// 005ce991  8bce                 mov ecx, esi
// 005ce993  ffd2                 call edx
// 005ce995  884702               mov byte ptr [edi + 2], al
// 005ce998  8b06                 mov eax, dword ptr [esi]
// 005ce99a  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce99d  6813010000           push 0x113
// 005ce9a2  8bce                 mov ecx, esi
// 005ce9a4  ffd2                 call edx
// 005ce9a6  884703               mov byte ptr [edi + 3], al
// 005ce9a9  8b06                 mov eax, dword ptr [esi]
// 005ce9ab  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce9ae  6a77                 push 0x77
// 005ce9b0  8bce                 mov ecx, esi
// 005ce9b2  ffd2                 call edx
// 005ce9b4  884704               mov byte ptr [edi + 4], al
// 005ce9b7  8b06                 mov eax, dword ptr [esi]
// 005ce9b9  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce9bc  6a73                 push 0x73
// 005ce9be  8bce                 mov ecx, esi
// 005ce9c0  ffd2                 call edx
// 005ce9c2  884705               mov byte ptr [edi + 5], al
// 005ce9c5  8b06                 mov eax, dword ptr [esi]
// 005ce9c7  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce9ca  6a61                 push 0x61
// 005ce9cc  8bce                 mov ecx, esi
// 005ce9ce  ffd2                 call edx
// 005ce9d0  884706               mov byte ptr [edi + 6], al
// 005ce9d3  8b06                 mov eax, dword ptr [esi]
// 005ce9d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce9d8  6a64                 push 0x64
// 005ce9da  8bce                 mov ecx, esi
// 005ce9dc  ffd2                 call edx
// 005ce9de  884707               mov byte ptr [edi + 7], al
// 005ce9e1  8b06                 mov eax, dword ptr [esi]
// 005ce9e3  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ce9e6  6a20                 push 0x20
// 005ce9e8  8bce                 mov ecx, esi
// 005ce9ea  ffd2                 call edx
// 005ce9ec  884708               mov byte ptr [edi + 8], al
// 005ce9ef  5f                   pop edi
// 005ce9f0  5e                   pop esi
// 005ce9f1  c20400               ret 4
// library openrbx-client/App\util\UserInputBase.cpp (function ?getNavKeys@UserInputBase@RBX@@QBEXAAVNavKeys@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/UserInputBase.cpp
