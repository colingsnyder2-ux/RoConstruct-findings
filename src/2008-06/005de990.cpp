// from server: 33% by colin
struct GCamera {
    float m[9];
    void setPosition(float, float, float, float);
    void setMatrix(const GCamera&);
};

struct Message {
    void* vtable;
    char pad[0x24];
    GCamera camera;
    Message* __cdecl renderFullScreen(int);
};

extern float g_defaultValue;

Message* Message::renderFullScreen(int mode)
{
    switch (mode) {
    case 0: {
        float a = 0.0f;
        float b = 1.0f;
        float c = 0.0f;
        float d = g_defaultValue;
        float e = 0.0f;
        float f = 0.0f;
        float g = 0.0f;
        float h = 0.0f;
        float i = 0.0f;
        camera.setPosition(a, b, c, d);
        return this;
    }
    case 1: {
        GCamera m;
        m.setMatrix(camera);
        return this;
    }
    case 2: {
        float a = 0.0f;
        float b = g_defaultValue;
        float c = 0.0f;
        float d = 1.0f;
        float e = 0.0f;
        float f = 0.0f;
        float g = 0.0f;
        float h = 0.0f;
        float i = 0.0f;
        camera.setPosition(a, b, c, d);
        return this;
    }
    default: {
        GCamera m;
        m.setMatrix(camera);
        return this;
    }
    }
}
