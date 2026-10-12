// from server: 95% by king_originala

#pragma float_control(precise, off)

struct Rect {
    float x0, y0, x1, y1;
    Rect(const Rect&);
};

typedef int (__thiscall *ViewportQuery)(const void*);
extern ViewportQuery getActualLeft;
extern ViewportQuery getActualTop;
extern ViewportQuery getActualWidth;
extern ViewportQuery getActualHeight;

extern Rect __cdecl makeRect(float, float, float, float);

struct S {
    char pad[4];
    void* context;
    Rect f() const;
};

Rect S::f() const {
    const void* viewport = *(void**)((char*)context + 0x10);
    float left = (float)getActualLeft(viewport);
    float top = (float)getActualTop(viewport);
    float width = (float)getActualWidth(viewport);
    float height = (float)getActualHeight(viewport);
    return makeRect(left, top, left + width, top + height);
}
