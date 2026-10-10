// from server: 64% by atomic.potato
struct S
{
    int pad[86];
    float value;
    void f();
};

extern "C" float get_value(float*);

extern "C" void consume(float*);

void S::f()
{
    float value = get_value(&this->value);
    consume(&value);
}
