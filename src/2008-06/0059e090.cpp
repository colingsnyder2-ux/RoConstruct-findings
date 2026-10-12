// from server: 83% by king_originala
extern const float upperLimit;
extern char propertyDescriptor;

struct Value {
    char storage[0xB0];
    void set(float);
};

struct Settings {
    char padding[0x228];
    Value value;
    float current;

    void notify(void*);
    void set(float);
};

void Settings::set(float amount)
{
    float clamped = amount <= 0.0f ? 0.0f :
                    upperLimit <= amount ? upperLimit : amount;

    if (current != clamped) {
        value.set(clamped);
        notify(&propertyDescriptor);
    }
}
