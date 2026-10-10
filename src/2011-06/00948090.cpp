// from server: 87% by atomic.potato
struct RbxEntity
{
    float x;
    float y;
    float z;
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float h;
    float i;
    float j;
    float k;
    float l;
    float m;
    float n;
    float o;
    float p;
    float q;
    float r;
    float s;
    float t;
    float u;
    float v;
    float w;
    float positionX;
    float positionY;
    float positionZ;

    void setPosition(const float* value);
};

void RbxEntity::setPosition(const float* value)
{
    positionX = value[0];
    positionY = value[1];
    positionZ = value[2];
}
