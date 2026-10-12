// from server: 91% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class T, class A>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    template<class C, class T, class A>
    bool operator!=(const basic_string<C, T, A>&,
                    const basic_string<C, T, A>&);

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        const char* message;
        int owned;
    public:
        exception(const char* const&);
        virtual ~exception();
        virtual const char* what() const;
    };
}

struct Texture {
    void* data;
    int width;
    int height;
    int format;

    Texture(const std::string&, int);
    virtual ~Texture();
    void save(const std::string&, int);
};

int getFormat(const std::string&);
void resizeTexture(Texture&, std::string&);
void processTexture(const std::string&, std::string, int);

void processTexture(const std::string& source, std::string destination,
                    int maximumSize)
{
    int format = getFormat(source);
    if (format != 9)
        throw std::exception("unknown texture format");

    Texture texture(source, format);
    if (texture.width <= maximumSize && texture.height <= maximumSize) {
        if (destination != source)
            texture.save(destination, 5);
    } else {
        resizeTexture(texture, destination);
        processTexture(destination, destination, maximumSize);
    }
}
