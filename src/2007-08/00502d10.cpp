// from server: 38% by colin
struct Log {
    char pad0[4];
    unsigned char* data;
    int width;
    int height;
    int bpp;
    char pad14[0x24];
    int pos;
    int size;
    int limit;
    unsigned char* buf;
    char pad48[0x38];

    void readTGA(Log* r);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall sub_50BCC0(Log* self, int a, int b);
extern "C" void __stdcall sub_50C020(Log* self, void* buf, int n);
extern "C" int __stdcall sub_502970(Log* self, void* out);
extern "C" int __stdcall sub_5029F0(Log* self);
extern "C" void __stdcall sub_46F570(void* out, void* a, void* b);
extern "C" void __stdcall sub_630B9E(void* a, void* b);
extern "C" void __stdcall sub_630A1E(void);
extern "C" int __stdcall sub_77E61C(void* a, const char* b);
extern "C" void __stdcall sub_77E698(void* a, const char* b);
extern "C" void __stdcall sub_77E6AC(void* a);

void Log::readTGA(Log* r) {
    int w, h, bpp;
    unsigned char idLen;
    unsigned char cmType;
    unsigned char imgType;
    int i, j;
    unsigned char* p;
    int row;
    int x;

    r->pos = r->size - r->limit - 0x12;
    if (r->pos < 0 || r->pos > r->limit) {
        sub_50BCC0(r, r->pos + r->limit, 0);
    }

    sub_50C020(r, &idLen, 0x10);

    if (sub_77E61C(&idLen, "Not a TGA file")) {
        sub_77E698(&idLen, "TGA files must be 24 or 32 bit.");
        sub_502970(r, &idLen);
        sub_46F570(&idLen, &idLen, &idLen);
        sub_630B9E(&idLen, &idLen);
    }

    r->pos = -r->size;
    if (r->pos < 0 || r->pos > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 0);
    }

    if (r->pos + 1 > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 1);
    }

    idLen = r->buf[r->pos];
    r->pos++;

    if (r->pos + 1 > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 1);
    }
    r->pos++;

    if (r->pos + 1 > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 1);
    }

    cmType = r->buf[r->pos];
    r->pos++;

    if (cmType != 2) {
        sub_77E698(&idLen, "TGA files must be 24 or 32 bit.");
        sub_502970(r, &idLen);
        sub_46F570(&idLen, &idLen, &idLen);
        sub_630B9E(&idLen, &idLen);
    }

    r->pos = r->pos + r->size + 5 - r->size;
    if (r->pos < 0 || r->pos > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 0);
    }

    r->pos = r->pos + r->size + 4 - r->size;
    if (r->pos < 0 || r->pos > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 0);
    }

    w = sub_5029F0(r);
    w = (short)w;
    this->width = w;

    h = sub_5029F0(r);
    h = (short)h;
    this->height = h;

    if (r->pos + 1 > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 1);
    }

    bpp = r->buf[r->pos];
    r->pos++;

    if (bpp == 0x18) {
        this->bpp = 3;
    } else if (bpp == 0x20) {
        this->bpp = 4;
    } else {
        sub_77E698(&idLen, "TGA files must be 24 or 32 bit.");
        sub_502970(r, &idLen);
        sub_46F570(&idLen, &idLen, &idLen);
        sub_630B9E(&idLen, &idLen);
        this->bpp = 4;
    }

    if (r->pos + 1 > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 1);
    }
    r->pos++;

    r->pos = r->pos + r->size + idLen - r->size;
    if (r->pos < 0 || r->pos > r->limit) {
        sub_50BCC0(r, r->pos + r->size, 0);
    }

    this->data = (unsigned char*)operator_new(this->width * this->height * this->bpp);

    if (this->bpp == 3) {
        for (j = this->height - 1; j >= 0; j--) {
            for (i = 0; i < this->width; i++) {
                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                x = r->buf[r->pos];
                r->pos++;

                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char g = r->buf[r->pos];
                r->pos++;

                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char b = r->buf[r->pos];
                r->pos++;

                p = this->data + (this->width * j + i) * 3;
                p[0] = b;
                p[1] = g;
                p[2] = x;
            }
        }
    } else {
        for (j = this->height - 1; j >= 0; j--) {
            for (i = 0; i < this->width; i++) {
                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char b = r->buf[r->pos];
                r->pos++;

                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char g = r->buf[r->pos];
                r->pos++;

                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char rr = r->buf[r->pos];
                r->pos++;

                if (r->pos + 1 > r->limit) {
                    sub_50BCC0(r, r->pos + r->size, 1);
                }
                unsigned char a = r->buf[r->pos];
                r->pos++;

                p = this->data + (this->width * j + i) * 4;
                p[0] = b;
                p[1] = g;
                p[2] = rr;
                p[3] = a;
            }
        }
    }

    sub_77E6AC(&idLen);
}
