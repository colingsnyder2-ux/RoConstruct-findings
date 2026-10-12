// from server: 90% by king_originala
namespace std {
    template<class T> struct char_traits;

    template<class T, class Traits>
    class basic_streambuf {
    protected:
        basic_streambuf();
    public:
        virtual ~basic_streambuf();
    private:
        char storage[56];
    };
}

union Device {
    const int* source;
    int value;
};

struct State {
    unsigned char flag1;
    char padding[7];
    unsigned char flag2;
    void* first;
    void* last;
    void* current;
    void* limit;
    volatile int size;

    State();
};

inline State::State()
    : flag1(0), flag2(0),
      first(0), last(0), current(0), limit(0), size(16)
{
}

struct S : std::basic_streambuf<char, std::char_traits<char> >, State {
    S(Device device, int mode, volatile int capacity);
    virtual ~S();
    void open(const Device* device, int mode, int capacity);
};

S::S(Device device, int mode, volatile int capacity)
{
    device.value = *device.source;
    open(&device, mode, capacity);
}
