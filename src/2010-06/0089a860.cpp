// roc 2010-06 0089a860  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a860
//
// 0089a860  6aff                 push -1
// 0089a862  681dc19b00           push 0x9bc11d
// 0089a867  64a100000000         mov eax, dword ptr fs:[0]
// 0089a86d  50                   push eax
// 0089a86e  51                   push ecx
// 0089a86f  56                   push esi
// 0089a870  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089a875  33c4                 xor eax, esp
// 0089a877  50                   push eax
// 0089a878  8d44240c             lea eax, [esp + 0xc]
// 0089a87c  64a300000000         mov dword ptr fs:[0], eax
// 0089a882  8bf1                 mov esi, ecx
// 0089a884  89742408             mov dword ptr [esp + 8], esi
// 0089a888  c706bc0ca700         mov dword ptr [esi], 0xa70cbc
// 0089a88e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089a891  50                   push eax
// 0089a892  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0089a89a  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0089a8a0  85c0                 test eax, eax
// 0089a8a2  7407                 je 0x89a8ab
// 0089a8a4  8bce                 mov ecx, esi
// 0089a8a6  e873d1f0ff           call 0x7a7a1e
// 0089a8ab  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0089a8b1  c644241403           mov byte ptr [esp + 0x14], 3
// 0089a8b6  e8f5f10000           call 0x8a9ab0
// 0089a8bb  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0089a8c1  c644241402           mov byte ptr [esp + 0x14], 2
// 0089a8c6  e8e5f10000           call 0x8a9ab0
// 0089a8cb  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0089a8d1  c644241401           mov byte ptr [esp + 0x14], 1
// 0089a8d6  e895f3ffff           call 0x899c70
// 0089a8db  8d4e60               lea ecx, [esi + 0x60]
// 0089a8de  c644241400           mov byte ptr [esp + 0x14], 0
// 0089a8e3  e89865f8ff           call 0x820e80
// 0089a8e8  8bce                 mov ecx, esi
// 0089a8ea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0089a8f2  e85fdbf0ff           call 0x7a8456
// 0089a8f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089a8fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a902  59                   pop ecx
// 0089a903  5e                   pop esi
// 0089a904  83c410               add esp, 0x10
// 0089a907  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp