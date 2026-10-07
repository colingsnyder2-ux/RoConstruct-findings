// roc 2011-06 004ed190  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed190
//
// 004ed190  53                   push ebx
// 004ed191  56                   push esi
// 004ed192  6a10                 push 0x10
// 004ed194  8bf1                 mov esi, ecx
// 004ed196  e835faffff           call 0x4ecbd0
// 004ed19b  e800a2ffff           call 0x4e73a0
// 004ed1a0  8b0e                 mov ecx, dword ptr [esi]
// 004ed1a2  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed1a5  c1e903               shr ecx, 3
// 004ed1a8  84c0                 test al, al
// 004ed1aa  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ed1ae  741c                 je 0x4ed1cc
// 004ed1b0  8a5801               mov bl, byte ptr [eax + 1]
// 004ed1b3  881c11               mov byte ptr [ecx + edx], bl
// 004ed1b6  8b0e                 mov ecx, dword ptr [esi]
// 004ed1b8  8a00                 mov al, byte ptr [eax]
// 004ed1ba  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed1bd  c1e903               shr ecx, 3
// 004ed1c0  88441101             mov byte ptr [ecx + edx + 1], al
// 004ed1c4  830610               add dword ptr [esi], 0x10
// 004ed1c7  5e                   pop esi
// 004ed1c8  5b                   pop ebx
// 004ed1c9  c20400               ret 4
// 004ed1cc  8a18                 mov bl, byte ptr [eax]
// 004ed1ce  881c11               mov byte ptr [ecx + edx], bl
// 004ed1d1  8b0e                 mov ecx, dword ptr [esi]
// 004ed1d3  8a4001               mov al, byte ptr [eax + 1]
// 004ed1d6  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed1d9  c1e903               shr ecx, 3
// 004ed1dc  88441101             mov byte ptr [ecx + edx + 1], al
// 004ed1e0  830610               add dword ptr [esi], 0x10
// 004ed1e3  5e                   pop esi
// 004ed1e4  5b                   pop ebx
// 004ed1e5  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedVar16@BitStream@RakNet@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
