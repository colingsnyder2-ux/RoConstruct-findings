// from server: 98% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Result {
    virtual void slot0();
    float values[6];
};

struct Input {
    char padding[8];
    int value;
};

extern const float factorY;
extern Vector3* __cdecl multiply(Vector3*, const Vector3*, const Vector3*);
extern const Vector3* __cdecl axisVector(int);
extern Result* __cdecl makeResult(Result*, const Vector3*, const Vector3*);

struct Factor : Vector3 {
    Factor();
};

inline Factor::Factor()
{
    x = 1.0f;
    y = factorY;
    z = 1.0f;
}

#pragma pack(push, 1)
struct Tool {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void refresh();

    char padding[0x3e];
    int selected;
    char padding2[2];
    Result result;
    int axis;
    Vector3 position;

    bool pick(Input*, Vector3*, int*);
    Tool* fallback(Input*);
    Tool* update(Input*);
};
#pragma pack(pop)

Tool* Tool::update(Input* input)
{
    Vector3 point = { 0.0f, 0.0f, 0.0f };
    int selectedAxis;

    if (pick(input, &point, &selectedAxis)) {
        selected = input->value;
        axis = selectedAxis % 3;

        static Factor factor;

        Vector3 temporary;
        const Vector3* product = multiply(&temporary, &point, &factor);
        Vector3& destination = position;
        destination.x = product->x;
        destination.y = product->y;
        destination.z = product->z;

        union {
            int alignment;
            char storage[sizeof(Result)];
        } temporaryResult;

        result = *makeResult(
            reinterpret_cast<Result*>(temporaryResult.storage),
            &destination, axisVector(selectedAxis));

        refresh();
        return this;
    }

    return fallback(input);
}
