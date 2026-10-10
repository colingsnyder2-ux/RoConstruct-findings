// from server: 94% by atomic.potato
struct Argument
{
    int pad;
    void* object;
};

struct Interface
{
    virtual void Invoke(int, int) = 0;
};

struct KeyButton
{
    int pad[82];
    int value;
    void f(Argument*);
};

void KeyButton::f(Argument* argument)
{
    Interface* object = (Interface*)argument->object;
    object->Invoke(value, 1);
}
