// roc 2009-12 008111c0  unit: CXTPToolBar::CControlButtonCustomize  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008111c0
//
// 008111c0  56                   push esi
// 008111c1  8bf1                 mov esi, ecx
// 008111c3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008111c9  85c9                 test ecx, ecx
// 008111cb  0f84c6000000         je 0x811297
// 008111d1  57                   push edi
// 008111d2  e8f932ffff           call 0x8044d0
// 008111d7  8bf8                 mov edi, eax
// 008111d9  85ff                 test edi, edi
// 008111db  0f84b5000000         je 0x811296
// 008111e1  8b4774               mov eax, dword ptr [edi + 0x74]
// 008111e4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 008111eb  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008111f1  85c9                 test ecx, ecx
// 008111f3  747f                 je 0x811274
// 008111f5  f681d000000010       test byte ptr [ecx + 0xd0], 0x10
// 008111fc  7416                 je 0x811214
// 008111fe  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00811204  8b11                 mov edx, dword ptr [ecx]
// 00811206  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0081120c  83e0ef               and eax, 0xffffffef
// 0081120f  50                   push eax
// 00811210  ffd2                 call edx
// 00811212  eb14                 jmp 0x811228
// 00811214  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0081121a  8b01                 mov eax, dword ptr [ecx]
// 0081121c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00811222  83ca10               or edx, 0x10
// 00811225  52                   push edx
// 00811226  ffd0                 call eax
// 00811228  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0081122e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00811234  c1e804               shr eax, 4
// 00811237  f7d0                 not eax
// 00811239  83e001               and eax, 1
// 0081123c  3986a0000000         cmp dword ptr [esi + 0xa0], eax
// 00811242  740f                 je 0x811253
// 00811244  6a01                 push 1
// 00811246  8bce                 mov ecx, esi
// 00811248  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0081124e  e86d54feff           call 0x7f66c0
// 00811253  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 00811259  8b8a00010000         mov ecx, dword ptr [edx + 0x100]
// 0081125f  8b01                 mov eax, dword ptr [ecx]
// 00811261  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00811267  ffd2                 call edx
// 00811269  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0081126f  e89c32ffff           call 0x804510
// 00811274  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0081127b  7419                 je 0x811296
// 0081127d  8bcf                 mov ecx, edi
// 0081127f  e85c4c0000           call 0x815ee0
// 00811284  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0081128a  8b01                 mov eax, dword ptr [ecx]
// 0081128c  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 00811292  6a01                 push 1
// 00811294  ffd2                 call edx
// 00811296  5f                   pop edi
// 00811297  5e                   pop esi
// 00811298  c3                   ret 
// copied from an identical function in another client (function ?OnExecute@CControlButtonCustomize@CXTPToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp