// roc 2008-06 0041e7d0  unit: RBX::VTexture::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e7d0
//
// 0041e7d0  6aff                 push -1
// 0041e7d2  68a9677c00           push 0x7c67a9
// 0041e7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0041e7dd  50                   push eax
// 0041e7de  64892500000000       mov dword ptr fs:[0], esp
// 0041e7e5  83ec0c               sub esp, 0xc
// 0041e7e8  8d442404             lea eax, [esp + 4]
// 0041e7ec  50                   push eax
// 0041e7ed  c744240400000000     mov dword ptr [esp + 4], 0
// 0041e7f5  e856fdffff           call 0x41e550
// 0041e7fa  8b08                 mov ecx, dword ptr [eax]
// 0041e7fc  83c404               add esp, 4
// 0041e7ff  85c9                 test ecx, ecx
// 0041e801  7405                 je 0x41e808
// 0041e803  83c110               add ecx, 0x10
// 0041e806  eb02                 jmp 0x41e80a
// 0041e808  33c9                 xor ecx, ecx
// 0041e80a  56                   push esi
// 0041e80b  57                   push edi
// 0041e80c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041e810  890f                 mov dword ptr [edi], ecx
// 0041e812  8b4004               mov eax, dword ptr [eax + 4]
// 0041e815  894704               mov dword ptr [edi + 4], eax
// 0041e818  85c0                 test eax, eax
// 0041e81a  740c                 je 0x41e828
// 0041e81c  83c004               add eax, 4
// 0041e81f  b901000000           mov ecx, 1
// 0041e824  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e828  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041e82c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041e834  c744240801000000     mov dword ptr [esp + 8], 1
// 0041e83c  85f6                 test esi, esi
// 0041e83e  742a                 je 0x41e86a
// 0041e840  8d5604               lea edx, [esi + 4]
// 0041e843  83c8ff               or eax, 0xffffffff
// 0041e846  f00fc102             lock xadd dword ptr [edx], eax
// 0041e84a  751e                 jne 0x41e86a
// 0041e84c  8b16                 mov edx, dword ptr [esi]
// 0041e84e  8b4204               mov eax, dword ptr [edx + 4]
// 0041e851  8bce                 mov ecx, esi
// 0041e853  ffd0                 call eax
// 0041e855  8d4e08               lea ecx, [esi + 8]
// 0041e858  83caff               or edx, 0xffffffff
// 0041e85b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e85f  7509                 jne 0x41e86a
// 0041e861  8b06                 mov eax, dword ptr [esi]
// 0041e863  8b5008               mov edx, dword ptr [eax + 8]
// 0041e866  8bce                 mov ecx, esi
// 0041e868  ffd2                 call edx
// 0041e86a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041e86e  8bc7                 mov eax, edi
// 0041e870  5f                   pop edi
// 0041e871  5e                   pop esi
// 0041e872  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e879  83c418               add esp, 0x18
// 0041e87c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
