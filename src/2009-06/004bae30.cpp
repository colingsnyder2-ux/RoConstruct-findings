// roc 2009-06 004bae30  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bae30
//
// 004bae30  64a100000000         mov eax, dword ptr fs:[0]
// 004bae36  6aff                 push -1
// 004bae38  6838938500           push 0x859338
// 004bae3d  50                   push eax
// 004bae3e  64892500000000       mov dword ptr fs:[0], esp
// 004bae45  56                   push esi
// 004bae46  8bf1                 mov esi, ecx
// 004bae48  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004bae50  e87bec1400           call 0x609ad0
// 004bae55  6a08                 push 8
// 004bae57  e8dcdb2500           call 0x718a38
// 004bae5c  83c404               add esp, 4
// 004bae5f  85c0                 test eax, eax
// 004bae61  7423                 je 0x4bae86
// 004bae63  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004bae67  8908                 mov dword ptr [eax], ecx
// 004bae69  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bae6d  895004               mov dword ptr [eax + 4], edx
// 004bae70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004bae74  85c9                 test ecx, ecx
// 004bae76  7414                 je 0x4bae8c
// 004bae78  83c104               add ecx, 4
// 004bae7b  ba01000000           mov edx, 1
// 004bae80  f00fc111             lock xadd dword ptr [ecx], edx
// 004bae84  eb02                 jmp 0x4bae88
// 004bae86  33c0                 xor eax, eax
// 004bae88  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004bae8c  894608               mov dword ptr [esi + 8], eax
// 004bae8f  c7460408000000       mov dword ptr [esi + 4], 8
// 004bae96  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004bae9e  85c9                 test ecx, ecx
// 004baea0  742c                 je 0x4baece
// 004baea2  8bf1                 mov esi, ecx
// 004baea4  83c104               add ecx, 4
// 004baea7  83c8ff               or eax, 0xffffffff
// 004baeaa  f00fc101             lock xadd dword ptr [ecx], eax
// 004baeae  751e                 jne 0x4baece
// 004baeb0  8b16                 mov edx, dword ptr [esi]
// 004baeb2  8b4204               mov eax, dword ptr [edx + 4]
// 004baeb5  8bce                 mov ecx, esi
// 004baeb7  ffd0                 call eax
// 004baeb9  8d4e08               lea ecx, [esi + 8]
// 004baebc  83caff               or edx, 0xffffffff
// 004baebf  f00fc111             lock xadd dword ptr [ecx], edx
// 004baec3  7509                 jne 0x4baece
// 004baec5  8b06                 mov eax, dword ptr [esi]
// 004baec7  8b5008               mov edx, dword ptr [eax + 8]
// 004baeca  8bce                 mov ecx, esi
// 004baecc  ffd2                 call edx
// 004baece  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004baed2  64890d00000000       mov dword ptr fs:[0], ecx
// 004baed9  5e                   pop esi
// 004baeda  83c40c               add esp, 0xc
// 004baedd  c20800               ret 8
// library openrbx-client/App\v8tree\Instance.cpp (function ?setValue@XmlNameValuePair@@QAEXVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
