// from server: 50% by colin
struct GCamera {
    float m[9];
    GCamera& operator=(const GCamera& other);
    void set(float a, float b, float c, float d);
};

struct Message {
    Message* f(int type);
};

extern float g_81c3b8;

Message* makeMessageA();
Message* makeMessageB();
Message* makeMessageC();

Message* Message::f(int type) {
    Message* self = this;
    switch (type) {
    case 0: {
        GCamera cam;
        cam.set(0.0f, 0.0f, 0.0f, 0.0f);
        return self;
    }
    case 1: {
        Message* m = makeMessageA();
        *self = *m;
        return self;
    }
    case 2: {
        GCamera cam;
        cam.set(0.0f, g_81c3b8, 0.0f, 1.0f);
        return self;
    }
    case 3: {
        Message* m = makeMessageB();
        *self = *m;
        return self;
    }
    default: {
        Message* m = makeMessageC();
        *self = *m;
        return self;
    }
    }
}
