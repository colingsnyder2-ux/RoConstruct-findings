// from server: 100% by king_originala
// roc 2008-06 0050b530  unit: G3D::Log  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050b530
//
// 0050b530  6aff                 push -1
// 0050b532  68c8be7c00           push 0x7cbec8
// 0050b537  64a100000000         mov eax, dword ptr fs:[0]
// 0050b53d  50                   push eax
// 0050b53e  64892500000000       mov dword ptr fs:[0], esp
// 0050b545  81ec0c010000         sub esp, 0x10c
// 0050b54b  56                   push esi
// 0050b54c  8bb42420010000       mov esi, dword ptr [esp + 0x120]
// 0050b553  8b06                 mov eax, dword ptr [esi]
// 0050b555  8b4808               mov ecx, dword ptr [eax + 8]
// 0050b558  56                   push esi
// 0050b559  ffd1                 call ecx
// 0050b55b  56                   push esi
// 0050b55c  e84f010100           call 0x51b6b0
// 0050b561  8b16                 mov edx, dword ptr [esi]
// 0050b563  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0050b566  8d442450             lea eax, [esp + 0x50]
// 0050b56a  50                   push eax
// 0050b56b  56                   push esi
// 0050b56c  ffd1                 call ecx
// 0050b56e  83c410               add esp, 0x10
// 0050b571  8d542448             lea edx, [esp + 0x48]
// 0050b575  52                   push edx
// 0050b576  8d4c2430             lea ecx, [esp + 0x30]
// 0050b57a  ff1558248000         call dword ptr [0x802458]
// 0050b580  8d4c2404             lea ecx, [esp + 4]
// 0050b584  c784241801000000000000 mov dword ptr [esp + 0x118], 0
// 0050b58f  ff1598288000         call dword ptr [0x802898]
// 0050b595  8d44242c             lea eax, [esp + 0x2c]
// 0050b599  50                   push eax
// 0050b59a  8d4c2414             lea ecx, [esp + 0x14]
// 0050b59e  c684241c01000001     mov byte ptr [esp + 0x11c], 1
// 0050b5a6  c7442408f8b78000     mov dword ptr [esp + 8], 0x80b7f8
// 0050b5ae  ff155c248000         call dword ptr [0x80245c]
// 0050b5b4  68c81b8d00           push 0x8d1bc8
// 0050b5b9  8d4c2408             lea ecx, [esp + 8]
// 0050b5bd  51                   push ecx
// 0050b5be  c684242001000000     mov byte ptr [esp + 0x120], 0
// 0050b5c6  e8c15f1900           call 0x6a158c
// 0050b5cb  5e                   pop esi

namespace std {
template<class T> class allocator {};
template<class T> struct char_traits {};

template<class T, class Traits = char_traits<T>, class Alloc = allocator<T> >
class basic_string {
    char storage[28];
public:
    basic_string(const T*);
    basic_string(const basic_string&);
    ~basic_string();
};

typedef basic_string<char> string;

class exception {
protected:
    void* table;
    char* message;
    bool owned;
public:
    exception();
    exception(const exception&);
    ~exception();
    const char* what() const;
};

class runtime_error : public exception {
    string message;
public:
    runtime_error(const string&);
    runtime_error(const runtime_error&);
    ~runtime_error();
    const char* what() const;
};
}

extern void (__thiscall *stringFromText)(std::string*, const char*);
extern void (__thiscall *stringFromString)(std::string*, const std::string&);
extern void (__thiscall *exceptionConstruct)(std::exception*);
extern void* runtimeErrorTable[];

template<>
__forceinline std::basic_string<char>::basic_string(const char* text)
{
    stringFromText(this, text);
}

template<>
__forceinline std::basic_string<char>::basic_string(const std::basic_string<char>& text)
{
    stringFromString(this, text);
}

__forceinline std::exception::exception()
{
    exceptionConstruct(this);
}

__forceinline std::runtime_error::runtime_error(const std::string& text)
    : exception(), message((table = runtimeErrorTable, text)) {}

struct Dialog;

struct DialogFunctions {
    void (__cdecl *slot0)();
    void (__cdecl *slot1)();
    void (__cdecl *prepare)(Dialog*);
    void (__cdecl *getMessage)(Dialog*, char*);
};

struct Dialog {
    DialogFunctions* functions;
};

extern void __cdecl releaseDialog(Dialog*);

void __cdecl reportDialogError(Dialog* dialog)
{
    char buffer[200];
    dialog->functions->prepare(dialog);
    releaseDialog(dialog);
    dialog->functions->getMessage(dialog, buffer);
    std::string message(buffer);
    throw std::runtime_error(message);
}
