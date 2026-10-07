// roc 2010-06 007920e0  unit: RBX::ContactStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007920e0
//
// 007920e0  53                   push ebx
// 007920e1  55                   push ebp
// 007920e2  56                   push esi
// 007920e3  8bf1                 mov esi, ecx
// 007920e5  807e0400             cmp byte ptr [esi + 4], 0
// 007920e9  57                   push edi
// 007920ea  8b3e                 mov edi, dword ptr [esi]
// 007920ec  8b1f                 mov ebx, dword ptr [edi]
// 007920ee  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007920f1  7430                 je 0x792123
// 007920f3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 007920f8  740a                 je 0x792104
// 007920fa  8b442414             mov eax, dword ptr [esp + 0x14]
// 007920fe  8b08                 mov ecx, dword ptr [eax]
// 00792100  8bc3                 mov eax, ebx
// 00792102  eb08                 jmp 0x79210c
// 00792104  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00792108  8b09                 mov ecx, dword ptr [ecx]
// 0079210a  8bc5                 mov eax, ebp
// 0079210c  2bc1                 sub eax, ecx
// 0079210e  85c0                 test eax, eax
// 00792110  7611                 jbe 0x792123
// 00792112  8b5608               mov edx, dword ptr [esi + 8]
// 00792115  50                   push eax
// 00792116  51                   push ecx
// 00792117  52                   push edx
// 00792118  e8a321deff           call 0x5742c0
// 0079211d  83c40c               add esp, 0xc
// 00792120  894608               mov dword ptr [esi + 8], eax
// 00792123  8b4708               mov eax, dword ptr [edi + 8]
// 00792126  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079212a  89460c               mov dword ptr [esi + 0xc], eax
// 0079212d  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00792130  8b442418             mov eax, dword ptr [esp + 0x18]
// 00792134  5f                   pop edi
// 00792135  894e10               mov dword ptr [esi + 0x10], ecx
// 00792138  891a                 mov dword ptr [edx], ebx
// 0079213a  5e                   pop esi
// 0079213b  8928                 mov dword ptr [eax], ebp
// 0079213d  5d                   pop ebp
// 0079213e  5b                   pop ebx
// 0079213f  c20c00               ret 0xc
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?after@zlib_base@detail@iostreams@boost@@IAEXAAPBDAAPAD_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
