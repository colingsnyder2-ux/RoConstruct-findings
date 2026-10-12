// from server: 77% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
};

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Matrix3 {
    float elements[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 position;
};

struct Camera {
    const Frame& getFrame();
};

struct Settings;

struct Observer {
    void beginChange(Camera*);
    void endChange(Camera*);
};

extern Observer* findObserver(Settings*);

struct Settings {
    char padding[0x228];
    Camera camera;

    void applyFrame(const Frame&);
    void update();
    void setPosition(const Vector3&);
};

void Settings::setPosition(const Vector3& position)
{
    const Frame& source = camera.getFrame();
    Frame frame(source);

    if (position.x == source.position.x ||
        position.y != source.position.y ||
        position.z != source.position.z) {
        frame.position.x = position.x;
        frame.position.y = position.y;
        frame.position.z = position.z;

        Observer* observer = findObserver(this);
        if (observer)
            observer->beginChange(&camera);

        applyFrame(frame);
        update();

        observer = findObserver(this);
        if (observer)
            observer->endChange(&camera);
    }
}
