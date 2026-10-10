// from server: 57% by atomic.potato
extern "C" void __cdecl sub_009092d5(int);

extern "C" void __cdecl sub_00C9B60C();

void __declspec(naked) __cdecl sub_0090675F()
{
    sub_009092d5(1);
    sub_00C9B60C();
}
