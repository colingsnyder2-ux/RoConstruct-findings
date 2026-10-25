// from server: 100% by tester
// roc 2008-06 004d7db0  unit: RBX::RenderBase::SimpleSceneManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7db0
//
// 004d7db0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d7db3  83c108               add ecx, 8
// 004d7db6  e925fdffff           jmp 0x4d7ae0

struct Queue { void flush(); };
struct Scene { char pad[8]; Queue queue; };

struct SimpleSceneManager {
    void* vtbl;
    Scene* scene;
    void flush();
};

void SimpleSceneManager::flush()
{
    scene->queue.flush();
}
