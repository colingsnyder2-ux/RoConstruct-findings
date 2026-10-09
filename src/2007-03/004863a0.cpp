// roc 2007-03 004863a0  unit: seg_00480000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004863a0
//
// 004863a0  51                   push ecx
// 004863a1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004863a5  56                   push esi
// 004863a6  8bf1                 mov esi, ecx
// 004863a8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004863ab  8b01                 mov eax, dword ptr [ecx]
// 004863ad  8b4004               mov eax, dword ptr [eax + 4]
// 004863b0  52                   push edx
// 004863b1  8d542408             lea edx, [esp + 8]
// 004863b5  52                   push edx
// 004863b6  ffd0                 call eax
// 004863b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004863bc  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004863bf  8b11                 mov edx, dword ptr [ecx]
// 004863c1  8b5204               mov edx, dword ptr [edx + 4]
// 004863c4  50                   push eax
// 004863c5  8d442414             lea eax, [esp + 0x14]
// 004863c9  50                   push eax
// 004863ca  ffd2                 call edx
// 004863cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004863d0  33c0                 xor eax, eax
// 004863d2  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 004863d6  5e                   pop esi
// 004863d7  0f94c0               sete al
// 004863da  59                   pop ecx
// 004863db  c20800               ret 8
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?equalValues@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
