// from server: 72% by king_originala
struct Vector {
    float x, y, z;
};

struct Matrix {
    float elements[9];
    Vector column(int index) const;
    Matrix& operator=(const Matrix& other);
    static const Matrix& identity();
};

struct Frame {
    Matrix rotation;
    Vector position;
};

extern const float directionScale;

struct AxisMoveTool {
    Frame transform(const Frame& source, const Vector& offset);
    Frame move(const Frame& source, const Vector& offset, float distance);
};

Frame AxisMoveTool::move(const Frame& source, const Vector& offset, float distance)
{
    Frame frame = transform(source, offset);
    float factor = directionScale;
    Vector column = frame.rotation.column(2);

    double x = column.x * (double)distance;
    double y = column.y * (double)distance;
    double z = column.z * (double)distance;

    x *= factor;
    y *= factor;
    z *= factor;

    Vector position;
    position.x = (float)(x + frame.position.x);
    position.y = (float)(y + frame.position.y);
    position.z = (float)(z + frame.position.z);

    Frame result;
    result.rotation = Matrix::identity();
    result.position.x = position.x;
    result.position.y = position.y;
    result.position.z = position.z;
    return result;
}
