// from server: 90% by atomic.potato
struct FactoryProduct
{
    void set();
};

void FactoryProduct::set()
{
    *(int*)((char*)this + 0) = 0xA5C8C4;
    *(int*)((char*)this + 4) = 0xA5C8B8;
    *(int*)((char*)this + 0x18) = 0xA5C8AC;
    *(int*)((char*)this + 0x1C) = 0xA5C8A0;
}
