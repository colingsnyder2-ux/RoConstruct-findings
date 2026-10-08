// roc 2008-06 005cb210  unit: RBX::SteppingController  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb210
//
// 005cb210  6aff                 push -1
// 005cb212  6848537d00           push 0x7d5348
// 005cb217  64a100000000         mov eax, dword ptr fs:[0]
// 005cb21d  50                   push eax
// 005cb21e  64892500000000       mov dword ptr fs:[0], esp
// 005cb225  51                   push ecx
// 005cb226  56                   push esi
// 005cb227  8bf1                 mov esi, ecx
// 005cb229  89742404             mov dword ptr [esp + 4], esi
// 005cb22d  c706eca08300         mov dword ptr [esi], 0x83a0ec
// 005cb233  c7460ce0a08300       mov dword ptr [esi + 0xc], 0x83a0e0
// 005cb23a  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 005cb23d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cb245  85c9                 test ecx, ecx
// 005cb247  7413                 je 0x5cb25c
// 005cb249  8d4108               lea eax, [ecx + 8]
// 005cb24c  83caff               or edx, 0xffffffff
// 005cb24f  f00fc110             lock xadd dword ptr [eax], edx
// 005cb253  7507                 jne 0x5cb25c
// 005cb255  8b01                 mov eax, dword ptr [ecx]
// 005cb257  8b5008               mov edx, dword ptr [eax + 8]
// 005cb25a  ffd2                 call edx
// 005cb25c  8bce                 mov ecx, esi
// 005cb25e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005cb266  e8d5feffff           call 0x5cb140
// 005cb26b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cb26f  5e                   pop esi
// 005cb270  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb277  83c410               add esp, 0x10
// 005cb27a  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1AIController@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
