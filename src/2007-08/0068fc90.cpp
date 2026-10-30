// from server: 100% by auto
// roc 2007-08 0068fc90  unit: CXTPDockingPane  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068fc90
//
// 0068fc90  56                   push esi
// 0068fc91  8bf1                 mov esi, ecx
// 0068fc93  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0068fc99  85c0                 test eax, eax
// 0068fc9b  7436                 je 0x68fcd3
// 0068fc9d  6a00                 push 0
// 0068fc9f  50                   push eax
// 0068fca0  ff1520ed7700         call dword ptr [0x77ed20]
// 0068fca6  8d4e20               lea ecx, [esi + 0x20]
// 0068fca9  e892080500           call 0x6e0540
// 0068fcae  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0068fcb4  85c0                 test eax, eax
// 0068fcb6  7403                 je 0x68fcbb
// 0068fcb8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068fcbb  50                   push eax
// 0068fcbc  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0068fcc2  50                   push eax
// 0068fcc3  ff15acee7700         call dword ptr [0x77eeac]
// 0068fcc9  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0068fcd3  8d4e20               lea ecx, [esi + 0x20]
// 0068fcd6  e865080500           call 0x6e0540
// 0068fcdb  8bc8                 mov ecx, eax
// 0068fcdd  5e                   pop esi
// 0068fcde  e9ddf9fdff           jmp 0x66f6c0
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?Detach@CXTPDockingPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
