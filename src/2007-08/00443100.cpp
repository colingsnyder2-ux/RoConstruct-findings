// roc 2007-08 00443100  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443100
//
// 00443100  8b542404             mov edx, dword ptr [esp + 4]
// 00443104  56                   push esi
// 00443105  8bf1                 mov esi, ecx
// 00443107  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044310a  8b01                 mov eax, dword ptr [ecx]
// 0044310c  8b4004               mov eax, dword ptr [eax + 4]
// 0044310f  57                   push edi
// 00443110  52                   push edx
// 00443111  ffd0                 call eax
// 00443113  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00443116  8b11                 mov edx, dword ptr [ecx]
// 00443118  8b5204               mov edx, dword ptr [edx + 4]
// 0044311b  8bf8                 mov edi, eax
// 0044311d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00443121  50                   push eax
// 00443122  ffd2                 call edx
// 00443124  33c9                 xor ecx, ecx
// 00443126  3bf8                 cmp edi, eax
// 00443128  0f94c1               sete cl
// 0044312b  5f                   pop edi
// 0044312c  8ac1                 mov al, cl
// 0044312e  5e                   pop esi
// 0044312f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?equalValues@?$TypedPropertyDescriptor@H@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
