// roc 2007-03 0057acc0  unit: seg_00570000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057acc0
//
// 0057acc0  64a100000000         mov eax, dword ptr fs:[0]
// 0057acc6  6aff                 push -1
// 0057acc8  68f8177500           push 0x7517f8
// 0057accd  50                   push eax
// 0057acce  64892500000000       mov dword ptr fs:[0], esp
// 0057acd5  56                   push esi
// 0057acd6  57                   push edi
// 0057acd7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057acdb  6a00                 push 0
// 0057acdd  68c4768900           push 0x8976c4
// 0057ace2  6864108800           push 0x881064
// 0057ace7  6a00                 push 0
// 0057ace9  57                   push edi
// 0057acea  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0057acf2  e8cf440a00           call 0x61f1c6
// 0057acf7  8bf0                 mov esi, eax
// 0057acf9  83c414               add esp, 0x14
// 0057acfc  85f6                 test esi, esi
// 0057acfe  7421                 je 0x57ad21
// 0057ad00  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057ad04  57                   push edi
// 0057ad05  e8e641fcff           call 0x53eef0
// 0057ad0a  84c0                 test al, al
// 0057ad0c  7413                 je 0x57ad21
// 0057ad0e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057ad12  8b06                 mov eax, dword ptr [esi]
// 0057ad14  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057ad18  8b4010               mov eax, dword ptr [eax + 0x10]
// 0057ad1b  51                   push ecx
// 0057ad1c  52                   push edx
// 0057ad1d  8bce                 mov ecx, esi
// 0057ad1f  ffd0                 call eax
// 0057ad21  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057ad25  85f6                 test esi, esi
// 0057ad27  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057ad2f  742a                 je 0x57ad5b
// 0057ad31  8d4e04               lea ecx, [esi + 4]
// 0057ad34  83caff               or edx, 0xffffffff
// 0057ad37  f00fc111             lock xadd dword ptr [ecx], edx
// 0057ad3b  751e                 jne 0x57ad5b
// 0057ad3d  8b06                 mov eax, dword ptr [esi]
// 0057ad3f  8b5004               mov edx, dword ptr [eax + 4]
// 0057ad42  8bce                 mov ecx, esi
// 0057ad44  ffd2                 call edx
// 0057ad46  8d4608               lea eax, [esi + 8]
// 0057ad49  83c9ff               or ecx, 0xffffffff
// 0057ad4c  f00fc108             lock xadd dword ptr [eax], ecx
// 0057ad50  7509                 jne 0x57ad5b
// 0057ad52  8b16                 mov edx, dword ptr [esi]
// 0057ad54  8b4208               mov eax, dword ptr [edx + 8]
// 0057ad57  8bce                 mov ecx, esi
// 0057ad59  ffd0                 call eax
// 0057ad5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057ad5f  5f                   pop edi
// 0057ad60  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ad67  5e                   pop esi
// 0057ad68  83c40c               add esp, 0xc
// 0057ad6b  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?DrawAdorn@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@PAVAdorn@1@W4SelectState@1@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
