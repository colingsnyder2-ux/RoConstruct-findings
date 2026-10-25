// from server: 100% by colin
// roc 2008-06 00406a80  unit: VCApp::?$CComObject  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406a80
//
// 00406a80  6aff                 push -1
// 00406a82  6888ce7b00           push 0x7bce88
// 00406a87  64a100000000         mov eax, dword ptr fs:[0]
// 00406a8d  50                   push eax
// 00406a8e  64892500000000       mov dword ptr fs:[0], esp
// 00406a95  83ec14               sub esp, 0x14
// 00406a98  e8cb9e2900           call 0x6a0968
// 00406a9d  50                   push eax
// 00406a9e  8d4c2408             lea ecx, [esp + 8]
// 00406aa2  e8bb9e2900           call 0x6a0962
// 00406aa7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00406aab  6a00                 push 0
// 00406aad  83ec1c               sub esp, 0x1c
// 00406ab0  8bcc                 mov ecx, esp
// 00406ab2  89642420             mov dword ptr [esp + 0x20], esp
// 00406ab6  50                   push eax
// 00406ab7  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00406abf  ff1558248000         call dword ptr [0x802458]
// 00406ac5  8b0decdc9600         mov ecx, dword ptr [0x96dcec]
// 00406acb  e830700100           call 0x41db00
// 00406ad0  8b442408             mov eax, dword ptr [esp + 8]
// 00406ad4  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00406adc  85c0                 test eax, eax
// 00406ade  7407                 je 0x406ae7
// 00406ae0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00406ae4  894804               mov dword ptr [eax + 4], ecx
// 00406ae7  837c241000           cmp dword ptr [esp + 0x10], 0
// 00406aec  740c                 je 0x406afa
// 00406aee  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00406af2  52                   push edx
// 00406af3  6a00                 push 0
// 00406af5  e8629e2900           call 0x6a095c
// 00406afa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00406afe  64890d00000000       mov dword ptr fs:[0], ecx
// 00406b05  83c420               add esp, 0x20
// 00406b08  c3                   ret 

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;
    template<class T, class Traits, class Alloc>
    class __declspec(dllimport) basic_string {
        char storage[28];
    public:
        basic_string();
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };
    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}
struct Link {
    int reserved;
    int previous;
};

extern "C" void* __stdcall get_context();
extern void __stdcall release_context(int, void*);

struct Context {
    int previous;
    Link* link;
    void* handle;
    int active;

    Context(void*);
    ~Context();
};



struct Service {
    void run(std::string, int);
};

extern Service* service;


__forceinline Context::~Context()
{
    if (link)
        link->previous = previous;
    if (active)
        release_context(0, handle);
}

void __cdecl func(const char* text)
{
    Context context(get_context());
    service->run(std::string(text), 0);
}
