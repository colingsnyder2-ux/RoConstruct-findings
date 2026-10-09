// roc 2008-06 00490580  unit: RBX::VTimerService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490580
//
// 00490580  6aff                 push -1
// 00490582  68a9677c00           push 0x7c67a9
// 00490587  64a100000000         mov eax, dword ptr fs:[0]
// 0049058d  50                   push eax
// 0049058e  64892500000000       mov dword ptr fs:[0], esp
// 00490595  83ec0c               sub esp, 0xc
// 00490598  8d442404             lea eax, [esp + 4]
// 0049059c  50                   push eax
// 0049059d  c744240400000000     mov dword ptr [esp + 4], 0
// 004905a5  e846b7ffff           call 0x48bcf0
// 004905aa  8b08                 mov ecx, dword ptr [eax]
// 004905ac  83c404               add esp, 4
// 004905af  85c9                 test ecx, ecx
// 004905b1  7405                 je 0x4905b8
// 004905b3  83c110               add ecx, 0x10
// 004905b6  eb02                 jmp 0x4905ba
// 004905b8  33c9                 xor ecx, ecx
// 004905ba  56                   push esi
// 004905bb  57                   push edi
// 004905bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004905c0  890f                 mov dword ptr [edi], ecx
// 004905c2  8b4004               mov eax, dword ptr [eax + 4]
// 004905c5  894704               mov dword ptr [edi + 4], eax
// 004905c8  85c0                 test eax, eax
// 004905ca  740c                 je 0x4905d8
// 004905cc  83c004               add eax, 4
// 004905cf  b901000000           mov ecx, 1
// 004905d4  f00fc108             lock xadd dword ptr [eax], ecx
// 004905d8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004905dc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004905e4  c744240801000000     mov dword ptr [esp + 8], 1
// 004905ec  85f6                 test esi, esi
// 004905ee  742a                 je 0x49061a
// 004905f0  8d5604               lea edx, [esi + 4]
// 004905f3  83c8ff               or eax, 0xffffffff
// 004905f6  f00fc102             lock xadd dword ptr [edx], eax
// 004905fa  751e                 jne 0x49061a
// 004905fc  8b16                 mov edx, dword ptr [esi]
// 004905fe  8b4204               mov eax, dword ptr [edx + 4]
// 00490601  8bce                 mov ecx, esi
// 00490603  ffd0                 call eax
// 00490605  8d4e08               lea ecx, [esi + 8]
// 00490608  83caff               or edx, 0xffffffff
// 0049060b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049060f  7509                 jne 0x49061a
// 00490611  8b06                 mov eax, dword ptr [esi]
// 00490613  8b5008               mov edx, dword ptr [eax + 8]
// 00490616  8bce                 mov ecx, esi
// 00490618  ffd2                 call edx
// 0049061a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049061e  8bc7                 mov eax, edi
// 00490620  5f                   pop edi
// 00490621  5e                   pop esi
// 00490622  64890d00000000       mov dword ptr fs:[0], ecx
// 00490629  83c418               add esp, 0x18
// 0049062c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
