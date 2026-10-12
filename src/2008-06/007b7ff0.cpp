// from server: 59% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Level {
    int data[11];
    Level(float, Vector3, float, float, float, float);
    ~Level();
};

struct LevelArray {
    Level* data;
    int count;
    int capacity;
    void append(const Level&);
};

struct Material {
    int padding[3];
    LevelArray levels;
    Level& addLevel(Vector3, float, float, float, float);
};

Level& Material::addLevel(Vector3 v, float a, float b, float c, float d)
{
    levels.append(Level(0.0f, v, a, b, c, d));
    return levels.data[levels.count - 1];
}
