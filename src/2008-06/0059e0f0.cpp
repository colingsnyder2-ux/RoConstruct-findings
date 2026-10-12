// from server: 75% by king_originala
extern char descriptor;

struct FloatProperty {
    void set(float value);
};

struct Settings {
    void setValue(float value);
    void notify(void* property);
};

void Settings::setValue(float value) {
    double clamped = value <= 0.0 ? 0.0 : (1.0 <= value ? 1.0 : value);

    if (*reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x2dc) != clamped) {
        reinterpret_cast<FloatProperty*>(reinterpret_cast<char*>(this) + 0x228)->set(static_cast<float>(clamped));
        notify(&descriptor);
    }
}
