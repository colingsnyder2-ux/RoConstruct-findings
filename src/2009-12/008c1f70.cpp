// roc 2009-12 008c1f70  unit: CXTPImageEditorDlg::CDlgToolBar  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1f70
//
// 008c1f70  6aff                 push -1
// 008c1f72  68833f9600           push 0x963f83
// 008c1f77  64a100000000         mov eax, dword ptr fs:[0]
// 008c1f7d  50                   push eax
// 008c1f7e  81eca4000000         sub esp, 0xa4
// 008c1f84  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1f89  33c4                 xor eax, esp
// 008c1f8b  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008c1f92  53                   push ebx
// 008c1f93  55                   push ebp
// 008c1f94  56                   push esi
// 008c1f95  57                   push edi
// 008c1f96  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1f9b  33c4                 xor eax, esp
// 008c1f9d  50                   push eax
// 008c1f9e  8d8424b8000000       lea eax, [esp + 0xb8]
// 008c1fa5  64a300000000         mov dword ptr fs:[0], eax
// 008c1fab  8bf1                 mov esi, ecx
// 008c1fad  56                   push esi
// 008c1fae  8d4c2464             lea ecx, [esp + 0x64]
// 008c1fb2  89742428             mov dword ptr [esp + 0x28], esi
// 008c1fb6  e83522f3ff           call 0x7f41f0
// 008c1fbb  56                   push esi
// 008c1fbc  8d4c2418             lea ecx, [esp + 0x18]
// 008c1fc0  c78424c400000000000000 mov dword ptr [esp + 0xc4], 0
// 008c1fcb  e80093f8ff           call 0x84b2d0
// 008c1fd0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008c1fd4  8d442414             lea eax, [esp + 0x14]
// 008c1fd8  50                   push eax
// 008c1fd9  51                   push ecx
// 008c1fda  8d4c2438             lea ecx, [esp + 0x38]
// 008c1fde  e84d93f8ff           call 0x84b330
// 008c1fe3  8b4654               mov eax, dword ptr [esi + 0x54]
// 008c1fe6  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 008c1fee  8d4c2430             lea ecx, [esp + 0x30]
// 008c1ff2  3dfffeff00           cmp eax, 0xfffeff
// 008c1ff7  740d                 je 0x8c2006
// 008c1ff9  50                   push eax
// 008c1ffa  8d542418             lea edx, [esp + 0x18]
// 008c1ffe  52                   push edx
// 008c1fff  e8fa25f3ff           call 0x7f45fe
// 008c2004  eb77                 jmp 0x8c207d
// 008c2006  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008c200a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008c200e  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008c2012  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008c2016  68ffffff00           push 0xffffff
// 008c201b  8d442418             lea eax, [esp + 0x18]
// 008c201f  50                   push eax
// 008c2020  e8d925f3ff           call 0x7f45fe
// 008c2025  8bc7                 mov eax, edi
// 008c2027  2bc3                 sub eax, ebx
// 008c2029  99                   cdq 
// 008c202a  2bc2                 sub eax, edx
// 008c202c  8bc8                 mov ecx, eax
// 008c202e  8bc6                 mov eax, esi
// 008c2030  2bc5                 sub eax, ebp
// 008c2032  99                   cdq 
// 008c2033  68ebebeb00           push 0xebebeb
// 008c2038  d1f9                 sar ecx, 1
// 008c203a  51                   push ecx
// 008c203b  2bc2                 sub eax, edx
// 008c203d  d1f8                 sar eax, 1
// 008c203f  50                   push eax
// 008c2040  53                   push ebx
// 008c2041  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008c2045  55                   push ebp
// 008c2046  8d4c2444             lea ecx, [esp + 0x44]
// 008c204a  8944243c             mov dword ptr [esp + 0x3c], eax
// 008c204e  e843440600           call 0x926496
// 008c2053  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008c2057  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c205b  68ebebeb00           push 0xebebeb
// 008c2060  2bf8                 sub edi, eax
// 008c2062  2bf1                 sub esi, ecx
// 008c2064  2bfb                 sub edi, ebx
// 008c2066  57                   push edi
// 008c2067  2bf5                 sub esi, ebp
// 008c2069  56                   push esi
// 008c206a  03c3                 add eax, ebx
// 008c206c  03cd                 add ecx, ebp
// 008c206e  50                   push eax
// 008c206f  51                   push ecx
// 008c2070  8d4c2444             lea ecx, [esp + 0x44]
// 008c2074  e81d440600           call 0x926496
// 008c2079  8b742424             mov esi, dword ptr [esp + 0x24]
// 008c207d  837e5800             cmp dword ptr [esi + 0x58], 0
// 008c2081  7527                 jne 0x8c20aa
// 008c2083  e848d9f6ff           call 0x82f9d0
// 008c2088  6a15                 push 0x15
// 008c208a  8bc8                 mov ecx, eax
// 008c208c  e86fd0f6ff           call 0x82f100
// 008c2091  8bf0                 mov esi, eax
// 008c2093  e838d9f6ff           call 0x82f9d0
// 008c2098  6a15                 push 0x15
// 008c209a  8bc8                 mov ecx, eax
// 008c209c  e85fd0f6ff           call 0x82f100
// 008c20a1  56                   push esi
// 008c20a2  50                   push eax
// 008c20a3  8d4c241c             lea ecx, [esp + 0x1c]
// 008c20a7  51                   push ecx
// 008c20a8  eb4f                 jmp 0x8c20f9
// 008c20aa  6a00                 push 0
// 008c20ac  6a00                 push 0
// 008c20ae  8d54241c             lea edx, [esp + 0x1c]
// 008c20b2  52                   push edx
// 008c20b3  8d4c243c             lea ecx, [esp + 0x3c]
// 008c20b7  e83c25f3ff           call 0x7f45f8
// 008c20bc  8b3558ca9800         mov esi, dword ptr [0x98ca58]
// 008c20c2  6aff                 push -1
// 008c20c4  6aff                 push -1
// 008c20c6  8d44241c             lea eax, [esp + 0x1c]
// 008c20ca  50                   push eax
// 008c20cb  ffd6                 call esi
// 008c20cd  68ffffff00           push 0xffffff
// 008c20d2  68ffffff00           push 0xffffff
// 008c20d7  8d4c241c             lea ecx, [esp + 0x1c]
// 008c20db  51                   push ecx
// 008c20dc  8d4c243c             lea ecx, [esp + 0x3c]
// 008c20e0  e81325f3ff           call 0x7f45f8
// 008c20e5  6aff                 push -1
// 008c20e7  6aff                 push -1
// 008c20e9  8d54241c             lea edx, [esp + 0x1c]
// 008c20ed  52                   push edx
// 008c20ee  ffd6                 call esi
// 008c20f0  6a00                 push 0
// 008c20f2  6a00                 push 0
// 008c20f4  8d44241c             lea eax, [esp + 0x1c]
// 008c20f8  50                   push eax
// 008c20f9  8d4c243c             lea ecx, [esp + 0x3c]
// 008c20fd  e8f624f3ff           call 0x7f45f8
// 008c2102  8d4c2430             lea ecx, [esp + 0x30]
// 008c2106  c68424c000000000     mov byte ptr [esp + 0xc0], 0
// 008c210e  e82d94f8ff           call 0x84b540
// 008c2113  8d4c2460             lea ecx, [esp + 0x60]
// 008c2117  c78424c0000000ffffffff mov dword ptr [esp + 0xc0], 0xffffffff
// 008c2122  e8c320f3ff           call 0x7f41ea
// 008c2127  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 008c212e  64890d00000000       mov dword ptr fs:[0], ecx
// 008c2135  59                   pop ecx
// 008c2136  5f                   pop edi
// 008c2137  5e                   pop esi
// 008c2138  5d                   pop ebp
// 008c2139  5b                   pop ebx
// 008c213a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008c2141  33cc                 xor ecx, esp
// 008c2143  e85232f3ff           call 0x7f539a
// 008c2148  81c4b0000000         add esp, 0xb0
// 008c214e  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPImageEditorPicker@@IAEXXZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp