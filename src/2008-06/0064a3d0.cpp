// from server: 15% by colin
// roc 2008-06 0064a3d0  unit: RBX::CleanStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a3d0
//
// 0064a3d0  8b4908               mov ecx, dword ptr [ecx + 8]
// 0064a3d3  8b01                 mov eax, dword ptr [ecx]
// 0064a3d5  8b4018               mov eax, dword ptr [eax + 0x18]
// 0064a3d8  ffe0                 jmp eax

struct CleanStage {
    void onEdgeAdded(void* e);
    void onEdgeRemoving(void* e);
    void onPrimitiveAdded(void* p);
    void onPrimitiveRemoving(void* p);
    void onJointPrimitiveNulling(void* j, void* nulling);
    void onJointPrimitiveSet(void* j, void* p);
    int getStageType() const;
    void notifyMovingAssemblies();
    void* contactManager;
    void* sendPhysics;
    void* cleanStage;
    void* groundStage;
    void* sleepStage;
    void* treeStage;
    const void* getSpatialFilter() const;
    void* assemblyStage;
    const void* getAssemblyStage() const;
};

void CleanStage::onEdgeAdded(void* e) {}
void CleanStage::onEdgeRemoving(void* e) {}
void CleanStage::onPrimitiveAdded(void* p) {}
void CleanStage::onPrimitiveRemoving(void* p) {}
void CleanStage::onJointPrimitiveNulling(void* j, void* nulling) {}
void CleanStage::onJointPrimitiveSet(void* j, void* p) {}
int CleanStage::getStageType() const { return 0; }
void CleanStage::notifyMovingAssemblies() {}
