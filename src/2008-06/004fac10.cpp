// from server: 98% by coldek
extern "C" double __cdecl fabs(double);

struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
};

struct GridSize {
    short x, y;
};

extern void __cdecl copyVector(Vec3*, const Vec3*);
extern const Vec2& __cdecl currentTextureSize();
extern int __cdecl allocateVertex(const Vec3*, const Vec3*, const Vec2*, int);
extern void __cdecl releaseVertex(int);
extern const float textureScale;

typedef void (__cdecl *VertexCallback)(
    Vec3*, Vec3*, Vec2*, const Vec3*, const GridSize*);

struct TorsoBuilder {
    char prefix[4];
    Vec3 dimensions;

    void build(VertexCallback, Vec2, Vec2, float, Vec2, Vec2, int, GridSize);
    void quad(int, int, int, int);
};

#pragma float_control(precise, off, push)

void TorsoBuilder::build(
    VertexCallback callback,
    Vec2 minimum,
    Vec2 maximum,
    float depth,
    Vec2 textureOrigin,
    Vec2 textureExtent,
    int axis,
    GridSize divisions)
{
    Vec3 absoluteDimensions;
    {
        Vec3 copiedDimensions;
        copyVector(&copiedDimensions, &dimensions);
        absoluteDimensions.x = (float)fabs(copiedDimensions.x);
        absoluteDimensions.y = (float)fabs(copiedDimensions.y);
        absoluteDimensions.z = (float)fabs(copiedDimensions.z);
    }

    Vec2 positionStep;
    positionStep.x = (maximum.x - minimum.x) / divisions.x;
    positionStep.y = (maximum.y - minimum.y) / divisions.y;

    Vec2 textureStep;
    textureStep.x = textureExtent.x / divisions.x;
    textureStep.y = textureExtent.y / divisions.y;

    unsigned count = (divisions.x + 1) * (divisions.y + 1);
    int* vertices = new int[count];

    float x = minimum.x;
    float u = textureOrigin.x;

    for (int i = 0; i <= divisions.x; ++i) {
        float y = minimum.y;
        float v = textureOrigin.y;

        for (int j = 0; j <= divisions.y; ++j) {
            Vec3 position;
            position.x = x;
            position.y = y;
            position.z = depth;

            Vec2 texture;
            texture.x = 0.0f;
            texture.y = 0.0f;
            (&texture.y)[-axis] = u;
            (&texture.x)[axis] = v;

            Vec3 normal;
            normal.x = 0.0f;
            normal.y = 0.0f;
            normal.z = 1.0f;

            GridSize index;
            index.x = (short)i;
            index.y = (short)j;

            callback(&position, &normal, &texture, &absoluteDimensions, &index);

            const Vec2& size = currentTextureSize();
            if (textureExtent.x == size.x && textureExtent.y == size.y) {
                texture.x = textureOrigin.x;
                texture.y = textureOrigin.y;
            }

            Vec2 scaledTexture;
            scaledTexture.x = texture.x * textureScale;
            scaledTexture.y = texture.y * textureScale;

            Vec3 copiedNormal;
            Vec3 copiedPosition;
            copyVector(&copiedNormal, &normal);
            copyVector(&copiedPosition, &position);

            vertices[i * (divisions.y + 1) + j] =
                allocateVertex(&copiedPosition, &copiedNormal, &scaledTexture, 1);

            y += positionStep.y;
            v += textureStep.y;
        }

        x += positionStep.x;
        u += textureStep.x;
    }

    for (int i = 0; i < divisions.x; ++i) {
        for (int j = 0; j < divisions.y; ++j) {
            int index = (divisions.y + 1) * i + j;
            int next = index + divisions.y;
            quad(vertices[index + 1], vertices[index],
                 vertices[next + 1], vertices[next + 2]);
        }
    }

    for (unsigned i = 0; i < count; ++i)
        releaseVertex(vertices[i]);

    delete[] vertices;
}

#pragma float_control(pop)
