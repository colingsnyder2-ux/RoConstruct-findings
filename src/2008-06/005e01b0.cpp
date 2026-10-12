// from server: 84% by king_originala
namespace std {
    struct basic_string {
        char storage[28];
    };

    struct ios_base {
        void* table;
        long reserved;
        int state;
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
        basic_stringstream(int);
        ~basic_stringstream();
    };

    basic_ostream& operator<<(basic_ostream&, const basic_string&);

    struct bad_cast {
        char* message;
        int owned;
        bad_cast(const char*);
        virtual ~bad_cast();
        virtual const char* what() const;
    };
}

struct type_info;
extern const type_info source_type;
extern const type_info target_type;

struct bad_lexical_cast : std::bad_cast {
    const type_info* source;
    const type_info* target;

    bad_lexical_cast();
    virtual ~bad_lexical_cast();
    virtual const char* what() const;
};

inline bad_lexical_cast::bad_lexical_cast()
    : std::bad_cast(
          "bad lexical cast: source type value could not be interpreted as target"),
      source(&source_type),
      target(&target_type) {
}

__declspec(noreturn) void raise(const bad_lexical_cast&);

unsigned short convert(const std::basic_string& text) {
    unsigned short value;
    std::basic_stringstream stream(3);
    stream.unsetf(1);
    stream.precision(5);

    if (!(stream << text).fail() &&
        (stream >> value) &&
        stream.get() != -1)
        return value;

    bad_lexical_cast error;
    raise(error);
}
