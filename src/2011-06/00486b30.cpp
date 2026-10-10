// from server: 59% by atomic.potato
extern "C" void Render(void*, double);

struct UserInputJob
{
    UserInputJob* f(double);
};

double g_value;

UserInputJob* UserInputJob::f(double value)
{
    Render(this, g_value);
    return this;
}
