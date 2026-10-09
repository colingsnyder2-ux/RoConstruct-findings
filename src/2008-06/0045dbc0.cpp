// roc 2008-06 0045dbc0  unit: RBX::VCamera::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045dbc0
//
// 0045dbc0  6aff                 push -1
// 0045dbc2  68a9677c00           push 0x7c67a9
// 0045dbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0045dbcd  50                   push eax
// 0045dbce  64892500000000       mov dword ptr fs:[0], esp
// 0045dbd5  83ec0c               sub esp, 0xc
// 0045dbd8  8d442404             lea eax, [esp + 4]
// 0045dbdc  50                   push eax
// 0045dbdd  c744240400000000     mov dword ptr [esp + 4], 0
// 0045dbe5  e856ffffff           call 0x45db40
// 0045dbea  8b08                 mov ecx, dword ptr [eax]
// 0045dbec  83c404               add esp, 4
// 0045dbef  85c9                 test ecx, ecx
// 0045dbf1  7405                 je 0x45dbf8
// 0045dbf3  83c110               add ecx, 0x10
// 0045dbf6  eb02                 jmp 0x45dbfa
// 0045dbf8  33c9                 xor ecx, ecx
// 0045dbfa  56                   push esi
// 0045dbfb  57                   push edi
// 0045dbfc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0045dc00  890f                 mov dword ptr [edi], ecx
// 0045dc02  8b4004               mov eax, dword ptr [eax + 4]
// 0045dc05  894704               mov dword ptr [edi + 4], eax
// 0045dc08  85c0                 test eax, eax
// 0045dc0a  740c                 je 0x45dc18
// 0045dc0c  83c004               add eax, 4
// 0045dc0f  b901000000           mov ecx, 1
// 0045dc14  f00fc108             lock xadd dword ptr [eax], ecx
// 0045dc18  8b742410             mov esi, dword ptr [esp + 0x10]
// 0045dc1c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0045dc24  c744240801000000     mov dword ptr [esp + 8], 1
// 0045dc2c  85f6                 test esi, esi
// 0045dc2e  742a                 je 0x45dc5a
// 0045dc30  8d5604               lea edx, [esi + 4]
// 0045dc33  83c8ff               or eax, 0xffffffff
// 0045dc36  f00fc102             lock xadd dword ptr [edx], eax
// 0045dc3a  751e                 jne 0x45dc5a
// 0045dc3c  8b16                 mov edx, dword ptr [esi]
// 0045dc3e  8b4204               mov eax, dword ptr [edx + 4]
// 0045dc41  8bce                 mov ecx, esi
// 0045dc43  ffd0                 call eax
// 0045dc45  8d4e08               lea ecx, [esi + 8]
// 0045dc48  83caff               or edx, 0xffffffff
// 0045dc4b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045dc4f  7509                 jne 0x45dc5a
// 0045dc51  8b06                 mov eax, dword ptr [esi]
// 0045dc53  8b5008               mov edx, dword ptr [eax + 8]
// 0045dc56  8bce                 mov ecx, esi
// 0045dc58  ffd2                 call edx
// 0045dc5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045dc5e  8bc7                 mov eax, edi
// 0045dc60  5f                   pop edi
// 0045dc61  5e                   pop esi
// 0045dc62  64890d00000000       mov dword ptr fs:[0], ecx
// 0045dc69  83c418               add esp, 0x18
// 0045dc6c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
