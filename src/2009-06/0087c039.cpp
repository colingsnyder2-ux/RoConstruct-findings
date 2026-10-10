// from server: 52% by atomic.potato
extern "C" int __cdecl sub_7199ec(int, int);
extern "C" int __cdecl sub_71a57a(int);

int seg_00870000(int, int value)
{
    int result = sub_71a57a(*(int *)(value - 4) ^ value);
    return sub_7199ec(0x9b9cd4, result);
}
