// roc 2008-06 006c44f0  unit: CXTPToolBar  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c44f0
//
// 006c44f0  8b442404             mov eax, dword ptr [esp + 4]
// 006c44f4  56                   push esi
// 006c44f5  8bf1                 mov esi, ecx
// 006c44f7  398694010000         cmp dword ptr [esi + 0x194], eax
// 006c44fd  742b                 je 0x6c452a
// 006c44ff  898694010000         mov dword ptr [esi + 0x194], eax
// 006c4505  85c0                 test eax, eax
// 006c4507  7425                 je 0x6c452e
// 006c4509  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 006c450f  898690010000         mov dword ptr [esi + 0x190], eax
// 006c4515  85c0                 test eax, eax
// 006c4517  7411                 je 0x6c452a
// 006c4519  6a00                 push 0
// 006c451b  c786dc00000000000000 mov dword ptr [esi + 0xdc], 0
// 006c4525  e844c4fdff           call 0x6a096e
// 006c452a  5e                   pop esi
// 006c452b  c20400               ret 4
// 006c452e  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 006c4535  74f3                 je 0x6c452a
// 006c4537  6a08                 push 8
// 006c4539  c786dc00000001000000 mov dword ptr [esi + 0xdc], 1
// 006c4543  e826c4fdff           call 0x6a096e
// 006c4548  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 006c454f  75d9                 jne 0x6c452a
// 006c4551  8bce                 mov ecx, esi
// 006c4553  e8a83fffff           call 0x6b8500
// 006c4558  85c0                 test eax, eax
// 006c455a  74ce                 je 0x6c452a
// 006c455c  83782000             cmp dword ptr [eax + 0x20], 0
// 006c4560  74c8                 je 0x6c452a
// 006c4562  8b10                 mov edx, dword ptr [eax]
// 006c4564  8bc8                 mov ecx, eax
// 006c4566  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006c456c  5e                   pop esi
// 006c456d  c744240400000000     mov dword ptr [esp + 4], 0
// 006c4575  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnSetPreviewMode@CXTPToolBar@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
