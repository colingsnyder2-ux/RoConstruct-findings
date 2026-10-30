// roc 2010-06 00802a10  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00802a10
//
// 00802a10  56                   push esi
// 00802a11  8bf1                 mov esi, ecx
// 00802a13  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00802a16  8d44240c             lea eax, [esp + 0xc]
// 00802a1a  50                   push eax
// 00802a1b  51                   push ecx
// 00802a1c  ff1558bc9e00         call dword ptr [0x9ebc58]
// 00802a22  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00802a28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00802a2c  83c020               add eax, 0x20
// 00802a2f  85c9                 test ecx, ecx
// 00802a31  7c2c                 jl 0x802a5f
// 00802a33  3b4808               cmp ecx, dword ptr [eax + 8]
// 00802a36  7d27                 jge 0x802a5f
// 00802a38  8b5004               mov edx, dword ptr [eax + 4]
// 00802a3b  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00802a3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00802a42  89483c               mov dword ptr [eax + 0x3c], ecx
// 00802a45  8b542410             mov edx, dword ptr [esp + 0x10]
// 00802a49  895040               mov dword ptr [eax + 0x40], edx
// 00802a4c  8b16                 mov edx, dword ptr [esi]
// 00802a4e  50                   push eax
// 00802a4f  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00802a55  6a0a                 push 0xa
// 00802a57  8bce                 mov ecx, esi
// 00802a59  ffd0                 call eax
// 00802a5b  5e                   pop esi
// 00802a5c  c20c00               ret 0xc
// 00802a5f  e8e851faff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnVerbClick@CXTPPropertyGrid@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp