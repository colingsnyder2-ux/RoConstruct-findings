// from server: 32% by colin
struct Chunk {
    char pad0[4];
    Chunk* left;
    Chunk* right;
    char padC[0x18 - 0xC];
    int key;
    char pad1C[0x21 - 0x1C];
    unsigned char color;
    char pad22[0x24 - 0x22];
    void* ptr24;
};

struct Grid {
    char pad0[4];
    Chunk* chunkMap;
    char pad8[0x10 - 8];
    int countOfNonEmptyCells;

    struct pair_result {
        Chunk* first;
        Chunk* second;
        bool inserted;
    };

    pair_result* insert(Chunk* hint, Chunk* node, bool flag, pair_result* out);
};

extern "C" void __cdecl unknown_4a03b0();

Grid::pair_result* Grid::insert(Chunk* hint, Chunk* node, bool flag, pair_result* out) {
    Chunk* cur = this->chunkMap->left;
    bool less = true;
    Chunk* parent = this->chunkMap;
    while (cur->color == 0) {
        parent = cur;
        if (node->key < cur->key) {
            less = true;
            cur = cur->left;
        } else if (node->key > cur->key) {
            less = false;
            cur = cur->right;
        } else {
            less = node < cur;
            if (less)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }
    if (less) {
        if (parent == this->chunkMap->left) {
            pair_result* r = this->insert(parent, node, true, out);
            out->first = r->first;
            out->second = r->second;
            out->inserted = true;
            return out;
        }
        unknown_4a03b0();
    }
    if (parent->key < node->key) {
        pair_result* r = this->insert(parent, node, flag, out);
        out->first = r->first;
        out->second = r->second;
        out->inserted = true;
        return out;
    }
    out->first = parent;
    out->second = node;
    out->inserted = false;
    return out;
}
