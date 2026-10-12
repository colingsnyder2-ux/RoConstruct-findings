// from server: 75% by king_originala
namespace std {
    template<class C> struct char_traits;

    template<> struct char_traits<char> {
        static unsigned int __cdecl length(const char *);
        static int __cdecl eof();
        static bool __cdecl eq_int_type(const int &, const int &);
    };

    struct ios_base {
        int width() const;
        int width(int);
        int flags() const;
    };

    template<class C, class T> struct basic_streambuf {
        int sputc(C);
        int sputn(const C *, int);
    };

    template<class C, class T> struct basic_ios : ios_base {
        char reserved[48];
        C fill_character;

        basic_streambuf<C, T> *rdbuf() const;
        void setstate(int);
        void _Setstate(int, bool);
    };

    template<class C, class T> struct basic_ostream
        : virtual basic_ios<C, T> {
        struct sentry {
            basic_ostream *stream;
            bool ready;

            explicit sentry(basic_ostream &);
            ~sentry();
        };
    };
}

typedef std::char_traits<char> Traits;
typedef std::basic_ostream<char, Traits> Stream;

Stream &__cdecl insert(Stream &stream, const char *text)
{
    int state = 0;
    int length = Traits::length(text);
    int padding = 0;

    if (stream.width() > 0 && stream.width() > length)
        padding = stream.width() - length;

    Stream::sentry guard(stream);
    if (!guard.ready) {
        state = 4;
    } else {
        try {
            if ((stream.flags() & 0x1c0) != 0x40) {
                for (; padding > 0; --padding) {
                    char fill = stream.fill_character;
                    int result = stream.rdbuf()->sputc(fill);
                    int end = Traits::eof();
                    if (Traits::eq_int_type(end, result)) {
                        state |= 4;
                        break;
                    }
                }
            }

            if (state == 0) {
                if (stream.rdbuf()->sputn(text, length) != length) {
                    state = 4;
                } else {
                    for (; padding > 0; --padding) {
                        char fill = stream.fill_character;
                        int result = stream.rdbuf()->sputc(fill);
                        int end = Traits::eof();
                        if (Traits::eq_int_type(end, result)) {
                            state |= 4;
                            break;
                        }
                    }
                }
            }

            stream.width(0);
        } catch (...) {
            stream._Setstate(4, true);
        }
    }

    stream.setstate(state);
    return stream;
}
