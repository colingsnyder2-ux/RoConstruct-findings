// from server: 76% by king_originala
#pragma float_control(precise, off)

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

struct Storage {
    char padding[0xd0];
    Value* values[6];
    const Value& get(int index) const;
    void set(int index, const Value& value);
};

inline const Value& Storage::get(int index) const
{
    const Value* value = values[index];
    if (!value) {
        static const Value empty;
        value = &empty;
    }
    return *value;
}

struct Item {
    void* descriptor();
};

struct PartInstance {
    char padding[0x228];
    Storage storage;
    void setShouldRender(int index);
    Item* item(int index);
    void notify(void* descriptor);
};

struct S {
    PartInstance* part;
    int index;
    void f(int kind);
};

void S::f(int kind)
{
    Value copy = part->storage.get(index);
    if (kind != copy.kind) {
        copy.kind = kind;
        part->storage.set(index, copy);
        part->setShouldRender(index);
        part->notify(part->item(index)->descriptor());
    }
}
