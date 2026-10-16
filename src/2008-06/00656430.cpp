// from server: 45% by colin
struct ScoreHud {
    int getState();
    void setState(int, int);
    void setSomething(int);
    void update(int);
};

extern "C" int __stdcall getState_impl(ScoreHud*);
extern "C" void __stdcall setState_impl(ScoreHud*, int, int);
extern "C" void __stdcall setSomething_impl(ScoreHud*, int);

int ScoreHud::getState()
{
    return getState_impl(this);
}

void ScoreHud::setState(int a, int b)
{
    setState_impl(this, a, b);
}

void ScoreHud::setSomething(int a)
{
    setSomething_impl(this, a);
}

void ScoreHud::update(int value)
{
    int state = getState();
    if (state > 3) {
        return;
    }
    switch (state) {
    case 0:
        setState(value, 2);
        break;
    case 1:
        setState(value, 3);
        break;
    case 2:
        setSomething(value);
        break;
    default:
        break;
    }
}
