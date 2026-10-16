// from server: 27% by colin
struct OgreImage {
    void construct();
    OgreImage& loadDynamicImage(unsigned char*, unsigned int, unsigned int, unsigned int, int, bool, unsigned int, unsigned int);
};

struct OgreTexturePtr {
    void* rep;
    void* ptr;
    OgreTexturePtr& operator=(const OgreTexturePtr&);
};

struct OgreTextureManager {
    static OgreTextureManager& getSingleton();
    OgreTexturePtr* createManual(const char*, const char*, int, void*);
};

struct OgreMaterialPtr {
    void* rep;
    void* ptr;
};

struct MegaTextureProxy {
    char pad0[0xc];
    unsigned int width;
    unsigned int height;
    char pad14[0x20];
    unsigned char flag34;
    char pad35[0x1f];
    OgreTexturePtr texture;
    OgreMaterialPtr material;
    void* image;

    void func(int a, int b, OgreTexturePtr* out);
};

extern "C" {
    int __stdcall sub_5b5c80();
    void __stdcall sub_510670(void* dst, void* src, int n);
    void __stdcall sub_50eea0(void* dst, int a, int b, int c);
    void __stdcall sub_5b6270(void* dst, void* src);
    void __stdcall sub_5106a0(void* dst, void* src);
    void __stdcall sub_7add10(void* dst, void* src);
    void __stdcall sub_50e230(void* p);
    void __stdcall sub_45ad90(void* p);
    void __stdcall sub_802890();
    void __stdcall sub_802458(void* p, const char* s);
    void __stdcall sub_802468(void* p);
    void __stdcall sub_804c44();
    void __stdcall sub_804c48(void* p);
    void __stdcall sub_804c5c(void* p);
    void __stdcall sub_8043cc(void* p, int a, int b, int c, int d, int e, int f, int g, int h);
    void __stdcall sub_8046f4(void* dst, void* src);
    void __stdcall sub_8021ac(void* p);
    void __stdcall sub_8021b0(void* p);
}

void MegaTextureProxy::func(int a, int b, OgreTexturePtr* out)
{
    if (flag34 != 0) {
        out->rep = 0;
        if (texture.rep != 0) {
            out->rep = texture.rep;
            sub_8021b0((char*)texture.rep + 4);
        }
        return;
    }

    int* vec = (int*)sub_5b5c80();
    int count = (vec[4] - vec[3]) >> 2;
    int* pcount = &count;
    if ((unsigned)count >= 0x20) {
        pcount = (int*)0x80b350;
    }
    int numImages = *pcount;

    char local34[0x10];
    sub_510670(local34, &width, 8);

    char local1c[0x18];
    sub_50eea0(local1c, height << 5, width, 3);

    unsigned int i = 0;
    if (numImages != 0) {
        do {
            int* v2 = (int*)sub_5b5c80();
            int n = (v2[4] - v2[3]) >> 2;
            if (i >= (unsigned)n) {
                sub_802890();
            }
            char local54[0x10];
            sub_5b6270(local54, (char*)i + v2[3] * 4);
            char local48[0x10];
            sub_5106a0(local48, local54);

            unsigned char palette[0x300];
            for (int k = 0; k < 0x100; ++k) {
                palette[k * 3 + 0] = 0;
                palette[k * 3 + 1] = 0;
                palette[k * 3 + 2] = 0;
            }
            for (int k = 0; k < 0x100; ++k) {
                char entry[3];
                entry[0] = 0;
                entry[1] = 0;
                entry[2] = 0;
                sub_7add10(entry, local48);
                palette[k * 3 + 0] = entry[0];
                palette[k * 3 + 1] = entry[1];
                palette[k * 3 + 2] = entry[2];
            }

            int y = 0;
            if (height > 0) {
                do {
                    int x = 0;
                    if (width > 0) {
                        do {
                            unsigned int srcIdx = (unsigned int)(y * width + x);
                            unsigned char* src = (unsigned char*)((char*)local1c + srcIdx * 3);
                            unsigned int dstIdx = (unsigned int)(i * width * height + y * width + x);
                            unsigned char* dst = (unsigned char*)((char*)local1c + dstIdx * 3);
                            unsigned char idx = *src;
                            unsigned char* pal = palette + idx * 3;
                            dst[0] = pal[0];
                            dst[1] = pal[1];
                            dst[2] = pal[2];
                            ++x;
                        } while (x < (int)width);
                    }
                    ++y;
                } while (y < (int)height);
            }
            ++i;
        } while (i < (unsigned)numImages);
    }

    char str1[0x10];
    sub_802458(str1, "TextureAtlas");
    char str2[0x10];
    sub_802458(str2, "General");

    OgreTextureManager& tm = OgreTextureManager::getSingleton();
    OgreTexturePtr* tex = tm.createManual("TextureAtlas", "General", 0, 0);
    texture = *tex;

    if (material.ptr == 0) {
        char img[0x30];
        sub_804c48(img);
        sub_8043cc(img, (int)local1c, width, height, 1, 0xb, 0, 1, 0);

        char s1[0x10];
        sub_802458(s1, "TextureAtlas");
        char s2[0x10];
        sub_802458(s2, "General");

        OgreTextureManager& tm2 = OgreTextureManager::getSingleton();
        OgreTexturePtr* tex2 = tm2.createManual("TextureAtlas", "General", 0, 0);
        texture = *tex2;

        sub_802468(s2);
        sub_802468(s1);

        OgreImage* imgPtr = (OgreImage*)&img;
        imgPtr->loadDynamicImage((unsigned char*)local1c, width, height, 1, 0, false, 0, 0);

        sub_804c5c(img);
    }

    if (image != 0) {
        sub_8021ac((char*)image + 4);
        if (image != 0) {
            sub_45ad90(image);
            if (image != 0) {
                void** vt = *(void***)image;
                void (*dtor)(void*, int) = (void (*)(void*, int))vt[0];
                dtor(image, 1);
            }
        }
        image = 0;
    }

    sub_50e230(local1c);
    sub_50e230(local34);

    flag34 = 1;

    out->rep = 0;
    if (texture.rep != 0) {
        out->rep = texture.rep;
        sub_8021b0((char*)texture.rep + 4);
    }
}
