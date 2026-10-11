// from server: 51% by tester
struct SpanningNode;
struct Joint;
struct Primitive;
struct Mechanism;

struct TreeStage {
    char pad[0x14];
    bool flag14;
    void onEdgeAdded(void* e);
    void onEdgeRemoving(void* e);
    void removeSpanningTreeJoint(Joint* j);
    void swapTree(Joint* deactivate, Joint* activate, Primitive* newParent);
};

extern "C" int __fastcall sub_5E7470(void* p);
extern "C" bool __fastcall sub_668E20(void* a, void* b);
extern "C" void __fastcall sub_669090(TreeStage* self, void* a, void* b, int c, int* d, int* e);
extern "C" void __fastcall sub_669940(TreeStage* self, void* a, void* b, void* c);

void TreeStage::onEdgeRemoving(void* e)
{
    int* edge = (int*)e;
    int* a = (int*)edge[3];
    int* b = (int*)edge[4];
    int v1 = 0;
    int v2 = 0;
    int r1;
    if (a != 0) {
        r1 = sub_5E7470(a);
    } else {
        r1 = 0;
    }
    int r2;
    if (b != 0) {
        r2 = sub_5E7470(b);
    } else {
        r2 = 0;
    }
    sub_669090(this, a, b, r2, &v1, &v2);
    if (v1 != 0) {
        if (!sub_668E20(e, (void*)v1)) {
            return;
        }
    }
    int idx = (v2 + 1) & 0x80000001;
    if (idx < 0) {
        idx = (idx - 1) | 0xfffffffe;
        idx = idx + 1;
    }
    sub_669940(this, (void*)v1, e, (void*)edge[idx + 3]);
    flag14 = true;
}
