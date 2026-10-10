// from server: 89% by atomic.potato
extern "C" void __stdcall FactoryProduct(const void*, const void*);

struct SpawnLocation
{
    char padding[1000];
    int value;
    void SetValue(int);
};

void SpawnLocation::SetValue(int value)
{
    this->value = value;
    FactoryProduct((const void*)0x979ec4, this);
}
