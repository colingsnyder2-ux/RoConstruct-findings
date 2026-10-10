// from server: 68% by atomic.potato
struct HumanoidState
{
    int field8;
    int f();
};

extern "C" int __cdecl function_005d7670(int);
extern "C" int function_00643d40(int);

int HumanoidState::f()
{
    return function_00643d40(function_005d7670(field8)) != 0;
}
