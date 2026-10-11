// from server: 51% by atomic.potato
struct Vector3 {
    float x;
    float y;
    float z;
};

struct AxisAlignedBox {
    float minx;
    float miny;
    float minz;
    float maxx;
    float maxy;
    float maxz;
    void merge(const Vector3& v);
};

struct Camera {
    const Vector3& getDerivedPosition() const;
};

extern "C" {
    float __stdcall Vector3_length(const Vector3* v);
    const Vector3* __stdcall Camera_getDerivedPosition(const Camera* c);
    void __stdcall AxisAlignedBox_merge(AxisAlignedBox* b, const Vector3* v);
}

struct RbxSceneNode {
    char pad0[0x20];
    float minx;
    float maxx;
    void updateFromCamera(Camera* cam, Vector3* pos, float dt);
};

void RbxSceneNode::updateFromCamera(Camera* cam, Vector3* pos, float dt) {
    Vector3 dir;
    const Vector3* camPos = Camera_getDerivedPosition(cam);
    dir.x = camPos->x - pos->x;
    dir.y = camPos->y - pos->y;
    dir.z = camPos->z - pos->z;
    float len = Vector3_length(&dir);
    float t = len - pos->x;
    float zero = 0.0f;
    float* pmin = (t < zero) ? &zero : &t;
    if (this->minx < *pmin) {
        this->minx = *pmin;
    }
    float t2 = t + pos->x;
    if (t2 > this->maxx) {
        this->maxx = t2;
    }
}
