// from server: 85% by king_originala
extern float defaultFirst;
extern float defaultSecond;

struct Value {
    int kind;
    float first;
    float second;
    Value();
};

inline Value::Value()
    : kind(0), first(defaultFirst), second(defaultSecond)
{
}

struct Property {
    void* get();
};

struct Values {
    char padding[0xd0];
    Value* entries[1];
    const Value& get(int) const;
    void set(int, const Value*);
};

inline const Value& Values::get(int index) const
{
    if (entries[index])
        return *entries[index];
    static Value empty;
    return empty;
}

struct PartInstance {
    char padding[0x228];
    Values values;
    void setShouldRender(int);
    int* f(int);
    void notify(void*);
};

struct FaceInstance {
    PartInstance* part;
    int face;
    void setSecond(float);
};

void FaceInstance::setSecond(float second)
{
    Value value = part->values.get(face);
    if (second != value.second) {
        value.second = second;
        part->values.set(face, &value);
        part->setShouldRender(face);
        part->notify(reinterpret_cast<Property*>(part->f(face))->get());
    }
}
