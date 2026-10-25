// from server: 100% by king_originala
// roc 2008-06 0057d620  unit: RBX::FixedCameraCommand  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d620
//
// 0057d620  56                   push esi
// 0057d621  8bf1                 mov esi, ecx
// 0057d623  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057d626  8d8888020000         lea ecx, [eax + 0x288]
// 0057d62c  8b01                 mov eax, dword ptr [ecx]
// 0057d62e  8b5004               mov edx, dword ptr [eax + 4]
// 0057d631  6a00                 push 0
// 0057d633  ffd2                 call edx
// 0057d635  8bc8                 mov ecx, eax
// 0057d637  e894070500           call 0x5cddd0
// 0057d63c  8b4604               mov eax, dword ptr [esi + 4]
// 0057d63f  83c004               add eax, 4
// 0057d642  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0057d646  7205                 jb 0x57d64d
// 0057d648  8b4004               mov eax, dword ptr [eax + 4]
// 0057d64b  eb03                 jmp 0x57d650
// 0057d64d  83c004               add eax, 4
// 0057d650  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057d653  51                   push ecx
// 0057d654  50                   push eax
// 0057d655  e866ef0000           call 0x58c5c0
// 0057d65a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d65e  8b11                 mov edx, dword ptr [ecx]
// 0057d660  83c408               add esp, 8
// 0057d663  5e                   pop esi
// 0057d664  c744240401000000     mov dword ptr [esp + 4], 1
// 0057d66c  8b02                 mov eax, dword ptr [edx]
// 0057d66e  ffe0                 jmp eax

struct Cam
{
    void setCameraType(int);
};

struct Provider
{
    virtual void v0();
    virtual Cam* getCamera();
};

struct Context
{
    char pad[0x288];
    Provider provider;
};

struct String
{
    int reserved;
    union
    {
        char buffer[16];
        char* pointer;
    } data;
    unsigned length;
    unsigned capacity;
};

struct Name
{
    int reserved;
    String text;
};

struct Result
{
    virtual void finish(int);
};

extern void __cdecl handle(int, int);

struct Command
{
    int reserved0;
    Name* name;
    int reserved8;
    Context* context;

    void execute(Result*);
};

void Command::execute(Result* result)
{
    context->provider.getCamera()->setCameraType(0);

    String* text = &name->text;
    const char* value = text->capacity >= 16
        ? text->data.pointer
        : text->data.buffer;

    handle(reinterpret_cast<int>(value), reinterpret_cast<int>(context));
    result->finish(1);
}
