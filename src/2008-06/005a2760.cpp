// from server: 100% by king_originala
// roc 2008-06 005a2760  unit: RBX::Workspace  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2760
//
// 005a2760  83ec0c               sub esp, 0xc
// 005a2763  56                   push esi
// 005a2764  8bf1                 mov esi, ecx
// 005a2766  8d86c0fcffff         lea eax, [esi - 0x340]
// 005a276c  6a01                 push 1
// 005a276e  50                   push eax
// 005a276f  e83c37efff           call 0x495eb0
// 005a2774  83c408               add esp, 8
// 005a2777  84c0                 test al, al
// 005a2779  7425                 je 0x5a27a0
// 005a277b  80be9000000000       cmp byte ptr [esi + 0x90], 0
// 005a2782  751c                 jne 0x5a27a0
// 005a2784  8d4c2414             lea ecx, [esp + 0x14]
// 005a2788  51                   push ecx
// 005a2789  8d542408             lea edx, [esp + 8]
// 005a278d  52                   push edx
// 005a278e  8d8e94000000         lea ecx, [esi + 0x94]
// 005a2794  e8a7640400           call 0x5e8c40
// 005a2799  5e                   pop esi
// 005a279a  83c40c               add esp, 0xc
// 005a279d  c20800               ret 8
// 005a27a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a27a4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a27a8  50                   push eax
// 005a27a9  e812df0000           call 0x5b06c0
// 005a27ae  5e                   pop esi
// 005a27af  83c40c               add esp, 0xc
// 005a27b2  c20800               ret 8

int __cdecl sub_495e80(int, int);

struct Result {
    int data[3];
};

struct Handler {
    void invoke(Result*, int*);
};

struct Receiver {
    void invoke(int);
};

struct S {
    char padding[0x90];
    unsigned char disabled;
    char alignment[3];
    Handler handler;

    void f(int, Receiver*);
};

void S::f(int value, Receiver* receiver)
{
    if ((unsigned char)sub_495e80((int)this - 0x340, 1) && !disabled) {
        Result result;
        handler.invoke(&result, &value);
    } else {
        receiver->invoke(value);
    }
}
