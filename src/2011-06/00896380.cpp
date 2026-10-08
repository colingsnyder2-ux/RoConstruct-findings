// roc 2011-06 00896380  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00896380
//
// 00896380  56                   push esi
// 00896381  8bf1                 mov esi, ecx
// 00896383  837e6800             cmp dword ptr [esi + 0x68], 0
// 00896387  7449                 je 0x8963d2
// 00896389  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0089638f  e83c6ffeff           call 0x87d2d0
// 00896394  85c0                 test eax, eax
// 00896396  743a                 je 0x8963d2
// 00896398  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089639c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008963a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008963a4  50                   push eax
// 008963a5  51                   push ecx
// 008963a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008963aa  83ec10               sub esp, 0x10
// 008963ad  8bc4                 mov eax, esp
// 008963af  8910                 mov dword ptr [eax], edx
// 008963b1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008963b5  894804               mov dword ptr [eax + 4], ecx
// 008963b8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008963bc  895008               mov dword ptr [eax + 8], edx
// 008963bf  8b542420             mov edx, dword ptr [esp + 0x20]
// 008963c3  89480c               mov dword ptr [eax + 0xc], ecx
// 008963c6  52                   push edx
// 008963c7  8bce                 mov ecx, esi
// 008963c9  e832f1f7ff           call 0x815500
// 008963ce  5e                   pop esi
// 008963cf  c21c00               ret 0x1c
// 008963d2  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 008963d8  83f8ff               cmp eax, -1
// 008963db  7508                 jne 0x8963e5
// 008963dd  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 008963e3  eb02                 jmp 0x8963e7
// 008963e5  8bc8                 mov ecx, eax
// 008963e7  83f8ff               cmp eax, -1
// 008963ea  7506                 jne 0x8963f2
// 008963ec  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 008963f2  51                   push ecx
// 008963f3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008963f7  50                   push eax
// 008963f8  8d442414             lea eax, [esp + 0x14]
// 008963fc  50                   push eax
// 008963fd  e8184af7ff           call 0x80ae1a
// 00896402  5e                   pop esi
// 00896403  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
