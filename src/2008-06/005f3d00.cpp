// from server: 100% by king_originala
// roc 2008-06 005f3d00  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3d00
//
// 005f3d00  6aff                 push -1
// 005f3d02  68a8747d00           push 0x7d74a8
// 005f3d07  64a100000000         mov eax, dword ptr fs:[0]
// 005f3d0d  50                   push eax
// 005f3d0e  64892500000000       mov dword ptr fs:[0], esp
// 005f3d15  51                   push ecx
// 005f3d16  56                   push esi
// 005f3d17  8bf1                 mov esi, ecx
// 005f3d19  89742404             mov dword ptr [esp + 4], esi
// 005f3d1d  ff1548258000         call dword ptr [0x802548]
// 005f3d23  33c0                 xor eax, eax
// 005f3d25  88463c               mov byte ptr [esi + 0x3c], al
// 005f3d28  884644               mov byte ptr [esi + 0x44], al
// 005f3d2b  894648               mov dword ptr [esi + 0x48], eax
// 005f3d2e  89464c               mov dword ptr [esi + 0x4c], eax
// 005f3d31  894650               mov dword ptr [esi + 0x50], eax
// 005f3d34  894654               mov dword ptr [esi + 0x54], eax
// 005f3d37  c7465810000000       mov dword ptr [esi + 0x58], 0x10
// 005f3d3e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f3d42  89442410             mov dword ptr [esp + 0x10], eax
// 005f3d46  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f3d4a  c706140a8400         mov dword ptr [esi], 0x840a14
// 005f3d50  8b08                 mov ecx, dword ptr [eax]
// 005f3d52  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f3d56  52                   push edx
// 005f3d57  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f3d5b  50                   push eax
// 005f3d5c  8d4c2420             lea ecx, [esp + 0x20]
// 005f3d60  51                   push ecx
// 005f3d61  8bce                 mov ecx, esi
// 005f3d63  e838f6ffff           call 0x5f33a0
// 005f3d68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3d6c  8bc6                 mov eax, esi
// 005f3d6e  5e                   pop esi
// 005f3d6f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3d76  83c410               add esp, 0x10
// 005f3d79  c20c00               ret 0xc

typedef void (__thiscall *StreambufConstructor)(void*);
extern StreambufConstructor streambufConstructor;

namespace std {
    template<class T> struct char_traits;

    template<class T, class Traits> class basic_streambuf {
    protected:
        basic_streambuf();
    public:
        ~basic_streambuf();
    private:
        char storage[56];
    };

    template<class T, class Traits>
    inline basic_streambuf<T, Traits>::basic_streambuf()
    {
        streambufConstructor(reinterpret_cast<char*>(this) - 4);
    }
}

struct Device {
    int value;
};

struct Buffer : std::basic_streambuf<char, std::char_traits<char> > {
    unsigned char state;
    unsigned char padding[3];
    Device device;
    unsigned char engaged;
    unsigned char padding2[3];
    char* first;
    char* last;
    char* current;
    char* limit;
    int capacity;

    Buffer();
};

inline Buffer::Buffer()
    : state(0),
      engaged(0),
      first(0),
      last(0),
      current(0),
      limit(0),
      capacity(16)
{
}

struct S : Buffer {
    S(const Device& source, int mode, int size);
    virtual ~S();
    void open(const Device& source, int mode, int size);
};

S::S(const Device& source, int mode, int size)
{
    open(Device(source), mode, size);
}
