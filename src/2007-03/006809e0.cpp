// roc 2007-03 006809e0  unit: seg_00680000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006809e0
//
// 006809e0  56                   push esi
// 006809e1  8bf1                 mov esi, ecx
// 006809e3  e848ffffff           call 0x680930
// 006809e8  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006809ec  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006809ef  8b01                 mov eax, dword ptr [ecx]
// 006809f1  8b4004               mov eax, dword ptr [eax + 4]
// 006809f4  52                   push edx
// 006809f5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006809f9  52                   push edx
// 006809fa  ffd0                 call eax
// 006809fc  85c0                 test eax, eax
// 006809fe  7506                 jne 0x680a06
// 00680a00  33c0                 xor eax, eax
// 00680a02  5e                   pop esi
// 00680a03  c20800               ret 8
// 00680a06  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00680a09  8b11                 mov edx, dword ptr [ecx]
// 00680a0b  8b4214               mov eax, dword ptr [edx + 0x14]
// 00680a0e  ffd0                 call eax
// 00680a10  85c0                 test eax, eax
// 00680a12  894634               mov dword ptr [esi + 0x34], eax
// 00680a15  74e9                 je 0x680a00
// 00680a17  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00680a1a  51                   push ecx
// 00680a1b  8bc8                 mov ecx, eax
// 00680a1d  e88ef80700           call 0x7002b0
// 00680a22  33d2                 xor edx, edx
// 00680a24  85c0                 test eax, eax
// 00680a26  0f9dc2               setge dl
// 00680a29  5e                   pop esi
// 00680a2a  8bc2                 mov eax, edx
// 00680a2c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManager.cpp (function ?ReadSkinData@CXTPSkinManager@@IAEHPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManager.cpp
