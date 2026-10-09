// from server: 31% by colin
// roc 2007-08 00401040  unit: CAboutRobloxDialog  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401040
//
// 00401040  6aff                 push -1
// 00401042  68988e7300           push 0x738e98
// 00401047  64a100000000         mov eax, dword ptr fs:[0]
// 0040104d  50                   push eax
// 0040104e  51                   push ecx
// 0040104f  56                   push esi
// 00401050  a188518b00           mov eax, dword ptr [0x8b5188]
// 00401055  33c4                 xor eax, esp
// 00401057  50                   push eax
// 00401058  8d44240c             lea eax, [esp + 0xc]
// 0040105c  64a300000000         mov dword ptr fs:[0], eax
// 00401062  8bf1                 mov esi, ecx
// 00401064  89742408             mov dword ptr [esp + 8], esi
// 00401068  8d8e14010000         lea ecx, [esi + 0x114]
// 0040106e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00401076  ff15ace67700         call dword ptr [0x77e6ac]
// 0040107c  8bce                 mov ecx, esi
// 0040107e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00401086  e8e9eb2200           call 0x62fc74
// 0040108b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040108f  64890d00000000       mov dword ptr fs:[0], ecx
// 00401096  59                   pop ecx
// 00401097  5e                   pop esi
// 00401098  83c410               add esp, 0x10
// 0040109b  c3                   ret 

struct CAboutRobloxDialog {
    char pad[0x114];
    void sub_62FC74();
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);

void CAboutRobloxDialog::destroy()
{
    sub_77E6AC((char*)this + 0x114);
    sub_62FC74();
}
