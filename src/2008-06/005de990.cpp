// from server: 53% by colin
struct GCamera {
    float m[9];
    GCamera& operator=(const GCamera&);
    void set(float, float, float, float);
};

struct Message {
    Message* f(int);
};

extern float g_81c3b8;

Message* getDefault1();
Message* getDefault2();
Message* getDefault3();

Message* Message::f(int n) {
    Message* self = this;
    switch (n) {
    case 0: {
        float a = 0.0f;
        float b = 1.0f;
        float c = 0.0f;
        float d = g_81c3b8;
        float e = 1.0f;
        float f2 = 0.0f;
        float g = 1.0f;
        float h = 0.0f;
        float i = 1.0f;
        ((GCamera*)self)->set(a, b, c, d);
        return self;
    }
    case 1: {
        Message* r = getDefault1();
        ((GCamera*)self)->operator=(*(GCamera*)r);
        return self;
    }
    case 2: {
        float a = 0.0f;
        float b = g_81c3b8;
        float c = 0.0f;
        float d = 1.0f;
        float e = 0.0f;
        float f2 = 1.0f;
        float g = 0.0f;
        float h = 1.0f;
        float i = 0.0f;
        ((GCamera*)self)->set(a, b, c, d);
        return self;
    }
    case 3: {
        Message* r = getDefault2();
        ((GCamera*)self)->operator=(*(GCamera*)r);
        return self;
    }
    default: {
        Message* r = getDefault3();
        ((GCamera*)self)->operator=(*(GCamera*)r);
        return self;
    }
    }
}
