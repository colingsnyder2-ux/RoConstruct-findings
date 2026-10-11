// from server: 18% by colin
// roc 2008-06 00669390  unit: RBX::TreeStage  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669390

struct Sub {
    void destroy();
};

struct TreeStage {
    void* vtable;
    Sub* sub8;
    char pad0C[0x0C];
    Sub sub18;
    char pad2C[0x0C];
    Sub sub38;
    char pad4C[0x0C];
    Sub sub58;
    void destructor();
};

void TreeStage::destructor()
{
    this->vtable = (void*)0x84cf94;
    this->sub58.destroy();
    this->sub38.destroy();
    this->sub18.destroy();
    if (this->sub8) {
        this->sub8->destroy();
    }
}
