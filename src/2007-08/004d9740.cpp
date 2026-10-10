// from server: 90% by colin
struct MegaTextureProxy {
    void* field0;
    void* field4;
    void* field8;
    float x;
    float y;
    float z;
    unsigned int id0;
    int id1;
    char pad[0x35 - 0x20];
    char flag35;
};

struct MegaTextureProxyTree {
    MegaTextureProxy* find(const float* key);
};

MegaTextureProxy* MegaTextureProxyTree::find(const float* key)
{
    MegaTextureProxy* node = *(MegaTextureProxy**)((char*)this + 4);
    MegaTextureProxy* result = node;

    while (node->flag35 == 0) {
        if (node->x < key[0])
            goto go_right;
        if (node->x > key[0])
            goto go_left;
        if (node->y < key[1])
            goto go_right;
        if (node->y > key[1])
            goto go_left;
        if (node->z < key[2])
            goto go_right;
        if (node->z > key[2])
            goto go_left;
        if (node->id0 < *(int*)((char*)key + 12))
            goto go_right;
        if (node->id0 > *(int*)((char*)key + 12))
            goto go_left;
        if (node->id1 >= *(int*)((char*)key + 16))
            goto go_left;
    go_right:
        result = node;
        node = *(MegaTextureProxy**)node;
        continue;
    go_left:
        node = *(MegaTextureProxy**)((char*)node + 8);
    }

    return result;
}
