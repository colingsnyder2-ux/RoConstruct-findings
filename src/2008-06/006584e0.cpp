// from server: 76% by king_originala
struct String {
    char storage[28];
    String(const String&);
    String(const char*);
    ~String();
};

extern "C" void __cdecl _invalid_parameter_noinfo();
extern unsigned int __cdecl parseIndex(const String*);
void __cdecl operator delete(void*);

struct Node;

struct NodeVector {
    void* allocation;
    unsigned int reserved[2];
    Node** first;
    Node** last;
    Node** limit;
};

struct StringVector {
    void* allocation;
    unsigned int reserved[2];
    String* first;
    String* last;
    String* limit;

    ~StringVector();
    unsigned int size() const;
    const String& at(unsigned int) const;
};

inline unsigned int StringVector::size() const
{
    return static_cast<unsigned int>(last - first);
}

inline const String& StringVector::at(unsigned int index) const
{
    if (index >= size())
        _invalid_parameter_noinfo();
    return first[index];
}

inline StringVector::~StringVector()
{
    if (first) {
        String* p = first;
        while (p != last) {
            p->~String();
            ++p;
        }
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
    operator delete(allocation);
}

struct Node {
    NodeVector children;
    String text;
};

struct ArrowButton {
    Node* root;
    String resolve(StringVector path);
};

String ArrowButton::resolve(StringVector path)
{
    Node* node = root;
    for (unsigned int i = 1; i < path.size(); ++i) {
        unsigned int index = parseIndex(&path.at(i));
        if (index >= static_cast<unsigned int>(
                node->children.last - node->children.first))
            return String(">Authoring");
        node = node->children.first[index];
    }
    return String(node->text);
}
