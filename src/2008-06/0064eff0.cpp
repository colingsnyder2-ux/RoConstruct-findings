// from server: 58% by atomic.potato
struct Object;

struct KeyButton
{
    int value;
    void f(Object* object);
};

struct Object
{
    virtual void Call(int, int) = 0;
};

void KeyButton::f(Object* object)
{
    object->Call(value, 0);
}
