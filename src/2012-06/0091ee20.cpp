// from server: 94% by atomic.potato
extern "C" int __stdcall sub_751300(int);
extern "C" int __stdcall sub_79b020(int);

struct FilterHumanoidParts
{
    int f(int);
};

int FilterHumanoidParts::f(int value)
{
    return sub_79b020(sub_751300(value)) ? 1 : 2;
}
