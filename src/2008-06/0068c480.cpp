// from server: 100% by king_originala
// roc 2008-06 0068c480  unit: Ogre::RbxSceneManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c480
//
// 0068c480  56                   push esi
// 0068c481  8bf1                 mov esi, ecx
// 0068c483  80bed841000000       cmp byte ptr [esi + 0x41d8], 0
// 0068c48a  57                   push edi
// 0068c48b  7423                 je 0x68c4b0
// 0068c48d  8b4634               mov eax, dword ptr [esi + 0x34]
// 0068c490  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0068c496  8b38                 mov edi, dword ptr [eax]
// 0068c498  6a01                 push 1
// 0068c49a  ff15f0478000         call dword ptr [0x8047f0]
// 0068c4a0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c4a3  8b5768               mov edx, dword ptr [edi + 0x68]
// 0068c4a6  50                   push eax
// 0068c4a7  ffd2                 call edx
// 0068c4a9  c686d841000000       mov byte ptr [esi + 0x41d8], 0
// 0068c4b0  80bed941000000       cmp byte ptr [esi + 0x41d9], 0
// 0068c4b7  7425                 je 0x68c4de
// 0068c4b9  8b4634               mov eax, dword ptr [esi + 0x34]
// 0068c4bc  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0068c4c2  8b11                 mov edx, dword ptr [ecx]
// 0068c4c4  8b38                 mov edi, dword ptr [eax]
// 0068c4c6  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0068c4cc  ffd0                 call eax
// 0068c4ce  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068c4d1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0068c4d4  50                   push eax
// 0068c4d5  ffd2                 call edx
// 0068c4d7  c686d941000000       mov byte ptr [esi + 0x41d9], 0
// 0068c4de  5f                   pop edi
// 0068c4df  5e                   pop esi
// 0068c4e0  c3                   ret 

struct Matrix4;
struct Camera;
struct Renderer;

typedef const Matrix4& (__thiscall *ViewMatrixFunction)(Camera*, bool);
extern ViewMatrixFunction getViewMatrix;

struct CameraTable {
    char padding[0x148];
    const Matrix4& (__thiscall *getProjectionMatrix)(Camera*);
};

struct Camera {
    CameraTable* table;
};

struct RendererTable {
    char padding[0x68];
    void (__thiscall *setViewMatrix)(Renderer*, const Matrix4&);
    void (__thiscall *setProjectionMatrix)(Renderer*, const Matrix4&);
};

struct Renderer {
    RendererTable* table;
};

struct S {
    char padding0[0x34];
    Renderer* renderer;
    char padding1[0xB8 - 0x38];
    Camera* camera;
    char padding2[0x41D8 - 0xBC];
    bool viewDirty;
    bool projectionDirty;

    void updateMatrices();
};

void S::updateMatrices()
{
    if (viewDirty) {
        RendererTable* table = renderer->table;
        const Matrix4& matrix = getViewMatrix(camera, true);
        table->setViewMatrix(renderer, matrix);
        viewDirty = false;
    }

    if (projectionDirty) {
        RendererTable* table = renderer->table;
        const Matrix4& matrix = camera->table->getProjectionMatrix(camera);
        table->setProjectionMatrix(renderer, matrix);
        projectionDirty = false;
    }
}
