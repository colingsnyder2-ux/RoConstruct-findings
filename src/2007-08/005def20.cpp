// from server: 71% by TrollStein
struct RBX_VMotorFeature_FactoryProduct {
};

extern "C" void __stdcall sub_005DE510(int* begin, int index, int count, int* value);

void __cdecl construct(int* begin, int* end)
{
    int count = (int)(end - begin);
    int half = count / 2;
    while (half > 0) {
        half = half - 1;
        sub_005DE510(begin, half, count, begin + half);
    }
}
