// from server: 50% by colin
// roc 2008-06 0064a380  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a380
//
// 0064a380  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064a383  8b01                 mov eax, dword ptr [ecx]
// 0064a385  8b4008               mov eax, dword ptr [eax + 8]
// 0064a388  ffe0                 jmp eax

struct CleanStage {
    void* getJointStage();
    bool primitivesAreOk(void* e);

    CleanStage(void* upstream, void* world);
    ~CleanStage();

    int getStageType() const;
    void onEdgeAdded(void* e);
    void onEdgeRemoving(void* e);
    void onPrimitiveAdded(void* p);
    void onPrimitiveRemoving(void* p);
    void onJointPrimitiveNulling(void* j, void* nulling);
    void onJointPrimitiveSet(void* j, void* p);
};

extern "C" __declspec(dllimport) void* __stdcall call_getJointStage(void*);
extern "C" __declspec(dllimport) bool __stdcall call_primitivesAreOk(void*);

void CleanStage::onEdgeAdded(void* e) {
    call_primitivesAreOk(e);
}

void CleanStage::onEdgeRemoving(void* e) {
    call_primitivesAreOk(e);
}

void CleanStage::onPrimitiveAdded(void* p) {
    // Implementation not provided
}

void CleanStage::onPrimitiveRemoving(void* p) {
    // Implementation not provided
}

void CleanStage::onJointPrimitiveNulling(void* j, void* nulling) {
    // Implementation not provided
}

void CleanStage::onJointPrimitiveSet(void* j, void* p) {
    // Implementation not provided
}

int CleanStage::getStageType() const {
    return 0; // Assuming IStage::CLEAN_STAGE is 0
}

CleanStage::CleanStage(void* upstream, void* world) {
    // Implementation not provided
}

CleanStage::~CleanStage() {
    // Implementation not provided
}
