// from server: 94% by king_originala
extern void (__thiscall *copyString)(void*, const void*);
extern void (__thiscall *destroyString)(void*);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other) {
    copyString(this, &other);
}

__forceinline String::~String() {
    destroyString(this);
}

struct Item {
    char data[8];
};

struct Iterator {
    void* owner;
    Item* current;
};

struct Function {
    void (__thiscall *invoke)(void*, void*, const String*);
    char* object;
    int adjustment;
    void* (__thiscall *extract)(void*);
    int extra;
    String value;
};

Function apply(Iterator first, Iterator last, Function function) {
    Item* current = first.current;
    Item* end = last.current;
    for (; current != end; ++current) {
        void* item = function.extract(current);
        function.invoke(function.object + function.adjustment,
                        item, &function.value);
    }
    return function;
}
