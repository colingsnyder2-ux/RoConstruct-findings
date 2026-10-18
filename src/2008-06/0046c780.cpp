// from server: 91% by colin
// from server: 88% by king_originala
// roc 2008-06 0046c780  unit: VCWorkspace::?$CComObject  size: 331 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046c780
//
// 0046c780  55                   push ebp
// 0046c781  8bec                 mov ebp, esp
// 0046c783  6aff                 push -1
// 0046c785  68dd3b7c00           push 0x7c3bdd
// 0046c78a  64a100000000         mov eax, dword ptr fs:[0]
// 0046c790  50                   push eax
// 0046c791  64892500000000       mov dword ptr fs:[0], esp
// 0046c798  81ecac000000         sub esp, 0xac
// 0046c79e  53                   push ebx
// 0046c79f  56                   push esi
// 0046c7a0  57                   push edi
// 0046c7a1  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046c7a4  e8bf412300           call 0x6a0968
// 0046c7a9  50                   push eax
// 0046c7aa  8d4de0               lea ecx, [ebp - 0x20]
// 0046c7ad  e8b0412300           call 0x6a0962
// 0046c7b2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0046c7b9  6a01                 push 1
// 0046c7bb  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 0046c7c1  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c7c5  ff1560238000         call dword ptr [0x802360]
// 0046c7cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0046c7ce  50                   push eax
// 0046c7cf  8d4d0c               lea ecx, [ebp + 0xc]
// 0046c7d2  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c7d6  ff15d83e8000         call dword ptr [0x803ed8]
// 0046c7dc  6a40                 push 0x40
// 0046c7de  6a22                 push 0x22
// 0046c7e0  8bc8                 mov ecx, eax
// 0046c7e2  c645fc03             mov byte ptr [ebp - 4], 3
// 0046c7e6  ff15e03e8000         call dword ptr [0x803ee0]
// 0046c7ec  50                   push eax
// 0046c7ed  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 0046c7f3  ff1564238000         call dword ptr [0x802364]
// 0046c7f9  8d4d0c               lea ecx, [ebp + 0xc]
// 0046c7fc  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c800  ff15143f8000         call dword ptr [0x803f14]
// 0046c806  8b7508               mov esi, dword ptr [ebp + 8]
// 0046c809  8b5624               mov edx, dword ptr [esi + 0x24]
// 0046c80c  83ec08               sub esp, 8
// 0046c80f  8bcc                 mov ecx, esp
// 0046c811  8911                 mov dword ptr [ecx], edx
// 0046c813  8b4628               mov eax, dword ptr [esi + 0x28]
// 0046c816  89650c               mov dword ptr [ebp + 0xc], esp
// 0046c819  894104               mov dword ptr [ecx + 4], eax
// 0046c81c  85c0                 test eax, eax
// 0046c81e  740c                 je 0x46c82c
// 0046c820  83c004               add eax, 4
// 0046c823  b901000000           mov ecx, 1
// 0046c828  f00fc108             lock xadd dword ptr [eax], ecx
// 0046c82c  8d4dd0               lea ecx, [ebp - 0x30]
// 0046c82f  e80c53faff           call 0x411b40
// 0046c834  8d550c               lea edx, [ebp + 0xc]
// 0046c837  b304                 mov bl, 4
// 0046c839  52                   push edx
// 0046c83a  8bce                 mov ecx, esi
// 0046c83c  885dfc               mov byte ptr [ebp - 4], bl
// 0046c83f  e84ce3ffff           call 0x46ab90
// 0046c844  8b00                 mov eax, dword ptr [eax]
// 0046c846  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 0046c84c  51                   push ecx
// 0046c84d  50                   push eax
// 0046c84e  8bce                 mov ecx, esi
// 0046c850  c645fc05             mov byte ptr [ebp - 4], 5
// 0046c854  e807f0ffff           call 0x46b860
// 0046c859  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0046c85c  8bf8                 mov edi, eax
// 0046c85e  885dfc               mov byte ptr [ebp - 4], bl
// 0046c861  85c9                 test ecx, ecx
// 0046c863  7410                 je 0x46c875
// 0046c865  8bf1                 mov esi, ecx
// 0046c867  e80472faff           call 0x413a70
// 0046c86c  56                   push esi
// 0046c86d  e8083e2300           call 0x6a067a
// 0046c872  83c404               add esp, 4
// 0046c875  8d4dd0               lea ecx, [ebp - 0x30]
// 0046c878  c645fc02             mov byte ptr [ebp - 4], 2
// 0046c87c  e83fab1000           call 0x5773c0
// 0046c881  8d8d48ffffff         lea ecx, [ebp - 0xb8]
// 0046c887  c645fc01             mov byte ptr [ebp - 4], 1
// 0046c88b  ff15d4238000         call dword ptr [0x8023d4]
// 0046c891  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 0046c894  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0046c89b  85c0                 test eax, eax
// 0046c89d  7406                 je 0x46c8a5
// 0046c89f  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0046c8a2  895004               mov dword ptr [eax + 4], edx
// 0046c8a5  837dec00             cmp dword ptr [ebp - 0x14], 0
// 0046c8a9  740b                 je 0x46c8b6
// 0046c8ab  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0046c8ae  50                   push eax
// 0046c8af  6a00                 push 0
// 0046c8b1  e8a6402300           call 0x6a095c
// 0046c8b6  8bc7                 mov eax, edi
// 0046c8b8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046c8bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c8c2  5f                   pop edi
// 0046c8c3  5e                   pop esi
// 0046c8c4  5b                   pop ebx
// 0046c8c5  8be5                 mov esp, ebp
// 0046c8c7  5d                   pop ebp
// 0046c8c8  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Guard {
    int saved;
    int* target;
    void* token;
    int active;
    Guard(void*);
    ~Guard();
};

extern "C" void* __cdecl current_context();
extern "C" void __stdcall release_context(int, void*);

inline Guard::~Guard()
{
    if (target)
        target[1] = saved;
    if (active)
        release_context(0, token);
}

struct Stream {
    char storage[136];
    Stream();
    ~Stream();
    void open(const char*);
};

extern void (__thiscall* stream_construct)(Stream*, int);
extern void (__thiscall* stream_destroy)(Stream*);
extern void (__thiscall* stream_open)(Stream*, const char*);

inline Stream::Stream()
{
    stream_construct(this, 1);
}

inline Stream::~Stream()
{
    stream_destroy(this);
}

inline void Stream::open(const char* name)
{
    stream_open(this, name);
}

struct __declspec(dllimport) Text {
    void* data;
    Text(const char*);
    ~Text();
    const char* convert(int, int);
};

extern Text* (__thiscall* text_construct)(Text*, const char*);
extern void (__thiscall* text_destroy)(Text*);
extern const char* (__thiscall* text_convert)(Text*, int, int);

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* count = &control->references;
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Scope {
    char storage[16];
    Scope(Shared);
    ~Scope();
};

struct Owned {
    void destroy();
};

extern "C" void __cdecl free_owned(void*);

struct Owner {
    Owned* object;
    ~Owner();
};

inline Owner::~Owner()
{
    if (object) {
        Owned* p = object;
        p->destroy();
        free_owned(p);
    }
}

struct S {
    char padding[36];
    Shared shared;
    Owner acquire();
    int write(Owned*, Stream*);
};

int __stdcall function(S* source, const char* name)
{
    try {
        Guard guard(current_context());
        Stream stream;
        stream.open(Text(name).convert(34, 64));
        Scope scope(source->shared);
        return source->write(source->acquire().object, &stream);
    }
    catch (...) {
        return 0;
    }
}
