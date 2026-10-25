// from server: 100% by king_originala
// roc 2008-06 005f9800  unit: UString_sink::?$stream_buffer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9800
//
// 005f9800  6aff                 push -1
// 005f9802  68a8747d00           push 0x7d74a8
// 005f9807  64a100000000         mov eax, dword ptr fs:[0]
// 005f980d  50                   push eax
// 005f980e  64892500000000       mov dword ptr fs:[0], esp
// 005f9815  51                   push ecx
// 005f9816  56                   push esi
// 005f9817  8bf1                 mov esi, ecx
// 005f9819  89742404             mov dword ptr [esp + 4], esi
// 005f981d  ff1548258000         call dword ptr [0x802548]
// 005f9823  33c0                 xor eax, eax
// 005f9825  88463c               mov byte ptr [esi + 0x3c], al
// 005f9828  884644               mov byte ptr [esi + 0x44], al
// 005f982b  894648               mov dword ptr [esi + 0x48], eax
// 005f982e  89464c               mov dword ptr [esi + 0x4c], eax
// 005f9831  894650               mov dword ptr [esi + 0x50], eax
// 005f9834  894654               mov dword ptr [esi + 0x54], eax
// 005f9837  c7465810000000       mov dword ptr [esi + 0x58], 0x10
// 005f983e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f9842  89442410             mov dword ptr [esp + 0x10], eax
// 005f9846  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f984a  c706ac0e8400         mov dword ptr [esi], 0x840eac
// 005f9850  8b08                 mov ecx, dword ptr [eax]
// 005f9852  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f9856  52                   push edx
// 005f9857  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f985b  50                   push eax
// 005f985c  8d4c2420             lea ecx, [esp + 0x20]
// 005f9860  51                   push ecx
// 005f9861  8bce                 mov ecx, esi
// 005f9863  e828feffff           call 0x5f9690
// 005f9868  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f986c  8bc6                 mov eax, esi
// 005f986e  5e                   pop esi
// 005f986f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9876  83c410               add esp, 0x10
// 005f9879  c20c00               ret 0xc

extern void (__thiscall *streambuf_constructor)(void*);

namespace std {
    template<class C> struct char_traits;

    template<class C, class T> class __declspec(novtable) basic_streambuf {
    protected:
        basic_streambuf();
    public:
        virtual ~basic_streambuf();
    private:
        char storage[56];
    };

    template<class C, class T>
    inline basic_streambuf<C, T>::basic_streambuf()
    {
        streambuf_constructor(this);
    }
}

struct BufferBase : std::basic_streambuf<char, std::char_traits<char> > {
    char flag;
    char padding[7];
    char mode;
    char alignment[3];
    unsigned int field48;
    unsigned int field4c;
    unsigned int field50;
    unsigned int field54;
    unsigned int field58;

    BufferBase();
};

inline BufferBase::BufferBase()
    : flag(0),
      mode(0),
      field48(0),
      field4c(0),
      field50(0),
      field54(0),
      field58(16)
{
}

struct S : BufferBase {
    S(void** source, int second, int third);
    void initialize(void** source, int second, int third);
};

S::S(void** source, int second, int third)
{
    source = static_cast<void**>(*source);
    initialize(reinterpret_cast<void**>(&source), second, third);
}
