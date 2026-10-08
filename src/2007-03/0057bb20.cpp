// roc 2007-03 0057bb20  unit: seg_00570000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057bb20
//
// 0057bb20  64a100000000         mov eax, dword ptr fs:[0]
// 0057bb26  6aff                 push -1
// 0057bb28  68f8177500           push 0x7517f8
// 0057bb2d  50                   push eax
// 0057bb2e  64892500000000       mov dword ptr fs:[0], esp
// 0057bb35  56                   push esi
// 0057bb36  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057bb3a  6a00                 push 0
// 0057bb3c  68e03b8800           push 0x883be0
// 0057bb41  6864108800           push 0x881064
// 0057bb46  6a00                 push 0
// 0057bb48  56                   push esi
// 0057bb49  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057bb51  e870360a00           call 0x61f1c6
// 0057bb56  83c414               add esp, 0x14
// 0057bb59  85c0                 test eax, eax
// 0057bb5b  7409                 je 0x57bb66
// 0057bb5d  8bc8                 mov ecx, eax
// 0057bb5f  e80c6cffff           call 0x572770
// 0057bb64  eb0c                 jmp 0x57bb72
// 0057bb66  68a0b55700           push 0x57b5a0
// 0057bb6b  8bce                 mov ecx, esi
// 0057bb6d  e8dea2f0ff           call 0x485e50
// 0057bb72  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057bb76  85f6                 test esi, esi
// 0057bb78  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0057bb80  742a                 je 0x57bbac
// 0057bb82  8d4604               lea eax, [esi + 4]
// 0057bb85  83c9ff               or ecx, 0xffffffff
// 0057bb88  f00fc108             lock xadd dword ptr [eax], ecx
// 0057bb8c  751e                 jne 0x57bbac
// 0057bb8e  8b16                 mov edx, dword ptr [esi]
// 0057bb90  8b4204               mov eax, dword ptr [edx + 4]
// 0057bb93  8bce                 mov ecx, esi
// 0057bb95  ffd0                 call eax
// 0057bb97  8d4e08               lea ecx, [esi + 8]
// 0057bb9a  83caff               or edx, 0xffffffff
// 0057bb9d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057bba1  7509                 jne 0x57bbac
// 0057bba3  8b06                 mov eax, dword ptr [esi]
// 0057bba5  8b5008               mov edx, dword ptr [eax + 8]
// 0057bba8  8bce                 mov ecx, esi
// 0057bbaa  ffd2                 call edx
// 0057bbac  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057bbb0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057bbb7  5e                   pop esi
// 0057bbb8  83c40c               add esp, 0xc
// 0057bbbb  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper2@$00@RBX@@YAXV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
