// from server: 86% by king_originala
namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;

template<class T, class Traits, class Alloc>
class basic_string {
    char storage[28];
public:
    basic_string(const basic_string&);
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

union FunctionStorage {
    double alignment;
    char bytes[24];
};

typedef void (__cdecl *Manager)(FunctionStorage*,
                                FunctionStorage*, int);

struct Function {
    Manager* table;
    FunctionStorage storage;

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : table(0) {
    if (other.table) {
        table = other.table;
        (*other.table)(const_cast<FunctionStorage*>(&other.storage),
                       &storage, 0);
    }
}

inline Function::~Function() {
    if (table) {
        Manager manager = *table;
        if (manager)
            manager(&storage, &storage, 1);
        table = 0;
    }
}

struct Core {
    union {
        double alignment;
        char bytes[64];
    };

    Core(const Core&);
};

struct Worker : Core {
    int state;

    Worker(Function, String, int);
    ~Worker();
};

struct Result {
    int identifier;
    Worker worker;

    Result(int, const Worker&);
};

inline Result::Result(int value, const Worker& source)
    : identifier(value), worker(source) {
}

Result __cdecl reconstruct(int identifier, Function function,
                           String name, int flags) {
    return Result(identifier, Worker(function, name, flags));
}
