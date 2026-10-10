// from server: 31% by colin
// roc 2007-08 00735110  unit: G3D::Sky  size: 311 bytes

struct TextureId {
    char data[0x1c];
    TextureId();
    ~TextureId();
    TextureId& operator=(const TextureId&);
    TextureId& operator=(const char*);
};

struct Sky {
    char pad[0x1c];
    TextureId skyUp;
    TextureId skyLf;
    TextureId skyRt;
    TextureId skyBk;
    TextureId skyFt;
    TextureId skyDn;
    bool drawCelestialBodies;
    TextureId sunTexture;
    TextureId moonTexture;
    float sunAngularSize;
    float moonAngularSize;
    int numStars;

    Sky(const Sky& other);
};

extern "C" void __cdecl sub_630BDC(void*, int, int, int, int, int);
extern "C" void __cdecl sub_630AF7(void*, int, int, int, int);
extern "C" void __cdecl sub_734930(Sky*, int, int, int, int, double, int);
extern "C" void __cdecl sub_630A1E();

extern int dword_77E6AC;
extern int dword_77E6A4;
extern int dword_77E690;
extern int dword_77E62C;
extern int dword_785954;
extern int dword_8B5188;

Sky::Sky(const Sky& other) {
    sub_630BDC(this, 0, 0, 0, 0, 0);
    this->skyUp = other.skyUp;
    this->skyLf = other.skyLf;
    this->skyRt = other.skyRt;
    this->skyBk = other.skyBk;
    this->skyFt = other.skyFt;
    this->skyDn = other.skyDn;
    this->drawCelestialBodies = other.drawCelestialBodies;
    this->sunTexture = other.sunTexture;
    this->moonTexture = other.moonTexture;
    this->sunAngularSize = other.sunAngularSize;
    this->moonAngularSize = other.moonAngularSize;
    this->numStars = other.numStars;
}
