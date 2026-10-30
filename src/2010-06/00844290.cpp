// roc 2010-06 00844290  unit: CBitmap  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00844290
//
// 00844290  6aff                 push -1
// 00844292  6898719b00           push 0x9b7198
// 00844297  64a100000000         mov eax, dword ptr fs:[0]
// 0084429d  50                   push eax
// 0084429e  83ec28               sub esp, 0x28
// 008442a1  53                   push ebx
// 008442a2  55                   push ebp
// 008442a3  56                   push esi
// 008442a4  57                   push edi
// 008442a5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008442aa  33c4                 xor eax, esp
// 008442ac  50                   push eax
// 008442ad  8d44243c             lea eax, [esp + 0x3c]
// 008442b1  64a300000000         mov dword ptr fs:[0], eax
// 008442b7  8be9                 mov ebp, ecx
// 008442b9  c7450800000000       mov dword ptr [ebp + 8], 0
// 008442c0  e8993cf6ff           call 0x7a7f5e
// 008442c5  8b742450             mov esi, dword ptr [esp + 0x50]
// 008442c9  85f6                 test esi, esi
// 008442cb  7462                 je 0x84432f
// 008442cd  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008442d1  56                   push esi
// 008442d2  57                   push edi
// 008442d3  ff1564a39e00         call dword ptr [0x9ea364]
// 008442d9  56                   push esi
// 008442da  57                   push edi
// 008442db  8bd8                 mov ebx, eax
// 008442dd  ff1560a39e00         call dword ptr [0x9ea360]
// 008442e3  85c0                 test eax, eax
// 008442e5  7448                 je 0x84432f
// 008442e7  50                   push eax
// 008442e8  ff15eca29e00         call dword ptr [0x9ea2ec]
// 008442ee  85c0                 test eax, eax
// 008442f0  743d                 je 0x84432f
// 008442f2  83fb0a               cmp ebx, 0xa
// 008442f5  7238                 jb 0x84432f
// 008442f7  6a00                 push 0
// 008442f9  53                   push ebx
// 008442fa  50                   push eax
// 008442fb  8d4c2420             lea ecx, [esp + 0x20]
// 008442ff  e81845f6ff           call 0x7a881c
// 00844304  8d442414             lea eax, [esp + 0x14]
// 00844308  50                   push eax
// 00844309  8bcd                 mov ecx, ebp
// 0084430b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00844313  e8b8fdffff           call 0x8440d0
// 00844318  8d4c2414             lea ecx, [esp + 0x14]
// 0084431c  8bf0                 mov esi, eax
// 0084431e  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00844326  e8e544f6ff           call 0x7a8810
// 0084432b  8bc6                 mov eax, esi
// 0084432d  eb02                 jmp 0x844331
// 0084432f  33c0                 xor eax, eax
// 00844331  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00844335  64890d00000000       mov dword ptr fs:[0], ecx
// 0084433c  59                   pop ecx
// 0084433d  5f                   pop edi
// 0084433e  5e                   pop esi
// 0084433f  5d                   pop ebp
// 00844340  5b                   pop ebx
// 00844341  83c434               add esp, 0x34
// 00844344  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp