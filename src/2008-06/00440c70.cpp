// roc 2008-06 00440c70  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00440c70
//
// 00440c70  6aff                 push -1
// 00440c72  68a9677c00           push 0x7c67a9
// 00440c77  64a100000000         mov eax, dword ptr fs:[0]
// 00440c7d  50                   push eax
// 00440c7e  64892500000000       mov dword ptr fs:[0], esp
// 00440c85  83ec0c               sub esp, 0xc
// 00440c88  8d442404             lea eax, [esp + 4]
// 00440c8c  50                   push eax
// 00440c8d  c744240400000000     mov dword ptr [esp + 4], 0
// 00440c95  e856ffffff           call 0x440bf0
// 00440c9a  8b08                 mov ecx, dword ptr [eax]
// 00440c9c  83c404               add esp, 4
// 00440c9f  85c9                 test ecx, ecx
// 00440ca1  7405                 je 0x440ca8
// 00440ca3  83c110               add ecx, 0x10
// 00440ca6  eb02                 jmp 0x440caa
// 00440ca8  33c9                 xor ecx, ecx
// 00440caa  56                   push esi
// 00440cab  57                   push edi
// 00440cac  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00440cb0  890f                 mov dword ptr [edi], ecx
// 00440cb2  8b4004               mov eax, dword ptr [eax + 4]
// 00440cb5  894704               mov dword ptr [edi + 4], eax
// 00440cb8  85c0                 test eax, eax
// 00440cba  740c                 je 0x440cc8
// 00440cbc  83c004               add eax, 4
// 00440cbf  b901000000           mov ecx, 1
// 00440cc4  f00fc108             lock xadd dword ptr [eax], ecx
// 00440cc8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00440ccc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00440cd4  c744240801000000     mov dword ptr [esp + 8], 1
// 00440cdc  85f6                 test esi, esi
// 00440cde  742a                 je 0x440d0a
// 00440ce0  8d5604               lea edx, [esi + 4]
// 00440ce3  83c8ff               or eax, 0xffffffff
// 00440ce6  f00fc102             lock xadd dword ptr [edx], eax
// 00440cea  751e                 jne 0x440d0a
// 00440cec  8b16                 mov edx, dword ptr [esi]
// 00440cee  8b4204               mov eax, dword ptr [edx + 4]
// 00440cf1  8bce                 mov ecx, esi
// 00440cf3  ffd0                 call eax
// 00440cf5  8d4e08               lea ecx, [esi + 8]
// 00440cf8  83caff               or edx, 0xffffffff
// 00440cfb  f00fc111             lock xadd dword ptr [ecx], edx
// 00440cff  7509                 jne 0x440d0a
// 00440d01  8b06                 mov eax, dword ptr [esi]
// 00440d03  8b5008               mov edx, dword ptr [eax + 8]
// 00440d06  8bce                 mov ecx, esi
// 00440d08  ffd2                 call edx
// 00440d0a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00440d0e  8bc7                 mov eax, edi
// 00440d10  5f                   pop edi
// 00440d11  5e                   pop esi
// 00440d12  64890d00000000       mov dword ptr fs:[0], ecx
// 00440d19  83c418               add esp, 0x18
// 00440d1c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
