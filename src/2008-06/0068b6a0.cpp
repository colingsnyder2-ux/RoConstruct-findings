// from server: 100% by atomic.potato
// roc 2008-06 0068b6a0  unit: Ogre::RbxSceneManager::SceneMgrQueuedRenderableVisitor  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068b6a0
//
// 0068b6a0  f644240401           test byte ptr [esp + 4], 1
// 0068b6a5  56                   push esi
// 0068b6a6  8bf1                 mov esi, ecx
// 0068b6a8  c706a4e98400         mov dword ptr [esi], 0x84e9a4
// 0068b6ae  a194478000           mov eax, dword ptr [0x804794]
// 0068b6b3  8906                 mov dword ptr [esi], eax
// 0068b6b5  7409                 je 0x68b6c0
// 0068b6b7  56                   push esi
// 0068b6b8  e8bd4f0100           call 0x6a067a
// 0068b6bd  83c404               add esp, 4
// 0068b6c0  8bc6                 mov eax, esi
// 0068b6c2  5e                   pop esi
// 0068b6c3  c20400               ret 4

extern "C" void Function_006A067A(void *);

struct SceneMgrQueuedRenderableVisitor
{
    void *vptr;
    SceneMgrQueuedRenderableVisitor *f(unsigned char);
};

void *Global_00804794;

SceneMgrQueuedRenderableVisitor *
SceneMgrQueuedRenderableVisitor::f(unsigned char flag)
{
    vptr = (void *)0x84e9a4;
    vptr = Global_00804794;
    if (flag & 1)
        Function_006A067A(this);
    return this;
}
