// from server: 70% by colin
// from server: 59% by colin
// roc 2008-06 00425320  unit: CRobloxTreeCtrlNode  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425320
//
// 00425320  55                   push ebp
// 00425321  8bec                 mov ebp, esp
// 00425323  6aff                 push -1
// 00425325  6870eb7b00           push 0x7beb70
// 0042532a  64a100000000         mov eax, dword ptr fs:[0]
// 00425330  50                   push eax
// 00425331  64892500000000       mov dword ptr fs:[0], esp
// 00425338  83ec20               sub esp, 0x20
// 0042533b  53                   push ebx
// 0042533c  56                   push esi
// 0042533d  57                   push edi
// 0042533e  8b7d08               mov edi, dword ptr [ebp + 8]
// 00425341  bb01000000           mov ebx, 1
// 00425346  8965f0               mov dword ptr [ebp - 0x10], esp
// 00425349  894dec               mov dword ptr [ebp - 0x14], ecx
// 0042534c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00425353  845f0c               test byte ptr [edi + 0xc], bl
// 00425356  0f84a1000000         je 0x4253fd
// 0042535c  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 0042535f  8b01                 mov eax, dword ptr [ecx]
// 00425361  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00425367  8d55e0               lea edx, [ebp - 0x20]
// 0042536a  52                   push edx
// 0042536b  ffd0                 call eax
// 0042536d  8b10                 mov edx, dword ptr [eax]
// 0042536f  83ec08               sub esp, 8
// 00425372  8bcc                 mov ecx, esp
// 00425374  8911                 mov dword ptr [ecx], edx
// 00425376  8b4004               mov eax, dword ptr [eax + 4]
// 00425379  885dfc               mov byte ptr [ebp - 4], bl
// 0042537c  8965e8               mov dword ptr [ebp - 0x18], esp
// 0042537f  894104               mov dword ptr [ecx + 4], eax
// 00425382  85c0                 test eax, eax
// 00425384  7407                 je 0x42538d
// 00425386  83c004               add eax, 4
// 00425389  f00fc118             lock xadd dword ptr [eax], ebx
// 0042538d  8d4dd4               lea ecx, [ebp - 0x2c]
// 00425390  e8abc7feff           call 0x411b40
// 00425395  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 00425398  c645fc03             mov byte ptr [ebp - 4], 3
// 0042539c  85f6                 test esi, esi
// 0042539e  742a                 je 0x4253ca
// 004253a0  8d4604               lea eax, [esi + 4]
// 004253a3  83c9ff               or ecx, 0xffffffff
// 004253a6  f00fc108             lock xadd dword ptr [eax], ecx
// 004253aa  751e                 jne 0x4253ca
// 004253ac  8b16                 mov edx, dword ptr [esi]
// 004253ae  8b4204               mov eax, dword ptr [edx + 4]
// 004253b1  8bce                 mov ecx, esi
// 004253b3  ffd0                 call eax
// 004253b5  8d4e08               lea ecx, [esi + 8]
// 004253b8  83caff               or edx, 0xffffffff
// 004253bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004253bf  7509                 jne 0x4253ca
// 004253c1  8b06                 mov eax, dword ptr [esi]
// 004253c3  8b5008               mov edx, dword ptr [eax + 8]
// 004253c6  8bce                 mov ecx, esi
// 004253c8  ffd2                 call edx
// 004253ca  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004253cd  8b400c               mov eax, dword ptr [eax + 0xc]
// 004253d0  8d8810010000         lea ecx, [eax + 0x110]
// 004253d6  ff1564248000         call dword ptr [0x802464]
// 004253dc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004253df  8b571c               mov edx, dword ptr [edi + 0x1c]
// 004253e2  51                   push ecx
// 004253e3  50                   push eax
// 004253e4  52                   push edx
// 004253e5  ff1548288000         call dword ptr [0x802848]
// 004253eb  83c40c               add esp, 0xc
// 004253ee  8d4dd4               lea ecx, [ebp - 0x2c]
// 004253f1  c645fc00             mov byte ptr [ebp - 4], 0
// 004253f5  e8c61f1500           call 0x5773c0
// 004253fa  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004253fd  f6470c40             test byte ptr [edi + 0xc], 0x40
// 00425401  740f                 je 0x425412
// 00425403  e848fcffff           call 0x425050
// 00425408  33c9                 xor ecx, ecx
// 0042540a  84c0                 test al, al
// 0042540c  0f95c1               setne cl
// 0042540f  894f2c               mov dword ptr [edi + 0x2c], ecx

// from server: 54% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" char* __cdecl strncpy(char*, const char*, unsigned int);

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct __declspec(dllimport) Handle {
    void* pointer;
    Control* count;
    Handle(const Handle&);
    ~Handle();
};

__forceinline Handle::~Handle()
{
    Control* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Provider {
    void* slots;
};

typedef Handle (__thiscall *Acquire)(Provider*);

struct Guard {
    char storage[12];
    Guard(Handle);
    ~Guard();
};

struct String {
    const char* c_str() const;
};

struct Owner {
    char padding[0x110];
    String text;
};

struct Request {
    char padding0[0x0c];
    unsigned char flags;
    char padding1[0x0f];
    char* destination;
    unsigned int capacity;
    char padding2[8];
    int result;
};

struct Node {
    char padding0[0x0c];
    Owner* owner;
    char padding1[0x48];
    Provider* provider;
    bool query();
    void update(Request*);
};

void Node::update(Request* request)
{
    try {
        if (request->flags & 1) {
            Guard guard(
                ((Acquire)((void**)provider->slots)[0x154 / 4])(provider));
            strncpy(request->destination, owner->text.c_str(),
                    request->capacity);
        }

        if (request->flags & 0x40)
            request->result = query() ? 1 : 0;
    }
    catch (...) {
    }
}
