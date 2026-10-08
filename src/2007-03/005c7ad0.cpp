// roc 2007-03 005c7ad0  unit: seg_005c0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c7ad0
//
// 005c7ad0  56                   push esi
// 005c7ad1  8bf1                 mov esi, ecx
// 005c7ad3  8b4608               mov eax, dword ptr [esi + 8]
// 005c7ad6  57                   push edi
// 005c7ad7  8b3e                 mov edi, dword ptr [esi]
// 005c7ad9  03c0                 add eax, eax
// 005c7adb  03c0                 add eax, eax
// 005c7add  6a10                 push 0x10
// 005c7adf  50                   push eax
// 005c7ae0  e8ebc0f2ff           call 0x4f3bd0
// 005c7ae5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c7ae9  8906                 mov dword ptr [esi], eax
// 005c7aeb  8b7608               mov esi, dword ptr [esi + 8]
// 005c7aee  83c408               add esp, 8
// 005c7af1  3bce                 cmp ecx, esi
// 005c7af3  7d02                 jge 0x5c7af7
// 005c7af5  8bf1                 mov esi, ecx
// 005c7af7  8d14b0               lea edx, [eax + esi*4]
// 005c7afa  3bc2                 cmp eax, edx
// 005c7afc  8bcf                 mov ecx, edi
// 005c7afe  7312                 jae 0x5c7b12
// 005c7b00  85c0                 test eax, eax
// 005c7b02  7404                 je 0x5c7b08
// 005c7b04  8b31                 mov esi, dword ptr [ecx]
// 005c7b06  8930                 mov dword ptr [eax], esi
// 005c7b08  83c004               add eax, 4
// 005c7b0b  83c104               add ecx, 4
// 005c7b0e  3bc2                 cmp eax, edx
// 005c7b10  72ee                 jb 0x5c7b00
// 005c7b12  57                   push edi
// 005c7b13  e868b8f2ff           call 0x4f3380
// 005c7b18  83c404               add esp, 4
// 005c7b1b  5f                   pop edi
// 005c7b1c  5e                   pop esi
// 005c7b1d  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?realloc@?$Array@PAVPrimitive@RBX@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
