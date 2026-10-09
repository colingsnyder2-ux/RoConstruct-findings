// roc 2008-06 0040de90  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040de90
//
// 0040de90  6aff                 push -1
// 0040de92  68a9677c00           push 0x7c67a9
// 0040de97  64a100000000         mov eax, dword ptr fs:[0]
// 0040de9d  50                   push eax
// 0040de9e  64892500000000       mov dword ptr fs:[0], esp
// 0040dea5  83ec0c               sub esp, 0xc
// 0040dea8  8d442404             lea eax, [esp + 4]
// 0040deac  50                   push eax
// 0040dead  c744240400000000     mov dword ptr [esp + 4], 0
// 0040deb5  e856ffffff           call 0x40de10
// 0040deba  8b08                 mov ecx, dword ptr [eax]
// 0040debc  83c404               add esp, 4
// 0040debf  85c9                 test ecx, ecx
// 0040dec1  7405                 je 0x40dec8
// 0040dec3  83c110               add ecx, 0x10
// 0040dec6  eb02                 jmp 0x40deca
// 0040dec8  33c9                 xor ecx, ecx
// 0040deca  56                   push esi
// 0040decb  57                   push edi
// 0040decc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040ded0  890f                 mov dword ptr [edi], ecx
// 0040ded2  8b4004               mov eax, dword ptr [eax + 4]
// 0040ded5  894704               mov dword ptr [edi + 4], eax
// 0040ded8  85c0                 test eax, eax
// 0040deda  740c                 je 0x40dee8
// 0040dedc  83c004               add eax, 4
// 0040dedf  b901000000           mov ecx, 1
// 0040dee4  f00fc108             lock xadd dword ptr [eax], ecx
// 0040dee8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040deec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040def4  c744240801000000     mov dword ptr [esp + 8], 1
// 0040defc  85f6                 test esi, esi
// 0040defe  742a                 je 0x40df2a
// 0040df00  8d5604               lea edx, [esi + 4]
// 0040df03  83c8ff               or eax, 0xffffffff
// 0040df06  f00fc102             lock xadd dword ptr [edx], eax
// 0040df0a  751e                 jne 0x40df2a
// 0040df0c  8b16                 mov edx, dword ptr [esi]
// 0040df0e  8b4204               mov eax, dword ptr [edx + 4]
// 0040df11  8bce                 mov ecx, esi
// 0040df13  ffd0                 call eax
// 0040df15  8d4e08               lea ecx, [esi + 8]
// 0040df18  83caff               or edx, 0xffffffff
// 0040df1b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040df1f  7509                 jne 0x40df2a
// 0040df21  8b06                 mov eax, dword ptr [esi]
// 0040df23  8b5008               mov edx, dword ptr [eax + 8]
// 0040df26  8bce                 mov ecx, esi
// 0040df28  ffd2                 call edx
// 0040df2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040df2e  8bc7                 mov eax, edi
// 0040df30  5f                   pop edi
// 0040df31  5e                   pop esi
// 0040df32  64890d00000000       mov dword ptr fs:[0], ecx
// 0040df39  83c418               add esp, 0x18
// 0040df3c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
