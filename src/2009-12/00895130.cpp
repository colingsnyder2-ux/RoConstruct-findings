// roc 2009-12 00895130  unit: CXTPRibbonBar  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895130
//
// 00895130  56                   push esi
// 00895131  8bf1                 mov esi, ecx
// 00895133  e8c8f3f6ff           call 0x804500
// 00895138  85c0                 test eax, eax
// 0089513a  0f8599000000         jne 0x8951d9
// 00895140  8bce                 mov ecx, esi
// 00895142  e889fbffff           call 0x894cd0
// 00895147  85c0                 test eax, eax
// 00895149  0f848a000000         je 0x8951d9
// 0089514f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00895153  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00895157  50                   push eax
// 00895158  51                   push ecx
// 00895159  8d96fc010000         lea edx, [esi + 0x1fc]
// 0089515f  52                   push edx
// 00895160  ff155cca9800         call dword ptr [0x98ca5c]
// 00895166  85c0                 test eax, eax
// 00895168  746f                 je 0x8951d9
// 0089516a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089516e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00895172  50                   push eax
// 00895173  51                   push ecx
// 00895174  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0089517a  e8a104fbff           call 0x845620
// 0089517f  85c0                 test eax, eax
// 00895181  7556                 jne 0x8951d9
// 00895183  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00895187  8b442408             mov eax, dword ptr [esp + 8]
// 0089518b  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 00895191  52                   push edx
// 00895192  50                   push eax
// 00895193  e888540500           call 0x8ea620
// 00895198  85c0                 test eax, eax
// 0089519a  753d                 jne 0x8951d9
// 0089519c  8bce                 mov ecx, esi
// 0089519e  e8ed1ef7ff           call 0x807090
// 008951a3  8bc8                 mov ecx, eax
// 008951a5  e8c8120900           call 0x926472
// 008951aa  8b8e00020000         mov ecx, dword ptr [esi + 0x200]
// 008951b0  83c105               add ecx, 5
// 008951b3  394c240c             cmp dword ptr [esp + 0xc], ecx
// 008951b7  7d17                 jge 0x8951d0
// 008951b9  a900000400           test eax, 0x40000
// 008951be  7410                 je 0x8951d0
// 008951c0  a900000001           test eax, 0x1000000
// 008951c5  7509                 jne 0x8951d0
// 008951c7  b80c000000           mov eax, 0xc
// 008951cc  5e                   pop esi
// 008951cd  c20800               ret 8
// 008951d0  b802000000           mov eax, 2
// 008951d5  5e                   pop esi
// 008951d6  c20800               ret 8
// 008951d9  33c0                 xor eax, eax
// 008951db  5e                   pop esi
// 008951dc  c20800               ret 8
// copied from an identical function in another client (function ?HitTestCaption@CXTPRibbonBar@@IBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp