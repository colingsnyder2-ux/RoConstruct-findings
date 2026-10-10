// from server: 69% by atomic.potato
extern "C" void __cdecl sub_71a57a(int);

extern "C" int __cdecl sub_7199ec();

int seg_00870000(int a, int b)
{
    int ecx = *reinterpret_cast<int *>(b - 4) ^ b;
    sub_71a57a(ecx);
    return sub_7199ec();
}
