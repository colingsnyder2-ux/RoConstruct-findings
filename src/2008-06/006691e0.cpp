// from server: 100% by king_originala
// roc 2008-06 006691e0  unit: RBX::TreeStage  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006691e0
//
// 006691e0  83ec0c               sub esp, 0xc
// 006691e3  56                   push esi
// 006691e4  57                   push edi
// 006691e5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006691e9  837f0400             cmp dword ptr [edi + 4], 0
// 006691ed  8bf1                 mov esi, ecx
// 006691ef  743e                 je 0x66922f
// 006691f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006691f4  8b01                 mov eax, dword ptr [ecx]
// 006691f6  8b5004               mov edx, dword ptr [eax + 4]
// 006691f9  53                   push ebx
// 006691fa  ffd2                 call edx
// 006691fc  8bd8                 mov ebx, eax
// 006691fe  8b06                 mov eax, dword ptr [esi]
// 00669200  8b5004               mov edx, dword ptr [eax + 4]
// 00669203  8bce                 mov ecx, esi
// 00669205  ffd2                 call edx
// 00669207  3bd8                 cmp ebx, eax
// 00669209  5b                   pop ebx
// 0066920a  7e23                 jle 0x66922f
// 0066920c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066920f  57                   push edi
// 00669210  e83b630000           call 0x66f550
// 00669215  8d442418             lea eax, [esp + 0x18]
// 00669219  50                   push eax
// 0066921a  8d4c240c             lea ecx, [esp + 0xc]
// 0066921e  51                   push ecx
// 0066921f  8d4e38               lea ecx, [esi + 0x38]
// 00669222  897c2420             mov dword ptr [esp + 0x20], edi
// 00669226  e815faf7ff           call 0x5e8c40
// 0066922b  c6461401             mov byte ptr [esi + 0x14], 1
// 0066922f  5f                   pop edi
// 00669230  5e                   pop esi
// 00669231  83c40c               add esp, 0xc
// 00669234  c20400               ret 4

struct Stage;

struct Argument {
    int field0;
    Stage *field4;
    void f(int);
};

struct Receiver {
    void f(Argument *);
};

struct InsertResult {
    unsigned int data[3];
};

struct Container {
    InsertResult insert(Argument * const &);
};

struct Stage {
    virtual void slot0();
    virtual int priority();

    int field4;
    Receiver *field8;
    char padding0[8];
    unsigned char dirty;
    char padding1[35];
    Container container;

    void f(Argument *);
};

void Stage::f(Argument *arg)
{
    if (arg->field4 != 0) {
        int otherPriority = arg->field4->priority();
        if (otherPriority > priority()) {
            field8->f(arg);
            Argument *value = arg;
            container.insert(value);
            dirty = 1;
        }
    }
}
