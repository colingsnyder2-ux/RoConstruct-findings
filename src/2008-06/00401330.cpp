// from server: 100% by king_originala
// roc 2008-06 00401330  unit: CAboutRobloxDialog  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401330
//
// 00401330  6aff                 push -1
// 00401332  681afa7b00           push 0x7bfa1a
// 00401337  64a100000000         mov eax, dword ptr fs:[0]
// 0040133d  50                   push eax
// 0040133e  64892500000000       mov dword ptr fs:[0], esp
// 00401345  51                   push ecx
// 00401346  6830010000           push 0x130
// 0040134b  e8d0f52900           call 0x6a0920
// 00401350  83c404               add esp, 4
// 00401353  890424               mov dword ptr [esp], eax
// 00401356  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0040135e  85c0                 test eax, eax
// 00401360  7418                 je 0x40137a
// 00401362  6a00                 push 0
// 00401364  8bc8                 mov ecx, eax
// 00401366  e8b5feffff           call 0x401220
// 0040136b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040136f  64890d00000000       mov dword ptr fs:[0], ecx
// 00401376  83c410               add esp, 0x10
// 00401379  c3                   ret 
// 0040137a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040137e  33c0                 xor eax, eax
// 00401380  64890d00000000       mov dword ptr fs:[0], ecx
// 00401387  83c410               add esp, 0x10
// 0040138a  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct CAboutRobloxDialog
{
    char storage[0x130];
    CAboutRobloxDialog(int);
};

CAboutRobloxDialog* createDialog()
{
    return new CAboutRobloxDialog(0);
}
