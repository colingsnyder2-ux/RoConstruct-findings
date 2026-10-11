// from server: 54% by atomic.potato
struct Ball
{
    float field0;
    float field4;
    float getValue();
};

extern float g_9af2dc;
extern float g_9c2f14;

float Ball::getValue()
{
    return field4 * g_9af2dc * (field4 * g_9af2dc) * g_9c2f14;
}
