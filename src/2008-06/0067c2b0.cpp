// from server: 40% by king_originala
struct Vector3 {
    float x, y, z;
    float length() const;
};

struct AxisAlignedBox {
    Vector3 minimum, maximum;
    int extent;
    bool infinite;
    AxisAlignedBox& operator=(const AxisAlignedBox&);
    Vector3 getHalfSize() const;
    ~AxisAlignedBox();
};

struct String {
    unsigned char storage[28];
    String& operator=(const String&);
    ~String();
};

String operator+(const char*, const String&);

struct StringConverter {
    static String toString(int, unsigned short, char, unsigned int);
};

struct LogManager {
    static LogManager& getSingleton();
    void logMessage(const String&, int, bool);
};

struct HardwareIndexBufferSharedPtr {
    void* pointer;
    unsigned int* references;
    virtual ~HardwareIndexBufferSharedPtr();
};

struct ContentProvider {
    int value;
    unsigned char flag;
    int count;
    void f();
};

struct Factory {
    unsigned char reserved[32];
    int count;
    String* f(ContentProvider**, String*);
};

struct Object {
    unsigned char reserved[204];
    AxisAlignedBox bounds;
    float radius;
    Object* f(Factory*, const Vector3*, unsigned int, Vector3*,
              Vector3*, ContentProvider*, HardwareIndexBufferSharedPtr*,
              int, int, int);
};

Object* Object::f(Factory* factory, const Vector3* vertices,
                  unsigned int count, Vector3* minimum, Vector3* maximum,
                  ContentProvider* provider,
                  HardwareIndexBufferSharedPtr* indexBuffer,
                  int, int, int)
{
    float minX = 3.402823466e+38F;
    float minY = minX;
    float minZ = minX;
    float maxX = -3.402823466e+38F;
    float maxY = maxX;
    float maxZ = maxX;

    while (count != 0) {
        if (vertices->x < minX)
            minX = vertices->x;
        if (vertices->y < minY)
            minY = vertices->y;
        if (vertices->z < minZ)
            minZ = vertices->z;
        if (vertices->x > maxX)
            maxX = vertices->x;
        if (vertices->y > maxY)
            maxY = vertices->y;
        if (vertices->z > maxZ)
            maxZ = vertices->z;
        ++vertices;
        --count;
    }

    minimum->x = minX;
    minimum->y = minY;
    minimum->z = minZ;
    maximum->x = maxX;
    maximum->y = maxY;
    maximum->z = maxZ;

    {
        AxisAlignedBox box;
        box.minimum.x = minX;
        box.minimum.y = minY;
        box.minimum.z = minZ;
        box.maximum.x = maxX;
        box.maximum.y = maxY;
        box.maximum.z = maxZ;
        box.extent = 1;
        box.infinite = false;
        bounds = box;
        radius = box.getHalfSize().length();
    }

    {
        String name = "RBX cr " +
            StringConverter::toString(factory->count++, 0, ' ', 0);
        String resource;
        resource = *factory->f(&provider, &name);
        {
            String message = "RBX cr " + resource;
            LogManager::getSingleton().logMessage(message, 2, false);
        }
    }

    indexBuffer->~HardwareIndexBufferSharedPtr();
    provider->f();
    return this;
}
