// from server: 94% by atomic.potato
struct S
{
    void f();
    unsigned char data[156];
};

void S::f()
{
    *(int *)(data + 0) = 0x009e668c;
    *(int *)(data + 4) = 0x009e6680;
    *(int *)(data + 24) = 0x009e6674;
    *(int *)(data + 28) = 0x009e666c;
    *(int *)(data + 148) = 0x009e665c;
    *(int *)(data + 152) = 0x009e6644;
}
