// from server: 98% by king_originala
#pragma float_control(precise, off)
extern "C" double __cdecl atan2(double, double);
#pragma intrinsic(atan2)

extern const float normalizationTolerance;
extern const double upperThreshold;
extern const double lowerThreshold;
extern const float fullTurn;

struct Vector3 {
    float x, y, z;
    float normalize(float);
    Vector3 &operator=(const Vector3 &);
    Vector3 operator-(const Vector3 &) const;
    Vector3 operator*(float) const;
    float dot(const Vector3 &) const;
    Vector3 cross(const Vector3 &) const;
};

inline Vector3 &Vector3::operator=(const Vector3 &v)
{
    x = v.x;
    y = v.y;
    z = v.z;
    return *this;
}

inline Vector3 Vector3::operator-(const Vector3 &v) const
{
    Vector3 r;
    r.x = x - v.x;
    r.y = y - v.y;
    r.z = z - v.z;
    return r;
}

inline Vector3 Vector3::operator*(float s) const
{
    Vector3 r;
    r.x = x * s;
    r.y = y * s;
    r.z = z * s;
    return r;
}

inline float Vector3::dot(const Vector3 &v) const
{
    return x * v.x + y * v.y + z * v.z;
}

inline Vector3 Vector3::cross(const Vector3 &v) const
{
    Vector3 r;
    r.x = y * v.z - z * v.y;
    r.y = z * v.x - x * v.z;
    r.z = x * v.y - y * v.x;
    return r;
}

struct Point {
    char padding[28];
    Vector3 position;
};

struct Connector {
    char padding[12];
    Point *origin;
    Point *axisPoint;
    Point *firstPoint;
    Point *secondPoint;
    float previousAngle;
    int turns;
    void measure(Vector3 *, float *, float *);
};

void Connector::measure(Vector3 *axis, float *angle, float *change)
{
    *axis = axisPoint->position - origin->position;
    axis->normalize(normalizationTolerance);

    Vector3 a = firstPoint->position - origin->position;
    Vector3 b = secondPoint->position - origin->position;
    float ad = a.dot(*axis);
    float bd = b.dot(*axis);
    a = a - *axis * ad;
    b = b - *axis * bd;

    int oldTurns = turns;
    float current = (float)atan2(a.cross(b).dot(*axis), a.dot(b));

    if (previousAngle > upperThreshold) {
        if (current < lowerThreshold)
            ++turns;
    } else if (previousAngle < lowerThreshold) {
        if (current > upperThreshold)
            --turns;
    }

    float turn = fullTurn;
    float continuous = current + turns * turn;
    *angle = continuous;
    *change = continuous - (previousAngle + oldTurns * turn);
    previousAngle = current;
}
