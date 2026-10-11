// from server: 47% by atomic.potato
struct Vec3 { float x, y, z; };

struct Obj {
    char pad0[0x24];
    Vec3 pos;
    char pad1[0x10];
    char flag3d;
    char pad2[0x2];
    float dist;
};

struct C9 { void copy9(const void* src); };
struct F { void f_518470(float v); };

extern "C" float __cdecl f_5cc240(float a, float b);
extern "C" void* __cdecl f_641280(void* dst, void* other, float dt, float dist);

extern float g_83a31c;
extern float g_826e70;
extern float g_837900;

struct Humanoid {
    bool check(Obj* other, Obj* out, float dt);
};

bool Humanoid::check(Obj* other, Obj* out, float dt)
{
    Obj* self = (Obj*)this;
    char buf[0x78];
    Obj* src;
    if (self->flag3d) {
        src = (Obj*)f_641280(buf + 0x50, other, dt, self->dist);
    } else {
        src = other;
    }
    ((C9*)(buf + 0x14))->copy9(src);
    float dx = src->pos.x - other->pos.x;
    float dy = src->pos.y - other->pos.y;
    float dz = src->pos.z - other->pos.z;
    float len = dx*dx + dy*dy + dz*dz;
    float dist = f_5cc240(len, dt);
    float t = g_83a31c;
    float* sel = (t < dist) ? &t : &dist;
    float v = *sel;
    if (v == dist) {
        return false;
    }
    ((F*)(buf + 0x14))->f_518470(g_826e70);
    float scale = g_837900 * v;
    float nx = dx * scale;
    float ny = dy * scale;
    float nz = dz * scale;
    float ox = other->pos.x + nx;
    float oy = other->pos.y + ny;
    float oz = other->pos.z + nz;
    if (self->flag3d) {
        float ddx = ox - other->pos.x;
        float ddy = oy - other->pos.y;
        float ddz = oz - other->pos.z;
        self->dist = ddx*ddx + ddy*ddy + ddz*ddz;
        return true;
    }
    ((C9*)out)->copy9(buf + 0x14);
    out->pos.x = ox;
    out->pos.y = oy;
    out->pos.z = oz;
    return true;
}
