// roc 2007-08 0057aeb0  unit: RBX::Workspace  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aeb0
//
// 0057aeb0  64a100000000         mov eax, dword ptr fs:[0]
// 0057aeb6  6aff                 push -1
// 0057aeb8  6898657500           push 0x756598
// 0057aebd  50                   push eax
// 0057aebe  64892500000000       mov dword ptr fs:[0], esp
// 0057aec5  56                   push esi
// 0057aec6  57                   push edi
// 0057aec7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057aecb  6a00                 push 0
// 0057aecd  68e88e8900           push 0x898ee8
// 0057aed2  684c1f8800           push 0x881f4c
// 0057aed7  6a00                 push 0
// 0057aed9  57                   push edi
// 0057aeda  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0057aee2  e84f5e0b00           call 0x630d36
// 0057aee7  8bf0                 mov esi, eax
// 0057aee9  83c414               add esp, 0x14
// 0057aeec  85f6                 test esi, esi
// 0057aeee  7421                 je 0x57af11
// 0057aef0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057aef4  57                   push edi
// 0057aef5  e8c633fcff           call 0x53e2c0
// 0057aefa  84c0                 test al, al
// 0057aefc  7413                 je 0x57af11
// 0057aefe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057af02  8b06                 mov eax, dword ptr [esi]
// 0057af04  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057af08  8b4010               mov eax, dword ptr [eax + 0x10]
// 0057af0b  51                   push ecx
// 0057af0c  52                   push edx
// 0057af0d  8bce                 mov ecx, esi
// 0057af0f  ffd0                 call eax
// 0057af11  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057af15  85f6                 test esi, esi
// 0057af17  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057af1f  742a                 je 0x57af4b
// 0057af21  8d4e04               lea ecx, [esi + 4]
// 0057af24  83caff               or edx, 0xffffffff
// 0057af27  f00fc111             lock xadd dword ptr [ecx], edx
// 0057af2b  751e                 jne 0x57af4b
// 0057af2d  8b06                 mov eax, dword ptr [esi]
// 0057af2f  8b5004               mov edx, dword ptr [eax + 4]
// 0057af32  8bce                 mov ecx, esi
// 0057af34  ffd2                 call edx
// 0057af36  8d4608               lea eax, [esi + 8]
// 0057af39  83c9ff               or ecx, 0xffffffff
// 0057af3c  f00fc108             lock xadd dword ptr [eax], ecx
// 0057af40  7509                 jne 0x57af4b
// 0057af42  8b16                 mov edx, dword ptr [esi]
// 0057af44  8b4208               mov eax, dword ptr [edx + 8]
// 0057af47  8bce                 mov ecx, esi
// 0057af49  ffd0                 call eax
// 0057af4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057af4f  5f                   pop edi
// 0057af50  64890d00000000       mov dword ptr fs:[0], ecx
// 0057af57  5e                   pop esi
// 0057af58  83c40c               add esp, 0xc
// 0057af5b  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?DrawAdorn@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@PAVAdorn@1@W4SelectState@1@PAVWorkspace@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
