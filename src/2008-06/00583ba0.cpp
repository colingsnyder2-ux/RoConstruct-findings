// from server: 88% by king_originala
struct Matrix {
    float m[9];
    Matrix(const Matrix&);
    Matrix transpose() const;
    const Matrix& inverse() const;
};

struct Frame {
    Matrix rotation;
    float position[3];
    Frame();
    void set(int);
};

struct Result {
    Matrix rotation;
    float position[3];
};

struct Source {
    Matrix getMatrix(const Frame&) const;
};

extern float zeroX;
extern float zeroY;
extern float zeroZ;
extern unsigned int zeroFlags;

struct Model {
    char pad0[0x1b0];
    Result transform;
    Source* source;
    char pad1[0x28];
    unsigned char dirty0;
    char pad2[0x33];
    unsigned char dirty1;
    char pad3[0x2f];
    unsigned char dirty2;

    void update(int);
};

void Model::update(int value)
{
    if (source) {
        Frame frame;
        frame.set(value);

        if (!(zeroFlags & 1)) {
            zeroFlags |= 1;
            zeroX = 0.0f;
            zeroY = 0.0f;
            zeroZ = 0.0f;
        }

        Result result = {
            source->getMatrix(frame).transpose().inverse(),
            { zeroX, zeroY, zeroZ }
        };

        transform = result;

        dirty1 = 1;
        dirty2 = 1;
        dirty0 = 1;
    }
}
