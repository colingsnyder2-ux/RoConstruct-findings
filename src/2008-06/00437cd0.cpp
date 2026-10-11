// from server: 78% by colin
extern "C" int __cdecl sprintf(char*, const char*, ...);

struct VVector3 {
    float x;
    float y;
    float z;
};

struct XItem {
    void format(VVector3* v);
};

void XItem::format(VVector3* v)
{
    char buf[260];
    sprintf(buf, "%.3g, %.3g, %.3g", v->x, v->y, v->z);
    void* p = buf;
    void* q = &p;
    void (*fn)(void*) = *(void (**)(void*))0x803f10;
    fn(q);
    (*(void (***)(void))this)[0x60 / 4]();
}
