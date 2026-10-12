// from server: 91% by king_originala
struct Value;
extern void (__thiscall *destroyValue)(Value *);
extern void (__thiscall *assignValue)(void *, const Value *);
extern unsigned char globalObject;

struct Value
{
    unsigned char storage[4];
    __forceinline ~Value();
};

__forceinline Value::~Value()
{
    destroyValue(this);
}

void update(Value value)
{
    assignValue(&globalObject, &value);
}
