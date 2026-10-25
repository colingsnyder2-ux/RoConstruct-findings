// from server: 100% by king_originala
// roc 2008-06 004d8310  unit: RBX::RenderBase::SimpleSceneManager  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8310
//
// 004d8310  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d8313  6a01                 push 1
// 004d8315  6a00                 push 0
// 004d8317  83c108               add ecx, 8
// 004d831a  e871f5ffff           call 0x4d7890
// 004d831f  c3                   ret 

struct Queue {
    void process(int, int);
};

struct Scene {
    char pad[8];
    Queue queue;
};

struct SimpleSceneManager {
    void* vtbl;
    Scene* scene;
    void process();
};

void SimpleSceneManager::process()
{
    scene->queue.process(0, 1);
}
