// from server: 81% by colin
extern char descriptor;

struct FloatProperty {
    void set(float value);
};

struct Settings {
    void setValue(float value);
    void notify(void* property);
};

void Settings::setValue(float value) {
    float clamped;
    if (value < 0.0f) {
        clamped = 0.0f;
    } else if (value > 1.0f) {
        clamped = 1.0f;
    } else {
        clamped = value;
    }

    if (*reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x2dc) != clamped) {
        reinterpret_cast<FloatProperty*>(reinterpret_cast<char*>(this) + 0x228)->set(clamped);
        notify(&descriptor);
    }
}
