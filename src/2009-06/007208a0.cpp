// from server: 100% by tester
// roc 2008-06 006ac1c0  unit: CRobloxControlColorSelector  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ac1c0
//
// 006ac1c0  56                   push esi
// 006ac1c1  8bf1                 mov esi, ecx
// 006ac1c3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ac1c9  85c9                 test ecx, ecx
// 006ac1cb  0f840d010000         je 0x6ac2de
// 006ac1d1  53                   push ebx
// 006ac1d2  e8398c0000           call 0x6b4e10
// 006ac1d7  8bd8                 mov ebx, eax
// 006ac1d9  85db                 test ebx, ebx
// 006ac1db  0f84fc000000         je 0x6ac2dd
// 006ac1e1  397358               cmp dword ptr [ebx + 0x58], esi
// 006ac1e4  752e                 jne 0x6ac214
// 006ac1e6  8b06                 mov eax, dword ptr [esi]
// 006ac1e8  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 006ac1ee  8bce                 mov ecx, esi
// 006ac1f0  ffd2                 call edx
// 006ac1f2  85c0                 test eax, eax
// 006ac1f4  741e                 je 0x6ac214
// 006ac1f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ac1fa  8b06                 mov eax, dword ptr [esi]
// 006ac1fc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ac200  8b800c010000         mov eax, dword ptr [eax + 0x10c]
// 006ac206  51                   push ecx
// 006ac207  52                   push edx
// 006ac208  8bce                 mov ecx, esi
// 006ac20a  ffd0                 call eax
// 006ac20c  85c0                 test eax, eax
// 006ac20e  0f85c9000000         jne 0x6ac2dd
// 006ac214  57                   push edi
// 006ac215  56                   push esi
// 006ac216  8bcb                 mov ecx, ebx
// 006ac218  e8d375ffff           call 0x6a37f0
// 006ac21d  8b4b4c               mov ecx, dword ptr [ebx + 0x4c]
// 006ac220  6a00                 push 0
// 006ac222  56                   push esi
// 006ac223  e848e40600           call 0x71a670
// 006ac228  85c0                 test eax, eax
// 006ac22a  7409                 je 0x6ac235
// 006ac22c  83f802               cmp eax, 2
// 006ac22f  0f859c000000         jne 0x6ac2d1
// 006ac235  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 006ac23b  6a00                 push 0
// 006ac23d  6aff                 push -1
// 006ac23f  8bcf                 mov ecx, edi
// 006ac241  e88aac0000           call 0x6b6ed0
// 006ac246  8b17                 mov edx, dword ptr [edi]
// 006ac248  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 006ac24e  6a00                 push 0
// 006ac250  6aff                 push -1
// 006ac252  8bcf                 mov ecx, edi
// 006ac254  ffd0                 call eax
// 006ac256  397358               cmp dword ptr [ebx + 0x58], esi
// 006ac259  7509                 jne 0x6ac264
// 006ac25b  6a00                 push 0
// 006ac25d  8bcb                 mov ecx, ebx
// 006ac25f  e88c75ffff           call 0x6a37f0
// 006ac264  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 006ac26b  7426                 je 0x6ac293
// 006ac26d  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006ac273  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 006ac276  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006ac27c  4a                   dec edx
// 006ac27d  3bc2                 cmp eax, edx
// 006ac27f  7d12                 jge 0x6ac293
// 006ac281  40                   inc eax
// 006ac282  50                   push eax
// 006ac283  e8f82dd8ff           call 0x42f080
// 006ac288  8b10                 mov edx, dword ptr [eax]
// 006ac28a  8bc8                 mov ecx, eax
// 006ac28c  8b4264               mov eax, dword ptr [edx + 0x64]
// 006ac28f  6a01                 push 1
// 006ac291  ffd0                 call eax
// 006ac293  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 006ac29a  751b                 jne 0x6ac2b7
// 006ac29c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 006ac2a2  83782c01             cmp dword ptr [eax + 0x2c], 1
// 006ac2a6  7e0f                 jle 0x6ac2b7
// 006ac2a8  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006ac2ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 006ac2ae  8b11                 mov edx, dword ptr [ecx]
// 006ac2b0  8b4264               mov eax, dword ptr [edx + 0x64]
// 006ac2b3  6a00                 push 0
// 006ac2b5  ffd0                 call eax
// 006ac2b7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006ac2bd  8b11                 mov edx, dword ptr [ecx]
// 006ac2bf  8b4258               mov eax, dword ptr [edx + 0x58]
// 006ac2c2  56                   push esi
// 006ac2c3  ffd0                 call eax
// 006ac2c5  8b17                 mov edx, dword ptr [edi]
// 006ac2c7  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006ac2cd  8bcf                 mov ecx, edi
// 006ac2cf  ffd0                 call eax
// 006ac2d1  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 006ac2d4  51                   push ecx
// 006ac2d5  8bcb                 mov ecx, ebx
// 006ac2d7  e81475ffff           call 0x6a37f0
// 006ac2dc  5f                   pop edi
// 006ac2dd  5b                   pop ebx
// 006ac2de  5e                   pop esi
// 006ac2df  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?CustomizeStartDrag@CXTPControl@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
