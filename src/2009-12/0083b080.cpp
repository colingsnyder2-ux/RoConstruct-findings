// roc 2009-12 0083b080  unit: CXTPToolBar::CControlButtonExpand  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b080
//
// 0083b080  56                   push esi
// 0083b081  57                   push edi
// 0083b082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083b086  57                   push edi
// 0083b087  8bf1                 mov esi, ecx
// 0083b089  e8b2b8fbff           call 0x7f6940
// 0083b08e  85c0                 test eax, eax
// 0083b090  7507                 jne 0x83b099
// 0083b092  5f                   pop edi
// 0083b093  33c0                 xor eax, eax
// 0083b095  5e                   pop esi
// 0083b096  c20400               ret 4
// 0083b099  57                   push edi
// 0083b09a  e821faffff           call 0x83aac0
// 0083b09f  50                   push eax
// 0083b0a0  e8998bfbff           call 0x7f3c3e
// 0083b0a5  83c408               add esp, 8
// 0083b0a8  85c0                 test eax, eax
// 0083b0aa  74e6                 je 0x83b092
// 0083b0ac  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b0b2  85c9                 test ecx, ecx
// 0083b0b4  7420                 je 0x83b0d6
// 0083b0b6  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 0083b0bc  85c0                 test eax, eax
// 0083b0be  7416                 je 0x83b0d6
// 0083b0c0  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 0083b0c6  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0083b0cc  50                   push eax
// 0083b0cd  e89eb90000           call 0x846a70
// 0083b0d2  85c0                 test eax, eax
// 0083b0d4  74bc                 je 0x83b092
// 0083b0d6  5f                   pop edi
// 0083b0d7  b801000000           mov eax, 1
// 0083b0dc  5e                   pop esi
// 0083b0dd  c20400               ret 4
// copied from an identical function in another client (function ?Compare@CXTPControlPopup@@MAEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopup.cpp