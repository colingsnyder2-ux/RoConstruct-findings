// from server: 70% by atomic.potato
struct PartInstance
{
    void f(unsigned int* result);
};

void PartInstance::f(unsigned int* result)
{
    unsigned int* data = *reinterpret_cast<unsigned int**>(
        reinterpret_cast<unsigned char*>(this) + 0x168);
    result[0] = data[0x78 / 4];
    result[1] = data[0x7c / 4];
}
