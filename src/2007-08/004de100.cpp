// from server: 37% by colin
struct Level {
    char pad0[4];
    Level* parent;
    char pad8[4];
    float x;
    float y;
    float z;
    int a;
    int b;
    char pad1c[0x35 - 0x1c];
    unsigned char color;
};

struct Mesh {
    char pad0[4];
    Level* root;
    char pad8[4];
    Level* insert(Level* hint, const float* key, int flag);
    bool less(const float* key, Level* node);
};

extern "C" void __stdcall sub_61da50(void* p);

Level* Mesh::insert(Level* hint, const float* key, int flag)
{
    Level* node = root->parent;
    unsigned char result = 1;
    Level* cur = root;
    while (node->color != 0) {
        float kx = key[0];
        float nx = node->x;
        if (kx < nx) {
            result = 1;
        } else if (kx > nx) {
            result = 0;
        } else {
            float ky = key[1];
            float ny = node->y;
            if (ky < ny) {
                result = 1;
            } else if (ky > ny) {
                result = 0;
            } else {
                float kz = key[2];
                float nz = node->z;
                if (kz < nz) {
                    result = 1;
                } else if (kz > nz) {
                    result = 0;
                } else {
                    int ka = *(const int*)(key + 3);
                    int na = node->a;
                    if (ka < na) {
                        result = 1;
                    } else if (ka > na) {
                        result = 0;
                    } else {
                        int kb = *(const int*)(key + 4);
                        result = (kb < node->b);
                    }
                }
            }
        }
        if (result)
            node = node->parent;
        else
            node = *(Level**)((char*)node + 8);
        cur = node;
        if (node->color != 0)
            break;
    }
    if (result) {
        if (cur == root->parent) {
            Level* out = 0;
            Level* r = this->insert(cur, key, 1);
            out = r;
            return out;
        }
        sub_61da50(&cur);
    }
    if (this->less(key, (Level*)((char*)cur + 0xc))) {
        Level* out = 0;
        Level* r = this->insert(cur, key, result);
        out = r;
        return out;
    }
    return cur;
}
