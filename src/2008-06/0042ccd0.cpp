// from server: 46% by king_originala
namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    unsigned char storage[28];
public:
    basic_string(const basic_string&);
    ~basic_string();
};

typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

__forceinline const std::string& reference(const std::string& value)
{
    return value;
}

struct Sequence {
    std::string begin();
    std::string end();
};

struct Range {
    unsigned char storage[64];
    Range(std::string first, std::string last,
          std::string* text, bool* active);
    ~Range();
};

__forceinline Range::~Range()
{
}

struct Destination {
    void apply(Range first, Range last, int value);
};

struct Object {
    unsigned char prefix[8];
    Sequence sequence;
    unsigned char padding[79];
    Destination* destination;
};

struct Shared {
    Object* object;
    void* counter;
    Shared(const Shared&);
    ~Shared();
};

struct Reset {
    bool active;
    ~Reset();
};

__forceinline Reset::~Reset()
{
    if (active)
        active = false;
}

struct Binder {
    Shared shared;
    int invoke(int value, std::string text);
};

int Binder::invoke(int value, std::string text)
{
    Shared owner(shared);
    std::string copy(reference(std::string(text)));
    Reset reset;
    reset.active = false;

    Object* source = shared.object;
    Destination* destination =
        reinterpret_cast<Destination*>(
            reinterpret_cast<unsigned char*>(source->destination) + 4);

    destination->apply(
        Range(owner.object->sequence.begin(),
              source->sequence.end(), &copy, &reset.active),
        Range(owner.object->sequence.end(),
              source->sequence.end(), &copy, &reset.active),
        value);

    return value;
}
