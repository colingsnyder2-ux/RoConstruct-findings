// from server: 70% by colin




struct ScoreHud {
    int getState();
    void setA(int, int);
    void setB(int);
    void dispatch(int);
};

void ScoreHud::dispatch(int arg)
{
    int s = getState();
    switch (s)
    {
    case 0:
        setA(arg, 2);
        break;
    case 1:
        setA(arg, 3);
        break;
    case 2:
        setB(arg);
        break;
    case 3:
        setB(arg);
        break;
    default:
        break;
    }
}
