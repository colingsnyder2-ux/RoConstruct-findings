// from server: 78% by colin
struct ScoreHud {
    int getState();
    void setA(int, int);
    void setB(int);
    void dispatch(int);
};

void ScoreHud::dispatch(int arg)
{
    switch (getState())
    {
    case 0:
        setA(arg, 2);
        break;
    case 1:
        setA(arg, 3);
        break;
    case 2:
    case 3:
        setB(arg);
        break;
    }
}
