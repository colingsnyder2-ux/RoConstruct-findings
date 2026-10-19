// from server: 75% by colin
//

//

struct Color3 {
    float r, g, b;
    Color3(const Color3& c) : r(c.r), g(c.g), b(c.b) {}
};

struct Handle {
    void* pointer;
    Handle() : pointer(0) {}
    Handle(const Handle& h) : pointer(h.pointer) {}
};

struct Pass {
    unsigned char data[56];
    Pass(Handle, Color3, float, float, float, float);
    ~Pass();
};

struct Level {
    Pass* passes;
    unsigned int count;
    void append(const Pass&);
    Level* add(const Pass& p) { append(p); return this; }
};

struct Material {
    unsigned char padding[12];
    Level level;
    Pass* addPass(Color3, float, float, float, float);
};

Pass* Material::addPass(Color3 color, float a, float b, float c, float d)
{
    Level* l = level.add(Pass(Handle(), color, a, b, c, d));
    return l->passes + l->count - 1;
}
