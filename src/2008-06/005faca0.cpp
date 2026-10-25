// from server: 100% by king_originala
// roc 2008-06 005faca0  unit: UString_sink::?$stream_buffer  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faca0
//
// 005faca0  6aff                 push -1
// 005faca2  681e7d7d00           push 0x7d7d1e
// 005faca7  64a100000000         mov eax, dword ptr fs:[0]
// 005facad  50                   push eax
// 005facae  64892500000000       mov dword ptr fs:[0], esp
// 005facb5  51                   push ecx
// 005facb6  53                   push ebx
// 005facb7  56                   push esi
// 005facb8  8bf1                 mov esi, ecx
// 005facba  57                   push edi
// 005facbb  8974240c             mov dword ptr [esp + 0xc], esi
// 005facbf  c7065c108400         mov dword ptr [esi], 0x84105c
// 005facc5  ff0db8b59700         dec dword ptr [0x97b5b8]
// 005faccb  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005facce  33db                 xor ebx, ebx
// 005facd0  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005facd8  3bfb                 cmp edi, ebx
// 005facda  7410                 je 0x5facec
// 005facdc  8bcf                 mov ecx, edi
// 005facde  e88dfcffff           call 0x5fa970
// 005face3  57                   push edi
// 005face4  e891590a00           call 0x6a067a
// 005face9  83c404               add esp, 4
// 005facec  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005facef  c644241801           mov byte ptr [esp + 0x18], 1
// 005facf4  3bcb                 cmp ecx, ebx
// 005facf6  7408                 je 0x5fad00
// 005facf8  8b01                 mov eax, dword ptr [ecx]
// 005facfa  8b10                 mov edx, dword ptr [eax]
// 005facfc  6a01                 push 1
// 005facfe  ffd2                 call edx
// 005fad00  8b4614               mov eax, dword ptr [esi + 0x14]
// 005fad03  50                   push eax
// 005fad04  885c241c             mov byte ptr [esp + 0x1c], bl
// 005fad08  e813d0f0ff           call 0x507d20
// 005fad0d  83c404               add esp, 4
// 005fad10  895e14               mov dword ptr [esi + 0x14], ebx
// 005fad13  895e18               mov dword ptr [esi + 0x18], ebx
// 005fad16  895e1c               mov dword ptr [esi + 0x1c], ebx
// 005fad19  8b4e08               mov ecx, dword ptr [esi + 8]
// 005fad1c  5f                   pop edi
// 005fad1d  5e                   pop esi
// 005fad1e  3bcb                 cmp ecx, ebx
// 005fad20  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fad28  5b                   pop ebx
// 005fad29  7408                 je 0x5fad33
// 005fad2b  8b11                 mov edx, dword ptr [ecx]
// 005fad2d  8b02                 mov eax, dword ptr [edx]
// 005fad2f  6a01                 push 1
// 005fad31  ffd0                 call eax
// 005fad33  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fad37  64890d00000000       mov dword ptr fs:[0], ecx
// 005fad3e  83c410               add esp, 0x10
// 005fad41  c3                   ret 

namespace G3D {
struct System {
    static void __cdecl alignedFree(void*);
};
}

void __cdecl operator delete(void*);

extern int liveCount;

struct Buffer {
    void* data;
    int size;
    int capacity;
    ~Buffer();
};

struct Owned {
    virtual ~Owned();
};

struct Owner {
    Owned* p;
    ~Owner();
};

struct Storage {
    void* data;
    int size;
    int capacity;
    ~Storage();
};

struct S {
    int reserved4;
    Owner first;
    int reservedC;
    Buffer* buffer;
    Storage storage;
    Owner last;
    virtual ~S();
};

__forceinline Owner::~Owner()
{
    if (p)
        delete p;
}

__forceinline Storage::~Storage()
{
    G3D::System::alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

S::~S()
{
    --liveCount;
    if (buffer)
        delete buffer;
}
