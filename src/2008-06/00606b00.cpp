// from server: 97% by king_originala
struct Vector3 {
    float x, y, z;
};

extern int mapping[][4];

struct ContactConnector {
    char padding[16];
    Vector3* vertices;

    Vector3* getVertex(int index);
};

Vector3* ContactConnector::getVertex(int index)
{
    if (index < 12)
        return vertices + mapping[index / 4][index % 4];

    index -= 12;
    return vertices + mapping[index / 4][index + 1];
}
