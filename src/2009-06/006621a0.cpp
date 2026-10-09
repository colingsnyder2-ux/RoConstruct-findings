// roc 2009-06 006621a0  unit: RBX::VPartInstance::?$EventDesc  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006621a0
//
// 006621a0  56                   push esi
// 006621a1  8bf1                 mov esi, ecx
// 006621a3  8b06                 mov eax, dword ptr [esi]
// 006621a5  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621a8  57                   push edi
// 006621a9  6811010000           push 0x111
// 006621ae  ffd2                 call edx
// 006621b0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006621b4  8807                 mov byte ptr [edi], al
// 006621b6  8b06                 mov eax, dword ptr [esi]
// 006621b8  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621bb  6812010000           push 0x112
// 006621c0  8bce                 mov ecx, esi
// 006621c2  ffd2                 call edx
// 006621c4  884701               mov byte ptr [edi + 1], al
// 006621c7  8b06                 mov eax, dword ptr [esi]
// 006621c9  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621cc  6814010000           push 0x114
// 006621d1  8bce                 mov ecx, esi
// 006621d3  ffd2                 call edx
// 006621d5  884702               mov byte ptr [edi + 2], al
// 006621d8  8b06                 mov eax, dword ptr [esi]
// 006621da  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621dd  6813010000           push 0x113
// 006621e2  8bce                 mov ecx, esi
// 006621e4  ffd2                 call edx
// 006621e6  884703               mov byte ptr [edi + 3], al
// 006621e9  8b06                 mov eax, dword ptr [esi]
// 006621eb  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621ee  6a77                 push 0x77
// 006621f0  8bce                 mov ecx, esi
// 006621f2  ffd2                 call edx
// 006621f4  884704               mov byte ptr [edi + 4], al
// 006621f7  8b06                 mov eax, dword ptr [esi]
// 006621f9  8b5014               mov edx, dword ptr [eax + 0x14]
// 006621fc  6a73                 push 0x73
// 006621fe  8bce                 mov ecx, esi
// 00662200  ffd2                 call edx
// 00662202  884705               mov byte ptr [edi + 5], al
// 00662205  8b06                 mov eax, dword ptr [esi]
// 00662207  8b5014               mov edx, dword ptr [eax + 0x14]
// 0066220a  6a61                 push 0x61
// 0066220c  8bce                 mov ecx, esi
// 0066220e  ffd2                 call edx
// 00662210  884706               mov byte ptr [edi + 6], al
// 00662213  8b06                 mov eax, dword ptr [esi]
// 00662215  8b5014               mov edx, dword ptr [eax + 0x14]
// 00662218  6a64                 push 0x64
// 0066221a  8bce                 mov ecx, esi
// 0066221c  ffd2                 call edx
// 0066221e  884707               mov byte ptr [edi + 7], al
// 00662221  8b06                 mov eax, dword ptr [esi]
// 00662223  8b5014               mov edx, dword ptr [eax + 0x14]
// 00662226  6a20                 push 0x20
// 00662228  8bce                 mov ecx, esi
// 0066222a  ffd2                 call edx
// 0066222c  884708               mov byte ptr [edi + 8], al
// 0066222f  5f                   pop edi
// 00662230  5e                   pop esi
// 00662231  c20400               ret 4
// library openrbx-client/App\util\UserInputBase.cpp (function ?getNavKeys@UserInputBase@RBX@@QBEXAAVNavKeys@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/UserInputBase.cpp
