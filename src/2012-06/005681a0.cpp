// roc 2012-06 005681a0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005681a0
//
// 005681a0  53                   push ebx
// 005681a1  56                   push esi
// 005681a2  6a10                 push 0x10
// 005681a4  8bf1                 mov esi, ecx
// 005681a6  e8c5f7ffff           call 0x567970
// 005681ab  e8b0fcffff           call 0x567e60
// 005681b0  8b0e                 mov ecx, dword ptr [esi]
// 005681b2  8b560c               mov edx, dword ptr [esi + 0xc]
// 005681b5  c1e903               shr ecx, 3
// 005681b8  84c0                 test al, al
// 005681ba  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005681be  741c                 je 0x5681dc
// 005681c0  8a5801               mov bl, byte ptr [eax + 1]
// 005681c3  881c11               mov byte ptr [ecx + edx], bl
// 005681c6  8b0e                 mov ecx, dword ptr [esi]
// 005681c8  8a00                 mov al, byte ptr [eax]
// 005681ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 005681cd  c1e903               shr ecx, 3
// 005681d0  88441101             mov byte ptr [ecx + edx + 1], al
// 005681d4  830610               add dword ptr [esi], 0x10
// 005681d7  5e                   pop esi
// 005681d8  5b                   pop ebx
// 005681d9  c20400               ret 4
// 005681dc  8a18                 mov bl, byte ptr [eax]
// 005681de  881c11               mov byte ptr [ecx + edx], bl
// 005681e1  8b0e                 mov ecx, dword ptr [esi]
// 005681e3  8a4001               mov al, byte ptr [eax + 1]
// 005681e6  8b560c               mov edx, dword ptr [esi + 0xc]
// 005681e9  c1e903               shr ecx, 3
// 005681ec  88441101             mov byte ptr [ecx + edx + 1], al
// 005681f0  830610               add dword ptr [esi], 0x10
// 005681f3  5e                   pop esi
// 005681f4  5b                   pop ebx
// 005681f5  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedVar16@BitStream@RakNet@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
