// roc 2007-03 005784c0  unit: seg_00570000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005784c0
//
// 005784c0  8b5104               mov edx, dword ptr [ecx + 4]
// 005784c3  8b4204               mov eax, dword ptr [edx + 4]
// 005784c6  83ec10               sub esp, 0x10
// 005784c9  80781500             cmp byte ptr [eax + 0x15], 0
// 005784cd  53                   push ebx
// 005784ce  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005784d2  56                   push esi
// 005784d3  57                   push edi
// 005784d4  7516                 jne 0x5784ec
// 005784d6  8b33                 mov esi, dword ptr [ebx]
// 005784d8  39700c               cmp dword ptr [eax + 0xc], esi
// 005784db  7305                 jae 0x5784e2
// 005784dd  8b4008               mov eax, dword ptr [eax + 8]
// 005784e0  eb04                 jmp 0x5784e6
// 005784e2  8bd0                 mov edx, eax
// 005784e4  8b00                 mov eax, dword ptr [eax]
// 005784e6  80781500             cmp byte ptr [eax + 0x15], 0
// 005784ea  74ec                 je 0x5784d8
// 005784ec  3b5104               cmp edx, dword ptr [ecx + 4]
// 005784ef  8bfa                 mov edi, edx
// 005784f1  8bf1                 mov esi, ecx
// 005784f3  7407                 je 0x5784fc
// 005784f5  8b03                 mov eax, dword ptr [ebx]
// 005784f7  3b420c               cmp eax, dword ptr [edx + 0xc]
// 005784fa  7324                 jae 0x578520
// 005784fc  8b13                 mov edx, dword ptr [ebx]
// 005784fe  8d44240c             lea eax, [esp + 0xc]
// 00578502  50                   push eax
// 00578503  57                   push edi
// 00578504  89542414             mov dword ptr [esp + 0x14], edx
// 00578508  56                   push esi
// 00578509  8d542420             lea edx, [esp + 0x20]
// 0057850d  52                   push edx
// 0057850e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00578516  e8c58bfbff           call 0x5310e0
// 0057851b  8b30                 mov esi, dword ptr [eax]
// 0057851d  8b7804               mov edi, dword ptr [eax + 4]
// 00578520  85f6                 test esi, esi
// 00578522  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 00578528  7502                 jne 0x57852c
// 0057852a  ffd3                 call ebx
// 0057852c  3b7e04               cmp edi, dword ptr [esi + 4]
// 0057852f  7502                 jne 0x578533
// 00578531  ffd3                 call ebx
// 00578533  8d4710               lea eax, [edi + 0x10]
// 00578536  5f                   pop edi
// 00578537  5e                   pop esi
// 00578538  5b                   pop ebx
// 00578539  83c410               add esp, 0x10
// 0057853c  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??A?$map@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@@std@@QAEAAW4CameraType@Camera@RBX@@ABQBVName@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
