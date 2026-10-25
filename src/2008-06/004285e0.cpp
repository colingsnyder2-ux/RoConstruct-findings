// from server: 100% by colin
// roc 2008-06 004285e0  unit: MainLogManager  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004285e0
//
// 004285e0  6aff                 push -1
// 004285e2  68d7f17b00           push 0x7bf1d7
// 004285e7  64a100000000         mov eax, dword ptr fs:[0]
// 004285ed  50                   push eax
// 004285ee  64892500000000       mov dword ptr fs:[0], esp
// 004285f5  83ec40               sub esp, 0x40
// 004285f8  56                   push esi
// 004285f9  8bf1                 mov esi, ecx
// 004285fb  57                   push edi
// 004285fc  89742408             mov dword ptr [esp + 8], esi
// 00428600  c7060c038100         mov dword ptr [esi], 0x81030c
// 00428606  8b4604               mov eax, dword ptr [esi + 4]
// 00428609  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00428611  85c0                 test eax, eax
// 00428613  0f84a2000000         je 0x4286bb
// 00428619  83c024               add eax, 0x24
// 0042861c  50                   push eax
// 0042861d  8d4c2414             lea ecx, [esp + 0x14]
// 00428621  ff155c248000         call dword ptr [0x80245c]
// 00428627  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042862a  8b7920               mov edi, dword ptr [ecx + 0x20]
// 0042862d  c644245001           mov byte ptr [esp + 0x50], 1
// 00428632  85c9                 test ecx, ecx
// 00428634  7408                 je 0x42863e
// 00428636  8b01                 mov eax, dword ptr [ecx]
// 00428638  8b10                 mov edx, dword ptr [eax]
// 0042863a  6a01                 push 1
// 0042863c  ffd2                 call edx
// 0042863e  83ec1c               sub esp, 0x1c
// 00428641  c7460400000000       mov dword ptr [esi + 4], 0
// 00428648  8bcc                 mov ecx, esp
// 0042864a  89642428             mov dword ptr [esp + 0x28], esp
// 0042864e  83ff02               cmp edi, 2
// 00428651  7522                 jne 0x428675
// 00428653  68fc038100           push 0x8103fc
// 00428658  ff1558248000         call dword ptr [0x802458]
// 0042865e  8d4c242c             lea ecx, [esp + 0x2c]
// 00428662  c644246c02           mov byte ptr [esp + 0x6c], 2
// 00428667  ff1564248000         call dword ptr [0x802464]
// 0042866d  50                   push eax
// 0042866e  8d44244c             lea eax, [esp + 0x4c]
// 00428672  50                   push eax
// 00428673  eb20                 jmp 0x428695
// 00428675  68f0038100           push 0x8103f0
// 0042867a  ff1558248000         call dword ptr [0x802458]
// 00428680  8d4c242c             lea ecx, [esp + 0x2c]
// 00428684  c644246c03           mov byte ptr [esp + 0x6c], 3
// 00428689  ff1564248000         call dword ptr [0x802464]
// 0042868f  50                   push eax
// 00428690  8d4c244c             lea ecx, [esp + 0x4c]
// 00428694  51                   push ecx
// 00428695  c644247401           mov byte ptr [esp + 0x74], 1
// 0042869a  e871fcffff           call 0x428310
// 0042869f  83c424               add esp, 0x24
// 004286a2  8d4c242c             lea ecx, [esp + 0x2c]
// 004286a6  ff1568248000         call dword ptr [0x802468]
// 004286ac  8d4c2410             lea ecx, [esp + 0x10]
// 004286b0  c644245000           mov byte ptr [esp + 0x50], 0
// 004286b5  ff1568248000         call dword ptr [0x802468]
// 004286bb  8d4e0c               lea ecx, [esi + 0xc]
// 004286be  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004286c6  ff1568248000         call dword ptr [0x802468]
// 004286cc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004286d0  5f                   pop edi
// 004286d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004286d8  5e                   pop esi
// 004286d9  83c44c               add esp, 0x4c
// 004286dc  c3                   ret 

extern void (__thiscall *stringCopy)(void*, const void*);
extern void (__thiscall *stringConstruct)(void*, const char*);
extern void (__thiscall *stringDestroy)(void*);
extern const char* (__thiscall *stringData)(const void*);

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        __declspec(dllimport) basic_string(const C*);
        ~basic_string();
        const C* c_str() const;
    };

    template<class C, class T, class A>
    inline basic_string<C, T, A>::basic_string(const basic_string& other)
    {
        stringCopy(this, &other);
    }

    template<class C, class T, class A>
    inline basic_string<C, T, A>::~basic_string()
    {
        stringDestroy(this);
    }

    template<class C, class T, class A>
    inline const C* basic_string<C, T, A>::c_str() const
    {
        return stringData(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct LogRecord {
    virtual ~LogRecord();
    unsigned char padding[28];
    int kind;
    std::string path;
};

std::string __cdecl relocateLog(const char*, std::string);

struct MainLogManager {
    virtual ~MainLogManager();
    LogRecord* record;
    unsigned int padding;
    std::string path;
};

MainLogManager::~MainLogManager()
{
    if (record) {
        std::string savedPath(record->path);
        int kind = record->kind;
        delete record;
        record = 0;

        if (kind == 2)
            relocateLog(savedPath.c_str(), "error\\");
        else
            relocateLog(savedPath.c_str(), "archive\\");
    }
}
