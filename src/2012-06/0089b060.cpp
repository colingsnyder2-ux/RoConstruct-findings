// from server: 76% by atomic.potato
extern "C" void __fastcall MotorFeatureChanged(void *, int);

struct MotorFeature
{
    char padding[164];
    int value;
    void setValue(int);
};

void MotorFeature::setValue(int value)
{
    if (this->value != value)
    {
        this->value = value;
        MotorFeatureChanged(this, 0xe5266c);
    }
}
