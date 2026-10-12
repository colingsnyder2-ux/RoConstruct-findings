// from server: 66% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3(const Vector3& other);
};

__forceinline Vector3::Vector3(const Vector3& other)
    : x(other.x), y(other.y), z(other.z) {}

struct Message {
    char padding[0x17c];
    unsigned char flag;
    char alignment[3];
    Vector3 first;
    Vector3 second;
    Vector3 getVector() const;
};

Vector3 Message::getVector() const {
    return flag ? first : second;
}
