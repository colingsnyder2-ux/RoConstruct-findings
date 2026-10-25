// from server: 100% by colin
// roc 2008-06 0043b030  unit: G3D::VColor3::?$XItem  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b030
//
// 0043b030  6aff                 push -1
// 0043b032  6800057c00           push 0x7c0500
// 0043b037  64a100000000         mov eax, dword ptr fs:[0]
// 0043b03d  50                   push eax
// 0043b03e  64892500000000       mov dword ptr fs:[0], esp
// 0043b045  83ec0c               sub esp, 0xc
// 0043b048  56                   push esi
// 0043b049  8bf1                 mov esi, ecx
// 0043b04b  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0043b051  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043b057  57                   push edi
// 0043b058  33ff                 xor edi, edi
// 0043b05a  897c2408             mov dword ptr [esp + 8], edi
// 0043b05e  897c240c             mov dword ptr [esp + 0xc], edi
// 0043b062  50                   push eax
// 0043b063  8d4c240c             lea ecx, [esp + 0xc]
// 0043b067  897c2420             mov dword ptr [esp + 0x20], edi
// 0043b06b  897c2414             mov dword ptr [esp + 0x14], edi
// 0043b06f  e88cbe1300           call 0x576f00
// 0043b074  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043b078  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043b080  3bc7                 cmp eax, edi
// 0043b082  7405                 je 0x43b089
// 0043b084  83c014               add eax, 0x14
// 0043b087  eb02                 jmp 0x43b08b
// 0043b089  33c0                 xor eax, eax
// 0043b08b  8bb638010000         mov esi, dword ptr [esi + 0x138]
// 0043b091  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043b094  8b742428             mov esi, dword ptr [esp + 0x28]
// 0043b098  8b11                 mov edx, dword ptr [ecx]
// 0043b09a  56                   push esi
// 0043b09b  50                   push eax
// 0043b09c  8b420c               mov eax, dword ptr [edx + 0xc]
// 0043b09f  ffd0                 call eax
// 0043b0a1  8d4c2408             lea ecx, [esp + 8]
// 0043b0a5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043b0ad  e80ec31300           call 0x5773c0
// 0043b0b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043b0b6  5f                   pop edi
// 0043b0b7  5e                   pop esi
// 0043b0b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0043b0bf  83c418               add esp, 0x18
// 0043b0c2  c20800               ret 8

struct Handle {
    int first;
    int second;
    Handle() : first(0), second(0) {}
    ~Handle();
};

struct Temporary {
    Handle handle;
    int third;
    void init(int value);
    Temporary(int value) : third(0) { init(value); }
    ~Temporary();
};

struct Source {
    char padding[0x198];
    int value;
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void invoke(void* value, int argument);
};

struct Destination {
    char padding[0x18];
    Receiver* receiver;
};

struct S {
    char padding[0x134];
    Source* source;
    Destination* destination;
    void f(void* value, int argument);
};

void S::f(void* value, int argument)
{
    Temporary temporary(source->value);
    char* p = static_cast<char*>(value);
    if (p != 0)
        p += 0x14;
    else
        p = 0;
    Destination* d = destination;
    Receiver* r = d->receiver;
    r->invoke(p, argument);
}
