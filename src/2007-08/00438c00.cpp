// from server: 82% by colin
struct VVector3 {
    float x;
    float y;
    float z;
};

struct XItem {
    void __stdcall format(const VVector3* v);
};

extern "C" int __cdecl sprintf(char* buffer, const char* format, ...);
extern "C" void* __stdcall unknown_77e968();
extern "C" void* __stdcall unknown_77ddb8();

void __stdcall XItem::format(const VVector3* v)
{
    char local[260];
    sprintf(local, "%.3g, %.3g, %.3g", v->x, v->y, v->z);
    unknown_77e968();
    unknown_77ddb8();
    (*(void (__thiscall**)(XItem*))((*(int*)this) + 0x60))(this);
}
