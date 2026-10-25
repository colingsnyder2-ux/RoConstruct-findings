// from server: 100% by king_originala
// roc 2008-06 00422d10  unit: CRobloxTreeCtrl  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422d10
//
// 00422d10  6aff                 push -1
// 00422d12  6848e97b00           push 0x7be948
// 00422d17  64a100000000         mov eax, dword ptr fs:[0]
// 00422d1d  50                   push eax
// 00422d1e  64892500000000       mov dword ptr fs:[0], esp
// 00422d25  83ec08               sub esp, 8
// 00422d28  53                   push ebx
// 00422d29  56                   push esi
// 00422d2a  57                   push edi
// 00422d2b  8bf1                 mov esi, ecx
// 00422d2d  e818e22700           call 0x6a0f4a
// 00422d32  8a9eb8000000         mov bl, byte ptr [esi + 0xb8]
// 00422d38  8dbeb8000000         lea edi, [esi + 0xb8]
// 00422d3e  897c240c             mov dword ptr [esp + 0xc], edi
// 00422d42  885c2410             mov byte ptr [esp + 0x10], bl
// 00422d46  c60701               mov byte ptr [edi], 1
// 00422d49  8b4620               mov eax, dword ptr [esi + 0x20]
// 00422d4c  680000ffff           push 0xffff0000
// 00422d51  6a00                 push 0
// 00422d53  6801110000           push 0x1101
// 00422d58  50                   push eax
// 00422d59  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00422d61  ff15142e8000         call dword ptr [0x802e14]
// 00422d67  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00422d6d  85c9                 test ecx, ecx
// 00422d6f  7413                 je 0x422d84
// 00422d71  8b11                 mov edx, dword ptr [ecx]
// 00422d73  8b4204               mov eax, dword ptr [edx + 4]
// 00422d76  6a01                 push 1
// 00422d78  ffd0                 call eax
// 00422d7a  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 00422d84  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00422d88  881f                 mov byte ptr [edi], bl
// 00422d8a  5f                   pop edi
// 00422d8b  5e                   pop esi
// 00422d8c  5b                   pop ebx
// 00422d8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00422d94  83c414               add esp, 0x14
// 00422d97  c3                   ret 

extern "C" long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);

struct Item {
    virtual void reserved();
    virtual ~Item();
};

struct FlagGuard {
    bool *flag;
    bool previous;

    FlagGuard(bool &value) : flag(&value), previous(value) {
        value = true;
    }

    ~FlagGuard() {
        *flag = previous;
    }
};

struct S {
    char padding0[0x20];
    void *window;
    char padding1[0x70];
    Item *item;
    char padding2[0x20];
    bool busy;

    void prepare();
    void clear();
};

void S::clear() {
    prepare();
    FlagGuard guard(busy);
    SendMessageA(window, 0x1101, 0, (long)0xffff0000);
    if (item) {
        delete item;
        item = 0;
    }
}
