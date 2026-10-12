// from server: 86% by king_originala
extern const double threshold;

struct Ray {
    char data[24];
    ~Ray();
};

struct CameraPart {
    Ray makeRay(const void *);
};

struct Test {
    bool check(const Ray &);
};

struct Camera {
    char padding[0x130];
    CameraPart part;

    void setValue(float);
    void update();
    void refresh();
    void search(float, float, float, Test *, const void *);
};

void Camera::search(float low, float middle, float high,
                    Test *test, const void *point)
{
    if (high - low < threshold)
        return;

    setValue(middle);
    update();
    refresh();

    bool accepted = test->check(part.makeRay(point));
    float lower, upper;

    if (accepted) {
        lower = low;
        upper = middle;
    } else {
        lower = middle;
        upper = high;
    }

    search(lower, (lower + upper) * 0.5, upper, test, point);
}
