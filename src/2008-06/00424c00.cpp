// from server: 94% by colin
// from server: 93% by colin
// roc 2008-06 00424c00  unit: CRobloxTreeCtrlNode  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424c00
//
// 00424c00  6aff                 push -1
// 00424c02  6800eb7b00           push 0x7beb00
// 00424c07  64a100000000         mov eax, dword ptr fs:[0]
// 00424c0d  50                   push eax
// 00424c0e  64892500000000       mov dword ptr fs:[0], esp
// 00424c15  83ec5c               sub esp, 0x5c
// 00424c18  53                   push ebx
// 00424c19  55                   push ebp
// 00424c1a  83c8ff               or eax, 0xffffffff
// 00424c1d  56                   push esi
// 00424c1e  8bf1                 mov esi, ecx
// 00424c20  89442440             mov dword ptr [esp + 0x40], eax
// 00424c24  89442450             mov dword ptr [esp + 0x50], eax
// 00424c28  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 00424c2e  57                   push edi
// 00424c2f  50                   push eax
// 00424c30  c744243867000000     mov dword ptr [esp + 0x38], 0x67
// 00424c38  e823ffffff           call 0x424b60
// 00424c3d  89442454             mov dword ptr [esp + 0x54], eax
// 00424c41  89442450             mov dword ptr [esp + 0x50], eax
// 00424c45  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00424c48  83c404               add esp, 4
// 00424c4b  89742458             mov dword ptr [esp + 0x58], esi
// 00424c4f  85c0                 test eax, eax
// 00424c51  7408                 je 0x424c5b
// 00424c53  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 00424c59  eb05                 jmp 0x424c60
// 00424c5b  b90000ffff           mov ecx, 0xffff0000
// 00424c60  8b4658               mov eax, dword ptr [esi + 0x58]
// 00424c63  51                   push ecx
// 00424c64  6a04                 push 4
// 00424c66  894c2434             mov dword ptr [esp + 0x34], ecx
// 00424c6a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00424c6d  680a110000           push 0x110a
// 00424c72  51                   push ecx
// 00424c73  c74424200100ffff     mov dword ptr [esp + 0x20], 0xffff0001
// 00424c7b  ff15142e8000         call dword ptr [0x802e14]
// 00424c81  8bf8                 mov edi, eax
// 00424c83  85ff                 test edi, edi
// 00424c85  0f8404010000         je 0x424d8f
// 00424c8b  eb03                 jmp 0x424c90
// 00424c8d  8d4900               lea ecx, [ecx]
// 00424c90  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00424c93  57                   push edi
// 00424c94  e8bdc22700           call 0x6a0f56
// 00424c99  8bd8                 mov ebx, eax
// 00424c9b  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00424ca1  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 00424ca7  3bc1                 cmp eax, ecx
// 00424ca9  7e09                 jle 0x424cb4
// 00424cab  897c2410             mov dword ptr [esp + 0x10], edi
// 00424caf  e9ba000000           jmp 0x424d6e
// 00424cb4  0f85d5000000         jne 0x424d8f
// 00424cba  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00424cbd  8b11                 mov edx, dword ptr [ecx]
// 00424cbf  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00424cc5  8d442418             lea eax, [esp + 0x18]
// 00424cc9  50                   push eax
// 00424cca  ffd2                 call edx
// 00424ccc  8b10                 mov edx, dword ptr [eax]
// 00424cce  83ec08               sub esp, 8
// 00424cd1  8bcc                 mov ecx, esp
// 00424cd3  8911                 mov dword ptr [ecx], edx
// 00424cd5  8b4004               mov eax, dword ptr [eax + 4]
// 00424cd8  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00424ce0  8964241c             mov dword ptr [esp + 0x1c], esp
// 00424ce4  894104               mov dword ptr [ecx + 4], eax
// 00424ce7  85c0                 test eax, eax
// 00424ce9  740c                 je 0x424cf7
// 00424ceb  83c004               add eax, 4
// 00424cee  b901000000           mov ecx, 1
// 00424cf3  f00fc108             lock xadd dword ptr [eax], ecx
// 00424cf7  8d4c2428             lea ecx, [esp + 0x28]
// 00424cfb  e840cefeff           call 0x411b40
// 00424d00  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00424d04  c644247402           mov byte ptr [esp + 0x74], 2
// 00424d09  85ed                 test ebp, ebp
// 00424d0b  742c                 je 0x424d39
// 00424d0d  8d5504               lea edx, [ebp + 4]
// 00424d10  83c8ff               or eax, 0xffffffff
// 00424d13  f00fc102             lock xadd dword ptr [edx], eax
// 00424d17  7520                 jne 0x424d39
// 00424d19  8b5500               mov edx, dword ptr [ebp]
// 00424d1c  8b4204               mov eax, dword ptr [edx + 4]
// 00424d1f  8bcd                 mov ecx, ebp
// 00424d21  ffd0                 call eax
// 00424d23  8d4d08               lea ecx, [ebp + 8]
// 00424d26  83caff               or edx, 0xffffffff
// 00424d29  f00fc111             lock xadd dword ptr [ecx], edx
// 00424d2d  750a                 jne 0x424d39
// 00424d2f  8b4500               mov eax, dword ptr [ebp]
// 00424d32  8b5008               mov edx, dword ptr [eax + 8]
// 00424d35  8bcd                 mov ecx, ebp
// 00424d37  ffd2                 call edx
// 00424d39  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00424d3c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00424d3f  0510010000           add eax, 0x110
// 00424d44  50                   push eax
// 00424d45  81c110010000         add ecx, 0x110
// 00424d4b  51                   push ecx
// 00424d4c  ff15fc238000         call dword ptr [0x8023fc]
// 00424d52  83c408               add esp, 8
// 00424d55  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00424d5d  8d4c2420             lea ecx, [esp + 0x20]
// 00424d61  84c0                 test al, al
// 00424d63  7425                 je 0x424d8a
// 00424d65  897c2410             mov dword ptr [esp + 0x10], edi
// 00424d69  e852261500           call 0x5773c0
// 00424d6e  8b4658               mov eax, dword ptr [esi + 0x58]
// 00424d71  8d4854               lea ecx, [eax + 0x54]
// 00424d74  8b01                 mov eax, dword ptr [ecx]
// 00424d76  8b5004               mov edx, dword ptr [eax + 4]
// 00424d79  6a01                 push 1
// 00424d7b  57                   push edi
// 00424d7c  ffd2                 call edx
// 00424d7e  8bf8                 mov edi, eax
// 00424d80  85ff                 test edi, edi
// 00424d82  0f8508ffffff         jne 0x424c90
// 00424d88  eb05                 jmp 0x424d8f
// 00424d8a  e831261500           call 0x5773c0
// 00424d8f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00424d93  8b7658               mov esi, dword ptr [esi + 0x58]
// 00424d96  8d4c242c             lea ecx, [esp + 0x2c]
// 00424d9a  51                   push ecx
// 00424d9b  6a00                 push 0
// 00424d9d  89442438             mov dword ptr [esp + 0x38], eax
// 00424da1  8b5620               mov edx, dword ptr [esi + 0x20]
// 00424da4  6800110000           push 0x1100
// 00424da9  52                   push edx
// 00424daa  ff15142e8000         call dword ptr [0x802e14]
// 00424db0  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00424db4  5f                   pop edi
// 00424db5  5e                   pop esi
// 00424db6  5d                   pop ebp
// 00424db7  64890d00000000       mov dword ptr fs:[0], ecx
// 00424dbe  5b                   pop ebx
// 00424dbf  83c468               add esp, 0x68
// 00424dc2  c3                   ret 
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Argument {
    void* object;
    Control* control;
    Argument(const Shared&);
    ~Argument();
};

__forceinline Argument::Argument(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Argument::~Argument()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Guard {
    unsigned int data[3];
    Guard(Argument);
    ~Guard();
};

struct String {
    unsigned char data[28];
};

extern bool (__cdecl *compare)(const String&, const String&);
extern int __cdecl image(int);

struct Payload {
    unsigned char padding[0x110];
    String text;
};

struct Node;

struct Navigation {
    virtual void unused();
    virtual unsigned int next(unsigned int, int);
};

#define SLOT(n) virtual void slot##n() = 0;
#define TEN(n) SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3) SLOT(n##4) \
               SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct Tree {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    SLOT(80)
    SLOT(81)
    SLOT(82)
    SLOT(83)
    SLOT(84)
    virtual Shared get() = 0;

    unsigned char padding0[0x1c];
    void* window;
    unsigned char padding1[0x30];
    Navigation navigation;

    Node* lookup(unsigned int);
};

#undef TEN
#undef SLOT

struct Insert {
    unsigned int parent;
    unsigned int after;
    unsigned int mask;
    unsigned int item;
    unsigned int state;
    unsigned int stateMask;
    char* text;
    int textLength;
    int image;
    int selectedImage;
    int children;
    Node* parameter;
    unsigned int extension[4];
};

struct Node {
    unsigned char padding0[0x0c];
    Payload* payload;
    unsigned char padding1[0x48];
    Tree* tree;
    Node* parent;
    unsigned char padding2[0x20];
    unsigned int item;
    int priority;
    int imageIndex;

    int f();
};

int Node::f()
{
    Insert insertion;
    insertion.text = reinterpret_cast<char*>(-1);
    insertion.children = -1;
    insertion.mask = 0x67;
    insertion.image = insertion.selectedImage = image(imageIndex);
    insertion.parameter = this;
    insertion.parent = parent ? parent->item : 0xffff0000;

    unsigned int after = 0xffff0001;
    unsigned int current =
        SendMessageA(tree->window, 0x110a, 4, insertion.parent);

    while (current) {
        Node* other = tree->lookup(current);
        if (priority > other->priority) {
            after = current;
        } else {
            if (priority != other->priority)
                break;

            Guard guard(tree->get());
            if (!compare(payload->text, other->payload->text))
                break;
            after = current;
        }

        Navigation* navigation = &tree->navigation;
        _ReadWriteBarrier();
        current = navigation->next(current, 1);
    }

    insertion.after = after;
    Tree* owner = tree;
    return SendMessageA(owner->window, 0x1100, 0,
                        reinterpret_cast<long>(&insertion));
}
