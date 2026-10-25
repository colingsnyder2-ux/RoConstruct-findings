// from server: 100% by colin
// roc 2008-06 005f9450  unit: boost::iostreams::Uinput::V?$chain::?$filtering_stream_base  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9450
//
// 005f9450  64a100000000         mov eax, dword ptr fs:[0]
// 005f9456  6aff                 push -1
// 005f9458  68b9fe7c00           push 0x7cfeb9
// 005f945d  50                   push eax
// 005f945e  64892500000000       mov dword ptr fs:[0], esp
// 005f9465  83ec4c               sub esp, 0x4c
// 005f9468  56                   push esi
// 005f9469  6a00                 push 0
// 005f946b  6a00                 push 0
// 005f946d  8bf1                 mov esi, ecx
// 005f946f  8b0e                 mov ecx, dword ptr [esi]
// 005f9471  8d44240c             lea eax, [esp + 0xc]
// 005f9475  50                   push eax
// 005f9476  51                   push ecx
// 005f9477  ff15802e8000         call dword ptr [0x802e80]
// 005f947d  85c0                 test eax, eax
// 005f947f  7407                 je 0x5f9488
// 005f9481  837c240400           cmp dword ptr [esp + 4], 0
// 005f9486  7515                 jne 0x5f949d
// 005f9488  83c8ff               or eax, 0xffffffff
// 005f948b  5e                   pop esi
// 005f948c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005f9490  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9497  83c458               add esp, 0x58
// 005f949a  c20800               ret 8
// 005f949d  8b442464             mov eax, dword ptr [esp + 0x64]
// 005f94a1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f94a5  8d542408             lea edx, [esp + 8]
// 005f94a9  52                   push edx
// 005f94aa  8b16                 mov edx, dword ptr [esi]
// 005f94ac  50                   push eax
// 005f94ad  51                   push ecx
// 005f94ae  52                   push edx
// 005f94af  ff157c2e8000         call dword ptr [0x802e7c]
// 005f94b5  85c0                 test eax, eax
// 005f94b7  7534                 jne 0x5f94ed
// 005f94b9  6824098400           push 0x840924
// 005f94be  8d4c2410             lea ecx, [esp + 0x10]
// 005f94c2  ff1558248000         call dword ptr [0x802458]
// 005f94c8  8d44240c             lea eax, [esp + 0xc]
// 005f94cc  50                   push eax
// 005f94cd  8d4c242c             lea ecx, [esp + 0x2c]
// 005f94d1  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 005f94d9  e87208e1ff           call 0x409d50
// 005f94de  68c81b8d00           push 0x8d1bc8
// 005f94e3  8d4c242c             lea ecx, [esp + 0x2c]
// 005f94e7  51                   push ecx
// 005f94e8  e89f800a00           call 0x6a158c
// 005f94ed  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005f94f1  8b442408             mov eax, dword ptr [esp + 8]
// 005f94f5  5e                   pop esi
// 005f94f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005f94fd  83c458               add esp, 0x58
// 005f9500  c20800               ret 8

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void* (__thiscall *StringConstruct)(void*, const char*);

template<>
__forceinline std::basic_string<char, std::char_traits<char>,
    std::allocator<char> >::basic_string(const char* text)
{
    StringConstruct(this, text);
}

struct ReadError {
    char storage[40];
    ReadError(const std::string&);
    ReadError(const ReadError&);
    ~ReadError();
};

extern "C" {
    extern int (__stdcall *InternetQueryDataAvailable)(
        void*, unsigned long*, unsigned long, unsigned long);
    extern int (__stdcall *InternetReadFile)(
        void*, void*, unsigned long, unsigned long*);
}

struct Input {
    void* handle;
    long read(char*, long);
};

long Input::read(char* buffer, long count)
{
    unsigned long available;
    unsigned long received;

    if (!InternetQueryDataAvailable(handle, &available, 0, 0))
        goto fail;

    if (available == 0)
        goto fail;

    if (!InternetReadFile(handle, buffer, count, &received)) {
        std::string message("InternetReadFile failed");
        throw ReadError(message);
    }

    return received;

fail:
    return -1;
}
