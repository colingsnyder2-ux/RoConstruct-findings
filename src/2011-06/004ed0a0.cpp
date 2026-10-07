// roc 2011-06 004ed0a0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed0a0
//
// 004ed0a0  8b442404             mov eax, dword ptr [esp + 4]
// 004ed0a4  803800               cmp byte ptr [eax], 0
// 004ed0a7  56                   push esi
// 004ed0a8  8bf1                 mov esi, ecx
// 004ed0aa  6a01                 push 1
// 004ed0ac  7432                 je 0x4ed0e0
// 004ed0ae  e81dfbffff           call 0x4ecbd0
// 004ed0b3  8b06                 mov eax, dword ptr [esi]
// 004ed0b5  8bc8                 mov ecx, eax
// 004ed0b7  c1e803               shr eax, 3
// 004ed0ba  83e107               and ecx, 7
// 004ed0bd  750d                 jne 0x4ed0cc
// 004ed0bf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed0c2  c6040880             mov byte ptr [eax + ecx], 0x80
// 004ed0c6  ff06                 inc dword ptr [esi]
// 004ed0c8  5e                   pop esi
// 004ed0c9  c20400               ret 4
// 004ed0cc  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed0cf  03c2                 add eax, edx
// 004ed0d1  ba80000000           mov edx, 0x80
// 004ed0d6  d3fa                 sar edx, cl
// 004ed0d8  0810                 or byte ptr [eax], dl
// 004ed0da  ff06                 inc dword ptr [esi]
// 004ed0dc  5e                   pop esi
// 004ed0dd  c20400               ret 4
// 004ed0e0  e8ebfaffff           call 0x4ecbd0
// 004ed0e5  8b06                 mov eax, dword ptr [esi]
// 004ed0e7  a807                 test al, 7
// 004ed0e9  750a                 jne 0x4ed0f5
// 004ed0eb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed0ee  c1e803               shr eax, 3
// 004ed0f1  c6040800             mov byte ptr [eax + ecx], 0
// 004ed0f5  ff06                 inc dword ptr [esi]
// 004ed0f7  5e                   pop esi
// 004ed0f8  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$Write@_N@BitStream@RakNet@@QAEXAB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
