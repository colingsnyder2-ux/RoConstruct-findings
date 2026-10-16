// from server: 47% by colin
namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class T, class Traits, class Allocator>
class basic_string {
    char storage[28];
public:
    __declspec(dllimport) basic_string();
    __declspec(dllimport) basic_string(const basic_string&);
    __declspec(dllimport) ~basic_string();
    __declspec(dllimport) basic_string& operator=(const basic_string&);
};
typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

extern "C" void * __cdecl malloc(unsigned int);

struct GuiDrawImage {
    unsigned char storage[0x164];
    GuiDrawImage();
    ~GuiDrawImage();
};

struct UnifiedWidget {
    unsigned char storage[0x1c];
    void construct(const std::string &, int);
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    std::string imageName;
    unsigned imageState;
    UnifiedImageWidget(const std::string &, int);
};

UnifiedImageWidget::UnifiedImageWidget(const std::string &imageName, int imageState)
{
    GuiDrawImage *draw = (GuiDrawImage *)malloc(0x164);
    if (draw) {
        draw->GuiDrawImage::GuiDrawImage();
    }
    this->construct(std::string(imageName), imageState);
    if (draw) {
        draw->~GuiDrawImage();
    }
}
