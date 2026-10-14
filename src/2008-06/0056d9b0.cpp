// from server: 98% by colin
// roc 2008-06 0056d9b0  unit: G3D::VColor3::?$holder  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d9b0
//
// 0056d9b0  64a100000000         mov eax, dword ptr fs:[0]
// 0056d9b6  6aff                 push -1
// 0056d9b8  68d9fe7c00           push 0x7cfed9
// 0056d9bd  50                   push eax
// 0056d9be  64892500000000       mov dword ptr fs:[0], esp
// 0056d9c5  83ec74               sub esp, 0x74
// 0056d9c8  53                   push ebx
// 0056d9c9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d9cf  56                   push esi
// 0056d9d0  57                   push edi
// 0056d9d1  8bf9                 mov edi, ecx
// 0056d9d3  8d7704               lea esi, [edi + 4]
// 0056d9d6  85f6                 test esi, esi
// 0056d9d8  7428                 je 0x56da02
// 0056d9da  8b0e                 mov ecx, dword ptr [esi]
// 0056d9dc  85c9                 test ecx, ecx
// 0056d9de  7409                 je 0x56d9e9
// 0056d9e0  8b01                 mov eax, dword ptr [ecx]
// 0056d9e2  8b5004               mov edx, dword ptr [eax + 4]
// 0056d9e5  ffd2                 call edx
// 0056d9e7  eb05                 jmp 0x56d9ee
// 0056d9e9  b814969200           mov eax, 0x929614
// 0056d9ee  6880639400           push 0x946380
// 0056d9f3  8bc8                 mov ecx, eax
// 0056d9f5  ffd3                 call ebx
// 0056d9f7  84c0                 test al, al
// 0056d9f9  7407                 je 0x56da02
// 0056d9fb  8b06                 mov eax, dword ptr [esi]
// 0056d9fd  83c004               add eax, 4
// 0056da00  7551                 jne 0x56da53
// 0056da02  8b07                 mov eax, dword ptr [edi]
// 0056da04  8b4008               mov eax, dword ptr [eax + 8]
// 0056da07  50                   push eax
// 0056da08  b9f8be9200           mov ecx, 0x92bef8
// 0056da0d  ffd3                 call ebx
// 0056da0f  84c0                 test al, al
// 0056da11  7458                 je 0x56da6b
// 0056da13  8d4c2450             lea ecx, [esp + 0x50]
// 0056da17  e8b4a8f0ff           call 0x4782d0
// 0056da1c  8d4c2450             lea ecx, [esp + 0x50]
// 0056da20  51                   push ecx
// 0056da21  56                   push esi
// 0056da22  e86982eaff           call 0x415c90
// 0056da27  83c404               add esp, 4
// 0056da2a  50                   push eax
// 0056da2b  e8c0c80900           call 0x60a2f0
// 0056da30  83c408               add esp, 8
// 0056da33  84c0                 test al, al
// 0056da35  7434                 je 0x56da6b
// 0056da37  8d542450             lea edx, [esp + 0x50]
// 0056da3b  52                   push edx
// 0056da3c  8bce                 mov ecx, esi
// 0056da3e  e8ddf7ffff           call 0x56d220
// 0056da43  e8b8bf0200           call 0x599a00
// 0056da48  56                   push esi
// 0056da49  8907                 mov dword ptr [edi], eax
// 0056da4b  e8c0ecffff           call 0x56c710
// 0056da50  83c404               add esp, 4
// 0056da53  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0056da5a  5f                   pop edi
// 0056da5b  5e                   pop esi
// 0056da5c  5b                   pop ebx
// 0056da5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0056da64  81c480000000         add esp, 0x80
// 0056da6a  c3                   ret 
// 0056da6b  e890bf0200           call 0x599a00
// 0056da70  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056da73  ba10000000           mov edx, 0x10
// 0056da78  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056da7b  7205                 jb 0x56da82
// 0056da7d  8b4808               mov ecx, dword ptr [eax + 8]
// 0056da80  eb03                 jmp 0x56da85
// 0056da82  8d4808               lea ecx, [eax + 8]
// 0056da85  8b07                 mov eax, dword ptr [edi]
// 0056da87  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056da8a  83c004               add eax, 4
// 0056da8d  395018               cmp dword ptr [eax + 0x18], edx
// 0056da90  7205                 jb 0x56da97
// 0056da92  8b4004               mov eax, dword ptr [eax + 4]
// 0056da95  eb03                 jmp 0x56da9a
// 0056da97  83c004               add eax, 4
// 0056da9a  51                   push ecx
// 0056da9b  50                   push eax
// 0056da9c  8d4c2414             lea ecx, [esp + 0x14]
// 0056daa0  681cf78200           push 0x82f71c
// 0056daa5  51                   push ecx
// 0056daa6  e865c0f9ff           call 0x509b10
// 0056daab  83c410               add esp, 0x10
// 0056daae  50                   push eax
// 0056daaf  8d4c242c             lea ecx, [esp + 0x2c]
// 0056dab3  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0056dabe  e88dc2e9ff           call 0x409d50
// 0056dac3  68c81b8d00           push 0x8d1bc8
// 0056dac8  8d54242c             lea edx, [esp + 0x2c]
// 0056dacc  52                   push edx
// 0056dacd  e8ba3a1300           call 0x6a158c

struct type_info {};

extern bool (__thiscall* typeEqual)(const type_info*, const type_info&);

struct String
{
    unsigned int allocator;
    union
    {
        char local[16];
        char* heap;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct Name
{
    unsigned int unused;
    String text;
};

struct Descriptor
{
    unsigned int unused[2];
    const type_info* type;
    Name* name;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const type_info& type() const;
};

struct Frame
{
    char data[48];
    Frame();
};

struct Any
{
    Placeholder* content;
    void assign(const Frame&);
};

struct RuntimeError
{
    char data[36];
    RuntimeError(const String&);
    RuntimeError(const RuntimeError&);
    ~RuntimeError();
};

extern const type_info emptyType;
extern const type_info frameType;
extern const type_info stringType;

extern Descriptor* __cdecl frameDescriptor();
extern const String* __cdecl stringCast(const Any*);
extern bool __cdecl parseFrame(const String*, Frame&);
extern void __cdecl finishAssignment(Any*);
extern String __cdecl format(const char*, ...);

struct Holder
{
    Descriptor* descriptor;
    Any value;

    void convert();
};

void Holder::convert()
{
    bool (__thiscall* equal)(const type_info*, const type_info&) = typeEqual;
    Any* source = &value;
    if (source)
    {
        const type_info& type =
            source->content ? source->content->type() : emptyType;
        if (equal(&type, frameType))
        {
            Frame* result = reinterpret_cast<Frame*>(
                reinterpret_cast<char*>(source->content) + 4);
            if (result)
                return;
        }
    }

    Descriptor* d = descriptor;
    const type_info* dst = d->type;
    if (equal(&stringType, *dst))
    {
        Frame frame;
        if (parseFrame(stringCast(source), frame))
        {
            source->assign(frame);
            descriptor = frameDescriptor();
            finishAssignment(source);
            return;
        }
    }

    const Name* destination = frameDescriptor()->name;
    const char* destinationName = destination->text.capacity >= 16
        ? destination->text.storage.heap
        : destination->text.storage.local;

    const String& original = descriptor->name->text;
    const char* originalName = original.capacity >= 16
        ? original.storage.heap : original.storage.local;

    throw RuntimeError(format("Unable to cast %s to %s",
                              originalName, destinationName));
}
