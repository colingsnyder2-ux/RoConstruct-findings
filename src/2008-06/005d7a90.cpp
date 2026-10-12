// from server: 80% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

struct Node {
    Node* find(const String&);
};

struct S {
    unsigned char padding[0x104];
    Node* child;
    Node* f();
};

Node* S::f()
{
    return child ? child->find(String("Right Arm")) : 0;
}
