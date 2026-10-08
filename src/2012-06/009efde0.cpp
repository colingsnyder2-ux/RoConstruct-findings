// roc 2012-06 009efde0  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009efde0
//
// 009efde0  83ec08               sub esp, 8
// 009efde3  837c241001           cmp dword ptr [esp + 0x10], 1
// 009efde8  56                   push esi
// 009efde9  8bf1                 mov esi, ecx
// 009efdeb  754b                 jne 0x9efe38
// 009efded  8d442404             lea eax, [esp + 4]
// 009efdf1  50                   push eax
// 009efdf2  ff158c3ab200         call dword ptr [0xb23a8c]
// 009efdf8  8b5620               mov edx, dword ptr [esi + 0x20]
// 009efdfb  8d4c2404             lea ecx, [esp + 4]
// 009efdff  51                   push ecx
// 009efe00  52                   push edx
// 009efe01  ff15883ab200         call dword ptr [0xb23a88]
// 009efe07  8b442408             mov eax, dword ptr [esp + 8]
// 009efe0b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009efe0f  50                   push eax
// 009efe10  51                   push ecx
// 009efe11  8bce                 mov ecx, esi
// 009efe13  e878ffffff           call 0x9efd90
// 009efe18  3d00010000           cmp eax, 0x100
// 009efe1d  7519                 jne 0x9efe38
// 009efe1f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 009efe25  52                   push edx
// 009efe26  ff15783bb200         call dword ptr [0xb23b78]
// 009efe2c  b801000000           mov eax, 1
// 009efe31  5e                   pop esi
// 009efe32  83c408               add esp, 8
// 009efe35  c20c00               ret 0xc
// 009efe38  8bce                 mov ecx, esi
// 009efe3a  e89f28f9ff           call 0x9826de
// 009efe3f  5e                   pop esi
// 009efe40  83c408               add esp, 8
// 009efe43  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
