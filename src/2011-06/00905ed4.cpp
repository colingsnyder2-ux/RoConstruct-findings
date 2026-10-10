// from server: 50% by atomic.potato
extern "C" void __cdecl sub_009092d5(int);
extern "C" void (__cdecl *sub_00905ed4_tail)();

extern "C" void __declspec(naked) __cdecl sub_00905ed4()
{
    sub_009092d5(1);
    sub_00905ed4_tail();
}
