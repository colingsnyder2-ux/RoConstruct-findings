// roc 2007-03 00537e30  unit: seg_00530000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537e30
//
// 00537e30  6aff                 push -1
// 00537e32  68a8d57400           push 0x74d5a8
// 00537e37  64a100000000         mov eax, dword ptr fs:[0]
// 00537e3d  50                   push eax
// 00537e3e  64892500000000       mov dword ptr fs:[0], esp
// 00537e45  51                   push ecx
// 00537e46  56                   push esi
// 00537e47  8bd1                 mov edx, ecx
// 00537e49  8b742420             mov esi, dword ptr [esp + 0x20]
// 00537e4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00537e51  83ec08               sub esp, 8
// 00537e54  85f6                 test esi, esi
// 00537e56  8bc4                 mov eax, esp
// 00537e58  8908                 mov dword ptr [eax], ecx
// 00537e5a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00537e62  8964240c             mov dword ptr [esp + 0xc], esp
// 00537e66  897004               mov dword ptr [eax + 4], esi
// 00537e69  740c                 je 0x537e77
// 00537e6b  8d4604               lea eax, [esi + 4]
// 00537e6e  b901000000           mov ecx, 1
// 00537e73  f00fc108             lock xadd dword ptr [eax], ecx
// 00537e77  8b4a04               mov ecx, dword ptr [edx + 4]
// 00537e7a  034c2420             add ecx, dword ptr [esp + 0x20]
// 00537e7e  8b12                 mov edx, dword ptr [edx]
// 00537e80  ffd2                 call edx
// 00537e82  85f6                 test esi, esi
// 00537e84  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00537e8c  742a                 je 0x537eb8
// 00537e8e  8d4604               lea eax, [esi + 4]
// 00537e91  83c9ff               or ecx, 0xffffffff
// 00537e94  f00fc108             lock xadd dword ptr [eax], ecx
// 00537e98  751e                 jne 0x537eb8
// 00537e9a  8b16                 mov edx, dword ptr [esi]
// 00537e9c  8b4204               mov eax, dword ptr [edx + 4]
// 00537e9f  8bce                 mov ecx, esi
// 00537ea1  ffd0                 call eax
// 00537ea3  8d4e08               lea ecx, [esi + 8]
// 00537ea6  83caff               or edx, 0xffffffff
// 00537ea9  f00fc111             lock xadd dword ptr [ecx], edx
// 00537ead  7509                 jne 0x537eb8
// 00537eaf  8b06                 mov eax, dword ptr [esi]
// 00537eb1  8b5008               mov edx, dword ptr [eax + 8]
// 00537eb4  8bce                 mov ecx, esi
// 00537eb6  ffd2                 call edx
// 00537eb8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00537ebc  64890d00000000       mov dword ptr fs:[0], ecx
// 00537ec3  5e                   pop esi
// 00537ec4  83c410               add esp, 0x10
// 00537ec7  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??R?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@QBEXPAVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
