// from server: 77% by king_originala
struct Text {
    unsigned char storage[28];
    Text(const Text&);
};

struct Rect {
    float x0, y0, x1, y1;
};

struct Renderer {
    void draw(Text text, const void* color,
              float x0, float y0, float x1, float y1,
              float u0, float v0, float u1, float v1);
};

struct State {
    unsigned char padding[20];
    Renderer* renderer;
};

struct Adorn {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual int height();

    State* state;
    Text text;

    void draw(const Rect* rect, const void* color);
};

void Adorn::draw(const Rect* rect, const void* color)
{
    state->renderer->draw(text, color,
                          rect->x0, (height() - 1) - rect->y0,
                          rect->x1, (height() - 1) - rect->y1,
                          0.0f, 0.0f, 1.0f, 1.0f);
}
