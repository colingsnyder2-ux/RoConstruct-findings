// from server: 100% by king_originala
// roc 2008-06 004a6560  unit: RBX::VHint::?$FactoryProduct::Creator  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6560
//
// 004a6560  64a100000000         mov eax, dword ptr fs:[0]
// 004a6566  6aff                 push -1
// 004a6568  68b9fe7c00           push 0x7cfeb9
// 004a656d  50                   push eax
// 004a656e  64892500000000       mov dword ptr fs:[0], esp
// 004a6575  83ec44               sub esp, 0x44
// 004a6578  56                   push esi
// 004a6579  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004a657d  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a6580  3d400d0300           cmp eax, 0x30d40
// 004a6585  7634                 jbe 0x4a65bb
// 004a6587  682c3d8200           push 0x823d2c
// 004a658c  8d4c2408             lea ecx, [esp + 8]
// 004a6590  ff1558248000         call dword ptr [0x802458]
// 004a6596  8d442404             lea eax, [esp + 4]
// 004a659a  50                   push eax
// 004a659b  8d4c2424             lea ecx, [esp + 0x24]
// 004a659f  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004a65a7  e8a437f6ff           call 0x409d50
// 004a65ac  68c81b8d00           push 0x8d1bc8
// 004a65b1  8d4c2424             lea ecx, [esp + 0x24]
// 004a65b5  51                   push ecx
// 004a65b6  e8d1af1f00           call 0x6a158c
// 004a65bb  57                   push edi
// 004a65bc  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004a65c0  6a01                 push 1
// 004a65c2  6a20                 push 0x20
// 004a65c4  8d542468             lea edx, [esp + 0x68]
// 004a65c8  52                   push edx
// 004a65c9  8bcf                 mov ecx, edi
// 004a65cb  8944246c             mov dword ptr [esp + 0x6c], eax
// 004a65cf  e82cf0ffff           call 0x4a5600
// 004a65d4  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004a65d8  8b4614               mov eax, dword ptr [esi + 0x14]
// 004a65db  7205                 jb 0x4a65e2
// 004a65dd  8b7604               mov esi, dword ptr [esi + 4]
// 004a65e0  eb03                 jmp 0x4a65e5
// 004a65e2  83c604               add esi, 4
// 004a65e5  6a00                 push 0
// 004a65e7  57                   push edi
// 004a65e8  40                   inc eax
// 004a65e9  50                   push eax
// 004a65ea  56                   push esi
// 004a65eb  e8403c0100           call 0x4ba230
// 004a65f0  8bc8                 mov ecx, eax
// 004a65f2  e8f93e0100           call 0x4ba4f0
// 004a65f7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004a65fb  8bc7                 mov eax, edi
// 004a65fd  5f                   pop edi
// 004a65fe  5e                   pop esi
// 004a65ff  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6606  83c450               add esp, 0x50
// 004a6609  c3                   ret 

extern void (__thiscall *stringConstruct)(void*, const char*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
    public:
        unsigned allocator_data;
        union {
            T buffer[16];
            T* pointer;
        };
        unsigned length;
        unsigned capacity;

        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        stringConstruct(this, text);
    }
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Error {
    char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Stream {
    void writeBits(const unsigned*, int, bool);
};

struct Encoder {
    void write(const char*, unsigned, Stream*, int);
};

extern Encoder* __cdecl getEncoder();

Stream* __cdecl writeString(Stream* stream, const String& text)
{
    if (text.length > 200000) {
        String message("BitStream string write: String too long");
        throw Error(message);
    }

    unsigned length = text.length;
    stream->writeBits(&length, 32, true);

    unsigned count = text.length;
    const char* data;
    if (text.capacity >= 16)
        data = text.pointer;
    else
        data = text.buffer;

    getEncoder()->write(data, count + 1, stream, 0);
    return stream;
}
