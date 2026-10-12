// from server: 85% by king_originala
unsigned int func_006492d0();

struct State
{
    char padding[0x24];
    float previous;
    float baseline;
    float rate;
};

struct Joint
{
    char padding[0xc0];
    State* state;
    float value;
    void update();
};

void Joint::update()
{
    State* s = state;
    if (s)
    {
        float v = value;
        if (v == s->previous)
        {
            s->baseline = v;
            s->rate = 0.0f;
        }
        else
        {
            s->previous = v;
            int divisor = (int)func_006492d0();
            s->rate = (v - s->baseline) / divisor;
        }
    }
}
