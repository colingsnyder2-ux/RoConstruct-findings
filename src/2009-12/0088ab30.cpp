// roc 2009-12 0088ab30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ab30
//
// 0088ab30  53                   push ebx
// 0088ab31  55                   push ebp
// 0088ab32  56                   push esi
// 0088ab33  8bf1                 mov esi, ecx
// 0088ab35  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0088ab39  57                   push edi
// 0088ab3a  7462                 je 0x88ab9e
// 0088ab3c  8d8e38010000         lea ecx, [esi + 0x138]
// 0088ab42  e87910feff           call 0x86bbc0
// 0088ab47  85c0                 test eax, eax
// 0088ab49  7453                 je 0x88ab9e
// 0088ab4b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088ab4f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088ab53  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088ab57  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088ab5b  50                   push eax
// 0088ab5c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088ab60  51                   push ecx
// 0088ab61  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088ab65  52                   push edx
// 0088ab66  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088ab6a  50                   push eax
// 0088ab6b  51                   push ecx
// 0088ab6c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088ab70  83ec10               sub esp, 0x10
// 0088ab73  8bc4                 mov eax, esp
// 0088ab75  8910                 mov dword ptr [eax], edx
// 0088ab77  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088ab7b  894804               mov dword ptr [eax + 4], ecx
// 0088ab7e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088ab82  895008               mov dword ptr [eax + 8], edx
// 0088ab85  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088ab89  52                   push edx
// 0088ab8a  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ab8d  57                   push edi
// 0088ab8e  8bce                 mov ecx, esi
// 0088ab90  e86b68f7ff           call 0x801400
// 0088ab95  8bc7                 mov eax, edi
// 0088ab97  5f                   pop edi
// 0088ab98  5e                   pop esi
// 0088ab99  5d                   pop ebp
// 0088ab9a  5b                   pop ebx
// 0088ab9b  c22c00               ret 0x2c
// 0088ab9e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0088aba3  0f84df000000         je 0x88ac88
// 0088aba9  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0088abad  85db                 test ebx, ebx
// 0088abaf  750e                 jne 0x88abbf
// 0088abb1  6a33                 push 0x33
// 0088abb3  8bce                 mov ecx, esi
// 0088abb5  e8862af7ff           call 0x7fd640
// 0088abba  50                   push eax
// 0088abbb  6a23                 push 0x23
// 0088abbd  eb44                 jmp 0x88ac03
// 0088abbf  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088abc3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088abc7  85d2                 test edx, edx
// 0088abc9  740b                 je 0x88abd6
// 0088abcb  85c9                 test ecx, ecx
// 0088abcd  7413                 je 0x88abe2
// 0088abcf  b821000000           mov eax, 0x21
// 0088abd4  eb11                 jmp 0x88abe7
// 0088abd6  85c9                 test ecx, ecx
// 0088abd8  7508                 jne 0x88abe2
// 0088abda  8d4105               lea eax, [ecx + 5]
// 0088abdd  8d7934               lea edi, [ecx + 0x34]
// 0088abe0  eb17                 jmp 0x88abf9
// 0088abe2  b81f000000           mov eax, 0x1f
// 0088abe7  85d2                 test edx, edx
// 0088abe9  7509                 jne 0x88abf4
// 0088abeb  85c9                 test ecx, ecx
// 0088abed  7505                 jne 0x88abf4
// 0088abef  8d7a34               lea edi, [edx + 0x34]
// 0088abf2  eb05                 jmp 0x88abf9
// 0088abf4  bf20000000           mov edi, 0x20
// 0088abf9  50                   push eax
// 0088abfa  8bce                 mov ecx, esi
// 0088abfc  e83f2af7ff           call 0x7fd640
// 0088ac01  50                   push eax
// 0088ac02  57                   push edi
// 0088ac03  8bce                 mov ecx, esi
// 0088ac05  e8362af7ff           call 0x7fd640
// 0088ac0a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088ac0e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088ac12  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0088ac16  50                   push eax
// 0088ac17  83ec10               sub esp, 0x10
// 0088ac1a  8bc4                 mov eax, esp
// 0088ac1c  8908                 mov dword ptr [eax], ecx
// 0088ac1e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088ac22  895004               mov dword ptr [eax + 4], edx
// 0088ac25  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088ac29  894808               mov dword ptr [eax + 8], ecx
// 0088ac2c  55                   push ebp
// 0088ac2d  8bce                 mov ecx, esi
// 0088ac2f  89500c               mov dword ptr [eax + 0xc], edx
// 0088ac32  e80993f7ff           call 0x803f40
// 0088ac37  8b442438             mov eax, dword ptr [esp + 0x38]
// 0088ac3b  85c0                 test eax, eax
// 0088ac3d  7449                 je 0x88ac88
// 0088ac3f  85db                 test ebx, ebx
// 0088ac41  740a                 je 0x88ac4d
// 0088ac43  83f802               cmp eax, 2
// 0088ac46  b812000000           mov eax, 0x12
// 0088ac4b  7505                 jne 0x88ac52
// 0088ac4d  b823000000           mov eax, 0x23
// 0088ac52  50                   push eax
// 0088ac53  8bce                 mov ecx, esi
// 0088ac55  e8e629f7ff           call 0x7fd640
// 0088ac5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088ac5e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0088ac62  50                   push eax
// 0088ac63  50                   push eax
// 0088ac64  83ec10               sub esp, 0x10
// 0088ac67  8bc4                 mov eax, esp
// 0088ac69  8d5104               lea edx, [ecx + 4]
// 0088ac6c  8910                 mov dword ptr [eax], edx
// 0088ac6e  8d5f04               lea ebx, [edi + 4]
// 0088ac71  83c109               add ecx, 9
// 0088ac74  895804               mov dword ptr [eax + 4], ebx
// 0088ac77  894808               mov dword ptr [eax + 8], ecx
// 0088ac7a  83c709               add edi, 9
// 0088ac7d  55                   push ebp
// 0088ac7e  8bce                 mov ecx, esi
// 0088ac80  89780c               mov dword ptr [eax + 0xc], edi
// 0088ac83  e8b892f7ff           call 0x803f40
// 0088ac88  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088ac8c  5f                   pop edi
// 0088ac8d  5e                   pop esi
// 0088ac8e  5d                   pop ebp
// 0088ac8f  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0088ac96  c7000d000000         mov dword ptr [eax], 0xd
// 0088ac9c  5b                   pop ebx
// 0088ac9d  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlRadioButtonMark@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
