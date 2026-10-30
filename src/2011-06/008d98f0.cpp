// from server: 100% by auto
// roc 2011-06 008d98f0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d98f0
//
// 008d98f0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d98f4  83f803               cmp eax, 3
// 008d98f7  0f87a8000000         ja 0x8d99a5
// 008d98fd  ff2485a8998d00       jmp dword ptr [eax*4 + 0x8d99a8]
// 008d9904  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d9908  83f8ff               cmp eax, -1
// 008d990b  0f8494000000         je 0x8d99a5
// 008d9911  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d9915  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d9919  50                   push eax
// 008d991a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d991e  6a01                 push 1
// 008d9920  2bc8                 sub ecx, eax
// 008d9922  51                   push ecx
// 008d9923  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d9927  52                   push edx
// 008d9928  50                   push eax
// 008d9929  e8a82c0f00           call 0x9cc5d6
// 008d992e  c3                   ret 
// 008d992f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d9933  83f8ff               cmp eax, -1
// 008d9936  746d                 je 0x8d99a5
// 008d9938  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d993c  8b542408             mov edx, dword ptr [esp + 8]
// 008d9940  50                   push eax
// 008d9941  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d9945  2bc8                 sub ecx, eax
// 008d9947  51                   push ecx
// 008d9948  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d994c  6a01                 push 1
// 008d994e  50                   push eax
// 008d994f  52                   push edx
// 008d9950  e8812c0f00           call 0x9cc5d6
// 008d9955  c3                   ret 
// 008d9956  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d995a  83f8ff               cmp eax, -1
// 008d995d  7446                 je 0x8d99a5
// 008d995f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d9963  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d9967  50                   push eax
// 008d9968  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d996c  6a01                 push 1
// 008d996e  2bc8                 sub ecx, eax
// 008d9970  51                   push ecx
// 008d9971  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d9975  4a                   dec edx
// 008d9976  52                   push edx
// 008d9977  50                   push eax
// 008d9978  e8592c0f00           call 0x9cc5d6
// 008d997d  c3                   ret 
// 008d997e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d9982  83f8ff               cmp eax, -1
// 008d9985  741e                 je 0x8d99a5
// 008d9987  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d998b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d998f  50                   push eax
// 008d9990  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d9994  2bc8                 sub ecx, eax
// 008d9996  51                   push ecx
// 008d9997  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d999b  6a01                 push 1
// 008d999d  4a                   dec edx
// 008d999e  50                   push eax
// 008d999f  52                   push edx
// 008d99a0  e8312c0f00           call 0x9cc5d6
// 008d99a5  c3                   ret 
// 008d99a6  8bff                 mov edi, edi
// 008d99a8  0499                 add al, 0x99
// 008d99aa  8d00                 lea eax, [eax]
// 008d99ac  2f                   das 
// 008d99ad  99                   cdq 
// 008d99ae  8d00                 lea eax, [eax]
// 008d99b0  56                   push esi
// 008d99b1  99                   cdq 
// 008d99b2  8d00                 lea eax, [eax]
// 008d99b4  7e99                 jle 0x8d994f
// 008d99b6  8d00                 lea eax, [eax]
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleLineBorder@CXTPTabPaintManagerAppearanceSet@@SAXPAVCDC@@VCRect@@W4XTPTabPosition@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
