// from server: 90% by king_originala
struct MotorData
{
    char padding[0x8c];
    float value;

    void setValue(float value);
};

extern const char property;

struct Motor
{
    char padding[0x150];
    MotorData* data;

    void setValue(float value);
    void notify(const void* descriptor);
};

void Motor::setValue(float value)
{
    if (data->value != value)
    {
        data->setValue(value);
        notify(&property);
    }
}
