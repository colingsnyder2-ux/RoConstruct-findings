// from server: 66% by king_originala
struct Vec2 {
    float x, y;
    Vec2() {}
    Vec2(float a, float b) : x(a), y(b) {}
};

struct Rect {
    Vec2 minimum, maximum;
    Rect(const Vec2& position, const Vec2& size)
        : minimum(position.x, position.y),
          maximum(position.x + size.x, position.y + size.y) {}
    bool contains(const Vec2* point) const;
};

struct ConnectionObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void disconnect();
};

struct Connection {
    ConnectionObject* object;
    void* control;
    void reset();
};

struct Event {
    int type;
    int reserved;
    const Vec2* position;
};

struct Result {
    int handled;
    void* target;
    Result(int h, void* p) {
        target = p;
        handled = h;
    }
};

struct ChatEnter {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual Vec2 getPosition();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual Vec2 getSize();
    virtual void v24();
    virtual void changed();

    char padding[304];
    Connection connection;
    char padding2[8];
    int state;

    Result process(const Event* event);
};

Result ChatEnter::process(const Event* event)
{
    const int zero = 0;
    if (connection.object != zero)
        connection.object->disconnect();
    connection.reset();

    Vec2 position = getPosition();
    Rect bounds(position, getSize());

    if (bounds.contains(event->position)) {
        switch (event->type) {
        case 3:
            if (state != 2) {
                state = 2;
                changed();
            }
            break;
        case 4:
            if (state != 3) {
                state = 3;
                changed();
            }
            break;
        }
        return Result(1, 0);
    }

    if (state != zero) {
        state = zero;
        changed();
    }
    return Result(zero, 0);
}
