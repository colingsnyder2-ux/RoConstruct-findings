// roc 2007-08 00576f60  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576f60
//
// 00576f60  64a100000000         mov eax, dword ptr fs:[0]
// 00576f66  6aff                 push -1
// 00576f68  68a0537500           push 0x7553a0
// 00576f6d  50                   push eax
// 00576f6e  64892500000000       mov dword ptr fs:[0], esp
// 00576f75  83ec10               sub esp, 0x10
// 00576f78  53                   push ebx
// 00576f79  55                   push ebp
// 00576f7a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00576f7e  56                   push esi
// 00576f7f  6a00                 push 0
// 00576f81  68284a8800           push 0x884a28
// 00576f86  684c1f8800           push 0x881f4c
// 00576f8b  6a00                 push 0
// 00576f8d  55                   push ebp
// 00576f8e  e8a39d0b00           call 0x630d36
// 00576f93  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00576f97  83c414               add esp, 0x14
// 00576f9a  85c0                 test eax, eax
// 00576f9c  0f849c000000         je 0x57703e
// 00576fa2  50                   push eax
// 00576fa3  8d442418             lea eax, [esp + 0x18]
// 00576fa7  50                   push eax
// 00576fa8  e833da0600           call 0x5e49e0
// 00576fad  83c408               add esp, 8
// 00576fb0  8b7004               mov esi, dword ptr [eax + 4]
// 00576fb3  85f6                 test esi, esi
// 00576fb5  8b08                 mov ecx, dword ptr [eax]
// 00576fb7  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00576fbf  894c240c             mov dword ptr [esp + 0xc], ecx
// 00576fc3  89742410             mov dword ptr [esp + 0x10], esi
// 00576fc7  740c                 je 0x576fd5
// 00576fc9  8d5608               lea edx, [esi + 8]
// 00576fcc  b801000000           mov eax, 1
// 00576fd1  f00fc102             lock xadd dword ptr [edx], eax
// 00576fd5  8d4c240c             lea ecx, [esp + 0xc]
// 00576fd9  51                   push ecx
// 00576fda  8bcb                 mov ecx, ebx
// 00576fdc  c644242801           mov byte ptr [esp + 0x28], 1
// 00576fe1  e88afbffff           call 0x576b70
// 00576fe6  85f6                 test esi, esi
// 00576fe8  c644242400           mov byte ptr [esp + 0x24], 0
// 00576fed  7415                 je 0x577004
// 00576fef  8d5608               lea edx, [esi + 8]
// 00576ff2  83c8ff               or eax, 0xffffffff
// 00576ff5  f00fc102             lock xadd dword ptr [edx], eax
// 00576ff9  7509                 jne 0x577004
// 00576ffb  8b16                 mov edx, dword ptr [esi]
// 00576ffd  8b4208               mov eax, dword ptr [edx + 8]
// 00577000  8bce                 mov ecx, esi
// 00577002  ffd0                 call eax
// 00577004  8b742418             mov esi, dword ptr [esp + 0x18]
// 00577008  85f6                 test esi, esi
// 0057700a  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00577012  742a                 je 0x57703e
// 00577014  8d4e04               lea ecx, [esi + 4]
// 00577017  83caff               or edx, 0xffffffff
// 0057701a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057701e  751e                 jne 0x57703e
// 00577020  8b06                 mov eax, dword ptr [esi]
// 00577022  8b5004               mov edx, dword ptr [eax + 4]
// 00577025  8bce                 mov ecx, esi
// 00577027  ffd2                 call edx
// 00577029  8d4608               lea eax, [esi + 8]
// 0057702c  83c9ff               or ecx, 0xffffffff
// 0057702f  f00fc108             lock xadd dword ptr [eax], ecx
// 00577033  7509                 jne 0x57703e
// 00577035  8b16                 mov edx, dword ptr [esi]
// 00577037  8b4208               mov eax, dword ptr [edx + 8]
// 0057703a  8bce                 mov ecx, esi
// 0057703c  ffd0                 call eax
// 0057703e  8bcd                 mov ecx, ebp
// 00577040  33f6                 xor esi, esi
// 00577042  e8c90bf1ff           call 0x487c10
// 00577047  85c0                 test eax, eax
// 00577049  7643                 jbe 0x57708e
// 0057704b  57                   push edi
// 0057704c  8d642400             lea esp, [esp]
// 00577050  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 00577056  8b4f04               mov ecx, dword ptr [edi + 4]
// 00577059  85c9                 test ecx, ecx
// 0057705b  740c                 je 0x577069
// 0057705d  8b4708               mov eax, dword ptr [edi + 8]
// 00577060  2bc1                 sub eax, ecx
// 00577062  c1f803               sar eax, 3
// 00577065  3bf0                 cmp esi, eax
// 00577067  7206                 jb 0x57706f
// 00577069  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057706f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00577072  8b14f1               mov edx, dword ptr [ecx + esi*8]
// 00577075  53                   push ebx
// 00577076  52                   push edx
// 00577077  e8e4feffff           call 0x576f60
// 0057707c  83c408               add esp, 8
// 0057707f  8bcd                 mov ecx, ebp
// 00577081  83c601               add esi, 1
// 00577084  e8870bf1ff           call 0x487c10
// 00577089  3bf0                 cmp esi, eax
// 0057708b  72c3                 jb 0x577050
// 0057708d  5f                   pop edi
// 0057708e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577092  5e                   pop esi
// 00577093  5d                   pop ebp
// 00577094  5b                   pop ebx
// 00577095  64890d00000000       mov dword ptr fs:[0], ecx
// 0057709c  83c41c               add esp, 0x1c
// 0057709f  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?findParts@PartInstance@RBX@@SAXPAVInstance@2@AAV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
