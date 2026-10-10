// from server: 34% by atomic.potato
typedef unsigned int size_t;

namespace std {
struct string {
    string(const string&);
};
}

struct S {
    int f(std::string*);
};

int S::f(std::string* value) {
    std::string copy(*value);
    return 0;
}
