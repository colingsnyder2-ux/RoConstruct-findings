// from server: 97% by king_originala
struct VertexArray {
    char data[72];
};

struct RenderDevice {
    void beginIndexedPrimitives();
    void setVertexArray(const VertexArray&);
    void setArray(int, int, int, const void*);
    void prepareIndices();
    void sendIndices(int, int);
    void endIndexedPrimitives();
};

struct RenderItem {
    virtual void slot0();
    virtual void slot1();
    virtual void render(RenderDevice*, void*, void*, float);
};

struct S {
    char padding[0x2a4];
    RenderItem** items;
    int itemCount;
    int reserved;
    VertexArray vertices;
    const void* arrayData;
    int arrayCount;

    void render(RenderDevice*, void*, void*, float);
};

void S::render(RenderDevice* device, void* arg2, void* arg3, float arg4)
{
    device->beginIndexedPrimitives();
    device->setVertexArray(vertices);
    int count = arrayCount;
    device->setArray(2, 4, count, arrayData);
    device->prepareIndices();
    device->sendIndices(2, count);
    device->endIndexedPrimitives();

    for (int i = 0; i < itemCount; ++i)
        items[i]->render(device, arg2, arg3, arg4);
}
