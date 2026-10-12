// from server: 82% by king_originala
struct __declspec(align(8)) Vec {
    float v[2];
};

struct Entry {
    void* object;
    void* owner;
};

struct Children {
    char pad[12];
    Entry* begin;
    Entry* end;
};

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl cast_object(void*, long, const void*, const void*, int);
extern char instance_type;
extern char gui_type;

struct S {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual Vec position();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual Vec size();

    char pad0[260];
    Children* children;
    char pad1[72];
    int axis;

    unsigned int count();
    Vec f(S* child);
};

Vec S::f(S* child)
{
    Vec result = position();
    Vec ownSize = size();

    for (unsigned int i = 0; i < count(); ++i) {
        Children* list = children;
        if (i >= static_cast<unsigned int>(list->end - list->begin))
            _invalid_parameter_noinfo();

        S* item = static_cast<S*>(
            cast_object(list->begin[i].object, 0,
                        &instance_type, &gui_type, 0));

        if (item) {
            Vec childSize = item->size();
            if (item == child) {
                int other = (axis + 1) % 2;
                result.v[other] +=
                    (ownSize.v[other] - childSize.v[other]) * 0.5f;
                return result;
            }

            if (static_cast<unsigned int>(axis) <= 1) {
                int index = axis;
                result.v[index] += item->size().v[index];
            }
        }
    }

    return result;
}
