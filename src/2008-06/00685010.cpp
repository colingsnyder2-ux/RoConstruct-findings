// from server: 76% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Camera {
    const Vector3& getDerivedPosition() const;
};

struct SceneNode {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void* getCreator();
};

void* __stdcall __RTDynamicCast(void*, int, void*, void*, int);

struct RbxSubEntity {
    char pad0[0x28];
    SceneNode* node;
    char pad1[0xe4 - 0x2c];
    float cachedDistance;
    int cachedNode;
    char pad2[0xfc - 0xec];
    float posX;
    char pad3[0x10c - 0x100];
    float posY;
    char pad4[0x11c - 0x110];
    float posZ;

    float getDistanceTo(const Camera* camera);
};

float RbxSubEntity::getDistanceTo(const Camera* camera) {
    if (this->cachedNode == (int)camera) {
        return this->cachedDistance;
    }

    void* creator = this->node->getCreator();
    void* cam = __RTDynamicCast((void*)camera, 0, (void*)0x932cec, (void*)0x932d04, 0);

    float px = this->posX;
    float py = this->posY;
    float pz = this->posZ;

    const Vector3& p = camera->getDerivedPosition();

    float dx = px - p.x;
    float dy = py - p.y;
    float dz = pz - p.z;

    return dx * dx + dy * dy + dz * dz;
}
