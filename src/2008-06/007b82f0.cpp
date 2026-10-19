// from server: 94% by colin
// from server: 91% by king_originala
// roc 2008-06 007b82f0  unit: RBX::Render::Material  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b82f0
//
// 007b82f0  6aff                 push -1
// 007b82f2  6811e57e00           push 0x7ee511
// 007b82f7  64a100000000         mov eax, dword ptr fs:[0]
// 007b82fd  50                   push eax
// 007b82fe  64892500000000       mov dword ptr fs:[0], esp
// 007b8305  83ec24               sub esp, 0x24
// 007b8308  56                   push esi
// 007b8309  57                   push edi
// 007b830a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 007b830e  56                   push esi
// 007b830f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007b8317  e8946ad5ff           call 0x50edb0
// 007b831c  83c404               add esp, 4
// 007b831f  83f809               cmp eax, 9
// 007b8322  7526                 jne 0x7b834a
// 007b8324  8d442408             lea eax, [esp + 8]
// 007b8328  50                   push eax
// 007b8329  8d4c2410             lea ecx, [esp + 0x10]
// 007b832d  c744240c205c8700     mov dword ptr [esp + 0xc], 0x875c20
// 007b8335  ff15a4288000         call dword ptr [0x8028a4]
// 007b833b  687c998d00           push 0x8d997c
// 007b8340  8d4c2410             lea ecx, [esp + 0x10]
// 007b8344  51                   push ecx
// 007b8345  e84292eeff           call 0x6a158c
// 007b834a  50                   push eax
// 007b834b  56                   push esi
// 007b834c  8d4c2420             lea ecx, [esp + 0x20]
// 007b8350  e81b83d5ff           call 0x510670
// 007b8355  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 007b8359  397c2420             cmp dword ptr [esp + 0x20], edi
// 007b835d  c644243401           mov byte ptr [esp + 0x34], 1
// 007b8362  7f2b                 jg 0x7b838f
// 007b8364  397c2424             cmp dword ptr [esp + 0x24], edi
// 007b8368  7f25                 jg 0x7b838f
// 007b836a  8d542440             lea edx, [esp + 0x40]
// 007b836e  56                   push esi
// 007b836f  52                   push edx
// 007b8370  ff15d8238000         call dword ptr [0x8023d8]
// 007b8376  83c408               add esp, 8
// 007b8379  84c0                 test al, al
// 007b837b  7446                 je 0x7b83c3
// 007b837d  6a05                 push 5
// 007b837f  8d442444             lea eax, [esp + 0x44]
// 007b8383  50                   push eax
// 007b8384  8d4c2420             lea ecx, [esp + 0x20]
// 007b8388  e8a370d5ff           call 0x50f430
// 007b838d  eb34                 jmp 0x7b83c3
// 007b838f  8d4c2440             lea ecx, [esp + 0x40]
// 007b8393  51                   push ecx
// 007b8394  8d54241c             lea edx, [esp + 0x1c]
// 007b8398  52                   push edx
// 007b8399  e8e2fdffff           call 0x7b8180
// 007b839e  83c408               add esp, 8
// 007b83a1  57                   push edi
// 007b83a2  83ec1c               sub esp, 0x1c
// 007b83a5  8d442460             lea eax, [esp + 0x60]
// 007b83a9  8bcc                 mov ecx, esp
// 007b83ab  89642428             mov dword ptr [esp + 0x28], esp
// 007b83af  50                   push eax
// 007b83b0  ff155c248000         call dword ptr [0x80245c]
// 007b83b6  8d4c2460             lea ecx, [esp + 0x60]
// 007b83ba  51                   push ecx
// 007b83bb  e830ffffff           call 0x7b82f0
// 007b83c0  83c424               add esp, 0x24
// 007b83c3  8d4c2418             lea ecx, [esp + 0x18]
// 007b83c7  c644243400           mov byte ptr [esp + 0x34], 0
// 007b83cc  e85f5ed5ff           call 0x50e230
// 007b83d1  8d4c2440             lea ecx, [esp + 0x40]
// 007b83d5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 007b83dd  ff1568248000         call dword ptr [0x802468]
// 007b83e3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b83e7  5f                   pop edi
// 007b83e8  64890d00000000       mov dword ptr fs:[0], ecx
// 007b83ef  5e                   pop esi
// 007b83f0  83c430               add esp, 0x30
// 007b83f3  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class C, class T, class A>
    bool operator!=(const basic_string<C, T, A>&,
                    const basic_string<C, T, A>&);

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        const char* message;
        int owned;
    public:
        exception(const char* const&);
        virtual ~exception();
        virtual const char* what() const;
    };
}

struct Texture {
    void* data;
    int width;
    int height;
    int format;

    Texture(const std::string&, int);
    virtual ~Texture();
    __declspec(dllimport) void save(const std::string&, int);
};

int getFormat(const std::string&);
void resizeTexture(Texture&, std::string&);
void processTexture(const std::string&, std::string, int);

void processTexture(const std::string& source, std::string destination,
                    int maximumSize)
{
    int format = getFormat(source);
    if (format != 9)
        throw std::exception("unknown texture format");

    Texture texture(source, format);
    if (texture.width <= maximumSize && texture.height <= maximumSize) {
        if (destination != source)
            texture.save(destination, 5);
    } else {
        resizeTexture(texture, destination);
        processTexture(destination, destination, maximumSize);
    }
}
