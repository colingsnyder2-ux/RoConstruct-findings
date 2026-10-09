// roc 2009-12 004ffee0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ffee0
//
// 004ffee0  64a100000000         mov eax, dword ptr fs:[0]
// 004ffee6  6aff                 push -1
// 004ffee8  68089a9400           push 0x949a08
// 004ffeed  50                   push eax
// 004ffeee  64892500000000       mov dword ptr fs:[0], esp
// 004ffef5  56                   push esi
// 004ffef6  8bf1                 mov esi, ecx
// 004ffef8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004fff00  e83b701700           call 0x676f40
// 004fff05  6a08                 push 8
// 004fff07  e854392f00           call 0x7f3860
// 004fff0c  83c404               add esp, 4
// 004fff0f  85c0                 test eax, eax
// 004fff11  7423                 je 0x4fff36
// 004fff13  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fff17  8908                 mov dword ptr [eax], ecx
// 004fff19  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fff1d  895004               mov dword ptr [eax + 4], edx
// 004fff20  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fff24  85c9                 test ecx, ecx
// 004fff26  7414                 je 0x4fff3c
// 004fff28  83c104               add ecx, 4
// 004fff2b  ba01000000           mov edx, 1
// 004fff30  f00fc111             lock xadd dword ptr [ecx], edx
// 004fff34  eb02                 jmp 0x4fff38
// 004fff36  33c0                 xor eax, eax
// 004fff38  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fff3c  894608               mov dword ptr [esi + 8], eax
// 004fff3f  c7460408000000       mov dword ptr [esi + 4], 8
// 004fff46  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004fff4e  85c9                 test ecx, ecx
// 004fff50  742c                 je 0x4fff7e
// 004fff52  8bf1                 mov esi, ecx
// 004fff54  83c104               add ecx, 4
// 004fff57  83c8ff               or eax, 0xffffffff
// 004fff5a  f00fc101             lock xadd dword ptr [ecx], eax
// 004fff5e  751e                 jne 0x4fff7e
// 004fff60  8b16                 mov edx, dword ptr [esi]
// 004fff62  8b4204               mov eax, dword ptr [edx + 4]
// 004fff65  8bce                 mov ecx, esi
// 004fff67  ffd0                 call eax
// 004fff69  8d4e08               lea ecx, [esi + 8]
// 004fff6c  83caff               or edx, 0xffffffff
// 004fff6f  f00fc111             lock xadd dword ptr [ecx], edx
// 004fff73  7509                 jne 0x4fff7e
// 004fff75  8b06                 mov eax, dword ptr [esi]
// 004fff77  8b5008               mov edx, dword ptr [eax + 8]
// 004fff7a  8bce                 mov ecx, esi
// 004fff7c  ffd2                 call edx
// 004fff7e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fff82  64890d00000000       mov dword ptr fs:[0], ecx
// 004fff89  5e                   pop esi
// 004fff8a  83c40c               add esp, 0xc
// 004fff8d  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
