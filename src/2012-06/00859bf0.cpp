// from server: 69% by atomic.potato
struct LocalBuffer
{
    char data[40];
};

extern "C" void __cdecl sub_859a30(LocalBuffer *);
extern "C" void __cdecl sub_983144(LocalBuffer *, const void *);

void sub_859bf0()
{
    LocalBuffer buffer;
    sub_859a30(&buffer);
    sub_983144(&buffer, reinterpret_cast<const void *>(0x00d21de0));
}
