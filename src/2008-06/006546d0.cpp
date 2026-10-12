// from server: 56% by king_originala
struct String;
extern "C" void (__cdecl *invalid_parameter)();
extern "C" void (__thiscall *destroy_string)(String *);

struct String {
    unsigned char storage[28];
    ~String();
};

inline String::~String() {
    destroy_string(this);
}

struct Iterator {
    void *owner;
    String *position;
};

inline bool operator==(const Iterator &left, const Iterator &right) {
    if (!left.owner || left.owner != right.owner)
        invalid_parameter();
    return left.position == right.position;
}

extern String *__cdecl find_string(String *, String *, const String *);

inline Iterator find_string(Iterator first, Iterator last, const String &value) {
    Iterator result = first;
    result.position = find_string(first.position, last.position, &value);
    return result;
}

struct Vector {
    void *owner;
    unsigned char prefix[8];
    String *first;
    String *last;
    String *limit;

    Iterator begin();
    Iterator end();
    void append(const String &);
};

inline Iterator Vector::begin() {
    Iterator result;
    result.position = first;
    if (first > last)
        invalid_parameter();
    result.owner = owner;
    return result;
}

inline Iterator Vector::end() {
    Iterator result;
    result.position = last;
    if (first > last)
        invalid_parameter();
    result.owner = owner;
    return result;
}

struct VectorMap {
    unsigned char storage[32];
    Vector &lookup(const int &);
};

struct Value {
    int &get();
};

struct ValueMap {
    Value &lookup(const String &, const String &);
};

struct ScoreHud {
    Vector names;
    VectorMap groups;
    ValueMap values;

    void update(String name, int group, String category, int value);
};

void ScoreHud::update(String name, int group, String category, int value) {
    if (find_string(names.begin(), names.end(), category) == names.end())
        names.append(category);

    if (find_string(groups.lookup(group).begin(),
                    groups.lookup(group).end(), name) ==
        groups.lookup(group).end())
        groups.lookup(group).append(name);

    values.lookup(name, category).get() = value;
}
