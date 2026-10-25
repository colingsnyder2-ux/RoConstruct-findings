// from server: 100% by colin
// roc 2008-06 00428d10  unit: LogManager  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428d10
//
// 00428d10  6aff                 push -1
// 00428d12  685df27b00           push 0x7bf25d
// 00428d17  64a100000000         mov eax, dword ptr fs:[0]
// 00428d1d  50                   push eax
// 00428d1e  64892500000000       mov dword ptr fs:[0], esp
// 00428d25  83ec40               sub esp, 0x40
// 00428d28  56                   push esi
// 00428d29  8bf1                 mov esi, ecx
// 00428d2b  57                   push edi
// 00428d2c  8d7e04               lea edi, [esi + 4]
// 00428d2f  89742408             mov dword ptr [esp + 8], esi
// 00428d33  c706cc048100         mov dword ptr [esi], 0x8104cc
// 00428d39  c707c0048100         mov dword ptr [edi], 0x8104c0
// 00428d3f  c744245002000000     mov dword ptr [esp + 0x50], 2
// 00428d47  e864100e00           call 0x509db0
// 00428d4c  85c0                 test eax, eax
// 00428d4e  0f849f000000         je 0x428df3
// 00428d54  8d442410             lea eax, [esp + 0x10]
// 00428d58  50                   push eax
// 00428d59  e802110e00           call 0x509e60
// 00428d5e  83c404               add esp, 4
// 00428d61  c644245003           mov byte ptr [esp + 0x50], 3
// 00428d66  e845100e00           call 0x509db0
// 00428d6b  85c0                 test eax, eax
// 00428d6d  740a                 je 0x428d79
// 00428d6f  8b10                 mov edx, dword ptr [eax]
// 00428d71  8bc8                 mov ecx, eax
// 00428d73  8b02                 mov eax, dword ptr [edx]
// 00428d75  6a01                 push 1
// 00428d77  ffd0                 call eax
// 00428d79  83ec1c               sub esp, 0x1c
// 00428d7c  833d506b970002       cmp dword ptr [0x976b50], 2
// 00428d83  8bcc                 mov ecx, esp
// 00428d85  89642428             mov dword ptr [esp + 0x28], esp
// 00428d89  7522                 jne 0x428dad
// 00428d8b  68fc038100           push 0x8103fc
// 00428d90  ff1558248000         call dword ptr [0x802458]
// 00428d96  8d4c242c             lea ecx, [esp + 0x2c]
// 00428d9a  c644246c04           mov byte ptr [esp + 0x6c], 4
// 00428d9f  ff1564248000         call dword ptr [0x802464]
// 00428da5  50                   push eax
// 00428da6  8d4c244c             lea ecx, [esp + 0x4c]
// 00428daa  51                   push ecx
// 00428dab  eb20                 jmp 0x428dcd
// 00428dad  68f0038100           push 0x8103f0
// 00428db2  ff1558248000         call dword ptr [0x802458]
// 00428db8  8d4c242c             lea ecx, [esp + 0x2c]
// 00428dbc  c644246c05           mov byte ptr [esp + 0x6c], 5
// 00428dc1  ff1564248000         call dword ptr [0x802464]
// 00428dc7  50                   push eax
// 00428dc8  8d54244c             lea edx, [esp + 0x4c]
// 00428dcc  52                   push edx
// 00428dcd  c644247403           mov byte ptr [esp + 0x74], 3
// 00428dd2  e839f5ffff           call 0x428310
// 00428dd7  83c424               add esp, 0x24
// 00428dda  8d4c242c             lea ecx, [esp + 0x2c]
// 00428dde  ff1568248000         call dword ptr [0x802468]
// 00428de4  8d4c2410             lea ecx, [esp + 0x10]
// 00428de8  c644245002           mov byte ptr [esp + 0x50], 2
// 00428ded  ff1568248000         call dword ptr [0x802468]
// 00428df3  8d4e30               lea ecx, [esi + 0x30]
// 00428df6  c705fcd0960000000000 mov dword ptr [0x96d0fc], 0
// 00428e00  c644245001           mov byte ptr [esp + 0x50], 1
// 00428e05  ff1568248000         call dword ptr [0x802468]
// 00428e0b  8b762c               mov esi, dword ptr [esi + 0x2c]
// 00428e0e  56                   push esi
// 00428e0f  e866782700           call 0x6a067a
// 00428e14  83c404               add esp, 4
// 00428e17  8bcf                 mov ecx, edi
// 00428e19  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00428e21  e8baf7ffff           call 0x4285e0
// 00428e26  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00428e2a  5f                   pop edi
// 00428e2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00428e32  5e                   pop esi
// 00428e33  83c44c               add esp, 0x4c
// 00428e36  c3                   ret 

namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;

template<class T, class Traits, class Alloc>
struct basic_string {
    unsigned char storage[28];
    __declspec(dllimport) basic_string(const T*);
    basic_string(const basic_string&);
    ~basic_string();
    const T* c_str() const;
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

extern void (__thiscall* stringConstruct)(String*, const char*);
extern void (__thiscall* stringDestroy)(String*);
extern const char* (__thiscall* stringData)(const String*);

namespace std {
template<class T, class Traits, class Alloc>
inline basic_string<T, Traits, Alloc>::~basic_string()
{
    stringDestroy(this);
}

template<class T, class Traits, class Alloc>
inline const T* basic_string<T, Traits, Alloc>::c_str() const
{
    return stringData(this);
}
}

void __cdecl operator delete(void*) throw();

struct Shader {
    virtual ~Shader();
};

extern Shader* __cdecl getShader();
extern String __cdecl getShaderPath();
extern String __cdecl archiveFile(const char*, String);
extern int archiveMode;
extern void* currentManager;

struct Primary {
    virtual void primarySlot();
};

struct StreamBase {
    unsigned char storage[36];
    virtual ~StreamBase();
};

template<class T>
struct OwnedPointer {
    T* pointer;
    ~OwnedPointer();
};

template<class T>
inline OwnedPointer<T>::~OwnedPointer()
{
    delete pointer;
}

struct LogManager : Primary, StreamBase {
    OwnedPointer<char> buffer;
    String filename;
    virtual ~LogManager();
};

LogManager::~LogManager()
{
    if (getShader()) {
        String path = getShaderPath();
        Shader* shader = getShader();
        if (shader)
            delete shader;

        if (archiveMode == 2)
            archiveFile(path.c_str(), String("error\\"));
        else
            archiveFile(path.c_str(), String("archive\\"));
    }

    currentManager = 0;
}
