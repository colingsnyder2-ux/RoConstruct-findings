// from server: 88% by colin
struct Item {
    char pad[0x110];
    int field_110;
};

struct Helper {
    int get();
};

struct S : Item {
    void update();
};

int Helper_get(Helper* h);
void S_update_helper(S* self, int* value);

void S::update() {
    Helper* h = (Helper*)((char*)this + 0x110);
    int v = h->get();
    int tmp = v;
    S_update_helper(this, &tmp);
}
