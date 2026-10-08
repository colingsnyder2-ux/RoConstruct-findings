// roc 2007-08 00535ea0  unit: std::logic_error  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535ea0
//
// 00535ea0  6aff                 push -1
// 00535ea2  68880a7500           push 0x750a88
// 00535ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00535ead  50                   push eax
// 00535eae  64892500000000       mov dword ptr fs:[0], esp
// 00535eb5  51                   push ecx
// 00535eb6  56                   push esi
// 00535eb7  8bd1                 mov edx, ecx
// 00535eb9  8b742420             mov esi, dword ptr [esp + 0x20]
// 00535ebd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00535ec1  83ec08               sub esp, 8
// 00535ec4  85f6                 test esi, esi
// 00535ec6  8bc4                 mov eax, esp
// 00535ec8  8908                 mov dword ptr [eax], ecx
// 00535eca  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00535ed2  8964240c             mov dword ptr [esp + 0xc], esp
// 00535ed6  897004               mov dword ptr [eax + 4], esi
// 00535ed9  740c                 je 0x535ee7
// 00535edb  8d4604               lea eax, [esi + 4]
// 00535ede  b901000000           mov ecx, 1
// 00535ee3  f00fc108             lock xadd dword ptr [eax], ecx
// 00535ee7  8b4a04               mov ecx, dword ptr [edx + 4]
// 00535eea  034c2420             add ecx, dword ptr [esp + 0x20]
// 00535eee  8b12                 mov edx, dword ptr [edx]
// 00535ef0  ffd2                 call edx
// 00535ef2  85f6                 test esi, esi
// 00535ef4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00535efc  742a                 je 0x535f28
// 00535efe  8d4604               lea eax, [esi + 4]
// 00535f01  83c9ff               or ecx, 0xffffffff
// 00535f04  f00fc108             lock xadd dword ptr [eax], ecx
// 00535f08  751e                 jne 0x535f28
// 00535f0a  8b16                 mov edx, dword ptr [esi]
// 00535f0c  8b4204               mov eax, dword ptr [edx + 4]
// 00535f0f  8bce                 mov ecx, esi
// 00535f11  ffd0                 call eax
// 00535f13  8d4e08               lea ecx, [esi + 8]
// 00535f16  83caff               or edx, 0xffffffff
// 00535f19  f00fc111             lock xadd dword ptr [ecx], edx
// 00535f1d  7509                 jne 0x535f28
// 00535f1f  8b06                 mov eax, dword ptr [esi]
// 00535f21  8b5008               mov edx, dword ptr [eax + 8]
// 00535f24  8bce                 mov ecx, esi
// 00535f26  ffd2                 call edx
// 00535f28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00535f2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00535f33  5e                   pop esi
// 00535f34  83c410               add esp, 0x10
// 00535f37  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??R?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@QBEXPAVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
