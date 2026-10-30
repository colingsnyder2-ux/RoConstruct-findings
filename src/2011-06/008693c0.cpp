// from server: 100% by auto
// roc 2011-06 008693c0  unit: CXTPPropertyGridToolBar  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008693c0
//
// 008693c0  8b442408             mov eax, dword ptr [esp + 8]
// 008693c4  53                   push ebx
// 008693c5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008693c9  c70000000000         mov dword ptr [eax], 0
// 008693cf  8b430c               mov eax, dword ptr [ebx + 0xc]
// 008693d2  83e801               sub eax, 1
// 008693d5  7556                 jne 0x86942d
// 008693d7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008693da  56                   push esi
// 008693db  57                   push edi
// 008693dc  8b3db819a400         mov edi, dword ptr [0xa419b8]
// 008693e2  51                   push ecx
// 008693e3  ffd7                 call edi
// 008693e5  50                   push eax
// 008693e6  e83d0ffaff           call 0x80a328
// 008693eb  8bf0                 mov esi, eax
// 008693ed  8b5620               mov edx, dword ptr [esi + 0x20]
// 008693f0  52                   push edx
// 008693f1  ffd7                 call edi
// 008693f3  50                   push eax
// 008693f4  e82f0ffaff           call 0x80a328
// 008693f9  8b7620               mov esi, dword ptr [esi + 0x20]
// 008693fc  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 008693ff  8b4020               mov eax, dword ptr [eax + 0x20]
// 00869402  56                   push esi
// 00869403  51                   push ecx
// 00869404  6838010000           push 0x138
// 00869409  50                   push eax
// 0086940a  ff15c019a400         call dword ptr [0xa419c0]
// 00869410  5f                   pop edi
// 00869411  5e                   pop esi
// 00869412  85c0                 test eax, eax
// 00869414  7508                 jne 0x86941e
// 00869416  6a0f                 push 0xf
// 00869418  ff15701aa400         call dword ptr [0xa41a70]
// 0086941e  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00869421  50                   push eax
// 00869422  8d4b14               lea ecx, [ebx + 0x14]
// 00869425  51                   push ecx
// 00869426  52                   push edx
// 00869427  ff15e81ba400         call dword ptr [0xa41be8]
// 0086942d  5b                   pop ebx
// 0086942e  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnCustomDraw@CXTPPropertyGridToolBar@@IAEXPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
