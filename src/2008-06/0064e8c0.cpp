// from server: 100% by king_originala
// roc 2008-06 0064e8c0  unit: RBX::ChatWidget  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e8c0
//
// 0064e8c0  6aff                 push -1
// 0064e8c2  68e0b37d00           push 0x7db3e0
// 0064e8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0064e8cd  50                   push eax
// 0064e8ce  64892500000000       mov dword ptr fs:[0], esp
// 0064e8d5  51                   push ecx
// 0064e8d6  56                   push esi
// 0064e8d7  8bf1                 mov esi, ecx
// 0064e8d9  57                   push edi
// 0064e8da  89742408             mov dword ptr [esp + 8], esi
// 0064e8de  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064e8e6  e8551cfbff           call 0x600540
// 0064e8eb  8dbe48010000         lea edi, [esi + 0x148]
// 0064e8f1  8bcf                 mov ecx, edi
// 0064e8f3  c644241401           mov byte ptr [esp + 0x14], 1
// 0064e8f8  c706e4b48400         mov dword ptr [esi], 0x84b4e4
// 0064e8fe  c74610d4b48400       mov dword ptr [esi + 0x10], 0x84b4d4
// 0064e905  c74614ccb48400       mov dword ptr [esi + 0x14], 0x84b4cc
// 0064e90c  c74620c4b48400       mov dword ptr [esi + 0x20], 0x84b4c4
// 0064e913  c74624b4b48400       mov dword ptr [esi + 0x24], 0x84b4b4
// 0064e91a  c74644a4b48400       mov dword ptr [esi + 0x44], 0x84b4a4
// 0064e921  c7466494b48400       mov dword ptr [esi + 0x64], 0x84b494
// 0064e928  c7868400000084b48400 mov dword ptr [esi + 0x84], 0x84b484
// 0064e932  c786a400000074b48400 mov dword ptr [esi + 0xa4], 0x84b474
// 0064e93c  c786c400000064b48400 mov dword ptr [esi + 0xc4], 0x84b464
// 0064e946  c786300100005cb48400 mov dword ptr [esi + 0x130], 0x84b45c
// 0064e950  ff1560248000         call dword ptr [0x802460]
// 0064e956  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064e95a  50                   push eax
// 0064e95b  8bce                 mov ecx, esi
// 0064e95d  c644241802           mov byte ptr [esp + 0x18], 2
// 0064e962  e829c6f0ff           call 0x55af90
// 0064e967  8d4c2420             lea ecx, [esp + 0x20]
// 0064e96b  51                   push ecx
// 0064e96c  8bcf                 mov ecx, edi
// 0064e96e  ff150c248000         call dword ptr [0x80240c]
// 0064e974  8d4c2420             lea ecx, [esp + 0x20]
// 0064e978  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0064e980  ff1568248000         call dword ptr [0x802468]
// 0064e986  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e98a  5f                   pop edi
// 0064e98b  8bc6                 mov eax, esi
// 0064e98d  5e                   pop esi
// 0064e98e  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e995  83c410               add esp, 0x10
// 0064e998  c22000               ret 0x20

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        __declspec(dllimport) basic_string();
        __declspec(dllimport) ~basic_string();
        __declspec(dllimport) basic_string& operator=(const basic_string&);
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

template<int N, int Size>
struct Interface {
    virtual ~Interface();
    char storage[Size - 4];
};

template<int N>
struct Interface<N, 4> {
    virtual ~Interface();
};

struct Base :
    Interface<0, 16>,
    Interface<1, 4>,
    Interface<2, 12>,
    Interface<3, 4>,
    Interface<4, 32>,
    Interface<5, 32>,
    Interface<6, 32>,
    Interface<7, 32>,
    Interface<8, 32>,
    Interface<9, 108>,
    Interface<10, 24>
{
    Base();
    virtual ~Base();
    void sub_55af90(int);
};

struct ChatWidget : Base {
    std::string text;

    ChatWidget(int, std::string);
    virtual ~ChatWidget();
};

ChatWidget::ChatWidget(int value, std::string initial)
    : Base(), text()
{
    sub_55af90(value);
    text = initial;
}
