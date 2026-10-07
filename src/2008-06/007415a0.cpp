// roc 2008-06 007415a0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007415a0
//
// 007415a0  53                   push ebx
// 007415a1  55                   push ebp
// 007415a2  56                   push esi
// 007415a3  8bf1                 mov esi, ecx
// 007415a5  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 007415a9  57                   push edi
// 007415aa  7462                 je 0x74160e
// 007415ac  8d8e38010000         lea ecx, [esi + 0x138]
// 007415b2  e8796efdff           call 0x718430
// 007415b7  85c0                 test eax, eax
// 007415b9  7453                 je 0x74160e
// 007415bb  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007415bf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007415c3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007415c7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007415cb  50                   push eax
// 007415cc  8b442434             mov eax, dword ptr [esp + 0x34]
// 007415d0  51                   push ecx
// 007415d1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007415d5  52                   push edx
// 007415d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 007415da  50                   push eax
// 007415db  51                   push ecx
// 007415dc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007415e0  83ec10               sub esp, 0x10
// 007415e3  8bc4                 mov eax, esp
// 007415e5  8910                 mov dword ptr [eax], edx
// 007415e7  8b542448             mov edx, dword ptr [esp + 0x48]
// 007415eb  894804               mov dword ptr [eax + 4], ecx
// 007415ee  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007415f2  895008               mov dword ptr [eax + 8], edx
// 007415f5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007415f9  52                   push edx
// 007415fa  89480c               mov dword ptr [eax + 0xc], ecx
// 007415fd  57                   push edi
// 007415fe  8bce                 mov ecx, esi
// 00741600  e86b07f7ff           call 0x6b1d70
// 00741605  8bc7                 mov eax, edi
// 00741607  5f                   pop edi
// 00741608  5e                   pop esi
// 00741609  5d                   pop ebp
// 0074160a  5b                   pop ebx
// 0074160b  c22c00               ret 0x2c
// 0074160e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00741613  0f84df000000         je 0x7416f8
// 00741619  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0074161d  85db                 test ebx, ebx
// 0074161f  750e                 jne 0x74162f
// 00741621  6a33                 push 0x33
// 00741623  8bce                 mov ecx, esi
// 00741625  e846caf6ff           call 0x6ae070
// 0074162a  50                   push eax
// 0074162b  6a23                 push 0x23
// 0074162d  eb44                 jmp 0x741673
// 0074162f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00741633  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00741637  85d2                 test edx, edx
// 00741639  740b                 je 0x741646
// 0074163b  85c9                 test ecx, ecx
// 0074163d  7413                 je 0x741652
// 0074163f  b821000000           mov eax, 0x21
// 00741644  eb11                 jmp 0x741657
// 00741646  85c9                 test ecx, ecx
// 00741648  7508                 jne 0x741652
// 0074164a  8d4105               lea eax, [ecx + 5]
// 0074164d  8d7934               lea edi, [ecx + 0x34]
// 00741650  eb17                 jmp 0x741669
// 00741652  b81f000000           mov eax, 0x1f
// 00741657  85d2                 test edx, edx
// 00741659  7509                 jne 0x741664
// 0074165b  85c9                 test ecx, ecx
// 0074165d  7505                 jne 0x741664
// 0074165f  8d7a34               lea edi, [edx + 0x34]
// 00741662  eb05                 jmp 0x741669
// 00741664  bf20000000           mov edi, 0x20
// 00741669  50                   push eax
// 0074166a  8bce                 mov ecx, esi
// 0074166c  e8ffc9f6ff           call 0x6ae070
// 00741671  50                   push eax
// 00741672  57                   push edi
// 00741673  8bce                 mov ecx, esi
// 00741675  e8f6c9f6ff           call 0x6ae070
// 0074167a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0074167e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00741682  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00741686  50                   push eax
// 00741687  83ec10               sub esp, 0x10
// 0074168a  8bc4                 mov eax, esp
// 0074168c  8908                 mov dword ptr [eax], ecx
// 0074168e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00741692  895004               mov dword ptr [eax + 4], edx
// 00741695  8b542440             mov edx, dword ptr [esp + 0x40]
// 00741699  894808               mov dword ptr [eax + 8], ecx
// 0074169c  55                   push ebp
// 0074169d  8bce                 mov ecx, esi
// 0074169f  89500c               mov dword ptr [eax + 0xc], edx
// 007416a2  e8d931f7ff           call 0x6b4880
// 007416a7  8b442438             mov eax, dword ptr [esp + 0x38]
// 007416ab  85c0                 test eax, eax
// 007416ad  7449                 je 0x7416f8
// 007416af  85db                 test ebx, ebx
// 007416b1  740a                 je 0x7416bd
// 007416b3  83f802               cmp eax, 2
// 007416b6  b812000000           mov eax, 0x12
// 007416bb  7505                 jne 0x7416c2
// 007416bd  b823000000           mov eax, 0x23
// 007416c2  50                   push eax
// 007416c3  8bce                 mov ecx, esi
// 007416c5  e8a6c9f6ff           call 0x6ae070
// 007416ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007416ce  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007416d2  50                   push eax
// 007416d3  50                   push eax
// 007416d4  83ec10               sub esp, 0x10
// 007416d7  8bc4                 mov eax, esp
// 007416d9  8d5104               lea edx, [ecx + 4]
// 007416dc  8910                 mov dword ptr [eax], edx
// 007416de  8d5f04               lea ebx, [edi + 4]
// 007416e1  83c109               add ecx, 9
// 007416e4  895804               mov dword ptr [eax + 4], ebx
// 007416e7  894808               mov dword ptr [eax + 8], ecx
// 007416ea  83c709               add edi, 9
// 007416ed  55                   push ebp
// 007416ee  8bce                 mov ecx, esi
// 007416f0  89780c               mov dword ptr [eax + 0xc], edi
// 007416f3  e88831f7ff           call 0x6b4880
// 007416f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007416fc  5f                   pop edi
// 007416fd  5e                   pop esi
// 007416fe  5d                   pop ebp
// 007416ff  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00741706  c7000d000000         mov dword ptr [eax], 0xd
// 0074170c  5b                   pop ebx
// 0074170d  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
