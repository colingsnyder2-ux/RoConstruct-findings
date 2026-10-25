// from server: 100% by colin
// roc 2008-06 0043a280  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a280
//
// 0043a280  6aff                 push -1
// 0043a282  6800057c00           push 0x7c0500
// 0043a287  64a100000000         mov eax, dword ptr fs:[0]
// 0043a28d  50                   push eax
// 0043a28e  64892500000000       mov dword ptr fs:[0], esp
// 0043a295  83ec0c               sub esp, 0xc
// 0043a298  56                   push esi
// 0043a299  8bf1                 mov esi, ecx
// 0043a29b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0043a2a1  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043a2a7  57                   push edi
// 0043a2a8  33ff                 xor edi, edi
// 0043a2aa  897c2408             mov dword ptr [esp + 8], edi
// 0043a2ae  897c240c             mov dword ptr [esp + 0xc], edi
// 0043a2b2  50                   push eax
// 0043a2b3  8d4c240c             lea ecx, [esp + 0xc]
// 0043a2b7  897c2420             mov dword ptr [esp + 0x20], edi
// 0043a2bb  897c2414             mov dword ptr [esp + 0x14], edi
// 0043a2bf  e83ccc1300           call 0x576f00
// 0043a2c4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043a2c8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043a2d0  3bc7                 cmp eax, edi
// 0043a2d2  7405                 je 0x43a2d9
// 0043a2d4  83c014               add eax, 0x14
// 0043a2d7  eb02                 jmp 0x43a2db
// 0043a2d9  33c0                 xor eax, eax
// 0043a2db  8bb640010000         mov esi, dword ptr [esi + 0x140]
// 0043a2e1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043a2e4  8b742428             mov esi, dword ptr [esp + 0x28]
// 0043a2e8  8b11                 mov edx, dword ptr [ecx]
// 0043a2ea  56                   push esi
// 0043a2eb  50                   push eax
// 0043a2ec  8b420c               mov eax, dword ptr [edx + 0xc]
// 0043a2ef  ffd0                 call eax
// 0043a2f1  8d4c2408             lea ecx, [esp + 8]
// 0043a2f5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043a2fd  e8bed01300           call 0x5773c0
// 0043a302  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043a306  5f                   pop edi
// 0043a307  5e                   pop esi
// 0043a308  64890d00000000       mov dword ptr fs:[0], ecx
// 0043a30f  83c418               add esp, 0x18
// 0043a312  c20800               ret 8

//

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
    char padding[0x13c];
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
