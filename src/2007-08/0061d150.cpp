// from server: 43% by colin
struct ChatOutput {
    float x;
    float y;
    float z;
    char pad0[0x0C];
    char str0[0x1C];
    char str1[0x1C];
    float f44;
    char b48;
};

extern "C" {
    void __stdcall sub_77E6A4();
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E690(void*);
}

void* __cdecl sub_495730(void*);
bool __fastcall sub_5A32F0(void*);
void* __fastcall sub_5A31C0(void*, void*);
void* __fastcall sub_553F80(void*, void*, void*);
void __fastcall sub_586B80(void*);
void __cdecl sub_50B190();
void __cdecl sub_50B200();
int __cdecl sub_629F00(void*);
void* __cdecl sub_61C470(int, int);

struct Vec3 { float x, y, z; };

struct ChatOutputCtor {
    ChatOutput* ctor(void* a2, void* a3, float a4);
};

ChatOutput* ChatOutputCtor::ctor(void* a2, void* a3, float a4)
{
    ChatOutput* self = (ChatOutput*)this;
    void* ebp = a2;
    void* ebx;
    void* eax;
    Vec3* v;

    sub_77E6A4();
    sub_77E69C(a3);
    self->f44 = a4;
    sub_77E690((char*)ebp + 0xC8);
    self->b48 = 0;

    ebx = sub_495730(ebp);
    if (ebx != 0 && sub_5A32F0(ebx)) {
        if (*(char*)((char*)ebp + 0x124) != 0) {
            sub_50B200();
            v = 0;
        } else {
            eax = sub_5A31C0(ebx, ebp);
            if (eax != 0) {
                void* tmp1;
                void* tmp2;
                void* r = sub_553F80(eax, &tmp1, &tmp2);
                sub_586B80(r);
                v = (Vec3*)r;
            } else {
                sub_50B190();
                v = 0;
            }
        }
    } else {
        int n = sub_629F00((char*)self + 0xC);
        v = (Vec3*)sub_61C470(n & 7, (int)((char*)self + 0xC));
    }

    self->x = v->x;
    self->y = v->y;
    self->z = v->z;
    return self;
}
