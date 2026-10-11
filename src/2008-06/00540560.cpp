// from server: 30% by colin
struct Bucket {
    Bucket();
    void clear();
    void addValue(float);
};

extern "C" void __stdcall sub_54E310(void*);
extern "C" void __stdcall sub_54DA40();
extern "C" void __stdcall sub_5530E0(int);

Bucket::Bucket()
{
    sub_54E310(this);
    sub_54DA40();
    clear();
    addValue(0.0f);
}

void Bucket::clear()
{
    sub_5530E0(0);
}

void Bucket::addValue(float)
{
}
