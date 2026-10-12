// from server: 81% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern const float textureScale;

struct Decal {
    unsigned char storage[0x16c];

    Decal();
    ~Decal();
    void setName(const std::string&);
};

struct Texture : Decal {
    float scaleU;
    float scaleV;

    Texture();
};

Texture::Texture()
{
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x000) = 0x83296c;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x010) = 0x832960;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x014) = 0x832958;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x020) = 0x832950;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x024) = 0x832940;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x044) = 0x832930;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x064) = 0x832920;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x084) = 0x832910;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x0a4) = 0x832900;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x0c4) = 0x8328f0;
    *reinterpret_cast<unsigned*>(reinterpret_cast<char*>(this) + 0x130) = 0x8328d8;

    scaleU = textureScale;
    scaleV = textureScale;

    setName(std::string("Texture"));
}
