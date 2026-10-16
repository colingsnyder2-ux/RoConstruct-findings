// from server: 58% by colin




struct Vector3 {
    float x;
    float y;
    float z;
};

struct Camera {
    const Vector3& getDerivedPosition() const;
};

struct SceneNode {
    virtual void unused0();
    virtual void unused1();
    virtual void unused2();
    virtual void unused3();
    virtual void unused4();
    virtual void unused5();
    virtual void unused6();
    virtual void unused7();
    virtual void unused8();
    virtual void unused9();
    virtual void unused10();
    virtual void unused11();
    virtual void unused12();
    virtual void unused13();
    virtual void unused14();
    virtual void unused15();
    virtual void unused16();
    virtual void unused17();
    virtual void* getCreator();
};

void* __stdcall __RTDynamicCast(void*, int, void*, void*, int);

struct RbxSubEntity {
    char pad0[0x28];
    SceneNode* node;
    char pad1[0xe8 - 0x2c];
    int cachedNode;
    float cachedDistance;
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

    float dx = this->posX - camera->getDerivedPosition().x;
    float dy = this->posY - camera->getDerivedPosition().y;
    float dz = this->posZ - camera->getDerivedPosition().z;

    return dx * dx + dy * dy + dz * dz;
}
