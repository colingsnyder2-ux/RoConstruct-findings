// from server: 36% by colin
struct Vec3 { float x, y, z; };

struct Obj134 {
    char pad[0x130];
    int mode;
    float a, b, c;
};

struct ObjD8 {
    char pad[0x140];
    int val;
};

struct ObjBC {
    char pad[0x1dc];
    int kind;
};

struct ObjCC {
    char pad[0x84];
    int flag;
};

struct Decal {
    char pad0[0x1c];
    float field1c;
    char pad2[0xbc - 0x20];
    ObjBC* objBC;
    ObjCC* objCC;
    char pad3[0xd4 - 0xd0];
    Obj134* objD4;
    ObjD8* objD8;
    void update();
};

extern "C" Vec3* __fastcall getVec3(void* p);
extern "C" void* __fastcall vecPush(void* vec, void* v);

extern "C" void* __fastcall calcA(Vec3* v, int val);
extern "C" void* __fastcall calcB(Vec3* v, int val);
extern "C" void* __fastcall calcC(Vec3* v, int val);
extern "C" void* __fastcall calcD(Vec3* v, int val);
extern "C" void* __fastcall calcE(Vec3* v, int val);
extern "C" void* __fastcall calcF(Vec3* v, int val);
extern "C" void* __fastcall calcG(Vec3* v, int val);

extern "C" void* __fastcall vecPush3(void* vec, void* v);

extern float g_826fd0;
extern float g_819bac;

void Decal::update()
{
    if (!objBC)
        return;

    Vec3* v = getVec3(objBC);
    float x = v->x;
    float y = v->y;
    float z = v->z;

    if (objD4) {
        x *= objD4->a;
        y *= objD4->b;
        z *= objD4->c;
    }

    Vec3 tmp;
    tmp.x = x;
    tmp.y = y;
    tmp.z = z;

    if (!objD4) {
        int kind = objBC->kind;
        if (kind == 0) {
            void* r = calcA(&tmp, objD8->val);
            vecPush(objCC, r);
        } else if (kind == 1) {
            void* r = calcB(&tmp, objD8->val);
            vecPush(objCC, r);
        } else if (kind == 2) {
            void* r = calcC(&tmp, objD8->val);
            vecPush(objCC, r);
        }
    } else {
        int mode = objD4->mode;
        if (mode <= 6) {
            void* r;
            switch (mode) {
            case 0: r = calcD(&tmp, objD8->val); break;
            case 1: r = calcE(&tmp, objD8->val); break;
            case 2: r = calcF(&tmp, objD8->val); break;
            case 3: r = calcC(&tmp, objD8->val); break;
            case 4: r = calcB(&tmp, objD8->val); break;
            case 5: r = calcG(&tmp, objD8->val); break;
            default: r = calcA(&tmp, objD8->val); break;
            }
            vecPush3(objCC, r);
        }
    }

    float s = g_826fd0;
    float sq = s * s;
    float ax = x < 0 ? -x : x;
    float ay = y < 0 ? -y : y;
    float az = z < 0 ? -z : z;
    float m = ax;
    if (ay > m) m = ay;
    if (az > m) m = az;
    field1c = m * sq * g_819bac;

    if (objCC)
        objCC->flag = 4;
}
