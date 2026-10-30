// roc 2011-06 008ceb60  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ceb60
//
// 008ceb60  83ec10               sub esp, 0x10
// 008ceb63  53                   push ebx
// 008ceb64  8bd9                 mov ebx, ecx
// 008ceb66  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 008ceb6c  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 008ceb73  0f84c0000000         je 0x8cec39
// 008ceb79  56                   push esi
// 008ceb7a  8b742424             mov esi, dword ptr [esp + 0x24]
// 008ceb7e  57                   push edi
// 008ceb7f  56                   push esi
// 008ceb80  8d4c2410             lea ecx, [esp + 0x10]
// 008ceb84  51                   push ecx
// 008ceb85  ff15681ca400         call dword ptr [0xa41c68]
// 008ceb8b  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 008ceb91  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 008ceb97  e87cda0f00           call 0x9cc618
// 008ceb9c  a900000021           test eax, 0x21000000
// 008ceba1  751e                 jne 0x8cebc1
// 008ceba3  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 008ceba9  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008cebaf  8b442424             mov eax, dword ptr [esp + 0x24]
// 008cebb3  51                   push ecx
// 008cebb4  8d542410             lea edx, [esp + 0x10]
// 008cebb8  52                   push edx
// 008cebb9  50                   push eax
// 008cebba  8bcb                 mov ecx, ebx
// 008cebbc  e85ffeffff           call 0x8cea20
// 008cebc1  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 008cebc7  e8e4f4f7ff           call 0x84e0b0
// 008cebcc  8b7804               mov edi, dword ptr [eax + 4]
// 008cebcf  85ff                 test edi, edi
// 008cebd1  7449                 je 0x8cec1c
// 008cebd3  8bc7                 mov eax, edi
// 008cebd5  8b4008               mov eax, dword ptr [eax + 8]
// 008cebd8  83781803             cmp dword ptr [eax + 0x18], 3
// 008cebdc  8b3f                 mov edi, dword ptr [edi]
// 008cebde  7534                 jne 0x8cec14
// 008cebe0  8db008ffffff         lea esi, [eax - 0xf8]
// 008cebe6  85f6                 test esi, esi
// 008cebe8  742a                 je 0x8cec14
// 008cebea  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cebed  85c0                 test eax, eax
// 008cebef  7423                 je 0x8cec14
// 008cebf1  50                   push eax
// 008cebf2  ff15201ca400         call dword ptr [0xa41c20]
// 008cebf8  85c0                 test eax, eax
// 008cebfa  7418                 je 0x8cec14
// 008cebfc  39742420             cmp dword ptr [esp + 0x20], esi
// 008cec00  7412                 je 0x8cec14
// 008cec02  8b542424             mov edx, dword ptr [esp + 0x24]
// 008cec06  56                   push esi
// 008cec07  8d4c2410             lea ecx, [esp + 0x10]
// 008cec0b  51                   push ecx
// 008cec0c  52                   push edx
// 008cec0d  8bcb                 mov ecx, ebx
// 008cec0f  e80cfeffff           call 0x8cea20
// 008cec14  85ff                 test edi, edi
// 008cec16  75bb                 jne 0x8cebd3
// 008cec18  8b742428             mov esi, dword ptr [esp + 0x28]
// 008cec1c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008cec20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cec24  8b542414             mov edx, dword ptr [esp + 0x14]
// 008cec28  8906                 mov dword ptr [esi], eax
// 008cec2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 008cec2e  894e04               mov dword ptr [esi + 4], ecx
// 008cec31  895608               mov dword ptr [esi + 8], edx
// 008cec34  5f                   pop edi
// 008cec35  89460c               mov dword ptr [esi + 0xc], eax
// 008cec38  5e                   pop esi
// 008cec39  5b                   pop ebx
// 008cec3a  83c410               add esp, 0x10
// 008cec3d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
