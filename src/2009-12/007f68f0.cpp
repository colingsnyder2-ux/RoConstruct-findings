// roc 2009-12 007f68f0  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f68f0
//
// 007f68f0  83ec08               sub esp, 8
// 007f68f3  56                   push esi
// 007f68f4  8d442404             lea eax, [esp + 4]
// 007f68f8  50                   push eax
// 007f68f9  8bf1                 mov esi, ecx
// 007f68fb  ff1538cc9800         call dword ptr [0x98cc38]
// 007f6901  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007f6907  8b4220               mov eax, dword ptr [edx + 0x20]
// 007f690a  8d4c2404             lea ecx, [esp + 4]
// 007f690e  51                   push ecx
// 007f690f  50                   push eax
// 007f6910  ff1534cc9800         call dword ptr [0x98cc34]
// 007f6916  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f691a  8b542404             mov edx, dword ptr [esp + 4]
// 007f691e  51                   push ecx
// 007f691f  52                   push edx
// 007f6920  81c6c0000000         add esi, 0xc0
// 007f6926  56                   push esi
// 007f6927  ff155cca9800         call dword ptr [0x98ca5c]
// 007f692d  5e                   pop esi
// 007f692e  83c408               add esp, 8
// 007f6931  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
