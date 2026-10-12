// from server: 99% by king_originala
extern float horizontalOffset;
extern float availableHeight;

struct Vec2 {
    float x;
    float y;
};

struct Entry {
    char data[8];
};

struct Entries {
    char padding[12];
    Entry* begin;
    Entry* end;
};

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

template<class T>
inline const T& minimum(const T& a, const T& b)
{
    return a < b ? a : b;
}

struct S {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void v15() = 0;
    virtual void v16() = 0;
    virtual void v17() = 0;
    virtual Vec2 position() = 0;
    virtual void v19() = 0;
    virtual void v20() = 0;
    virtual void v21() = 0;
    virtual void v22() = 0;
    virtual Vec2 size() = 0;

    char padding[260];
    Entries* entries;

    Vec2 f();
};

Vec2 S::f()
{
    Vec2 result = position();
    Vec2 dimensions = size();

    result.x = horizontalOffset + dimensions.x + result.x;

    int spacing = (int)dimensions.y + 4;
    int limit = ((int)availableHeight - 120) / spacing;
    int row = ((int)result.y - 20) / spacing;
    Entries* list = entries;
    int half = (list ? (int)(list->end - list->begin) : 0) / 2;

    limit -= half;
    row = maximum(half, row);
    row = minimum(row, limit);
    result.y = (float)((row - half) * spacing + 20);

    return result;
}
