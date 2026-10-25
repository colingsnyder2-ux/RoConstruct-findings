// from server: 100% by king_originala
// roc 2008-06 005f2d20  unit: UString_sink::?$stream_buffer  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2d20
//
// 005f2d20  56                   push esi
// 005f2d21  8bf1                 mov esi, ecx
// 005f2d23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f2d27  83f9ff               cmp ecx, -1
// 005f2d2a  7505                 jne 0x5f2d31
// 005f2d2c  b900100000           mov ecx, 0x1000
// 005f2d31  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f2d35  83f8ff               cmp eax, -1
// 005f2d38  7509                 jne 0x5f2d43
// 005f2d3a  b804000000           mov eax, 4
// 005f2d3f  89442410             mov dword ptr [esp + 0x10], eax
// 005f2d43  83f802               cmp eax, 2
// 005f2d46  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 005f2d4e  8d442410             lea eax, [esp + 0x10]
// 005f2d52  7f04                 jg 0x5f2d58
// 005f2d54  8d44240c             lea eax, [esp + 0xc]
// 005f2d58  8b00                 mov eax, dword ptr [eax]
// 005f2d5a  894654               mov dword ptr [esi + 0x54], eax
// 005f2d5d  85c9                 test ecx, ecx
// 005f2d5f  7505                 jne 0x5f2d66
// 005f2d61  b901000000           mov ecx, 1
// 005f2d66  03c1                 add eax, ecx
// 005f2d68  50                   push eax
// 005f2d69  8d4e4c               lea ecx, [esi + 0x4c]
// 005f2d6c  e8cff7ffff           call 0x5f2540
// 005f2d71  8b06                 mov eax, dword ptr [esi]
// 005f2d73  8b5054               mov edx, dword ptr [eax + 0x54]
// 005f2d76  8bce                 mov ecx, esi
// 005f2d78  ffd2                 call edx
// 005f2d7a  807e4400             cmp byte ptr [esi + 0x44], 0
// 005f2d7e  8b442408             mov eax, dword ptr [esp + 8]
// 005f2d82  8b00                 mov eax, dword ptr [eax]
// 005f2d84  7404                 je 0x5f2d8a
// 005f2d86  c6464400             mov byte ptr [esi + 0x44], 0
// 005f2d8a  894640               mov dword ptr [esi + 0x40], eax
// 005f2d8d  c6464401             mov byte ptr [esi + 0x44], 1
// 005f2d91  834e5801             or dword ptr [esi + 0x58], 1
// 005f2d95  c6463c00             mov byte ptr [esi + 0x3c], 0
// 005f2d99  5e                   pop esi
// 005f2d9a  c20c00               ret 0xc

struct S;

struct VTable
{
    void *unused[21];
    void (__thiscall *reset)(S *);
};

struct Buffer
{
    unsigned char storage[8];
    void resize(int);
};

struct S
{
    VTable *vtable;
    unsigned char padding04[0x38];
    unsigned char flag;
    unsigned char padding3D[3];
    int value;
    unsigned char active;
    unsigned char padding45[7];
    Buffer buffer;
    int putbackSize;
    volatile unsigned int flags;

    void f(const int &source, int capacity, int putback);
};

void S::f(const int &source, int capacity, int putback)
{
    if (capacity == -1)
        capacity = 4096;
    if (putback == -1)
        putback = 4;

    const int minimum = 2;
    putbackSize = *(putback > minimum ? &putback : &minimum);

    if (capacity == 0)
        capacity = 1;

    buffer.resize(putbackSize + capacity);
    vtable->reset(this);

    int incoming = source;
    if (active)
        active = 0;
    value = incoming;
    active = 1;
    flags |= 1;
    flag = 0;
}
