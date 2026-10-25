// from server: 100% by king_originala
// roc 2008-06 00428180  unit: MainLogManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428180
//
// 00428180  6aff                 push -1
// 00428182  683df17b00           push 0x7bf13d
// 00428187  64a100000000         mov eax, dword ptr fs:[0]
// 0042818d  50                   push eax
// 0042818e  64892500000000       mov dword ptr fs:[0], esp
// 00428195  83ec28               sub esp, 0x28
// 00428198  53                   push ebx
// 00428199  56                   push esi
// 0042819a  57                   push edi
// 0042819b  8bf1                 mov esi, ecx
// 0042819d  33db                 xor ebx, ebx
// 0042819f  68d0038100           push 0x8103d0
// 004281a4  8d4c241c             lea ecx, [esp + 0x1c]
// 004281a8  895c2410             mov dword ptr [esp + 0x10], ebx
// 004281ac  ff1558248000         call dword ptr [0x802458]
// 004281b2  8d4630               lea eax, [esi + 0x30]
// 004281b5  50                   push eax
// 004281b6  8d4c241c             lea ecx, [esp + 0x1c]
// 004281ba  895c2440             mov dword ptr [esp + 0x40], ebx
// 004281be  ff1550248000         call dword ptr [0x802450]
// 004281c4  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 004281ca  8b11                 mov edx, dword ptr [ecx]
// 004281cc  52                   push edx
// 004281cd  6a0c                 push 0xc
// 004281cf  8d4c2420             lea ecx, [esp + 0x20]
// 004281d3  ff15ec238000         call dword ptr [0x8023ec]
// 004281d9  6a03                 push 3
// 004281db  6a04                 push 4
// 004281dd  8d4c2420             lea ecx, [esp + 0x20]
// 004281e1  ff15ec238000         call dword ptr [0x8023ec]
// 004281e7  68d0070000           push 0x7d0
// 004281ec  e82f872700           call 0x6a0920
// 004281f1  8bf8                 mov edi, eax
// 004281f3  83c404               add esp, 4
// 004281f6  897c2414             mov dword ptr [esp + 0x14], edi
// 004281fa  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004281ff  3bfb                 cmp edi, ebx
// 00428201  743d                 je 0x428240
// 00428203  55                   push ebp
// 00428204  8d442414             lea eax, [esp + 0x14]
// 00428208  50                   push eax
// 00428209  8d4e04               lea ecx, [esi + 4]
// 0042820c  e88ff9ffff           call 0x427ba0
// 00428211  bb01000000           mov ebx, 1
// 00428216  8bc8                 mov ecx, eax
// 00428218  c644244002           mov byte ptr [esp + 0x40], 2
// 0042821d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00428221  ff15e03e8000         call dword ptr [0x803ee0]
// 00428227  53                   push ebx
// 00428228  8d4c2420             lea ecx, [esp + 0x20]
// 0042822c  8be8                 mov ebp, eax
// 0042822e  ff1564248000         call dword ptr [0x802464]
// 00428234  50                   push eax
// 00428235  55                   push ebp
// 00428236  8bcf                 mov ecx, edi
// 00428238  e8e3f7ffff           call 0x427a20
// 0042823d  5d                   pop ebp
// 0042823e  eb02                 jmp 0x428242
// 00428240  33c0                 xor eax, eax
// 00428242  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00428245  51                   push ecx
// 00428246  89462c               mov dword ptr [esi + 0x2c], eax
// 00428249  e82c842700           call 0x6a067a
// 0042824e  83c404               add esp, 4
// 00428251  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00428259  f6c301               test bl, 1
// 0042825c  740a                 je 0x428268
// 0042825e  8d4c2410             lea ecx, [esp + 0x10]
// 00428262  ff15143f8000         call dword ptr [0x803f14]
// 00428268  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0042826b  e890620700           call 0x49e500
// 00428270  8d4c2418             lea ecx, [esp + 0x18]
// 00428274  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0042827c  ff1568248000         call dword ptr [0x802468]
// 00428282  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00428286  5f                   pop edi
// 00428287  5e                   pop esi
// 00428288  5b                   pop ebx
// 00428289  64890d00000000       mov dword ptr fs:[0], ecx
// 00428290  83c434               add esp, 0x34
// 00428293  c3                   ret 

typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *) throw();

struct String;
struct TextResult;

extern void (__thiscall *string_construct)(String *, const char *);
extern String & (__thiscall *string_append)(String *, const String &);
extern String & (__thiscall *string_erase)(String *, unsigned int, unsigned int);
extern const char * (__thiscall *string_c_str)(const String *, int);
extern void (__thiscall *string_destroy)(String *);
extern const unsigned int *string_npos;

extern const char * (__thiscall *getText)(TextResult *);
extern void (__thiscall *releaseText)(TextResult *);

struct TextResult {
    unsigned int data;
    const char *get();
    ~TextResult();
};

inline const char *TextResult::get()
{
    return getText(this);
}

inline TextResult::~TextResult()
{
    releaseText(this);
}

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
    TextResult text();
};

inline String::String(const char *value)
{
    string_construct(this, value);
}

inline String::~String()
{
    string_destroy(this);
}

struct Buffer {
    unsigned char data[2000];
    Buffer(const char *, const char *);
    void start();
};

struct MainLogManager {
    unsigned int reserved;
    String source;
    unsigned char padding[12];
    Buffer *buffer;
    String suffix;
    Buffer *replace(Buffer *);
    void run();
};

inline Buffer *MainLogManager::replace(Buffer *value)
{
    Buffer *old = buffer;
    buffer = value;
    return old;
}

void MainLogManager::run()
{
    String name("log_");
    string_append(&name, suffix);
    string_erase(&name, 12, *string_npos);
    string_erase(&name, 4, 3);
    operator delete(replace(new Buffer(source.text().get(),
                                      string_c_str(&name, 1))));
    buffer->start();
}
