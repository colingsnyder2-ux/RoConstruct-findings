// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    char storage[28];
public:
    basic_string(const basic_string&);
    ~basic_string();
};

typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern void (__thiscall *string_copy)(std::string*, const std::string&);
extern void (__thiscall *string_destroy)(std::string*);

namespace std {
template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>::basic_string(
    const basic_string& other)
{
    string_copy(this, other);
}

template<class T, class Traits, class Alloc>
__forceinline basic_string<T, Traits, Alloc>::~basic_string()
{
    string_destroy(this);
}
}

struct Node {
    Node* next;
    char storage[20];

    Node(int, std::string);
};

struct Players {
    char padding[0x20];
    Node* first;
    Node* last;

    void append(int, std::string);
};

void Players::append(int value, std::string text)
{
    Node* node = new Node(value, text);
    if (!last)
        first = node;
    else
        last->next = node;
    last = node;
}
