// roc 2012-06 00750450  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750450
//
// 00750450  64a100000000         mov eax, dword ptr fs:[0]
// 00750456  6aff                 push -1
// 00750458  680869ab00           push 0xab6908
// 0075045d  50                   push eax
// 0075045e  64892500000000       mov dword ptr fs:[0], esp
// 00750465  56                   push esi
// 00750466  8b442414             mov eax, dword ptr [esp + 0x14]
// 0075046a  8d542418             lea edx, [esp + 0x18]
// 0075046e  8901                 mov dword ptr [ecx], eax
// 00750470  52                   push edx
// 00750471  83c104               add ecx, 4
// 00750474  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0075047c  e81f22cbff           call 0x4026a0
// 00750481  8b742418             mov esi, dword ptr [esp + 0x18]
// 00750485  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0075048d  85f6                 test esi, esi
// 0075048f  742a                 je 0x7504bb
// 00750491  8d4604               lea eax, [esi + 4]
// 00750494  83c9ff               or ecx, 0xffffffff
// 00750497  f00fc108             lock xadd dword ptr [eax], ecx
// 0075049b  751e                 jne 0x7504bb
// 0075049d  8b16                 mov edx, dword ptr [esi]
// 0075049f  8b4204               mov eax, dword ptr [edx + 4]
// 007504a2  8bce                 mov ecx, esi
// 007504a4  ffd0                 call eax
// 007504a6  8d4e08               lea ecx, [esi + 8]
// 007504a9  83caff               or edx, 0xffffffff
// 007504ac  f00fc111             lock xadd dword ptr [ecx], edx
// 007504b0  7509                 jne 0x7504bb
// 007504b2  8b06                 mov eax, dword ptr [esi]
// 007504b4  8b5008               mov edx, dword ptr [eax + 8]
// 007504b7  8bce                 mov ecx, esi
// 007504b9  ffd2                 call edx
// 007504bb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007504bf  64890d00000000       mov dword ptr fs:[0], ecx
// 007504c6  5e                   pop esi
// 007504c7  83c40c               add esp, 0xc
// 007504ca  c20800               ret 8
// library rbxgs/util\Handle.cpp (function ?linkTo@InstanceHandle@RBX@@QAEXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Handle.cpp
