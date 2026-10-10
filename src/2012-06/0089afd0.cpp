// from server: 74% by atomic.potato
struct MotorFeature
{
    int value;
    int pad[38];
    int set(int value);
};

extern "C" void UpdateMotorFeature(int);

int MotorFeature::set(int value)
{
    if (this->pad[37] == value)
        return 0;
    this->pad[37] = value;
    UpdateMotorFeature(0xe526a0);
    return 0;
}
