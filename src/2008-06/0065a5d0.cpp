// from server: 67% by king_originala
struct Point {
    int x, y, z;
};

struct Box {
    Point min;
    Point max;
};

struct S {
    void update(void *a, void *b, const Box *range,
                const Box *oldBox, const Box *newBox);
    void insert(void *a, void *b, const Point *point);
    void *find(void *b, const Point *point);
    void remove(void *entry);
};

void S::update(void *a, void *b, const Box *range,
               const Box *oldBox, const Box *newBox)
{
    for (int x = range->min.x; x <= range->max.x; ++x) {
        for (int y = range->min.y; y <= range->max.y; ++y) {
            for (int z = range->min.z; z <= range->max.z; ++z) {
                Point point;
                point.x = x;
                point.y = y;
                point.z = z;

                bool inNew =
                    x >= newBox->min.x &&
                    y >= newBox->min.y &&
                    z >= newBox->min.z &&
                    x <= newBox->max.x &&
                    y <= newBox->max.y &&
                    z <= newBox->max.z;

                bool inOld =
                    x >= oldBox->min.x &&
                    y >= oldBox->min.y &&
                    z >= oldBox->min.z &&
                    x <= oldBox->max.x &&
                    y <= oldBox->max.y &&
                    z <= oldBox->max.z;

                if (inNew) {
                    if (!inOld)
                        insert(a, b, &point);
                } else if (inOld) {
                    remove(find(b, &point));
                }
            }
        }
    }
}
