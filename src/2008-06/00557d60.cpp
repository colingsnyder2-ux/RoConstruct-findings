// from server: 100% by king_originala
struct Value {
    unsigned long x;
    unsigned long y;
    unsigned long z;
};

struct Object;

struct Callback {
    virtual void invoke(Object* object, Value value) = 0;
};

struct S {
    unsigned char member;
    void f(Value value, Callback& callback);
};

struct Padding {
    unsigned char data[164];
};

struct Object : Padding, S {
};

struct Failure {
    unsigned char data[40];
};

void S::f(Value value, Callback& callback)
{
    try {
        Object* object = static_cast<Object*>(this);
        callback.invoke(object, value);
    }
    catch (volatile Failure failure) {
        failure.data[0] = 0;
    }
    __assume(0);
}
