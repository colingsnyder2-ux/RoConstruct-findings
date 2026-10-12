// from server: 45% by king_originala
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
    Vector3 blendedPosition = {
        transform.translation[0] * translationWeight + position.x * retainedWeight,
        transform.translation[1] * translationWeight + position.y * retainedWeight,
        transform.translation[2] * translationWeight + position.z * retainedWeight
    };
    position = blendedPosition;

    amount = translationWeight * amount;

    Quaternion converted;
    const Quaternion& rotation = converted.fromTransform(transform);

    Quaternion blendedOrientation = {
        rotation.x * amount + orientation.x * retainedWeight,
        rotation.y * amount + orientation.y * retainedWeight,
        rotation.z * amount + orientation.z * retainedWeight,
        rotation.w * amount + orientation.w * retainedWeight
    };
    orientation = blendedOrientation;
}
