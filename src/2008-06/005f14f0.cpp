// from server: 92% by colin
#pragma float_control(precise, on)

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

struct Store {
    char padding[0xd0];
    Value* values[6];
    const Value& get(int index) const;
    void set(int index, const Value* value);
};

inline const Value& Store::get(int index) const
{
    if (values[index])
        return *values[index];

    static Value empty;
    return empty;
}

struct Result {
    int get();
};

struct Part {
    void setShouldRender(int index);
    int* f(int index);
    void notify(int value);
};

struct Face {
    Part* part;
    int index;
    void setFirst(float value);
};

void Face::setFirst(float value)
{
    Value copy =
        reinterpret_cast<Store*>(reinterpret_cast<char*>(part) + 0x228)->get(index);

    if (value > copy.first) {
        copy.first = value;
        reinterpret_cast<Store*>(reinterpret_cast<char*>(part) + 0x228)->set(index, &copy);
        part->setShouldRender(index);
        int result = reinterpret_cast<Result*>(part->f(index))->get();
        part->notify(result);
    }
}
