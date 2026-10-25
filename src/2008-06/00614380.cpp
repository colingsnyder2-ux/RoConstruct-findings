// from server: 100% by king_originala
// roc 2008-06 00614380  unit: RBX::RevoluteLink  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614380
//
// 00614380  8bd1                 mov edx, ecx
// 00614382  8b4234               mov eax, dword ptr [edx + 0x34]
// 00614385  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614389  85c0                 test eax, eax
// 0061438b  740b                 je 0x614398
// 0061438d  3bc1                 cmp eax, ecx
// 0061438f  7407                 je 0x614398
// 00614391  c7400400000000       mov dword ptr [eax + 4], 0
// 00614398  837a1400             cmp dword ptr [edx + 0x14], 0
// 0061439c  745c                 je 0x6143fa
// 0061439e  894a34               mov dword ptr [edx + 0x34], ecx
// 006143a1  895104               mov dword ptr [ecx + 4], edx
// 006143a4  8b4228               mov eax, dword ptr [edx + 0x28]
// 006143a7  85c0                 test eax, eax
// 006143a9  7406                 je 0x6143b1
// 006143ab  80780400             cmp byte ptr [eax + 4], 0
// 006143af  7524                 jne 0x6143d5
// 006143b1  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 006143b4  85c9                 test ecx, ecx
// 006143b6  7407                 je 0x6143bf
// 006143b8  e8b3fbffff           call 0x613f70
// 006143bd  eb0b                 jmp 0x6143ca
// 006143bf  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006143c2  85c0                 test eax, eax
// 006143c4  7404                 je 0x6143ca
// 006143c6  c6400801             mov byte ptr [eax + 8], 1
// 006143ca  8b4228               mov eax, dword ptr [edx + 0x28]
// 006143cd  85c0                 test eax, eax
// 006143cf  7404                 je 0x6143d5
// 006143d1  c6400401             mov byte ptr [eax + 4], 1
// 006143d5  a198a89500           mov eax, dword ptr [0x95a898]
// 006143da  8b5210               mov edx, dword ptr [edx + 0x10]
// 006143dd  40                   inc eax
// 006143de  a398a89500           mov dword ptr [0x95a898], eax
// 006143e3  3dffffff7f           cmp eax, 0x7fffffff
// 006143e8  750a                 jne 0x6143f4
// 006143ea  b801000000           mov eax, 1
// 006143ef  a398a89500           mov dword ptr [0x95a898], eax
// 006143f4  898290000000         mov dword ptr [edx + 0x90], eax
// 006143fa  c20400               ret 4

struct Link;

struct Attachment {
    char reserved[4];
    Link* owner;
};

struct State {
    char reserved[0x90];
    int stamp;
};

extern int counter;

struct Link {
    char reserved0[0x10];
    State* state;
    Link* parent;
    char reserved1[0x10];
    char* flag28;
    char* flag2c;
    char reserved2[4];
    Attachment* attachment;

    __declspec(noinline) void reset();
    void f(Attachment*);
};

void Link::reset()
{
    if (flag28 && flag28[4])
        return;

    if (parent)
        parent->reset();
    else if (flag2c)
        flag2c[8] = 1;

    if (flag28)
        flag28[4] = 1;
}

void Link::f(Attachment* value)
{
    if (attachment && attachment != value)
        attachment->owner = 0;

    if (parent) {
        attachment = value;
        value->owner = this;

        if (!flag28 || !flag28[4]) {
            if (parent)
                parent->reset();
            else if (flag2c)
                flag2c[8] = 1;

            if (flag28)
                flag28[4] = 1;
        }

        State* destination = state;
        int stamp = ++counter;
        if (stamp == 0x7fffffff)
            counter = stamp = 1;
        destination->stamp = stamp;
    }
}
