// from server: 48% by colin


extern const float translationWeight;
extern const float retainedWeight;

struct Transform
{
    float rotation[9];
    float translation[3];
};

struct Vector3
{
    float x, y, z;
};

struct Quaternion
{
    float x, y, z, w;

    Quaternion& fromTransform(const Transform&);
    Quaternion& operator=(const Quaternion&);
};

struct JointStage
{
    Vector3 position;
    Quaternion orientation;

    void update(const Transform&, float);
};

void JointStage::update(const Transform& transform, float amount)
{
    float tx = transform.translation[0];
    float ty = transform.translation[1];
    float tz = transform.translation[2];

    float px = position.x;
    float py = position.y;
    float pz = position.z;

    float nx = tx * translationWeight + px * retainedWeight;
    float ny = ty * translationWeight + py * retainedWeight;
    float nz = tz * translationWeight + pz * retainedWeight;

    position.x = nx;
    position.y = ny;
    position.z = nz;

    float a = translationWeight * amount;

    Quaternion converted;
    const Quaternion& rotation = converted.fromTransform(transform);

    float rx = rotation.x;
    float ry = rotation.y;
    float rz = rotation.z;
    float rw = rotation.w;

    float ox = orientation.x;
    float oy = orientation.y;
    float oz = orientation.z;
    float ow = orientation.w;

    float bx = rx * a + ox * retainedWeight;
    float by = ry * a + oy * retainedWeight;
    float bz = rz * a + oz * retainedWeight;
    float bw = rw * a + ow * retainedWeight;

    orientation.x = bx;
    orientation.y = by;
    orientation.z = bz;
    orientation.w = bw;
}
