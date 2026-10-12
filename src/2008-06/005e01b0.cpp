// from server: 86% by king_originala
namespace std {
    struct basic_string {
        char storage[28];
    };

    struct ios_base {
        void* table;
        long reserved;
        volatile int state;
        int exceptions;
        unsigned long format;
        int digits;
        char storage[32];

        void unsetf(unsigned long);
        int precision(int);
        bool fail() const;
    };

    inline void ios_base::unsetf(unsigned long mask) {
        format &= ~mask;
    }

    inline int ios_base::precision(int value) {
        int old = digits;
        digits = value;
        return old;
    }

    inline bool ios_base::fail() const {
        return (state & 6) != 0;
    }

    struct basic_ios : ios_base {
        operator void*() const;
    };

    inline basic_ios::operator void*() const {
        return fail() ? 0 : const_cast<basic_ios*>(this);
    }

    struct basic_istream : virtual basic_ios {
        int count;
        basic_istream& operator>>(unsigned short&);
        int get();
    };

    struct basic_ostream : virtual basic_ios {
    };

    struct basic_stringstream : basic_istream, basic_ostream {
        char buffer[68];
    };
}

typedef void (__thiscall *StreamConstructor)(
    std::basic_stringstream*, int, int);
typedef void (__thiscall *StreamDestructor)(std::basic_stringstream*);
typedef std::basic_ostream& (__cdecl *StringInsertion)(
    std::basic_ostream&, const std::basic_string&);
typedef std::basic_istream& (__thiscall *ShortExtraction)(
    std::basic_istream*, unsigned short&);
typedef int (__thiscall *StreamGet)(std::basic_istream*);
typedef void (__thiscall *BadCastConstructor)(void*, const char*);

extern StreamConstructor constructStream;
extern StreamDestructor destroyStream;
extern StringInsertion insertString;
extern ShortExtraction extractShort;
extern StreamGet streamGet;
extern BadCastConstructor constructBadCast;

inline std::basic_istream&
std::basic_istream::operator>>(unsigned short& value) {
    return extractShort(this, value);
}

inline int std::basic_istream::get() {
    return streamGet(this);
}

struct StreamStorage {
    char storage[136];

    StreamStorage(int);
    ~StreamStorage();
    std::basic_stringstream& stream();
};

inline StreamStorage::StreamStorage(int mode) {
    constructStream(
        reinterpret_cast<std::basic_stringstream*>(storage), mode, 1);
}

inline StreamStorage::~StreamStorage() {
    destroyStream(reinterpret_cast<std::basic_stringstream*>(storage));
}

inline std::basic_stringstream& StreamStorage::stream() {
    return *reinterpret_cast<std::basic_stringstream*>(storage);
}

struct type_info;
extern const type_info source_type;
extern const type_info target_type;
extern unsigned char lexicalCastVtable;

struct bad_lexical_cast {
    void* vtable;
    unsigned long base[2];
    const type_info* source;
    const type_info* target;

    bad_lexical_cast();
    ~bad_lexical_cast();
};

inline bad_lexical_cast::bad_lexical_cast() {
    constructBadCast(
        this,
        "bad lexical cast: source type value could not be interpreted as target");
    vtable = &lexicalCastVtable;
    source = &source_type;
    target = &target_type;
}

__declspec(noreturn) void __cdecl raise(const bad_lexical_cast&);

unsigned short convert(const std::basic_string& text) {
    unsigned short value;
    StreamStorage storage(3);
    std::basic_stringstream& stream = storage.stream();

    stream.unsetf(1);
    stream.precision(5);

    if (!insertString(stream, text).fail() &&
        (stream >> value) &&
        stream.get() == -1)
        return value;

    bad_lexical_cast error;
    raise(error);
}
